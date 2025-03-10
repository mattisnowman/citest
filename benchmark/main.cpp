#include <QtTest/QtTest>

#include "myclass.h"

class BenchmarkTest : public QObject {
    Q_OBJECT

private slots:
    void benchmarkSlowFunction();
};
 
void BenchmarkTest::benchmarkSlowFunction() {

    double a = 200.2;
    double b = 300.3;
    MyClass c(a, b);
    QBENCHMARK {
        QCOMPARE(c.slowFunction(), a * b);
    }
}

QTEST_MAIN(BenchmarkTest)
#include "main.moc"