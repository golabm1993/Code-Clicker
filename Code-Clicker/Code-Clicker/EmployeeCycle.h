#pragma once

#include "Employee.h"

ref class EmployeeCycle :
	public Employee
{
public:
	int cycle; //modyfikator zdarze�

public:
	EmployeeCycle(int, int);
};

