QT += widgets
qtHaveModule(printsupport): QT += printsupport

HEADERS       = imageviewer.h \
    core.h
SOURCES       = imageviewer.cpp \
                main.cpp \
    core.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/imageviewer
INSTALLS += target


wince*: {
   DEPLOYMENT_PLUGIN += qjpeg qgif
}
