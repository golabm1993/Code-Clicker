#pragma once
#include "Employee.h"
ref class EmployeePremium :
	public Employee
{
public:
	int premium; //częstotliwość żądania premii

public:
	EmployeePremium(int, int);
};

