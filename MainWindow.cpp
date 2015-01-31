/*
 *
 *
 *
 */

#include                    <QFileDialog>
#include                    <QImageReader>
#include                    "MainWindow.h"
#include                    "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->ui_centralLayout = ui->centralWidget->layout();
}

MainWindow::~MainWindow()
{
  if (this->ui_centralLayout)
    foreach (QObject *obj, this->ui_centralLayout->children())
    {
      delete obj;
    }

  delete ui;
}

void                        MainWindow::on_actionClose_triggered()
{
  this->close();
}

void                        MainWindow::on_actionOpen_triggered()
{
  QStringList               mimeTypeFilters;
  QFileDialog               dialog(this, "Open File", QDir::currentPath());

  foreach (QByteArray const &mimeTypeName, QImageReader::supportedMimeTypes())
      mimeTypeFilters.append(mimeTypeName);
  mimeTypeFilters.sort();
  dialog.setAcceptMode(QFileDialog::AcceptOpen);
  dialog.setMimeTypeFilters(mimeTypeFilters);
  dialog.selectMimeTypeFilter("image/jpeg");

  if (dialog.exec() == QDialog::Accepted && this->ui_centralLayout)
  {
    QString                 selectedFile = dialog.selectedFiles().first();
    QImage *                img = new QImage(selectedFile);
    ImageWidget *           imgW = new ImageWidget(this, img);

    this->ui_centralLayout->addWidget(imgW);

  }
}
