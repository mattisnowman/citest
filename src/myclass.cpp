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
    for (int i = 0; i < m_a; i++)
        result += i;
    result += floor(m_a) - m_a;
    for (int i = 0; i < m_b; i++)
        result += i;
    result += floor(m_b) - m_b;

    return m_a + m_b;
}
