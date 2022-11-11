// dod.cpp
// файл реалізації функції
#include "pch.h"
#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsDod::dod() {
    R = -((2 * n - 1) / (2 * n + 1)) * (1 / (x * x));
    a *= -(2. / 1.) + R; // доданок домножується на 
} // коефіцієнт рекурентності