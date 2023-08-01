#pragma once 
#include<vector>   
 
namespace Matrix {

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
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ AddCol1;
	private: System::Windows::Forms::Button^ DelCol1;
	private: System::Windows::Forms::Button^ AddRow1;
	private: System::Windows::Forms::Button^ DelRow1;
	private: System::Windows::Forms::Button^ DelRow2;
	private: System::Windows::Forms::Button^ AddRow2;
	private: System::Windows::Forms::Button^ DelCol2;
	private: System::Windows::Forms::Button^ AddCol2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ AddVec1;


	private: System::Windows::Forms::Button^ DelVec1;
	private: System::Windows::Forms::Button^ DelVec2;
	private: System::Windows::Forms::Button^ AddVec2;





	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Button^ ID;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ MultDigitButton;
	private: System::Windows::Forms::TextBox^ textBoxMult;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ MultVecButton;
	private: System::Windows::Forms::DataGridView^ ResVec;
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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->AddCol1 = (gcnew System::Windows::Forms::Button());
			this->DelCol1 = (gcnew System::Windows::Forms::Button());
			this->AddRow1 = (gcnew System::Windows::Forms::Button());
			this->DelRow1 = (gcnew System::Windows::Forms::Button());
			this->DelRow2 = (gcnew System::Windows::Forms::Button());
			this->AddRow2 = (gcnew System::Windows::Forms::Button());
			this->DelCol2 = (gcnew System::Windows::Forms::Button());
			this->AddCol2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->AddVec1 = (gcnew System::Windows::Forms::Button());
			this->DelVec1 = (gcnew System::Windows::Forms::Button());
			this->DelVec2 = (gcnew System::Windows::Forms::Button());
			this->AddVec2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxMult = (gcnew System::Windows::Forms::TextBox());
			this->MultDigitButton = (gcnew System::Windows::Forms::Button());
			this->MultVecButton = (gcnew System::Windows::Forms::Button());
			this->ResVec = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResVec))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(79, 177);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(475, 495);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(724, 177);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->Size = System::Drawing::Size(475, 495);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1355, 177);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->RowTemplate->Height = 33;
			this->dataGridView3->Size = System::Drawing::Size(475, 495);
			this->dataGridView3->TabIndex = 2;
			// 
			// AddCol1
			// 
			this->AddCol1->Location = System::Drawing::Point(79, 71);
			this->AddCol1->Name = L"AddCol1";
			this->AddCol1->Size = System::Drawing::Size(93, 74);
			this->AddCol1->TabIndex = 3;
			this->AddCol1->Text = L"Add column";
			this->AddCol1->UseVisualStyleBackColor = true;
			this->AddCol1->Click += gcnew System::EventHandler(this, &MyForm::AddCol1_Click);
			// 
			// DelCol1
			// 
			this->DelCol1->Location = System::Drawing::Point(208, 71);
			this->DelCol1->Name = L"DelCol1";
			this->DelCol1->Size = System::Drawing::Size(86, 74);
			this->DelCol1->TabIndex = 5;
			this->DelCol1->Text = L"Delete column";
			this->DelCol1->UseVisualStyleBackColor = true;
			this->DelCol1->Click += gcnew System::EventHandler(this, &MyForm::DelCol1_Click);
			// 
			// AddRow1
			// 
			this->AddRow1->Location = System::Drawing::Point(329, 71);
			this->AddRow1->Name = L"AddRow1";
			this->AddRow1->Size = System::Drawing::Size(89, 74);
			this->AddRow1->TabIndex = 6;
			this->AddRow1->Text = L"Add row";
			this->AddRow1->UseVisualStyleBackColor = true;
			this->AddRow1->Click += gcnew System::EventHandler(this, &MyForm::AddRow1_Click);
			// 
			// DelRow1
			// 
			this->DelRow1->Location = System::Drawing::Point(452, 71);
			this->DelRow1->Name = L"DelRow1";
			this->DelRow1->Size = System::Drawing::Size(89, 74);
			this->DelRow1->TabIndex = 7;
			this->DelRow1->Text = L"Delete Row";
			this->DelRow1->UseVisualStyleBackColor = true;
			this->DelRow1->Click += gcnew System::EventHandler(this, &MyForm::DelRow1_Click);
			// 
			// DelRow2
			// 
			this->DelRow2->Location = System::Drawing::Point(1051, 71);
			this->DelRow2->Name = L"DelRow2";
			this->DelRow2->Size = System::Drawing::Size(89, 74);
			this->DelRow2->TabIndex = 11;
			this->DelRow2->Text = L"Delete Row";
			this->DelRow2->UseVisualStyleBackColor = true;
			this->DelRow2->Click += gcnew System::EventHandler(this, &MyForm::DelRow2_Click_1);
			// 
			// AddRow2
			// 
			this->AddRow2->Location = System::Drawing::Point(928, 71);
			this->AddRow2->Name = L"AddRow2";
			this->AddRow2->Size = System::Drawing::Size(89, 74);
			this->AddRow2->TabIndex = 10;
			this->AddRow2->Text = L"Add row";
			this->AddRow2->UseVisualStyleBackColor = true;
			this->AddRow2->Click += gcnew System::EventHandler(this, &MyForm::AddRow2_Click_1);
			// 
			// DelCol2
			// 
			this->DelCol2->Location = System::Drawing::Point(807, 71);
			this->DelCol2->Name = L"DelCol2";
			this->DelCol2->Size = System::Drawing::Size(86, 74);
			this->DelCol2->TabIndex = 9;
			this->DelCol2->Text = L"Delete column";
			this->DelCol2->UseVisualStyleBackColor = true;
			this->DelCol2->Click += gcnew System::EventHandler(this, &MyForm::DelCol2_Click_1);
			// 
			// AddCol2
			// 
			this->AddCol2->Location = System::Drawing::Point(678, 71);
			this->AddCol2->Name = L"AddCol2";
			this->AddCol2->Size = System::Drawing::Size(93, 74);
			this->AddCol2->TabIndex = 8;
			this->AddCol2->Text = L"Add column";
			this->AddCol2->UseVisualStyleBackColor = true;
			this->AddCol2->Click += gcnew System::EventHandler(this, &MyForm::AddCol2_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 25);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Матрица 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(822, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Матрица 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1539, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Результат";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Location = System::Drawing::Point(79, 718);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 82;
			this->dataGridView4->RowTemplate->Height = 33;
			this->dataGridView4->Size = System::Drawing::Size(475, 65);
			this->dataGridView4->TabIndex = 15;
			// 
			// AddVec1
			// 
			this->AddVec1->Location = System::Drawing::Point(560, 718);
			this->AddVec1->Name = L"AddVec1";
			this->AddVec1->Size = System::Drawing::Size(63, 65);
			this->AddVec1->TabIndex = 16;
			this->AddVec1->Text = L"+";
			this->AddVec1->UseVisualStyleBackColor = true;
			this->AddVec1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// DelVec1
			// 
			this->DelVec1->Location = System::Drawing::Point(12, 718);
			this->DelVec1->Name = L"DelVec1";
			this->DelVec1->Size = System::Drawing::Size(63, 65);
			this->DelVec1->TabIndex = 17;
			this->DelVec1->Text = L"-";
			this->DelVec1->UseVisualStyleBackColor = true;
			this->DelVec1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// DelVec2
			// 
			this->DelVec2->Location = System::Drawing::Point(657, 718);
			this->DelVec2->Name = L"DelVec2";
			this->DelVec2->Size = System::Drawing::Size(63, 65);
			this->DelVec2->TabIndex = 20;
			this->DelVec2->Text = L"-";
			this->DelVec2->UseVisualStyleBackColor = true;
			this->DelVec2->Click += gcnew System::EventHandler(this, &MyForm::DelVec2_Click);
			// 
			// AddVec2
			// 
			this->AddVec2->Location = System::Drawing::Point(1205, 718);
			this->AddVec2->Name = L"AddVec2";
			this->AddVec2->Size = System::Drawing::Size(63, 65);
			this->AddVec2->TabIndex = 19;
			this->AddVec2->Text = L"+";
			this->AddVec2->UseVisualStyleBackColor = true;
			this->AddVec2->Click += gcnew System::EventHandler(this, &MyForm::AddVec2_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView5->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->ColumnHeadersVisible = false;
			this->dataGridView5->Location = System::Drawing::Point(724, 718);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowHeadersWidth = 82;
			this->dataGridView5->RowTemplate->Height = 33;
			this->dataGridView5->Size = System::Drawing::Size(475, 65);
			this->dataGridView5->TabIndex = 18;
			// 
			// ID
			// 
			this->ID->Location = System::Drawing::Point(79, 822);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(75, 66);
			this->ID->TabIndex = 21;
			this->ID->Text = L"ID";
			this->ID->UseVisualStyleBackColor = true;
			this->ID->Click += gcnew System::EventHandler(this, &MyForm::ID_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(177, 822);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 66);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Set";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(74, 905);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 23;
			// 
			// textBoxMult
			// 
			this->textBoxMult->Location = System::Drawing::Point(232, 917);
			this->textBoxMult->Name = L"textBoxMult";
			this->textBoxMult->Size = System::Drawing::Size(100, 31);
			this->textBoxMult->TabIndex = 24;
			// 
			// MultDigitButton
			// 
			this->MultDigitButton->Location = System::Drawing::Point(137, 905);
			this->MultDigitButton->Name = L"MultDigitButton";
			this->MultDigitButton->Size = System::Drawing::Size(75, 55);
			this->MultDigitButton->TabIndex = 25;
			this->MultDigitButton->Text = L"Mult";
			this->MultDigitButton->UseVisualStyleBackColor = true;
			this->MultDigitButton->Click += gcnew System::EventHandler(this, &MyForm::MultDigitButton_Click);
			// 
			// MultVecButton
			// 
			this->MultVecButton->Location = System::Drawing::Point(287, 822);
			this->MultVecButton->Name = L"MultVecButton";
			this->MultVecButton->Size = System::Drawing::Size(73, 66);
			this->MultVecButton->TabIndex = 26;
			this->MultVecButton->Text = L"MultVec";
			this->MultVecButton->UseVisualStyleBackColor = true;
			this->MultVecButton->Click += gcnew System::EventHandler(this, &MyForm::MultVecButton_Click);
			// 
			// ResVec
			// 
			this->ResVec->AllowUserToAddRows = false;
			this->ResVec->AllowUserToDeleteRows = false;
			this->ResVec->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->ResVec->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->ResVec->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResVec->ColumnHeadersVisible = false;
			this->ResVec->Location = System::Drawing::Point(1355, 718);
			this->ResVec->Name = L"ResVec";
			this->ResVec->RowHeadersVisible = false;
			this->ResVec->RowHeadersWidth = 82;
			this->ResVec->RowTemplate->Height = 33;
			this->ResVec->Size = System::Drawing::Size(475, 65);
			this->ResVec->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1942, 1209);
			this->Controls->Add(this->ResVec);
			this->Controls->Add(this->MultVecButton);
			this->Controls->Add(this->MultDigitButton);
			this->Controls->Add(this->textBoxMult);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->DelVec2);
			this->Controls->Add(this->AddVec2);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->DelVec1);
			this->Controls->Add(this->AddVec1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DelRow2);
			this->Controls->Add(this->AddRow2);
			this->Controls->Add(this->DelCol2);
			this->Controls->Add(this->AddCol2);
			this->Controls->Add(this->DelRow1);
			this->Controls->Add(this->AddRow1);
			this->Controls->Add(this->DelCol1);
			this->Controls->Add(this->AddCol1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResVec))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		void ClearAll() {//î÷èñòêà ïîëåé
			errorProvider1->SetError(dataGridView1, String::Empty);
			errorProvider1->SetError(dataGridView2, String::Empty);
			errorProvider1->SetError(dataGridView4, String::Empty);
			errorProvider1->SetError(dataGridView5, String::Empty);
			


			
		}

	private: System::Void AddRow1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->ColumnCount > 0) {
			this->dataGridView1->Rows->Add();
			
		}
	}
private: System::Void DelRow1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView1->RowCount > 0) {
		int i = dataGridView1->CurrentRow->Index;
		this->dataGridView1->Rows->Remove(this->dataGridView1->Rows[i]);
		
	}

}

private: System::Void DelCol1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->ColumnCount > 0 && this->dataGridView1->RowCount > 0) {
		int i = dataGridView1->CurrentCell->ColumnIndex;
		this->dataGridView1->Columns->Remove(this->dataGridView1->Columns[i]);
	}
}
private: System::Void AddCol1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Add("", "");
	if (this->dataGridView1->ColumnCount == 1) {
		this->dataGridView1->Rows->Add();
	}
}

	//table 2
private: System::Void AddRow2_Click_1(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataGridView2->ColumnCount > 0) {
				this->dataGridView2->Rows->Add();

			}
		}
private: System::Void DelRow2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView2->RowCount > 0 ) {
		int i = dataGridView2->CurrentRow->Index;
		this->dataGridView2->Rows->Remove(this->dataGridView2->Rows[i]);

	}

}

private: System::Void DelCol2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView2->ColumnCount > 0 && this->dataGridView2->RowCount > 0) {
		int i = dataGridView2->CurrentCell->ColumnIndex;
		this->dataGridView2->Columns->Remove(this->dataGridView2->Columns[i]);
	}
}
private: System::Void AddCol2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView2->Columns->Add("", "");
	if (this->dataGridView2->ColumnCount == 1) {
		this->dataGridView2->Rows->Add();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView4->ColumnCount > 0) {
		int i = dataGridView4->CurrentCell->ColumnIndex;
		this->dataGridView4->Columns->Remove(this->dataGridView4->Columns[i]);
	}
	

}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView4->Columns->Add("", "");
		if (this->dataGridView4->ColumnCount == 1) {
			this->dataGridView4->Rows->Add();
		}
	}

private: System::Void DelVec2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView5->ColumnCount > 0) {
		int i = dataGridView5->CurrentCell->ColumnIndex;
		this->dataGridView5->Columns->Remove(this->dataGridView5->Columns[i]);
	}
}
private: System::Void AddVec2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView5->Columns->Add("", "");
	if (this->dataGridView5->ColumnCount == 1) {
		this->dataGridView5->Rows->Add();
	}
}
private: System::Void ID_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = this->dataGridView1->RowCount;
	int m = this->dataGridView1->ColumnCount;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			this->dataGridView1->Rows[i]->Cells[j]->Value = "";
		}
	}
	std::vector<std::vector<int>> matr(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; ++j) {
			if (i == j)matr[i].push_back(1);
			else matr[i].push_back(0);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			this->dataGridView1->Rows[i]->Cells[j]->Value = matr[i][j];
		}
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int n = this->dataGridView1->RowCount;
	int m = this->dataGridView1->ColumnCount;
	int nvec = this->dataGridView4->ColumnCount;
	bool f=1;
	if (nvec != m)f = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			this->dataGridView1->Rows[i]->Cells[j]->Value = "";
		}
	}
	std::vector<std::vector<int>> matr(n);
	std::vector<int>vec;

	for (int i = 0; i < nvec; i++) {
		int temp1;
		bool check1 = Int32::TryParse(System::Convert::ToString(dataGridView4->Rows[0]->Cells[i]->Value), temp1);
		f = check1;
		vec.push_back(temp1);
	}
	for (int i = 0; i < n; i++) {
		if (f) {
			matr[i]=vec;
		}
		else {
			this->errorProvider1->SetError(dataGridView1, "No digit in table or troble with dimension");
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (!f)break;
		for (int j = 0; j < m; j++) {
			this->dataGridView1->Rows[i]->Cells[j]->Value = matr[i][j];
		}
	}
}
private: System::Void MultDigitButton_Click(System::Object^ sender, System::EventArgs^ e) {

	int n = this->dataGridView1->RowCount;
	int m = this->dataGridView1->ColumnCount;
	
	std::vector<std::vector<int>> matr(n);
	int temp1;
	bool check1 = Int32::TryParse(System::Convert::ToString(textBoxMult->Text), temp1);	 
	if(!check1)	 this->errorProvider1->SetError(textBoxMult, "No digit in table");
	int k = temp1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			//this->textBox3->Text += s;
			bool res = Int32::TryParse(System::Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), temp1);
			if (!res) {
				this->errorProvider1->SetError(dataGridView1, "No digit in table");
				break;
				check1 = 0;
			}
			else {
				matr[i].push_back(temp1);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (!check1)break;
		for (int j = 0; j < m; j++) {
			matr[i][j] *= k;
		}
	}
	for (int i = 0; i < n; i++) {
		if (!check1)break;
		for (int j = 0; j < m; j++) {
			this->dataGridView1->Rows[i]->Cells[j]->Value = matr[i][j];
		}
	}


	

}
private: System::Void MultVecButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = this->dataGridView1->RowCount;
	int m = this->dataGridView1->ColumnCount;
	int nvec = this->dataGridView4->ColumnCount;
	bool checkeq = m == nvec;
	if (checkeq	==1)   this->errorProvider1->SetError(dataGridView1, "rows of matrix != columns of vector");
	std::vector<std::vector<int>> matr(n);
	int temp1;
	
	bool check1=1;
	std::vector<int>vec;
	if (checkeq) {
		for (int i = 0; i < nvec; i++) {
			int temp1;
			bool check1 = Int32::TryParse(System::Convert::ToString(dataGridView4->Rows[0]->Cells[i]->Value), temp1);
			vec.push_back(temp1);
		}
	}
	if (checkeq && check1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {

				//this->textBox3->Text += s;
				bool res = Int32::TryParse(System::Convert::ToString(dataGridView4->Rows[i]->Cells[j]->Value), temp1);
				if (!res) {
					this->errorProvider1->SetError(dataGridView1, "No digit in table");
					break;
					check1 = 0;
				}
				else {
					matr[i].push_back(temp1);
				}
			}
		}
	}
	std::vector<int> vec2(m,0);
	for (int i = 0; i < n; i++) {
		if (!check1)break;
		for (int j = 0; j < m; j++) {
			vec2[j] += matr[i][j] * vec[j];
		}
	}
	for (int i = 0; i < n; i++) {
		if (!check1)break;
		for (int j = 0; j < m; j++) {
			this->dataGridView1->Rows[i]->Cells[j]->Value = matr[i][j];
		}
	}
	if (check1) {
		this->ResVec->Rows->Add();
		for (int j = 0; j < m; j++) {
			this->ResVec->Columns->Add("", "");
			this->ResVec->Rows[0]->Cells[j]->Value = vec2[j];
			
		}
	}
}
};
}
