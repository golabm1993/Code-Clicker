#pragma once
#include "Employee.h"
ref class EmployeePremium :
	public Employee
{
public:
	int premium; //cz�stotliwo�� ��dania premii

public:
	EmployeePremium(int, int);
};

