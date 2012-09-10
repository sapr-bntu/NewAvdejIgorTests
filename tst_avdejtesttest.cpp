#include <QtGui>
#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore/QCoreApplication>
#include "../textedit.h"

class
        AvdejTestTest : public QObject
{
    Q_OBJECT

public:

    AvdejTestTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
    void testCase5();
    void testCase6();

};

AvdejTestTest::AvdejTestTest()
{
}

void
        AvdejTestTest::initTestCase()
{
}

void
        AvdejTestTest::cleanupTestCase()
{
}



void
        AvdejTestTest::testCase1()
{
    TextEdit txt;
    QCOMPARE(true,txt.fileNew());
}
void
        AvdejTestTest::testCase2()
{
    TextEdit txt;
    QTextEdit mytxt;
    QTest::keyClicks(&mytxt, "F1");
    QCOMPARE(mytxt.toPlainText(), QString("F1"));
}

void
        AvdejTestTest::testCase3()
{
    TextEdit txt;
    bool success;
    int result =txt.textStyle(0);
    if (result==0)
        success=true;
    else success=false;
    QCOMPARE(true,success);
}
void
        AvdejTestTest::testCase4()
{
    //qDebug()<<"You have to open G:/Lab1_tests/textedit/1.jpg";
    TextEdit txt;
    bool result;
    result=txt.fileOpen("G:/Lab1_tests/textedit/1.docx");
    QCOMPARE(result,true);
}
void
        AvdejTestTest::testCase5()
{
    TextEdit txt;
    txt.actionEditForTest->activate(QAction::Trigger);
    QCOMPARE(txt.textEdit->toPlainText(), QString("F1"));
}
void
        AvdejTestTest::testCase6()
{
    bool success;
    TextEdit txt;
    QString str="5555";
    success=txt.ForSaveWord(str);
    QCOMPARE(success,true);
}


QTEST_MAIN(AvdejTestTest);

#include "tst_AvdejTestTest.moc"
