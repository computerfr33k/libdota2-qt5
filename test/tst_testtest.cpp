#include <QString>
#include <QtTest>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testCase1();
};

TestTest::TestTest()
{
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
