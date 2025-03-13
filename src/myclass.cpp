#include "myclass.h"
#include "math.h"

#include <QtCore/QDebug>

MyClass::MyClass(double a, double b) :
    m_a(a),
    m_b(b)
{

}

double MyClass::sum() const
{
    double result = 0;
    for (int i = 1; i < m_a; i++)
        result ++;
    for (int i = 1; i < m_b; i++)
        result ++;
    result += m_a - floor(m_a);
    result += m_b - floor(m_b);

    return result;
}
