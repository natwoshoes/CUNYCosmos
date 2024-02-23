QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ccstudentinfoo.cpp \
    gradstudentinfo.cpp \
    homepage.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    professionals.cpp \
    question1.cpp \
    question2.cpp \
    questionbase.cpp \
    signuppage.cpp \
    spacequiz.cpp \
    undergradinfo.cpp \
    whycareer.cpp

HEADERS += \
    ccstudentinfoo.h \
    gradstudentinfo.h \
    homepage.h \
    loginpage.h \
    mainwindow.h \
    professionals.h \
    question1.h \
    question2.h \
    questionbase.h \
    signuppage.h \
    spacequiz.h \
    undergradinfo.h \
    whycareer.h

FORMS += \
    ccstudentinfoo.ui \
    gradstudentinfo.ui \
    homepage.ui \
    loginpage.ui \
    mainwindow.ui \
    professionals.ui \
    question1.ui \
    question2.ui \
    questionbase.ui \
    signuppage.ui \
    spacequiz.ui \
    undergradinfo.ui \
    whycareer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../Downloads/cunycosexp.qrc \
    astronaut.qrc \
    astronaut.qrc \
    astronaut.qrc \
    earth.qrc \
    ihatethis.qrc \
    planets.qrc \
    pngtree-modern-student-life-png-image_6284060.qrc \
    saturn.qrc

DISTFILES += \
    ../Desktop/pngtree-modern-student-life-png-image_6284060.jpeg \
    ../Desktop/purepng.com-studentsstudentcollege-studentschool-studentstudentsmale-female-14215269241760fous.png \
    ../Downloads/cunycosexp.png \
    ../userinput.txt \
    astronaut2/purepng.com-studentsstudentcollege-studentschool-studentstudentsmale-female-14215269241760fous
