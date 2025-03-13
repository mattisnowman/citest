#include <QtTest/QtTest>

#include "myclass.h"

class BenchmarkTest : public QObject {
    Q_OBJECT

private slots:
    void benchmarkAddition();
};
 
void BenchmarkTest::benchmarkAddition()
{
    QBENCHMARK {
        QCOMPARE(MyClass(20000.2, 3000.3).sum(), 20000.2 + 3000.3);
    }
}

QTEST_MAIN(BenchmarkTest)
#include "main.moc"
