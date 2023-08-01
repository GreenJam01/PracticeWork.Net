#include "MyForm.h"
using namespace System;
 using namespace System::Windows::Forms;
				  //10 Your selection: Вывести номера элементов, кратных X и не попадающих в заданный интервал [a,b]. 
 //Вывести максимальный нечетный элемент.

[STAThreadAttribute]
 void Main(array<String^> ^ args) {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);
	 Project2::MyForm form;
	 Application::Run(%form);
	
}

