#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    MyClass(double a, double b) : m_a(a), m_b(b) {}

    double sum() const { return m_a + m_b; }

private:
    double m_a;
    double m_b;
};

#endif //MYCLASS_H