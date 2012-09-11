#ifndef TESTDOCINTERFACECSV_H
#define TESTDOCINTERFACECSV_H

#include <QObject>
#include <QtTest/QtTest>

#include "../../../docinterface.h"



class TestDocInterfaceCsv : public QObject
{
    Q_OBJECT
public:
    explicit TestDocInterfaceCsv(QObject *parent = 0);

signals:

public slots:

private:
    DocInterface *docInt;

private slots:
    void initTestCase();

    void testloadFile();

    void testgetSubjectCode();

    void testgetFirstStudentNumber();

    void getLastStudentNumber();

    void cleanupTestCase();

};

#endif // TESTDOCINTERFACECSV_H