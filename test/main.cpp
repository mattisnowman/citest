#include <QtTest/QtTest>

#include "myclass.h"

class MyTest : public QObject {
    Q_OBJECT

private slots:
    void testAddition();
};

void MyTest::testAddition()
{
    QCOMPARE(2 + 3, MyClass(2, 3).sum());
}

// Run the test
QTEST_MAIN(MyTest)
#include "main.moc"
