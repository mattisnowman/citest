#include "myclass.h"
#include "math.h"

#include <QtCore/QDebug>

double MyClass::sum() const
{
    return m_a + m_b;
}

double MyClass::slowFunction() const
{
    return m_a * m_b;
}
