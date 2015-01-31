#ifndef CORE
# define CORE

# include         <QImage>

class Core
{
public:
    Core(QImage *img = NULL);
    ~Core();

private:
    void findObjects();


    // Props
    QImage *      _image;

};

#endif // CORE

