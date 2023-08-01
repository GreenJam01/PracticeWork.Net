#pragma once
#include <climits>

namespace collection1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtIn;
	private: System::Windows::Forms::TextBox^ txtOut;
	private: System::Windows::Forms::Button^ btn_create;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_add_first;

	private: System::Windows::Forms::Button^ btn_remove_start;









	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn_remove_last;

	private: System::Windows::Forms::Button^ btn_add_last;
	private: System::Windows::Forms::TextBox^ textBox_add_first;
	private: System::Windows::Forms::TextBox^ textBox_add_last;













	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ Sum;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;








	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtIn = (gcnew System::Windows::Forms::TextBox());
			this->txtOut = (gcnew System::Windows::Forms::TextBox());
			this->btn_create = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_add_first = (gcnew System::Windows::Forms::Button());
			this->btn_remove_start = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn_remove_last = (gcnew System::Windows::Forms::Button());
			this->btn_add_last = (gcnew System::Windows::Forms::Button());
			this->textBox_add_first = (gcnew System::Windows::Forms::TextBox());
			this->textBox_add_last = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Sum = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 58);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 108);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Вывод";
			// 
			// txtIn
			// 
			this->txtIn->Location = System::Drawing::Point(208, 52);
			this->txtIn->Margin = System::Windows::Forms::Padding(6);
			this->txtIn->Name = L"txtIn";
			this->txtIn->Size = System::Drawing::Size(196, 31);
			this->txtIn->TabIndex = 2;
			// 
			// txtOut
			// 
			this->txtOut->Location = System::Drawing::Point(208, 102);
			this->txtOut->Margin = System::Windows::Forms::Padding(6);
			this->txtOut->Name = L"txtOut";
			this->txtOut->Size = System::Drawing::Size(196, 31);
			this->txtOut->TabIndex = 3;
			// 
			// btn_create
			// 
			this->btn_create->Location = System::Drawing::Point(688, 48);
			this->btn_create->Margin = System::Windows::Forms::Padding(6);
			this->btn_create->Name = L"btn_create";
			this->btn_create->Size = System::Drawing::Size(150, 81);
			this->btn_create->TabIndex = 4;
			this->btn_create->Text = L"Создать список";
			this->btn_create->UseVisualStyleBackColor = true;
			this->btn_create->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(850, 52);
			this->btn_delete->Margin = System::Windows::Forms::Padding(6);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(150, 75);
			this->btn_delete->TabIndex = 5;
			this->btn_delete->Text = L"Удалить список";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn_add_first
			// 
			this->btn_add_first->Location = System::Drawing::Point(24, 152);
			this->btn_add_first->Margin = System::Windows::Forms::Padding(6);
			this->btn_add_first->Name = L"btn_add_first";
			this->btn_add_first->Size = System::Drawing::Size(210, 67);
			this->btn_add_first->TabIndex = 6;
			this->btn_add_first->Text = L"Добавить элемент слева";
			this->btn_add_first->UseVisualStyleBackColor = true;
			this->btn_add_first->Click += gcnew System::EventHandler(this, &MyForm::btn_add_start_Click);
			// 
			// btn_remove_start
			// 
			this->btn_remove_start->Location = System::Drawing::Point(424, 152);
			this->btn_remove_start->Margin = System::Windows::Forms::Padding(6);
			this->btn_remove_start->Name = L"btn_remove_start";
			this->btn_remove_start->Size = System::Drawing::Size(210, 67);
			this->btn_remove_start->TabIndex = 7;
			this->btn_remove_start->Text = L"Удалить элемент слева";
			this->btn_remove_start->UseVisualStyleBackColor = true;
			this->btn_remove_start->Click += gcnew System::EventHandler(this, &MyForm::btn_remove_start_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(526, 52);
			this->button5->Margin = System::Windows::Forms::Padding(6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 75);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Вывод";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// btn_remove_last
			// 
			this->btn_remove_last->Location = System::Drawing::Point(424, 231);
			this->btn_remove_last->Margin = System::Windows::Forms::Padding(6);
			this->btn_remove_last->Name = L"btn_remove_last";
			this->btn_remove_last->Size = System::Drawing::Size(210, 67);
			this->btn_remove_last->TabIndex = 10;
			this->btn_remove_last->Text = L"Удалить элемент справа";
			this->btn_remove_last->UseVisualStyleBackColor = true;
			this->btn_remove_last->Click += gcnew System::EventHandler(this, &MyForm::btn_remove_last_Click);
			// 
			// btn_add_last
			// 
			this->btn_add_last->Location = System::Drawing::Point(24, 231);
			this->btn_add_last->Margin = System::Windows::Forms::Padding(6);
			this->btn_add_last->Name = L"btn_add_last";
			this->btn_add_last->Size = System::Drawing::Size(210, 67);
			this->btn_add_last->TabIndex = 9;
			this->btn_add_last->Text = L"Добавить элемент справа";
			this->btn_add_last->UseVisualStyleBackColor = true;
			this->btn_add_last->Click += gcnew System::EventHandler(this, &MyForm::btn_add_last_Click);
			// 
			// textBox_add_first
			// 
			this->textBox_add_first->Location = System::Drawing::Point(246, 167);
			this->textBox_add_first->Margin = System::Windows::Forms::Padding(6);
			this->textBox_add_first->Multiline = true;
			this->textBox_add_first->Name = L"textBox_add_first";
			this->textBox_add_first->Size = System::Drawing::Size(132, 44);
			this->textBox_add_first->TabIndex = 11;
			// 
			// textBox_add_last
			// 
			this->textBox_add_last->Location = System::Drawing::Point(246, 246);
			this->textBox_add_last->Margin = System::Windows::Forms::Padding(6);
			this->textBox_add_last->Multiline = true;
			this->textBox_add_last->Name = L"textBox_add_last";
			this->textBox_add_last->Size = System::Drawing::Size(132, 44);
			this->textBox_add_last->TabIndex = 12;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 77);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Сумма";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 447);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(714, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Найти сумму элементов, больших минимального нечетного элемента";
			// 
			// Sum
			// 
			this->Sum->Location = System::Drawing::Point(257, 516);
			this->Sum->Name = L"Sum";
			this->Sum->Size = System::Drawing::Size(191, 31);
			this->Sum->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 662);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(878, 61);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Получить новый список, удалив все максимальные элементы.";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 781);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Sum);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_add_last);
			this->Controls->Add(this->textBox_add_first);
			this->Controls->Add(this->btn_remove_last);
			this->Controls->Add(this->btn_add_last);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_remove_start);
			this->Controls->Add(this->btn_add_first);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_create);
			this->Controls->Add(this->txtOut);
			this->Controls->Add(this->txtIn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"Collections";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Collections::Generic::LinkedList<int> lst; //ñàì ñïèñîê
	private: System::Collections::Generic::LinkedListNode <int>^ node;

	private: void Clear() {//î÷èùåíèå ïîëÿ âûâîäà
		errorProvider1->Clear();
		txtOut->Clear();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //ñîçäàòü ñïèñîê

		lst.Clear();
		Clear();
		node = lst.First;

		System::String^ str = System::Convert::ToString(this->txtIn->Text);
		str += " ";
		int X, at, pos = 0;
		at = str->IndexOf(" ");
		while (at != -1) {
			System::String^ str1 = str->Substring(pos, at - pos);
			pos = at + 1;
			bool res = Int32::TryParse(str1, X);
			lst.AddLast(X);
			at = str->IndexOf(" ", pos);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //óäàëèòü âñå ýëåìåíòû ñïèñêà
		Clear();
		lst.Clear();
	}
	private: System::Void btn_add_start_Click(System::Object^ sender, System::EventArgs^ e) {
		int numb;
		bool check_first_el = Int32::TryParse(textBox_add_first->Text, numb);
		if (!check_first_el)
			errorProvider1->SetError(textBox_add_first, "×èñëî ââåäåíî íåêîððåêòíî");
		if (check_first_el) {
			Clear();
			lst.AddFirst(numb);
		}
	}
	private: System::Void btn_add_last_Click(System::Object^ sender, System::EventArgs^ e) {
		int numb;
		bool check_last_el = Int32::TryParse(textBox_add_last->Text, numb); //äîáàâëåíèå ÷èñëà â êîíåö ñïèñêà
		if (check_last_el) {
			Clear();
			lst.AddLast(numb);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //ïîêàçàòü ñïèñîê â ñòðîêå
		if (lst.Count) {
			Clear();
			System::Collections::Generic::LinkedList<int> buf;
			System::String^ str2 = "";
			while (lst.Count) {
				buf.AddLast(lst.First->Value);
				str2 += System::Convert::ToString(lst.First->Value) + " ";
				lst.RemoveFirst();
			}
			while (buf.Count) {
				lst.AddLast(buf.First->Value);
				buf.RemoveFirst();

			}
			this->txtOut->Text = str2;
		}
	}
	private: System::Void btn_remove_start_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lst.Count) {
			Clear();
			lst.RemoveFirst(); //óäàëåíèå èç íà÷àëà
		}
	}
	private: System::Void btn_remove_last_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lst.Count) {
			Clear();
			lst.RemoveLast(); //óäàëåíèå èç êîíöà
		}
	}
	
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int min = INT_MAX;
	int s = 0;
	for (node = lst.First; node != nullptr; node = node->Next) {
		if (node->Value < min && node->Value % 2 == 1) {
			min = node->Value;
		}
	}
	for (node = lst.First; node != nullptr; node = node->Next) {
		if (node->Value > min) {
			s += node->Value;
				}
	}
	this->Sum->Text = s.ToString();

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int max = INT_MIN;
	for (node = lst.First; node != nullptr; node = node->Next) {
		if (node->Value >max) {
			max = node->Value;
		}
	}
	if (lst.Count) {
		Clear();
		System::Collections::Generic::LinkedList<int> buf;
		System::String^ str2 = "";
		while (lst.Count) {
			if(lst.First->Value!=max)
			buf.AddLast(lst.First->Value);
			
			lst.RemoveFirst();
		}
		while (buf.Count) {
			str2 += System::Convert::ToString(buf.First->Value) + " ";
			lst.AddLast(buf.First->Value);
			buf.RemoveFirst();

		}
		this->txtOut->Text = str2;
	}
}
};
}
