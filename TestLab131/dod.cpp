// dod.cpp
// ���� ��������� �������
#include "pch.h"
#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsVar;
void nsDod::dod() {
    R = -((2 * n - 1) / (2 * n + 1)) * (1 / (x * x));
    a *= -(2. / 1.) + R; // ������� ����������� �� 
} // ���������� ������������