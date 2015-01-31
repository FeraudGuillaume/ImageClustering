




#ifndef                     IMAGEWIDGET_H
# define                    IMAGEWIDGET_H

# include                   <QWidget>

namespace Ui {
  class ImageWidget;
}

class                       ImageWidget : public QWidget
{
    Q_OBJECT

  public:
    explicit ImageWidget(QWidget *parent = 0, QImage *img = NULL);
    ~ImageWidget();

  private:
    Ui::ImageWidget *       ui;
    QImage *                _image;
};

#endif // IMAGEWIDGET_H
