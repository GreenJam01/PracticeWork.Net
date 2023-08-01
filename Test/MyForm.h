#pragma once

namespace TEST {

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
			answers[3] = "Amellie";
			answers[4] = "Pachimari";
			answers[5] = "Hammond";
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_answer_1;



	private: System::Windows::Forms::Button^ button_choose_1;
	private: System::Windows::Forms::CheckBox^ checkBox_1_4T;
	private: System::Windows::Forms::CheckBox^ checkBox_1_2;
	private: System::Windows::Forms::CheckBox^ checkBox_1_3;
	private: System::Windows::Forms::CheckBox^ checkBox_1_1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button_choose_2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox_2_4T;
	private: System::Windows::Forms::CheckBox^ checkBox_2_1;
	private: System::Windows::Forms::CheckBox^ checkBox_2_2;
	private: System::Windows::Forms::CheckBox^ checkBox_2_3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox_3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button_choose_3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox_4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button_choose_4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox_5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button_choose_5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::CheckBox^ checkBox_6_6T;
	private: System::Windows::Forms::CheckBox^ checkBox_6_5;
	private: System::Windows::Forms::CheckBox^ checkBox_6_4T;
	private: System::Windows::Forms::CheckBox^ checkBox_6_3;
	private: System::Windows::Forms::CheckBox^ checkBox_6_2T;
	private: System::Windows::Forms::CheckBox^ checkBox_6_1T;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button_choose_6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::CheckBox^ checkBox_7_1;
	private: System::Windows::Forms::CheckBox^ checkBox_7_4;
	private: System::Windows::Forms::CheckBox^ checkBox_7_3T;
	private: System::Windows::Forms::CheckBox^ checkBox_7_2;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button_choose_7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::CheckBox^ checkBox_8_1;
	private: System::Windows::Forms::CheckBox^ checkBox_8_4T;
	private: System::Windows::Forms::CheckBox^ checkBox_8_3;
	private: System::Windows::Forms::CheckBox^ checkBox_8_2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button_choose_8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::CheckBox^ checkBox_9_6T;
	private: System::Windows::Forms::CheckBox^ checkBox_9_5;
	private: System::Windows::Forms::CheckBox^ checkBox_9_1T;
	private: System::Windows::Forms::CheckBox^ checkBox_9_4;
	private: System::Windows::Forms::CheckBox^ checkBox_9_3;
	private: System::Windows::Forms::CheckBox^ checkBox_9_2;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Button^ button_choose_9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::CheckBox^ checkBox_10_1;
	private: System::Windows::Forms::CheckBox^ checkBox_10_4T;
	private: System::Windows::Forms::CheckBox^ checkBox_10_3;
	private: System::Windows::Forms::CheckBox^ checkBox_10_2;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Button^ button_choose_10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ lbl_answer_2;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ lbl_answer_3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button4;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Button^ button_end;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label_end;
private: System::Windows::Forms::Button^ button_close;


private: System::Windows::Forms::PictureBox^ pictureBox11;



	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_answer_1 = (gcnew System::Windows::Forms::Label());
			this->button_choose_1 = (gcnew System::Windows::Forms::Button());
			this->checkBox_1_4T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_1_2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_1_3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_1_1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbl_answer_2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox_2_4T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_2_1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_2_2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_2_3 = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbl_answer_3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox_3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox_4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox_5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox_6_6T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_6_5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_6_4T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_6_3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_6_2T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_6_1T = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->checkBox_7_1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_7_4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_7_3T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_7_2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->checkBox_8_1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_8_4T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_8_3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_8_2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_8 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox_9_6T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_9_5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_9_1T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_9_4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_9_3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_9_2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_9 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button_end = (gcnew System::Windows::Forms::Button());
			this->checkBox_10_1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_10_4T = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_10_3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_10_2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->button_choose_10 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label_end = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(234, 42);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(549, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Тест по вселенной OW";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lbl_answer_1);
			this->panel1->Controls->Add(this->button_choose_1);
			this->panel1->Controls->Add(this->checkBox_1_4T);
			this->panel1->Controls->Add(this->checkBox_1_2);
			this->panel1->Controls->Add(this->checkBox_1_3);
			this->panel1->Controls->Add(this->checkBox_1_1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(20, 115);
			this->panel1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 1077);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button1->Location = System::Drawing::Point(228, 390);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(448, 81);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// lbl_answer_1
			// 
			this->lbl_answer_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->lbl_answer_1->ForeColor = System::Drawing::Color::ForestGreen;
			this->lbl_answer_1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbl_answer_1->Location = System::Drawing::Point(228, 290);
			this->lbl_answer_1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbl_answer_1->Name = L"lbl_answer_1";
			this->lbl_answer_1->Size = System::Drawing::Size(442, 71);
			this->lbl_answer_1->TabIndex = 7;
			this->lbl_answer_1->Tag = L"answer";
			this->lbl_answer_1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button_choose_1
			// 
			this->button_choose_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_1->Location = System::Drawing::Point(328, 167);
			this->button_choose_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_1->Name = L"button_choose_1";
			this->button_choose_1->Size = System::Drawing::Size(240, 81);
			this->button_choose_1->TabIndex = 6;
			this->button_choose_1->Text = L"Выбрать ответ";
			this->button_choose_1->UseVisualStyleBackColor = true;
			this->button_choose_1->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// checkBox_1_4T
			// 
			this->checkBox_1_4T->AutoSize = true;
			this->checkBox_1_4T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_1_4T->Location = System::Drawing::Point(638, 104);
			this->checkBox_1_4T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_1_4T->Name = L"checkBox_1_4T";
			this->checkBox_1_4T->Size = System::Drawing::Size(105, 50);
			this->checkBox_1_4T->TabIndex = 5;
			this->checkBox_1_4T->Tag = L"true";
			this->checkBox_1_4T->Text = L"Индия";
			this->checkBox_1_4T->UseVisualStyleBackColor = true;
			// 
			// checkBox_1_2
			// 
			this->checkBox_1_2->AutoSize = true;
			this->checkBox_1_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_1_2->Location = System::Drawing::Point(262, 104);
			this->checkBox_1_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_1_2->Name = L"checkBox_1_2";
			this->checkBox_1_2->Size = System::Drawing::Size(104, 50);
			this->checkBox_1_2->TabIndex = 4;
			this->checkBox_1_2->Text = L"Пакистан";
			this->checkBox_1_2->UseVisualStyleBackColor = true;
			// 
			// checkBox_1_3
			// 
			this->checkBox_1_3->AutoSize = true;
			this->checkBox_1_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_1_3->Location = System::Drawing::Point(450, 104);
			this->checkBox_1_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_1_3->Name = L"checkBox_1_3";
			this->checkBox_1_3->Size = System::Drawing::Size(100, 50);
			this->checkBox_1_3->TabIndex = 3;
			this->checkBox_1_3->Text = L"Бангладеш";
			this->checkBox_1_3->UseVisualStyleBackColor = true;
			// 
			// checkBox_1_1
			// 
			this->checkBox_1_1->AutoSize = true;
			this->checkBox_1_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_1_1->Location = System::Drawing::Point(84, 104);
			this->checkBox_1_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_1_1->Name = L"checkBox_1_1";
			this->checkBox_1_1->Size = System::Drawing::Size(107, 50);
			this->checkBox_1_1->TabIndex = 2;
			this->checkBox_1_1->Text = L"Марокко";
			this->checkBox_1_1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(6, 490);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(888, 581);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 17);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(800, 46);
			this->label2->TabIndex = 0;
			this->label2->Text = L"1. В какой стране родилась Симметра\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->lbl_answer_2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->button_choose_2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->checkBox_2_4T);
			this->panel2->Controls->Add(this->checkBox_2_1);
			this->panel2->Controls->Add(this->checkBox_2_2);
			this->panel2->Controls->Add(this->checkBox_2_3);
			this->panel2->Location = System::Drawing::Point(20, 115);
			this->panel2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(900, 1079);
			this->panel2->TabIndex = 2;
			this->panel2->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button2->Location = System::Drawing::Point(228, 390);
			this->button2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(448, 81);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Пропустить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// lbl_answer_2
			// 
			this->lbl_answer_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->lbl_answer_2->ForeColor = System::Drawing::Color::ForestGreen;
			this->lbl_answer_2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbl_answer_2->Location = System::Drawing::Point(228, 290);
			this->lbl_answer_2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbl_answer_2->Name = L"lbl_answer_2";
			this->lbl_answer_2->Size = System::Drawing::Size(442, 71);
			this->lbl_answer_2->TabIndex = 15;
			this->lbl_answer_2->Tag = L"answer";
			this->lbl_answer_2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(10, 548);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(888, 525);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// button_choose_2
			// 
			this->button_choose_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_2->Location = System::Drawing::Point(328, 190);
			this->button_choose_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_2->Name = L"button_choose_2";
			this->button_choose_2->Size = System::Drawing::Size(240, 81);
			this->button_choose_2->TabIndex = 13;
			this->button_choose_2->Text = L"Выбрать ответ";
			this->button_choose_2->UseVisualStyleBackColor = true;
			this->button_choose_2->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 19);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(860, 100);
			this->label4->TabIndex = 8;
			this->label4->Text = L"2. Когда произошло восстание машин\?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkBox_2_4T
			// 
			this->checkBox_2_4T->AutoSize = true;
			this->checkBox_2_4T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_2_4T->Location = System::Drawing::Point(638, 125);
			this->checkBox_2_4T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_2_4T->Name = L"checkBox_2_4T";
			this->checkBox_2_4T->Size = System::Drawing::Size(124, 50);
			this->checkBox_2_4T->TabIndex = 12;
			this->checkBox_2_4T->Tag = L"true";
			this->checkBox_2_4T->Text = L"2034";
			this->checkBox_2_4T->UseVisualStyleBackColor = true;
			// 
			// checkBox_2_1
			// 
			this->checkBox_2_1->AutoSize = true;
			this->checkBox_2_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_2_1->Location = System::Drawing::Point(84, 125);
			this->checkBox_2_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_2_1->Name = L"checkBox_2_1";
			this->checkBox_2_1->Size = System::Drawing::Size(119, 50);
			this->checkBox_2_1->TabIndex = 9;
			this->checkBox_2_1->Text = L"2045";
			this->checkBox_2_1->UseVisualStyleBackColor = true;
			// 
			// checkBox_2_2
			// 
			this->checkBox_2_2->AutoSize = true;
			this->checkBox_2_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_2_2->Location = System::Drawing::Point(262, 125);
			this->checkBox_2_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_2_2->Name = L"checkBox_2_2";
			this->checkBox_2_2->Size = System::Drawing::Size(124, 50);
			this->checkBox_2_2->TabIndex = 11;
			this->checkBox_2_2->Text = L"2114";
			this->checkBox_2_2->UseVisualStyleBackColor = true;
			// 
			// checkBox_2_3
			// 
			this->checkBox_2_3->AutoSize = true;
			this->checkBox_2_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_2_3->Location = System::Drawing::Point(450, 125);
			this->checkBox_2_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_2_3->Name = L"checkBox_2_3";
			this->checkBox_2_3->Size = System::Drawing::Size(130, 50);
			this->checkBox_2_3->TabIndex = 10;
			this->checkBox_2_3->Text = L"2120";
			this->checkBox_2_3->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->lbl_answer_3);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->textBox_3);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->button_choose_3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(20, 115);
			this->panel3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(900, 1079);
			this->panel3->TabIndex = 15;
			this->panel3->Visible = false;
			// 
			// lbl_answer_3
			// 
			this->lbl_answer_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->lbl_answer_3->ForeColor = System::Drawing::Color::ForestGreen;
			this->lbl_answer_3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbl_answer_3->Location = System::Drawing::Point(228, 290);
			this->lbl_answer_3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbl_answer_3->Name = L"lbl_answer_3";
			this->lbl_answer_3->Size = System::Drawing::Size(436, 71);
			this->lbl_answer_3->TabIndex = 25;
			this->lbl_answer_3->Tag = L"answer";
			this->lbl_answer_3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button3->Location = System::Drawing::Point(228, 387);
			this->button3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(448, 81);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Следующий вопрос";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// textBox_3
			// 
			this->textBox_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->textBox_3->Location = System::Drawing::Point(162, 125);
			this->textBox_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_3->Multiline = true;
			this->textBox_3->Name = L"textBox_3";
			this->textBox_3->Size = System::Drawing::Size(548, 48);
			this->textBox_3->TabIndex = 15;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(10, 548);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(888, 525);
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// button_choose_3
			// 
			this->button_choose_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_3->Location = System::Drawing::Point(328, 200);
			this->button_choose_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_3->Name = L"button_choose_3";
			this->button_choose_3->Size = System::Drawing::Size(240, 81);
			this->button_choose_3->TabIndex = 13;
			this->button_choose_3->Text = L"Выбрать";
			this->button_choose_3->UseVisualStyleBackColor = true;
			this->button_choose_3->Click += gcnew System::EventHandler(this, &MyForm::button_choose_textBox_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(16, 19);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(860, 100);
			this->label5->TabIndex = 8;
			this->label5->Text = L"3. Настоящее имя Видоумейкер\?";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->textBox_4);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->button_choose_4);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(20, 115);
			this->panel4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(900, 1079);
			this->panel4->TabIndex = 16;
			this->panel4->Visible = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label3->ForeColor = System::Drawing::Color::ForestGreen;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Location = System::Drawing::Point(234, 290);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(436, 71);
			this->label3->TabIndex = 26;
			this->label3->Tag = L"answer";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button4->Location = System::Drawing::Point(228, 387);
			this->button4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(448, 81);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Следующий вопрос";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// textBox_4
			// 
			this->textBox_4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->textBox_4->Location = System::Drawing::Point(162, 125);
			this->textBox_4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_4->Multiline = true;
			this->textBox_4->Name = L"textBox_4";
			this->textBox_4->Size = System::Drawing::Size(548, 48);
			this->textBox_4->TabIndex = 15;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(10, 548);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(888, 525);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// button_choose_4
			// 
			this->button_choose_4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_4->Location = System::Drawing::Point(334, 200);
			this->button_choose_4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_4->Name = L"button_choose_4";
			this->button_choose_4->Size = System::Drawing::Size(240, 81);
			this->button_choose_4->TabIndex = 13;
			this->button_choose_4->Text = L"Выбрать";
			this->button_choose_4->UseVisualStyleBackColor = true;
			this->button_choose_4->Click += gcnew System::EventHandler(this, &MyForm::button_choose_textBox_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(16, 19);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(860, 100);
			this->label6->TabIndex = 8;
			this->label6->Text = L"4.  Название маскота игры";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->textBox_5);
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Controls->Add(this->button_choose_5);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Location = System::Drawing::Point(20, 115);
			this->panel5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(900, 1079);
			this->panel5->TabIndex = 17;
			this->panel5->Visible = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label14->ForeColor = System::Drawing::Color::ForestGreen;
			this->label14->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label14->Location = System::Drawing::Point(228, 290);
			this->label14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(436, 71);
			this->label14->TabIndex = 28;
			this->label14->Tag = L"answer";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button5->Location = System::Drawing::Point(228, 387);
			this->button5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(448, 81);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Следующий вопрос";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// textBox_5
			// 
			this->textBox_5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->textBox_5->Location = System::Drawing::Point(162, 125);
			this->textBox_5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_5->Multiline = true;
			this->textBox_5->Name = L"textBox_5";
			this->textBox_5->Size = System::Drawing::Size(548, 48);
			this->textBox_5->TabIndex = 15;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(10, 548);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(888, 525);
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// button_choose_5
			// 
			this->button_choose_5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_5->Location = System::Drawing::Point(328, 198);
			this->button_choose_5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_5->Name = L"button_choose_5";
			this->button_choose_5->Size = System::Drawing::Size(240, 81);
			this->button_choose_5->TabIndex = 13;
			this->button_choose_5->Text = L"Выбрать";
			this->button_choose_5->UseVisualStyleBackColor = true;
			this->button_choose_5->Click += gcnew System::EventHandler(this, &MyForm::button_choose_textBox_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(16, 19);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(860, 100);
			this->label7->TabIndex = 8;
			this->label7->Text = L"5. Имя Тарана";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->button6);
			this->panel6->Controls->Add(this->checkBox_6_6T);
			this->panel6->Controls->Add(this->checkBox_6_5);
			this->panel6->Controls->Add(this->checkBox_6_4T);
			this->panel6->Controls->Add(this->checkBox_6_3);
			this->panel6->Controls->Add(this->checkBox_6_2T);
			this->panel6->Controls->Add(this->checkBox_6_1T);
			this->panel6->Controls->Add(this->pictureBox6);
			this->panel6->Controls->Add(this->button_choose_6);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Location = System::Drawing::Point(20, 115);
			this->panel6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(900, 1079);
			this->panel6->TabIndex = 18;
			this->panel6->Visible = false;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label15->ForeColor = System::Drawing::Color::ForestGreen;
			this->label15->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label15->Location = System::Drawing::Point(228, 373);
			this->label15->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(436, 71);
			this->label15->TabIndex = 29;
			this->label15->Tag = L"answer";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button6->Location = System::Drawing::Point(228, 454);
			this->button6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(448, 81);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Следующий вопрос";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// checkBox_6_6T
			// 
			this->checkBox_6_6T->AutoSize = true;
			this->checkBox_6_6T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_6_6T->Location = System::Drawing::Point(412, 227);
			this->checkBox_6_6T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_6_6T->Name = L"checkBox_6_6T";
			this->checkBox_6_6T->Size = System::Drawing::Size(435, 50);
			this->checkBox_6_6T->TabIndex = 20;
			this->checkBox_6_6T->Tag = L"true";
			this->checkBox_6_6T->Text = L"Фотонный барьер";
			this->checkBox_6_6T->UseVisualStyleBackColor = true;
			// 
			// checkBox_6_5
			// 
			this->checkBox_6_5->AutoSize = true;
			this->checkBox_6_5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_6_5->Location = System::Drawing::Point(412, 171);
			this->checkBox_6_5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_6_5->Name = L"checkBox_6_5";
			this->checkBox_6_5->Size = System::Drawing::Size(124, 50);
			this->checkBox_6_5->TabIndex = 19;
			this->checkBox_6_5->Text = L"Коалессенция";
			this->checkBox_6_5->UseVisualStyleBackColor = true;
			// 
			// checkBox_6_4T
			// 
			this->checkBox_6_4T->AutoSize = true;
			this->checkBox_6_4T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_6_4T->Location = System::Drawing::Point(412, 115);
			this->checkBox_6_4T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_6_4T->Name = L"checkBox_6_4T";
			this->checkBox_6_4T->Size = System::Drawing::Size(167, 50);
			this->checkBox_6_4T->TabIndex = 18;
			this->checkBox_6_4T->Tag = L"true";
			this->checkBox_6_4T->Text = L"Генератор щита";
			this->checkBox_6_4T->UseVisualStyleBackColor = true;
			// 
			// checkBox_6_3
			// 
			this->checkBox_6_3->AutoSize = true;
			this->checkBox_6_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_6_3->Location = System::Drawing::Point(84, 227);
			this->checkBox_6_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_6_3->Name = L"checkBox_6_3";
			this->checkBox_6_3->Size = System::Drawing::Size(217, 50);
			this->checkBox_6_3->TabIndex = 17;
			this->checkBox_6_3->Text = L"Фотонный портал";
			this->checkBox_6_3->UseVisualStyleBackColor = true;
			// 
			// checkBox_6_2T
			// 
			this->checkBox_6_2T->AutoSize = true;
			this->checkBox_6_2T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_6_2T->Location = System::Drawing::Point(84, 171);
			this->checkBox_6_2T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_6_2T->Name = L"checkBox_6_2T";
			this->checkBox_6_2T->Size = System::Drawing::Size(130, 50);
			this->checkBox_6_2T->TabIndex = 16;
			this->checkBox_6_2T->Tag = L"true";
			this->checkBox_6_2T->Text = L"Турель";
			this->checkBox_6_2T->UseVisualStyleBackColor = true;
			// 
			// checkBox_6_1T
			// 
			this->checkBox_6_1T->AutoSize = true;
			this->checkBox_6_1T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_6_1T->Location = System::Drawing::Point(84, 115);
			this->checkBox_6_1T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_6_1T->Name = L"checkBox_6_1T";
			this->checkBox_6_1T->Size = System::Drawing::Size(225, 50);
			this->checkBox_6_1T->TabIndex = 15;
			this->checkBox_6_1T->Tag = L"true";
			this->checkBox_6_1T->Text = L"Фотонная пушка";
			this->checkBox_6_1T->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(10, 548);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(888, 525);
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// button_choose_6
			// 
			this->button_choose_6->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_6->Location = System::Drawing::Point(328, 287);
			this->button_choose_6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_6->Name = L"button_choose_6";
			this->button_choose_6->Size = System::Drawing::Size(240, 81);
			this->button_choose_6->TabIndex = 13;
			this->button_choose_6->Text = L"Выбрать";
			this->button_choose_6->UseVisualStyleBackColor = true;
			this->button_choose_6->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(16, 19);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(860, 100);
			this->label8->TabIndex = 8;
			this->label8->Text = L"6. Все способности Симметры, которые есть или были в игре?";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label16);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->checkBox_7_1);
			this->panel7->Controls->Add(this->checkBox_7_4);
			this->panel7->Controls->Add(this->checkBox_7_3T);
			this->panel7->Controls->Add(this->checkBox_7_2);
			this->panel7->Controls->Add(this->pictureBox7);
			this->panel7->Controls->Add(this->button_choose_7);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(20, 115);
			this->panel7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(900, 1079);
			this->panel7->TabIndex = 21;
			this->panel7->Visible = false;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label16->ForeColor = System::Drawing::Color::ForestGreen;
			this->label16->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label16->Location = System::Drawing::Point(228, 348);
			this->label16->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(436, 71);
			this->label16->TabIndex = 30;
			this->label16->Tag = L"answer";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button7->Location = System::Drawing::Point(228, 435);
			this->button7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(448, 81);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Следующий вопрос";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// checkBox_7_1
			// 
			this->checkBox_7_1->AutoSize = true;
			this->checkBox_7_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_7_1->Location = System::Drawing::Point(254, 140);
			this->checkBox_7_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_7_1->Name = L"checkBox_7_1";
			this->checkBox_7_1->Size = System::Drawing::Size(114, 50);
			this->checkBox_7_1->TabIndex = 19;
			this->checkBox_7_1->Text = L"30";
			this->checkBox_7_1->UseVisualStyleBackColor = true;
			// 
			// checkBox_7_4
			// 
			this->checkBox_7_4->AutoSize = true;
			this->checkBox_7_4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_7_4->Location = System::Drawing::Point(506, 196);
			this->checkBox_7_4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_7_4->Name = L"checkBox_7_4";
			this->checkBox_7_4->Size = System::Drawing::Size(113, 50);
			this->checkBox_7_4->TabIndex = 17;
			this->checkBox_7_4->Text = L"40";
			this->checkBox_7_4->UseVisualStyleBackColor = true;
			// 
			// checkBox_7_3T
			// 
			this->checkBox_7_3T->AutoSize = true;
			this->checkBox_7_3T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_7_3T->Location = System::Drawing::Point(254, 196);
			this->checkBox_7_3T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_7_3T->Name = L"checkBox_7_3T";
			this->checkBox_7_3T->Size = System::Drawing::Size(108, 50);
			this->checkBox_7_3T->TabIndex = 16;
			this->checkBox_7_3T->Tag = L"true";
			this->checkBox_7_3T->Text = L"29";
			this->checkBox_7_3T->UseVisualStyleBackColor = true;
			// 
			// checkBox_7_2
			// 
			this->checkBox_7_2->AutoSize = true;
			this->checkBox_7_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_7_2->Location = System::Drawing::Point(506, 140);
			this->checkBox_7_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_7_2->Name = L"checkBox_7_2";
			this->checkBox_7_2->Size = System::Drawing::Size(114, 50);
			this->checkBox_7_2->TabIndex = 15;
			this->checkBox_7_2->Text = L"35";
			this->checkBox_7_2->UseVisualStyleBackColor = true;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(10, 548);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(888, 525);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// button_choose_7
			// 
			this->button_choose_7->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_7->Location = System::Drawing::Point(328, 258);
			this->button_choose_7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_7->Name = L"button_choose_7";
			this->button_choose_7->Size = System::Drawing::Size(240, 81);
			this->button_choose_7->TabIndex = 13;
			this->button_choose_7->Text = L"Выбрать";
			this->button_choose_7->UseVisualStyleBackColor = true;
			this->button_choose_7->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(16, 19);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(860, 100);
			this->label9->TabIndex = 8;
			this->label9->Text = L"7. Сколько лет Заре?\?";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label17);
			this->panel8->Controls->Add(this->button8);
			this->panel8->Controls->Add(this->checkBox_8_1);
			this->panel8->Controls->Add(this->checkBox_8_4T);
			this->panel8->Controls->Add(this->checkBox_8_3);
			this->panel8->Controls->Add(this->checkBox_8_2);
			this->panel8->Controls->Add(this->pictureBox8);
			this->panel8->Controls->Add(this->button_choose_8);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Location = System::Drawing::Point(20, 115);
			this->panel8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(900, 1079);
			this->panel8->TabIndex = 22;
			this->panel8->Visible = false;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label17->ForeColor = System::Drawing::Color::ForestGreen;
			this->label17->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label17->Location = System::Drawing::Point(228, 315);
			this->label17->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(436, 71);
			this->label17->TabIndex = 31;
			this->label17->Tag = L"answer";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button8->Location = System::Drawing::Point(228, 400);
			this->button8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(448, 81);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Следующий вопрос";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// checkBox_8_1
			// 
			this->checkBox_8_1->AutoSize = true;
			this->checkBox_8_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_8_1->Location = System::Drawing::Point(296, 83);
			this->checkBox_8_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_8_1->Name = L"checkBox_8_1";
			this->checkBox_8_1->Size = System::Drawing::Size(67, 50);
			this->checkBox_8_1->TabIndex = 19;
			this->checkBox_8_1->Text = L"Зоолог";
			this->checkBox_8_1->UseVisualStyleBackColor = true;
			// 
			// checkBox_8_4T
			// 
			this->checkBox_8_4T->AutoSize = true;
			this->checkBox_8_4T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_8_4T->Location = System::Drawing::Point(490, 146);
			this->checkBox_8_4T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_8_4T->Name = L"checkBox_8_4T";
			this->checkBox_8_4T->Size = System::Drawing::Size(86, 50);
			this->checkBox_8_4T->TabIndex = 17;
			this->checkBox_8_4T->Tag = L"true";
			this->checkBox_8_4T->Text = L"Климатолог";
			this->checkBox_8_4T->UseVisualStyleBackColor = true;
			// 
			// checkBox_8_3
			// 
			this->checkBox_8_3->AutoSize = true;
			this->checkBox_8_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_8_3->Location = System::Drawing::Point(296, 146);
			this->checkBox_8_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_8_3->Name = L"checkBox_8_3";
			this->checkBox_8_3->Size = System::Drawing::Size(73, 50);
			this->checkBox_8_3->TabIndex = 16;
			this->checkBox_8_3->Tag = L"";
			this->checkBox_8_3->Text = L"Физик";
			this->checkBox_8_3->UseVisualStyleBackColor = true;
			// 
			// checkBox_8_2
			// 
			this->checkBox_8_2->AutoSize = true;
			this->checkBox_8_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_8_2->Location = System::Drawing::Point(490, 83);
			this->checkBox_8_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_8_2->Name = L"checkBox_8_2";
			this->checkBox_8_2->Size = System::Drawing::Size(72, 50);
			this->checkBox_8_2->TabIndex = 15;
			this->checkBox_8_2->Text = L"Химик";
			this->checkBox_8_2->UseVisualStyleBackColor = true;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(8, 548);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(888, 525);
			this->pictureBox8->TabIndex = 14;
			this->pictureBox8->TabStop = false;
			// 
			// button_choose_8
			// 
			this->button_choose_8->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_8->Location = System::Drawing::Point(316, 221);
			this->button_choose_8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_8->Name = L"button_choose_8";
			this->button_choose_8->Size = System::Drawing::Size(240, 81);
			this->button_choose_8->TabIndex = 13;
			this->button_choose_8->Text = L"Выбрать";
			this->button_choose_8->UseVisualStyleBackColor = true;
			this->button_choose_8->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(16, 19);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(860, 56);
			this->label10->TabIndex = 8;
			this->label10->Text = L"8. Специальность Мей?\?";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label18);
			this->panel9->Controls->Add(this->button9);
			this->panel9->Controls->Add(this->checkBox_9_6T);
			this->panel9->Controls->Add(this->checkBox_9_5);
			this->panel9->Controls->Add(this->checkBox_9_1T);
			this->panel9->Controls->Add(this->checkBox_9_4);
			this->panel9->Controls->Add(this->checkBox_9_3);
			this->panel9->Controls->Add(this->checkBox_9_2);
			this->panel9->Controls->Add(this->pictureBox9);
			this->panel9->Controls->Add(this->button_choose_9);
			this->panel9->Controls->Add(this->label11);
			this->panel9->Location = System::Drawing::Point(20, 115);
			this->panel9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(900, 1079);
			this->panel9->TabIndex = 23;
			this->panel9->Visible = false;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label18->ForeColor = System::Drawing::Color::ForestGreen;
			this->label18->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label18->Location = System::Drawing::Point(228, 373);
			this->label18->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(436, 77);
			this->label18->TabIndex = 32;
			this->label18->Tag = L"answer";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button9->Location = System::Drawing::Point(220, 452);
			this->button9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(448, 81);
			this->button9->TabIndex = 24;
			this->button9->Text = L"Следующий вопрос";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Next_Click);
			// 
			// checkBox_9_6T
			// 
			this->checkBox_9_6T->AutoSize = true;
			this->checkBox_9_6T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_9_6T->Location = System::Drawing::Point(520, 238);
			this->checkBox_9_6T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_9_6T->Name = L"checkBox_9_6T";
			this->checkBox_9_6T->Size = System::Drawing::Size(115, 50);
			this->checkBox_9_6T->TabIndex = 21;
			this->checkBox_9_6T->Tag = L"true";
			this->checkBox_9_6T->Text = L"Соджорн";
			this->checkBox_9_6T->UseVisualStyleBackColor = true;
			// 
			// checkBox_9_5
			// 
			this->checkBox_9_5->AutoSize = true;
			this->checkBox_9_5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_9_5->Location = System::Drawing::Point(162, 227);
			this->checkBox_9_5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_9_5->Name = L"checkBox_9_5";
			this->checkBox_9_5->Size = System::Drawing::Size(148, 50);
			this->checkBox_9_5->TabIndex = 20;
			this->checkBox_9_5->Text = L"Батист";
			this->checkBox_9_5->UseVisualStyleBackColor = true;
			// 
			// checkBox_9_1T
			// 
			this->checkBox_9_1T->AutoSize = true;
			this->checkBox_9_1T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_9_1T->Location = System::Drawing::Point(162, 119);
			this->checkBox_9_1T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_9_1T->Name = L"checkBox_9_1T";
			this->checkBox_9_1T->Size = System::Drawing::Size(308, 50);
			this->checkBox_9_1T->TabIndex = 19;
			this->checkBox_9_1T->Tag = L"true";
			this->checkBox_9_1T->Text = L"Солдат 76";
			this->checkBox_9_1T->UseVisualStyleBackColor = true;
			// 
			// checkBox_9_4
			// 
			this->checkBox_9_4->AutoSize = true;
			this->checkBox_9_4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_9_4->Location = System::Drawing::Point(520, 175);
			this->checkBox_9_4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_9_4->Name = L"checkBox_9_4";
			this->checkBox_9_4->Size = System::Drawing::Size(132, 50);
			this->checkBox_9_4->TabIndex = 17;
			this->checkBox_9_4->Text = L"Заря";
			this->checkBox_9_4->UseVisualStyleBackColor = true;
			// 
			// checkBox_9_3
			// 
			this->checkBox_9_3->AutoSize = true;
			this->checkBox_9_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_9_3->Location = System::Drawing::Point(162, 175);
			this->checkBox_9_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_9_3->Name = L"checkBox_9_3";
			this->checkBox_9_3->Size = System::Drawing::Size(341, 50);
			this->checkBox_9_3->TabIndex = 16;
			this->checkBox_9_3->Text = L"Дзеньятта";
			this->checkBox_9_3->UseVisualStyleBackColor = true;
			// 
			// checkBox_9_2
			// 
			this->checkBox_9_2->AutoSize = true;
			this->checkBox_9_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_9_2->Location = System::Drawing::Point(520, 115);
			this->checkBox_9_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_9_2->Name = L"checkBox_9_2";
			this->checkBox_9_2->Size = System::Drawing::Size(107, 50);
			this->checkBox_9_2->TabIndex = 15;
			this->checkBox_9_2->Text = L"Сомбра";
			this->checkBox_9_2->UseVisualStyleBackColor = true;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(8, 548);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(888, 525);
			this->pictureBox9->TabIndex = 14;
			this->pictureBox9->TabStop = false;
			// 
			// button_choose_9
			// 
			this->button_choose_9->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_9->Location = System::Drawing::Point(316, 288);
			this->button_choose_9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_9->Name = L"button_choose_9";
			this->button_choose_9->Size = System::Drawing::Size(240, 81);
			this->button_choose_9->TabIndex = 13;
			this->button_choose_9->Text = L"Выбрать";
			this->button_choose_9->UseVisualStyleBackColor = true;
			this->button_choose_9->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(16, 19);
			this->label11->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(860, 100);
			this->label11->TabIndex = 8;
			this->label11->Text = L"9. Кто был в старой команде Овервотч\?";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label19);
			this->panel10->Controls->Add(this->button_end);
			this->panel10->Controls->Add(this->checkBox_10_1);
			this->panel10->Controls->Add(this->checkBox_10_4T);
			this->panel10->Controls->Add(this->checkBox_10_3);
			this->panel10->Controls->Add(this->checkBox_10_2);
			this->panel10->Controls->Add(this->pictureBox10);
			this->panel10->Controls->Add(this->button_choose_10);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Location = System::Drawing::Point(20, 115);
			this->panel10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(900, 1079);
			this->panel10->TabIndex = 24;
			this->panel10->Visible = false;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label19->ForeColor = System::Drawing::Color::ForestGreen;
			this->label19->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label19->Location = System::Drawing::Point(228, 360);
			this->label19->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(436, 77);
			this->label19->TabIndex = 33;
			this->label19->Tag = L"answer";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// button_end
			// 
			this->button_end->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_end->Location = System::Drawing::Point(212, 452);
			this->button_end->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_end->Name = L"button_end";
			this->button_end->Size = System::Drawing::Size(448, 81);
			this->button_end->TabIndex = 25;
			this->button_end->Text = L"Закончить";
			this->button_end->UseVisualStyleBackColor = true;
			this->button_end->Click += gcnew System::EventHandler(this, &MyForm::button_end_Click);
			// 
			// checkBox_10_1
			// 
			this->checkBox_10_1->AutoSize = true;
			this->checkBox_10_1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_10_1->Location = System::Drawing::Point(134, 129);
			this->checkBox_10_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_10_1->Name = L"checkBox_10_1";
			this->checkBox_10_1->Size = System::Drawing::Size(187, 50);
			this->checkBox_10_1->TabIndex = 19;
			this->checkBox_10_1->Text = L"Ориса";
			this->checkBox_10_1->UseVisualStyleBackColor = true;
			// 
			// checkBox_10_4T
			// 
			this->checkBox_10_4T->AutoSize = true;
			this->checkBox_10_4T->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_10_4T->Location = System::Drawing::Point(520, 188);
			this->checkBox_10_4T->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_10_4T->Name = L"checkBox_10_4T";
			this->checkBox_10_4T->Size = System::Drawing::Size(194, 50);
			this->checkBox_10_4T->TabIndex = 17;
			this->checkBox_10_4T->Tag = L"true";
			this->checkBox_10_4T->Text = L"Сигма";
			this->checkBox_10_4T->UseVisualStyleBackColor = true;
			// 
			// checkBox_10_3
			// 
			this->checkBox_10_3->AutoSize = true;
			this->checkBox_10_3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_10_3->Location = System::Drawing::Point(134, 188);
			this->checkBox_10_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_10_3->Name = L"checkBox_10_3";
			this->checkBox_10_3->Size = System::Drawing::Size(199, 50);
			this->checkBox_10_3->TabIndex = 16;
			this->checkBox_10_3->Text = L"Ана";
			this->checkBox_10_3->UseVisualStyleBackColor = true;
			// 
			// checkBox_10_2
			// 
			this->checkBox_10_2->AutoSize = true;
			this->checkBox_10_2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->checkBox_10_2->Location = System::Drawing::Point(520, 129);
			this->checkBox_10_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->checkBox_10_2->Name = L"checkBox_10_2";
			this->checkBox_10_2->Size = System::Drawing::Size(187, 50);
			this->checkBox_10_2->TabIndex = 15;
			this->checkBox_10_2->Text = L"Маккри";
			this->checkBox_10_2->UseVisualStyleBackColor = true;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(8, 548);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(888, 525);
			this->pictureBox10->TabIndex = 14;
			this->pictureBox10->TabStop = false;
			// 
			// button_choose_10
			// 
			this->button_choose_10->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_choose_10->Location = System::Drawing::Point(310, 267);
			this->button_choose_10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_choose_10->Name = L"button_choose_10";
			this->button_choose_10->Size = System::Drawing::Size(240, 81);
			this->button_choose_10->TabIndex = 13;
			this->button_choose_10->Text = L"Выбрать";
			this->button_choose_10->UseVisualStyleBackColor = true;
			this->button_choose_10->Click += gcnew System::EventHandler(this, &MyForm::button_choose_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(16, 19);
			this->label12->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(860, 100);
			this->label12->TabIndex = 8;
			this->label12->Text = L"10. Сильнейший персонаж\?";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label21);
			this->panel11->Controls->Add(this->label_end);
			this->panel11->Controls->Add(this->button_close);
			this->panel11->Controls->Add(this->pictureBox11);
			this->panel11->Location = System::Drawing::Point(20, 115);
			this->panel11->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(900, 1079);
			this->panel11->TabIndex = 25;
			this->panel11->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(324, 44);
			this->label21->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(307, 66);
			this->label21->TabIndex = 35;
			this->label21->Text = L"Результаты";
			// 
			// label_end
			// 
			this->label_end->BackColor = System::Drawing::Color::White;
			this->label_end->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_end->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->label_end->ForeColor = System::Drawing::Color::Black;
			this->label_end->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label_end->Location = System::Drawing::Point(140, 137);
			this->label_end->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_end->Name = L"label_end";
			this->label_end->Size = System::Drawing::Size(612, 188);
			this->label_end->TabIndex = 34;
			this->label_end->Tag = L"answer";
			this->label_end->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button_close
			// 
			this->button_close->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F));
			this->button_close->Location = System::Drawing::Point(244, 373);
			this->button_close->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(444, 81);
			this->button_close->TabIndex = 25;
			this->button_close->Text = L"Закрыть";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Location = System::Drawing::Point(8, 548);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(888, 525);
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 1213);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"MyForm";
			this->Text = L"OW";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int right_answers = 0;
	private: int counter = 1;
	private: array<String^>^ answers = gcnew array<String^>(11);
	private: System::Void button_choose_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = (Button^)sender;
		button->Enabled = false;
		bool incorrect_answer = false;
		Panel^ panel = (Panel^)(((Button^)sender)->Parent);

	for each(auto cont in panel->Controls)
		if(cont->GetType() == CheckBox::typeid)
		{
			CheckBox^ cb = (CheckBox^)cont;
			if (cb->Tag == "true")
			{
				if (cb->Checked != true)
				{
					incorrect_answer = true;
					break;
				}
			}
			else {
				if (cb->Checked == true)
				{
					incorrect_answer = true;
					break;
				}
			}
		}
	if (incorrect_answer)
		for each (auto cont in panel->Controls)
			if (cont->GetType() == Label::typeid) {
				Label^ lbl = (Label^) cont;
				if (lbl->Tag == "answer")
				{
					lbl->ForeColor = Color::Crimson;
					lbl->Text = "Incorrect";
				}
			}
		else 
			for each (auto cont in panel->Controls)
				if (cont->GetType() == Label::typeid) {
					Label^ lbl = (Label^)cont;
					if (lbl->Tag == "answer")
					{
						lbl->ForeColor = Color::ForestGreen;
						lbl->Text = "Correct";
						right_answers++;
					}
				}
	}
private: System::Void button_Next_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (auto panels in this->Controls)
		if (panels->GetType() == Panel::typeid)
			if (((Panel^)panels)->Name == "panel" + counter.ToString())
				((Panel^)panels)->Visible = false;
	counter++;
	for each (auto panels in this->Controls)
		if (panels->GetType() == Panel::typeid)
			if (((Panel^)panels)->Name == "panel" + counter.ToString())
				((Panel^)panels)->Visible = true;
}
private: System::Void button_choose_textBox_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = (Button^)sender;
	button->Enabled = false;
	bool incorrect_answer = false;
	Panel^ panel = (Panel^)(((Button^)sender)->Parent);
	for each (auto cont in panel->Controls)
		if (cont->GetType() == TextBox::typeid)
		{
			TextBox^ tb = (TextBox^)cont;
			if (tb->Text != answers[counter])
				incorrect_answer = true;
		}
	if (incorrect_answer)
		for each (auto cont in panel->Controls)
			if (cont->GetType() == Label::typeid) {
				Label^ lbl = (Label^)cont;
				if (lbl->Tag == "answer")
				{
					lbl->ForeColor = Color::Crimson;
					lbl->Text = "Incorrect";
				}
			}
			else
				for each (auto cont in panel->Controls)
					if (cont->GetType() == Label::typeid) {
						Label^ lbl = (Label^)cont;
						if (lbl->Tag == "answer")
						{
							lbl->ForeColor = Color::ForestGreen;
							lbl->Text = "COrrect";
							right_answers++;
						}
					}
}
private: System::Void button_end_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (auto panels in this->Controls)
		if (panels->GetType() == Panel::typeid)
			if (((Panel^)panels)->Name == "panel" + counter.ToString())
				((Panel^)panels)->Visible = false;
	counter++;
	for each (auto panels in this->Controls)
		if (panels->GetType() == Panel::typeid)
			if (((Panel^)panels)->Name == "panel" + counter.ToString())
				((Panel^)panels)->Visible = true;
	label_end->Text = "Ammount of correct answer " + right_answers + ".";
}
private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
