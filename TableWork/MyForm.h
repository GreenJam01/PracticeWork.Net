#pragma once
#include <string>
#include<iostream>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(42, 115);
			this->dataGridView1->MinimumSize = System::Drawing::Size(30, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 80;
			this->dataGridView1->Size = System::Drawing::Size(283, 428);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Массив";
			this->Column1->MinimumWidth = 10;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1084, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Вывести номера элементов, кратных X и не попадающих в заданный интервал [a,b]. ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(420, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 67);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(420, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 66);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(906, 115);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(120, 50);
			this->textBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(707, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 37);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(642, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 37);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Интервал";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(821, 226);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 50);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(989, 223);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 50);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(557, 308);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 37);
			this->label4->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(577, 308);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 67);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Вывод";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(414, 445);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(564, 31);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Вывести максимальный нечетный элемент.";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(577, 500);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 67);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Вывод";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(766, 308);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(399, 65);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(766, 500);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(399, 65);
			this->textBox4->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 653);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Rows->Add();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->dataGridView1->CurrentRow->IsNewRow) {
			int i = this->dataGridView1->CurrentRow->Index;
			this->dataGridView1->Rows->Remove(this->dataGridView1->Rows[i]);
		}
	}

		   void ClearAll() {//очистка полей
			   this->textBox3->Text = "";
			   errorProvider1->SetError(textBox, String::Empty);
			   errorProvider1->SetError(textBox1, String::Empty);
			   errorProvider1->SetError(textBox2, String::Empty);

		   }

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long X, a, b;
		bool resultx = Int64::TryParse(this->textBox->Text, X); //переводим строку из TextBox в
		bool resulta = Int64::TryParse(this->textBox1->Text, a);
		bool resultb = Int64::TryParse(this->textBox2->Text, b);
		if (a > b) {
			this->textBox3->Text += "a>b";
		}
		else if (!resultx) {//все нормально
			errorProvider1->SetError(textBox, "Not digit");
		}
		else if (!resulta) {
			errorProvider1->SetError(textBox1, "Not digit");
		}
		else if (!resultb) {
			errorProvider1->SetError(textBox2, "Not digit");
		}
		else {
			auto mas = this->dataGridView1->Rows;
			int n = mas->Count;
			int cur;
			String^ s;
			bool f = 0;
			for (int i = 0; i < a-1; ++i) {
				s = System::Convert::ToString(this->dataGridView1->Rows[i]->Cells[0]->Value);
				//this->textBox3->Text += s;
				bool res = Int32::TryParse(s, cur);
				if (!res) {
					this->textBox3->Text = "There is not-digit in table";
					f = 1;
					break;
				}
				else {
					if (cur % X == 0)this->textBox3->Text += s+=" ";
				}
			}
			for (int i = b; i < n-1 ; ++i) {
				if (f == 1){
					break;
				}
				else {
						s = System::Convert::ToString(this->dataGridView1->Rows[i]->Cells[0]->Value);
						bool res = Int32::TryParse(s, cur);
						if (!res) {
							this->textBox3->Text = "There is not-digit in table";
							break;
						}
						else {
							if (cur % X == 0)this->textBox3->Text += s+=" ";


						}
					}
				}
			if (this->textBox3->Text == String::Empty)	 this->textBox3->Text += "There is no such elements";
			


			// this->textBox3->Text = rez;//записываем в поле вывода

		//}
		// else //ошибка
		//	 this->textBox3->Text = "";
		}
	}


	private: System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		auto mas = this->dataGridView1->Rows;
		int max = INT32_MIN;
		int cur;
		bool f = 0;
		int n = mas->Count;
		for (int i = 1; i < n - 1; ++i) {
			int cur = System::Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[0]->Value);
			
			if (cur > max && cur % 2 == 1) { max = cur; f = 1; }
		}
		if (f == 1) this->textBox4->Text = max.ToString();
		else { this->textBox4->Text = "There is no such elements"; }
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		auto mas = this->dataGridView1->Rows;
		int max = INT32_MIN;
		bool f = 0;
		String^ s;
		int cur;
		int n = mas->Count;
		for (int i = 1; i < n - 1; ++i) {
			s = System::Convert::ToString(this->dataGridView1->Rows[i]->Cells[0]->Value);
			bool res = Int32::TryParse(s, cur);
			if (!res) {
				this->textBox4->Text = "There is not-digit in table";
				break;
			}
			else {
				if (cur > max && cur % 2 == 1) 
				{
					max = cur; f = 1;
				}
			 }
		}
		if (f == 1) this->textBox4->Text = max.ToString();
		else { this->textBox4->Text = "There is no such elements"; }
	}
};
}
	
	
