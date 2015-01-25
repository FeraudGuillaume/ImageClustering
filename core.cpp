#include "core.h"

Core::Core(QImage img)
{
    this->image = img;
}

void Core::findObjects()
{
    QRgb **colors = new QRgb
    for (int x = 0; x < this->image.height() ; x++)
    {
        for (int y = 0; y < this->image.width(); y++)
        {
            QRgb value = this->image.pixel((x,y));

        }
    }
}

