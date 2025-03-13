#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    MyClass(double a, double b);

    double sum() const;

private:
    double m_a;
    double m_b;
};

#endif //MYCLASS_H
