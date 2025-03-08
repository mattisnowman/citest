#include <QtTest/QtTest>

#include "myclass.h"

class MyTest : public QObject {
    Q_OBJECT

private slots:
    void testAddition();
};

void MyTest::testAddition() {
    double a = 2;
    double b = 3;

    MyClass c(2, 3);
    QCOMPARE(a + b, c.sum());
}

// Run the test
QTEST_MAIN(MyTest)
#include "main.moc"