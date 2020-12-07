#pragma once
#include <msclr\marshal_cppstd.h>       //used to convert System string to std string
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <ostream>
#include <map>
#include <vector>
#include <msclr/marshal.h>
#include "AllClass.h"
#include <chrono>
using namespace std::chrono;				//understood and applied from Prof Aman's Algorithm Analysis Lecture 1
typedef high_resolution_clock Clock;		//understood and applied from Prof Aman's Algorithm Analysis Lecture 1
using namespace std;


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	AllClass aObject;
	AllClass::Tree treeObject;
	map<string, standard> data = aObject.inputData("StandardList.txt");
	vector<standard> dataVector = aObject.returnVector("StandardList.txt");
	AllClass::Tree IDTree;
	AllClass::Tree yearTree;
	AllClass::Tree categoryTree;
	AllClass::Tree subTree;
	AllClass::Tree priceTree;
	

	
	public ref class Form1 : public System::Windows::Forms::Form
	{	
	public:
		

		Form1(void)
		{
			InitializeComponent();
		}

		Form1(string hello) 
		{
			stack<AllClass::Tree> ConstructTrees();
		};

		stack<AllClass::Tree> ConstructTrees()
		{
			return treeObject.TreeConstruct(Form_getYear(), Form_getID(), Form_getCategory(), Form_getSubCategory(), Form_getPrice());
		}

		AllClass::Tree Form_getID()
		{
			return IDTree;
		};

		AllClass::Tree Form_getPrice()
		{
			return priceTree;
		}

		AllClass::Tree Form_getYear()
		{
			return yearTree;
		}

		AllClass::Tree Form_getCategory()
		{
			return categoryTree;
		}
		
		AllClass::Tree Form_getSubCategory()
		{
			return subTree;
		}
		

	protected:
	
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::RadioButton^ radioButton5;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(121, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(498, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Engineering Standards Search Wizard";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Year";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 139);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 21);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->Text = L"Range";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"2000", L"2001", L"2002", L"2003", L"2004", L"2005",
					L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019",
					L"2020"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 166);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"to";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"2000", L"2001", L"2002", L"2003", L"2004", L"2005",
					L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019",
					L"2020"
			});
			this->comboBox2->Location = System::Drawing::Point(165, 166);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 210);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 21);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->Text = L"Single Year";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1990", L"1991", L"1992", L"1993", L"1994", L"1995",
					L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009",
					L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019", L"2020"
			});
			this->comboBox3->Location = System::Drawing::Point(12, 237);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Price";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 299);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 21);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->Text = L"Range";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 326);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 326);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 22);
			this->textBox2->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(152, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 14;
			this->label5->Text = L"to";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(12, 372);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(104, 21);
			this->radioButton4->TabIndex = 15;
			this->radioButton4->Text = L"Single Price";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(31, 404);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 22);
			this->textBox3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 469);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 22);
			this->textBox4->TabIndex = 18;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(681, 105);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 21);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Tree";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(347, 220);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(407, 243);
			this->richTextBox2->TabIndex = 22;
			this->richTextBox2->Text = L"";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(580, 105);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(57, 21);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"Map";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(512, 470);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 33);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(142, 75);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(75, 21);
			this->checkBox3->TabIndex = 28;
			this->checkBox3->Text = L"Search";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(347, 75);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(56, 21);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->Text = L"Sort";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"revisionYear", L"cost", L"subcategory" });
			this->comboBox4->Location = System::Drawing::Point(347, 102);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 24);
			this->comboBox4->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(577, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 17);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Choose a Data Structure";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(12, 442);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(42, 21);
			this->radioButton5->TabIndex = 33;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"ID";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(91, 581);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 35;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(476, 581);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 36;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(124, 561);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 17);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Map";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(433, 561);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(208, 17);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Binary Search Tree/ N-ary Tree";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(258, 522);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(175, 21);
			this->checkBox5->TabIndex = 39;
			this->checkBox5->Text = L"Generate Performance";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(347, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 52);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Generate Results with Map";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(590, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 52);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Generate Results with Tree";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(197, 584);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 17);
			this->label9->TabIndex = 42;
			this->label9->Text = L"seconds";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(582, 586);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 17);
			this->label10->TabIndex = 43;
			this->label10->Text = L"seconds";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(290, 570);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 33);
			this->button3->TabIndex = 44;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 407);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 45;
			this->label11->Text = L"$";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(178, 329);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 17);
			this->label12->TabIndex = 46;
			this->label12->Text = L"$";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 329);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 17);
			this->label13->TabIndex = 47;
			this->label13->Text = L"$";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 645);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->HelpButton = true;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Engineering Standards Searchinator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {		//resets all buttons
	richTextBox2->Clear();
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	comboBox1->ResetText();
	comboBox2->ResetText();
	comboBox3->ResetText();
	comboBox4->ResetText();

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	auto time1 = Clock::now();
	
	AllClass::Map obj;
	bool wantSort = checkBox4->Checked;					//if the user wants to sort the return data
	String^ ts = comboBox4->Text->ToString();			//how they want to sort it

	string typeSort = msclr::interop::marshal_as< std::string >(ts);
	//calling tree objects


	if (checkBox2->Checked)			//checked if search/sort functionality is using a MAP
	{
		if (checkBox3->Checked)								//if search feature is enabled
		{
			if (radioButton2->Checked == true)				//generate search for single year using a MAP
			{
				String^ y = comboBox3->Text->ToString();
				std::string hello = msclr::interop::marshal_as< std::string >(y);
				std::string rr = "";
				String^ q = "";

				if (wantSort)
				{
					vector<standard> temp = aObject.bubbleSort(obj.searchSingleYear(hello, data), typeSort);
					rr = aObject.printDataPoint(temp);

				}
				else
				{
					rr = aObject.printDataPoint(obj.searchSingleYear(hello, data));
				}

				if (rr == "")
				{
					MessageBox::Show("No information found for selected year.");
				}
				q = gcnew String(rr.c_str());
				richTextBox2->AppendText(q);



			}
			else if (radioButton4->Checked == true)				//search by single price, no dollar sign using MAP; includes sorting
			{
				String^ y = textBox3->Text->ToString();
				std::string price = msclr::interop::marshal_as< std::string >(y);
				double val = std::stod(price);
				string codes;

				if (wantSort)
				{
					vector<standard> sort = aObject.bubbleSort(obj.searchSinglePrice(val, data), typeSort);
					codes = aObject.printDataPoint(sort);
				}
				else
				{
					codes = aObject.printDataPoint(obj.searchSinglePrice(val, data));
				}
				if (codes == "")
				{
					MessageBox::Show("No information found for selected price.");
				}
				String^ codes_new = gcnew String(codes.c_str());
				richTextBox2->AppendText(codes_new);

			}
			else if (radioButton1->Checked == true)			//search by year range using MAP; includes sorting
			{
				String^ year1 = comboBox1->Text->ToString();
				String^ year2 = comboBox2->Text->ToString();
				string y1 = msclr::interop::marshal_as< std::string >(year1);
				string y2 = msclr::interop::marshal_as< std::string >(year2);
				int y1Num = stoi(y1);
				int y2Num = stoi(y2);
				string years;
				if (y1Num > y2Num)
				{
					MessageBox::Show("Invalid range! Please enter smaller year in first box and larger year in the second box.");
				}
				if (wantSort)
				{
					vector<standard> allYears = aObject.bubbleSort(obj.searchRangeYear(y1Num, y2Num, data), typeSort);
					years = aObject.printDataPoint(allYears);
				}
				else
				{
					years = aObject.printDataPoint(obj.searchRangeYear(y1Num, y2Num, data));
				}
				String^ years_new = gcnew String(years.c_str());
				richTextBox2->AppendText(years_new);
			}
			else if (radioButton3->Checked == true)				//searching for range of prices using MAP; includes sorting
			{
				String^ price1 = textBox1->Text->ToString();
				String^ price2 = textBox2->Text->ToString();
				string p1 = msclr::interop::marshal_as< std::string >(price1);
				string p2 = msclr::interop::marshal_as< std::string >(price2);
				float p1Num = stof(p1);
				float p2Num = stof(p2);
				string costs;
				if (p1Num > p2Num)
				{
					MessageBox::Show("Invalid range! Please enter smaller cost in first box and larger cost in the second box.");
				}
				else
				{
					if (wantSort)
					{
						vector<standard> allPrices = aObject.bubbleSort(obj.searchRangeCost(p1Num, p2Num, data), typeSort);
						costs = aObject.printDataPoint(allPrices);
					}
					else
					{
						costs = aObject.printDataPoint(obj.searchRangeCost(p1Num, p2Num, data));
					}
				}
				String^ prices_new = gcnew String(costs.c_str());
				richTextBox2->AppendText(prices_new);
			}
			else if (radioButton5->Checked == true)		//searching for ID by MAP
			{
				String^ id = textBox4->Text->ToString();
				string idText = msclr::interop::marshal_as< std::string >(id);
				string allID = aObject.printDataPoint(obj.searchSingleID(idText, data));
				String^ foundID = gcnew String(allID.c_str());
				richTextBox2->AppendText(foundID);
				if (allID == "")
				{
					MessageBox::Show("No match found for specified ID. Please try again!");
				}
			}
			else
			{
				MessageBox::Show("No search feature on the left hand side is selected. Please select and option and try again.");
			}
		}
		else
		{
		MessageBox::Show("Search nor Sort option is selected. Please select one and try again!");
		}
	}
	else
	{
	MessageBox::Show("Data structure not selected!");
	}

	auto time2 = Clock::now();
	if (checkBox5->Checked)
	{
		auto time_elapsed = time2 - time1;
		string totalTime = to_string(time_elapsed.count()/1000000000.0);
		String^ tt = gcnew String(totalTime.c_str());
		textBox5->AppendText(tt);
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	auto t1 = Clock::now();

	bool wantSort = checkBox4->Checked;					//if the user wants to sort the return data
	String^ ts = comboBox4->Text->ToString();			//how the user want to sort it
	string typeSort = msclr::interop::marshal_as< std::string >(ts);

	AllClass::Tree objT;
	string hello = "";
	Form1^ p;// = gcnew Form1(hello);
	stack<AllClass::Tree> objects = p->ConstructTrees();
	AllClass::Tree sortedTree;
	if (typeSort != "")
	{
		sortedTree = objT.TreeSort(typeSort, objects);
	}

	AllClass::Tree PriceTree = objects.top();
	objects.pop();
	AllClass::Tree subTree = objects.top();
	objects.pop();
	AllClass::Tree catTree = objects.top();
	objects.pop();
	AllClass::Tree IdTree = objects.top();
	objects.pop();
	AllClass::Tree YearTree = objects.top();

	if (checkBox1->Checked)			//if TREE is selected for sort/search functionality
	{
		if (checkBox3->Checked)								//if search feature is enabled
		{
			if (radioButton4->Checked == true)				//search by single price, no dollar sign using TREE; includes sort
			{
				String^ t = textBox3->Text->ToString();
				std::string price = msclr::interop::marshal_as< std::string >(t);
				double val = std::stod(price);
				if (PriceTree.root == nullptr)
				{
					MessageBox::Show("price tree is null");
				}
				else if (wantSort)
				{
					string SingleTree1 = "";
					if ((typeSort == "revisionYear") || (typeSort == "subcategory"))
					{
						objT.PriceSortSearch(sortedTree.root, val);
						SingleTree1 = aObject.printDataPoint(objT.searchFind);
					}
					else
					{
						objT.singlePriceSearch((sortedTree.root), val);
						SingleTree1 = aObject.printDataPoint(objT.searchPrice);
					}
					
					String^ prices_tree1 = gcnew String(SingleTree1.c_str());
					richTextBox2->AppendText(prices_tree1);
					if (prices_tree1 == "")
					{
						MessageBox::Show("No information found for price.");
					}
				}
				else {
					objT.singlePriceSearch(IdTree.root, val);
					string SingleTree2 = aObject.printDataPoint(objT.searchPrice);
					String^ prices_tree2 = gcnew String(SingleTree2.c_str());
					richTextBox2->AppendText(prices_tree2);
					if (prices_tree2 == "")
					{
						MessageBox::Show("No information found for price.");
					}
				}
			}
			else if (radioButton3->Checked == true)			//checking price range using TREE; includes sort
			{
				String^ lPrice = textBox1->Text->ToString();
				String^ uPrice = textBox2->Text->ToString();
				string lowerPrice = msclr::interop::marshal_as< std::string >(lPrice);
				string upperPrice = msclr::interop::marshal_as< std::string >(uPrice);
				double lp = std::stod(lowerPrice);
				double up = std::stod(upperPrice);
				if (lp > up)
				{
					MessageBox::Show("Error! Please provide an appropriate range.");
				}
				else if (wantSort)
				{
					if ((typeSort == "revisionYear") || (typeSort == "subcategory"))
					{
						objT.PriceRangeSortSearch(sortedTree.root, lp, up);
					}
					else
					{
						objT.priceRangePrint(sortedTree.root, lp, up);
					}
					string singlePrice = aObject.printDataPoint(objT.searchFind);
					String^ single_prices = gcnew String(singlePrice.c_str());
					richTextBox2->AppendText(single_prices);
				}
				else
				{
					objT.priceRangePrint(IdTree.root, lp, up);
					string singlePrice = aObject.printDataPoint(objT.searchFind);
					String^ single_prices = gcnew String(singlePrice.c_str());
					richTextBox2->AppendText(single_prices);
				}

			}
			else if (radioButton1->Checked == true)				//checking year range using TREE; includes sort
			{
				String^ l = comboBox1->Text->ToString();
				String^ u = comboBox2->Text->ToString();
				string lower = msclr::interop::marshal_as< std::string >(l);
				string upper = msclr::interop::marshal_as< std::string >(u);

				if (wantSort)
				{
					string result = "";
					if (typeSort == "subcategory")									//search with sorted subcategory tree
					{
						result = objT.yearRangeSortedSubCat(sortedTree.root, lower, upper);
					}
					else															//search with other sorted tree
					{
						objT.yearRangeSortedSearch(sortedTree.root, lower, upper);
						result = aObject.printDataPoint(objT.searchFind);
					}

					String^ textResult = gcnew String(result.c_str());
					richTextBox2->AppendText(textResult);
					if (textResult == "")
					{
						MessageBox::Show("No information found for year range!");
					}
				}
				else
				{
					if (YearTree.root == NULL)
					{
						MessageBox::Show("year tree root is null");
					}
					string result1 = "";
					objT.yearRangeSearch(YearTree.root, lower, upper);
					result1 = aObject.printDataPoint(objT.searchFind);
					String^ textResult = gcnew String(result1.c_str());
					richTextBox2->AppendText(textResult);
					if (textResult == "")
					{
						MessageBox::Show("No information found for year range!");
					}
				}
			}
			else if (radioButton2->Checked == true)			//checking single year using TREE; includes sort
			{
				String^ year = comboBox3->Text->ToString();
				string singleYear = msclr::interop::marshal_as< std::string >(year);
				if (wantSort)
				{
					string singleYearResult = "";
					if (typeSort == "cost")
					{
						objT.SingleYearSortSearch(sortedTree.root, singleYear);
						singleYearResult = aObject.printDataPoint(objT.searchFind);
					}
					else if (typeSort == "subcategory")
					{
						singleYearResult = objT.singleYearSortedSubCat(subTree.root, singleYear);
					}
					else
					{
						objT.singleYearSearch(sortedTree.root, singleYear);
						singleYearResult = aObject.printDataPoint(objT.searchFind);
					}
					String^ yearText = gcnew String(singleYearResult.c_str());
					richTextBox2->AppendText(yearText);
					if (singleYearResult == "")
					{
						MessageBox::Show("No information found for year range!");
					}
					
				}
				else
				{
					string singleYearResult1 = "";
					objT.singleYearSearch(YearTree.root, singleYear);
					singleYearResult1 = aObject.printDataPoint(objT.searchFind);
					String^ yearText1 = gcnew String(singleYearResult1.c_str());
					richTextBox2->AppendText(yearText1);
					if (singleYearResult1 == "")
					{
						MessageBox::Show("No information found for year range!");
					}
				}

			}
			else if (radioButton5->Checked == true)			//search by ID using TREE
			{
				String^ i = textBox4->Text->ToString();
				string ID = msclr::interop::marshal_as< std::string >(i);
				if (wantSort)
				{
					if ((typeSort == "subcategory") || (typeSort == "revisionYear"))
					{
						objT.IdSortSearch(sortedTree.root, ID);
						string sId = aObject.printDataPoint(objT.searchFind);
						String^ allHolder = gcnew String(sId.c_str());
						richTextBox2->AppendText(allHolder);
					}
					else
					{
						AllClass::Node* id = objT.IDSearch(sortedTree.root, ID, false);
						if (id == nullptr)
						{
							MessageBox::Show("No matching standard found for ID.");
						}
						standard ii = id->item;
						vector<standard> IdHolder;
						IdHolder.push_back(ii);
						string singleID = "";
						singleID = aObject.printDataPoint(IdHolder);
						String^ holder = gcnew String(singleID.c_str());
						richTextBox2->AppendText(holder);
					}
				}
				else
				{
					AllClass::Node* id = objT.IDSearch(IdTree.root, ID, false);
					if (id == nullptr)
					{
						MessageBox::Show("No matching standard found for ID.");
					}
					else
					{
						standard ii = id->item;
						vector<standard> IdHolder;
						IdHolder.push_back(ii);
						string singleID1 = aObject.printDataPoint(IdHolder);
						String^ holder1 = gcnew String(singleID1.c_str());
						richTextBox2->AppendText(holder1);
					}
				}
			}
			else
			{
			MessageBox::Show("No search feature on the left hand side is selected. Please select and option and try again.");
			}
		}
		else
		{
		MessageBox::Show("Search nor Sort option is selected. Please select one and try again!");
		}
	}
	else
	{
	MessageBox::Show("Data structure not selected!");
	}
	auto t2 = Clock::now();
	if (checkBox5->Checked)
	{
		auto time_elapsedt = t2 - t1;
		string totalTimeTree = to_string(time_elapsedt.count() / 1000000000.0);
		String^ tt = gcnew String(totalTimeTree.c_str());
		textBox6->AppendText(tt);
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Clear();
	textBox6->Clear();
	checkBox5->Checked = false;
}



};
}
