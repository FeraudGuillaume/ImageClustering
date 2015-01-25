#ifndef CORE
#define CORE

#include <QImage>

class Core
{
public:
    Core(QImage img);
    QImage image;

private:
    void findObjects();
};

#endif // CORE

