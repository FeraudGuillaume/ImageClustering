




#include                    "ImageWidget.h"
#include                    "ui_ImageWidget.h"

ImageWidget::ImageWidget(QWidget *parent, QImage *img) :
  QWidget(parent), ui(new Ui::ImageWidget), _image(img)
{
  ui->setupUi(this);

  if (this->_image)
  {
    ui->label->setPixmap(QPixmap::fromImage(*(this->_image)));
    ui->label->adjustSize();
  }
}

ImageWidget::~ImageWidget()
{
  delete ui;
}
