#pragma once

#include "MyForm.h"

namespace CodeClicker {

	ref class MyForm;

	public ref class Employee
	{
	public:
		//TODO operator bool - zwracana warto�� isHired [KSZ]

		MyForm^ form;
		int number;

		int pay;
		bool isHired;//czy pomocnik jest wynaj�ty?
		int factor;//wydajnosc pomocnika nr 1
		int progress;//progres pomocnika nr 1
		int speed;//szybko�� pomocnika nr 1

		System::Windows::Forms::PictureBox^  Bhire;
		System::Windows::Forms::Label^  Lname;
		System::Windows::Forms::Label^  Lrole;
		System::Windows::Forms::Label^  Lcost;
		System::Windows::Forms::Label^  Lupkeep;

	public:
		Employee(MyForm^ form, int number, int factor, int speed, int pay, System::Drawing::Image^ image, System::String^ nameFontFamilyName, System::Drawing::Size nameSize, System::String^ name, System::Drawing::Size roleSize, System::String^ role, System::Drawing::Size costSize, System::Drawing::Size upKeepSize, System::String^ upKeepText);

		void refreshHireButton();
		void refreshPictureBox();

	protected:
		System::Void Bhire_Click(System::Object^  sender, System::EventArgs^  e);
	};


	ref class EmployeeCycle : public Employee
	{
	public:
		int cycle; //modyfikator zdarze�

	public:
		EmployeeCycle(MyForm^ form, int number, int factor, int speed, int pay, System::Drawing::Image^ image, System::String^ nameFontFamilyName, System::Drawing::Size nameSize, System::String^ name, System::Drawing::Size roleSize, System::String^ role, System::Drawing::Size costSize, System::Drawing::Size upKeepSize, System::String^ upKeepText);
	};


	ref class EmployeePoor : public Employee
	{
	public:
		bool poor; //czy sta� na wyp�at�

	public:
		EmployeePoor(MyForm^ form, int number, int factor, int speed, int pay, System::Drawing::Image^ image, System::String^ nameFontFamilyName, System::Drawing::Size nameSize, System::String^ name, System::Drawing::Size roleSize, System::String^ role, System::Drawing::Size costSize, System::Drawing::Size upKeepSize, System::String^ upKeepText);
	};


	ref class EmployeePremium : public Employee
	{
	public:
		int premium; //cz�stotliwo�� ��dania premii

	public:
		EmployeePremium(MyForm^ form, int number, int factor, int speed, int pay, System::Drawing::Image^ image, System::String^ nameFontFamilyName, System::Drawing::Size nameSize, System::String^ name, System::Drawing::Size roleSize, System::String^ role, System::Drawing::Size costSize, System::Drawing::Size upKeepSize, System::String^ upKeepText);
	};
}