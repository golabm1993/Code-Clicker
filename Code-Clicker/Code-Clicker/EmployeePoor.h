#pragma once
#include "Employee.h"
ref class EmployeePoor :
	public Employee
{
public:
	bool poor; //czy sta� na wyp�at�

public:
	EmployeePoor(int, int);
};

