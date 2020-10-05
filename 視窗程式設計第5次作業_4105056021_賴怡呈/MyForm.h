#pragma once
#include <iomanip>
#include <string>
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "readfile.h"
#include "input.h"
#include <msclr\marshal.h>
#define PI 3.14159265

namespace 視窗程式設計第5次作業_4105056021_賴怡呈 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace msclr::interop;
	
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  讀檔ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::ToolStripMenuItem^  手動輸入ToolStripMenuItem;












	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->讀檔ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->手動輸入ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(2, 90);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(48, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"RAD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(52, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"HYP";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(100, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"F-E";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Enabled = false;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(2, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"MC";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(52, 126);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"MR";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(102, 126);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"M+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(152, 126);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 30);
			this->button7->TabIndex = 6;
			this->button7->Text = L"M-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->Location = System::Drawing::Point(202, 126);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 30);
			this->button8->TabIndex = 7;
			this->button8->Text = L"MS";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"華康POP1體W7", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->Location = System::Drawing::Point(252, 126);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(48, 30);
			this->button9->TabIndex = 8;
			this->button9->Text = L"M▾";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button10->Cursor = System::Windows::Forms::Cursors::Default;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button10->Location = System::Drawing::Point(2, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 40);
			this->button10->TabIndex = 9;
			this->button10->Text = L"x²";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button11->Location = System::Drawing::Point(64, 162);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 40);
			this->button11->TabIndex = 10;
			this->button11->Text = L"xʸ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button12->Location = System::Drawing::Point(127, 162);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 40);
			this->button12->TabIndex = 11;
			this->button12->Text = L"sin";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button13->Location = System::Drawing::Point(189, 162);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 40);
			this->button13->TabIndex = 12;
			this->button13->Text = L"cos";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button14->Location = System::Drawing::Point(251, 162);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 40);
			this->button14->TabIndex = 13;
			this->button14->Text = L"tan";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button15->Location = System::Drawing::Point(2, 204);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 40);
			this->button15->TabIndex = 14;
			this->button15->Text = L"√";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button16->Location = System::Drawing::Point(64, 204);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 40);
			this->button16->TabIndex = 15;
			this->button16->Text = L"10ˣ";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button17->Location = System::Drawing::Point(127, 204);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 40);
			this->button17->TabIndex = 16;
			this->button17->Text = L"log";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button18->Enabled = false;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button18->Location = System::Drawing::Point(189, 204);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 40);
			this->button18->TabIndex = 17;
			this->button18->Text = L"Exp";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button19->Location = System::Drawing::Point(251, 204);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 40);
			this->button19->TabIndex = 18;
			this->button19->Text = L"Mod";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"華康娃娃體", 14));
			this->button20->Location = System::Drawing::Point(2, 246);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 40);
			this->button20->TabIndex = 19;
			this->button20->Text = L"↑";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button21->Location = System::Drawing::Point(64, 246);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(60, 40);
			this->button21->TabIndex = 20;
			this->button21->Text = L"CE";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button22->Location = System::Drawing::Point(127, 246);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(60, 40);
			this->button22->TabIndex = 21;
			this->button22->Text = L"C";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button23->Location = System::Drawing::Point(189, 246);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(60, 40);
			this->button23->TabIndex = 22;
			this->button23->Text = L"⌫";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Yu Gothic Light", 20));
			this->button24->Location = System::Drawing::Point(251, 246);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(60, 40);
			this->button24->TabIndex = 23;
			this->button24->Text = L"÷";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 14));
			this->button25->Location = System::Drawing::Point(2, 288);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(60, 40);
			this->button25->TabIndex = 24;
			this->button25->Text = L"π";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button26->Location = System::Drawing::Point(64, 288);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(60, 40);
			this->button26->TabIndex = 25;
			this->button26->Text = L"7";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button27->Location = System::Drawing::Point(127, 288);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(60, 40);
			this->button27->TabIndex = 26;
			this->button27->Text = L"8";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button28->Location = System::Drawing::Point(189, 288);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(60, 40);
			this->button28->TabIndex = 27;
			this->button28->Text = L"9";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Arial Black", 12));
			this->button29->Location = System::Drawing::Point(251, 288);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(60, 40);
			this->button29->TabIndex = 28;
			this->button29->Text = L"✕";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button30->Location = System::Drawing::Point(2, 330);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(60, 40);
			this->button30->TabIndex = 29;
			this->button30->Text = L"n!";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button31->Location = System::Drawing::Point(64, 330);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(60, 40);
			this->button31->TabIndex = 30;
			this->button31->Text = L"4";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button32->Location = System::Drawing::Point(127, 330);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(60, 40);
			this->button32->TabIndex = 31;
			this->button32->Text = L"5";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button33->Location = System::Drawing::Point(189, 330);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(60, 40);
			this->button33->TabIndex = 32;
			this->button33->Text = L"6";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Yu Gothic Light", 20));
			this->button34->Location = System::Drawing::Point(251, 330);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(60, 40);
			this->button34->TabIndex = 33;
			this->button34->Text = L"-";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semilight", 17));
			this->button35->Location = System::Drawing::Point(2, 372);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(60, 40);
			this->button35->TabIndex = 34;
			this->button35->Text = L"±";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button36->Location = System::Drawing::Point(64, 372);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(60, 40);
			this->button36->TabIndex = 35;
			this->button36->Text = L"1";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button37->Location = System::Drawing::Point(127, 372);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(60, 40);
			this->button37->TabIndex = 36;
			this->button37->Text = L"2";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button38->Location = System::Drawing::Point(189, 372);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(60, 40);
			this->button38->TabIndex = 37;
			this->button38->Text = L"3";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button39->Cursor = System::Windows::Forms::Cursors::Default;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 15));
			this->button39->Location = System::Drawing::Point(251, 372);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(60, 40);
			this->button39->TabIndex = 38;
			this->button39->Text = L"＋";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button40->Location = System::Drawing::Point(2, 414);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(60, 40);
			this->button40->TabIndex = 39;
			this->button40->Text = L"(";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button41->Location = System::Drawing::Point(64, 414);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(60, 40);
			this->button41->TabIndex = 40;
			this->button41->Text = L")";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->button42->Location = System::Drawing::Point(127, 414);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(60, 40);
			this->button42->TabIndex = 41;
			this->button42->Text = L"0";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button43->Location = System::Drawing::Point(189, 414);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(60, 40);
			this->button43->TabIndex = 42;
			this->button43->Text = L"•";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Yu Gothic Light", 16));
			this->button44->Location = System::Drawing::Point(251, 414);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(60, 40);
			this->button44->TabIndex = 43;
			this->button44->Text = L"=";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(313, 24);
			this->menuStrip1->TabIndex = 44;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->讀檔ToolStripMenuItem,
					this->手動輸入ToolStripMenuItem
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->toolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->toolStripMenuItem1->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(26, 20);
			this->toolStripMenuItem1->Text = L"≡";
			// 
			// 讀檔ToolStripMenuItem
			// 
			this->讀檔ToolStripMenuItem->Name = L"讀檔ToolStripMenuItem";
			this->讀檔ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->讀檔ToolStripMenuItem->Text = L"讀檔";
			this->讀檔ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::讀檔ToolStripMenuItem_Click);
			// 
			// 手動輸入ToolStripMenuItem
			// 
			this->手動輸入ToolStripMenuItem->Name = L"手動輸入ToolStripMenuItem";
			this->手動輸入ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->手動輸入ToolStripMenuItem->Text = L"手動輸入";
			this->手動輸入ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::手動輸入ToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(48, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 15);
			this->textBox1->TabIndex = 45;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"工程計算機";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 23));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox2->Location = System::Drawing::Point(0, 50);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(309, 36);
			this->textBox2->TabIndex = 46;
			this->textBox2->TabStop = false;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 12));
			this->textBox3->Location = System::Drawing::Point(0, 27);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(309, 19);
			this->textBox3->TabIndex = 47;
			this->textBox3->TabStop = false;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"華康粗圓體", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(1, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(310, 292);
			this->label1->TabIndex = 48;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Visible = false;
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button45->Cursor = System::Windows::Forms::Cursors::Default;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button45->Location = System::Drawing::Point(2, 162);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(60, 40);
			this->button45->TabIndex = 49;
			this->button45->Text = L"x³";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Visible = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button46->Cursor = System::Windows::Forms::Cursors::Default;
			this->button46->Enabled = false;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 11));
			this->button46->Location = System::Drawing::Point(64, 162);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(60, 40);
			this->button46->TabIndex = 50;
			this->button46->Text = L"y√x";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Visible = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button47->Cursor = System::Windows::Forms::Cursors::Default;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button47->Location = System::Drawing::Point(127, 162);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(60, 40);
			this->button47->TabIndex = 51;
			this->button47->Text = L"asin";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Visible = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button48->Cursor = System::Windows::Forms::Cursors::Default;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button48->Location = System::Drawing::Point(189, 162);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(60, 40);
			this->button48->TabIndex = 52;
			this->button48->Text = L"acos";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Visible = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button49->Cursor = System::Windows::Forms::Cursors::Default;
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button49->Location = System::Drawing::Point(251, 162);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(60, 40);
			this->button49->TabIndex = 53;
			this->button49->Text = L"atan";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Visible = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button50->Cursor = System::Windows::Forms::Cursors::Default;
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 12));
			this->button50->Location = System::Drawing::Point(2, 204);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(60, 40);
			this->button50->TabIndex = 54;
			this->button50->Text = L"1/x";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Visible = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button51->Cursor = System::Windows::Forms::Cursors::Default;
			this->button51->FlatAppearance->BorderSize = 0;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button51->Location = System::Drawing::Point(64, 204);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(60, 40);
			this->button51->TabIndex = 55;
			this->button51->Text = L"eˣ";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Visible = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button52->Cursor = System::Windows::Forms::Cursors::Default;
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button52->Location = System::Drawing::Point(127, 204);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(60, 40);
			this->button52->TabIndex = 56;
			this->button52->Text = L"ln";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Visible = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button53->Cursor = System::Windows::Forms::Cursors::Default;
			this->button53->Enabled = false;
			this->button53->FlatAppearance->BorderSize = 0;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button53->Location = System::Drawing::Point(189, 204);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(60, 40);
			this->button53->TabIndex = 57;
			this->button53->Text = L"dms";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Visible = false;
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button54->Cursor = System::Windows::Forms::Cursors::Default;
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 13));
			this->button54->Location = System::Drawing::Point(251, 204);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(60, 40);
			this->button54->TabIndex = 58;
			this->button54->Text = L"deg";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(313, 456);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//ReadKey()函数的参数true导致按键不在命令行上显示，flase则使对应于按键的字符显示
		//ConsoleKeyInfo keyPress = Console::ReadKey(true);

		public:
		String^ str = gcnew String("");
		int^ count = gcnew int(0);
		String^ memorystr = gcnew String("");
		int^ M = gcnew int(1);				//看memory裡有無東西
		int^ arrowup = gcnew int(1);		//按了箭頭後的情況
		int^ extrac = gcnew int(1);			//看是不是在括號裡面
		int^ rad = gcnew int(1);			//1-rad , -1-deg
		double^ afterconvert = gcnew double(1);	//轉換後的角度
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		*rad *= (-1);
		if (*rad == 1)
			button1->Text = "RAD";
		else if (*rad == -1)
			button1->Text = "DEG";
	
	}
private: System::Void 工程ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 7;
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 8;
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 9;
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 4;
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 5;
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 6;
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 1;
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 2;
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 3;
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += 0;
	//str += 0;
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += PI;
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "+";
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
	else
		textBox2->Text += "+";
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "-";
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
	else
	{
		textBox2->Text += "-";
	}
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "÷";
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
	else
	{
		textBox2->Text += "÷";
	}
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "×";
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
	else
	{
		textBox2->Text += "×";
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "%";
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
	else
	{
		textBox2->Text += "%";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "^" + 2;
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "^";
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += 10 + "^" +textBox2->Text;
		str = "";
		textBox2->Text = "";
		*extrac = 1;
	}
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += ".";
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (*extrac == 1)
	{
		str = "sqrt(" + textBox2->Text + ")";
	}	
	else
		str = "sqrt" + str;
	textBox2->Text = str;
	
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
		str = "sin(" + textBox2->Text + ")";
	else
		str = "sin" + str;
	textBox2->Text = str;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
		str = "cos(" + textBox2->Text + ")";
	else
		str = "cos" + str;
	textBox2->Text = str;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
		str = "tan(" + textBox2->Text + ")";
	else
		str = "tan" + str;
	textBox2->Text = str;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
		str = "log(" + textBox2->Text + ")";
	else
		str = "log" + str;
	textBox2->Text = str;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
		str = "exp(" + textBox2->Text + ")";
	else
		str = "exp" + str;
	textBox2->Text = str;
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
		str = "exp(" + textBox2->Text + ")";
	else
		str = "exp" + str;
	textBox2->Text = str;
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if ((*count == 0 && *extrac == -1) || *extrac == 1)
	{
		textBox3->Text += textBox2->Text + "^" + 3;
		str = "";
		textBox2->Text = "";
	}
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text += textBox2->Text + "yroot";
	str = "";
	textBox2->Text = "";
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
	{
		str = "asin(" + textBox2->Text + ")";
	}
	else
		str = "asin" + str;
	textBox2->Text = str;
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
	{
		str = "acos(" + textBox2->Text + ")";
	}
	else
		str = "acos" + str;
	textBox2->Text = str;
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
	{
		str = "atan(" + textBox2->Text + ")";
	}
	else
		str = "atan" + str;
	textBox2->Text = str;
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
	{
		str = "1/(" + textBox2->Text + ")";
	}
	else
		str = "1/" + str;
	textBox2->Text = str;
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
	{
		str = "ln(" + textBox2->Text + ")";
	}
	else
		str = "ln" + str;
	textBox2->Text = str;

}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (textBox2->Text->Substring(0, 1) == "-")
		str = textBox2->Text->Substring(1, textBox2->Text->Length-1);
	else
		str = "-" + textBox2->Text;
	textBox2->Text = str;
}
//情除下排
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = "";
	str = "";
	*extrac = 1;
	*count = 0;
	button40->Text = "(";
}
//上下排皆清除
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = "";
	textBox3->Text = "";
	str = "";
	*extrac = 1;
	*count = 0;
	button40->Text = "(";
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	if (textBox2->Text == "")
		textBox2->Text = "0";
	if (*extrac == 1)
	{
		str = "(" + textBox2->Text + ")!";
	}
	else
		str = str + "!";
	textBox2->Text = str;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	double abc = Double::Parse(textBox2->Text);
	textBox3->Text += abc.ToString("e");
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "error")
		textBox2->Text = "";
	textBox2->Text += "(";
	//str += "(";
	(*count)++;
	button40->Text = "(" + *count;
	*extrac = -1;
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text += ")";
	//str += ")";
	(*count)--;
	if(*count != 0)
		button40->Text = "(" + *count;
	else
	{
		button40->Text = "(";
		//*extrac = 1;
		str = textBox2->Text;
	}
}

public:
	int^ check = gcnew int(0);			//0沒錯，1有錯
	double^ ans = gcnew double;
//result
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text += textBox2->Text;
	*ans = *calculate(textBox3->Text);
	if (*check == 1)
		textBox2->Text = "error";
	else
		textBox2->Text = "" + *ans;
	label1->Text += "\r\n";
	*check = 0;
	textBox3->Text = "";
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	*arrowup = (*arrowup)*(-1);
	if (*arrowup == 1)
	{
		button45->Visible = false;	button46->Visible = false;
		button47->Visible = false;	button48->Visible = false;
		button49->Visible = false;	button50->Visible = false;
		button51->Visible = false;	button52->Visible = false;
		button53->Visible = false;	button54->Visible = false;
	}
	else
	{
		button45->Visible = true;	button46->Visible = true;
		button47->Visible = true;	button48->Visible = true;
		button49->Visible = true;	button50->Visible = true;
		button51->Visible = true;	button52->Visible = true;
		button53->Visible = true;	button54->Visible = true;
	}

}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = textBox2->Text->Substring(0, textBox2->Text->Length-1);
}


//memory
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if(memorystr != "")
		memorystr += "+" + textBox2->Text;
	else
		memorystr = textBox2->Text;
	button5->Enabled = true;
	button4->Enabled = true;
	button9->Enabled = true;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	memorystr += "-" + textBox2->Text;
	button5->Enabled = true;
	button4->Enabled = true;
	button9->Enabled = true;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if(*M == 1)
		label1->Visible = true;
	else
		label1->Visible = false;
	label1->Text = "" + calculate(memorystr);
	*M = (*M)*(-1);
}
//MC
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	button5->Enabled = false;
	button4->Enabled = false;
	button9->Enabled = false;
	memorystr = "";
}
//MR
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = "" + calculate(memorystr);
}
//MS
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	memorystr = textBox2->Text;
}
//讀檔
private: System::Void 讀檔ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	readfile^ f = gcnew readfile();
	f->ShowDialog();
}
//手動輸入
private: System::Void 手動輸入ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	input^ f = gcnew input();
	f->ShowDialog();
}

		 public:
		 int^ max = gcnew int(100);
		 
		double^ calculate(String^ buffer)
		{
			array<String^>^  str = gcnew array<String^>(100);
			for (int^ o = 0; *o < buffer->Length; (*o)++)
				str[*o] = buffer->Substring(*o,1);

			str[buffer->Length] = "\0";
			eatspaces(str);                    // Remove blanks from input

			if (!buffer)                        // Empty line ends calculator
				return 0.0;
			double^ res = gcnew double(0.0);
			*res = *expr(str);
			return  res;     // Output value of expression
				
		}

		 // Function to eliminate spaces from a string
		 void eatspaces(array<String^>^  str)
		 {
			 int^ i(gcnew int(0));                              // 'Copy to' index to string
			 int^ j(gcnew int(0));                              // 'Copy from' index to string
			 
			 while ((str[*i] = str[(*j)++]) != nullptr)  // Loop while character
												   // copied is not \0
				 if (str[*i] != " ")                    // Increment i as long as
					 (*i)++;                                  // character is not a space
			 delete i; delete j;
			 return;
		 }

		 // Function to evaluate an arithmetic expression
		 double^ expr(array<String^>^  str)
		 {
			 double^ value = gcnew double(0.0);                   // Store result here
			 int^ index = gcnew int(0);                        // Keeps track of current character position
			 *value = *term(str, index);            // Get first term

			 for (;;)                              // Indefinite loop, all exits inside
			 {
				 switch (*PtrToStringChars(str[(*index)++]))           // Choose action based on current character
				 {
				 case '\0':                       // We're at the end of the string
					 return value;                 // so return what we have got

				 case '+':                        // + found so add in the
					 *value += *term(str, index);    // next term
					 break;

				 case '-':                        // - found so subtract
					 *value -= *term(str, index);    // the next term
					 break;

				 default:                         // If we reach here the string
					 MyForm1^ f = gcnew MyForm1();
					 f->ShowDialog();
					 *check = 1;
					 return value;
				 }
			 }
		 }

		 // Function to get the value of a term
		 double^ term(array<String^>^ str, int^ index)
		 {
			 double^ value = gcnew double(0.0);                   // Somewhere to accumulate 
																// the result

			 *value = *number(str, index);          // Get the first number in the term

													// Loop as long as we have a good operator
			 while (true)
			 {

				 if (str[*index] == "*" || str[*index] == "×")          // If it's multiply,
				 {
					 ++(*index);
					 *value *= *number(str, index);   // multiply by next number
				 }
				 else if (str[*index] == "/" || str[*index] == "÷")     // If it's divide,
				 {
					 ++(*index);
					 *value /= *number(str, index);   // divide by next number
				 }
				 else if (str[*index] == "%")
				 {
					 ++(*index);
					 *value = std::fmod(*value, *number(str, index));			// mod by next number(fmod可用在double)
				 }
				 else
					 break;
			 }

			 return value;                        // We've finished, so return what 
												  // we've got
		 }

		 // Function to recognize a number in a string
		 double^ number(array<String^>^ str, int^ index)
		 {
			 double^ value = gcnew double;                   // Store the resulting value
			 array<String^>^ psubstr = gcnew array<String^>(100);            // Pointer for substring
			 
			 if (str[*index] == "(")            // Start of parentheses
			 {
				 ++(*index);
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *value = *expr(psubstr);             // Get the value of the substring
				 *value = *othersym(value, str, index);

				 return value;                      // Return substring value
			 }
			
			 // There must be at least one digit...
			 if (str[*index] == "e" &&  str[(*index + 1)] == "x" && str[(*index + 2)] == "p")			//exp(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *value = exp(*expr(psubstr));
			 }
			 else if (str[*index] == "s" &&  str[(*index + 1)] == "i" && str[(*index + 2)] == "n")	//sin(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI/ 180;
				 *value = sin(*afterconvert);
			 }
			 else if (str[*index] == "a" &&  str[(*index + 1)] == "s" && str[(*index + 2)] == "i" && str[(*index + 3)] == "n")	//sin(x)
			 {
				 *index += 5;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = asin(*afterconvert);
			 }
			 else if (str[*index] == "c" &&   str[(*index + 1)] == "o" && str[(*index + 2)] == "s")	//cos(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = cos(*afterconvert);
			 }
			 else if (str[*index] == "a" &&  str[(*index + 1)] == "c" && str[(*index + 2)] == "o" && str[(*index + 3)] == "s")	//sin(x)
			 {
				 *index += 5;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = acos(*afterconvert);
			 }
			 else if (str[*index] == "t" &&   str[(*index + 1)] == "a" && str[(*index + 2)] == "n")	//tan(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = tan(*afterconvert);
			 }
			 else if (str[*index] == "a" &&  str[(*index + 1)] == "t" && str[(*index + 2)] == "a" && str[(*index + 3)] == "n")	//sin(x)
			 {
				 *index += 5;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = atan(*afterconvert);
			 }
			 else if (str[*index] == "c" &&   str[(*index + 1)] == "o" && str[(*index + 2)] == "t")	//cot(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = 1 / tan(*afterconvert);
			 }
			 else if (str[*index] == "s" &&   str[(*index + 1)] == "e" && str[(*index + 2)] == "c")	//sec(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = 1 / cos(*afterconvert);
			 }
			 else if (str[*index] == "c" &&  str[(*index + 1)] == "s" && str[(*index + 2)] == "c")	//csc(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *afterconvert = *expr(psubstr);
				 if (*rad == -1)
					 *afterconvert = *afterconvert* PI / 180;
				 *value = 1 / sin(*afterconvert);
			 }
			 else if (str[*index] == "s" &&  str[(*index + 1)] == "q" && str[(*index + 2)] == "r" && str[(*index + 3)] == "t")	//sqrt(x)
			 {
				 *index += 5;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *value = sqrt(*expr(psubstr));
			 }
			 else if (str[*index] == "l" && str[(*index + 1)] == "o" &&  str[(*index + 2)] == "g")	//log(x)
			 {
				 *index += 4;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *value = log10(*expr(psubstr));
			 }
			 else if (str[*index] == "l" &&  str[(*index + 1)] == "n")	//ln(x)
			 {
				 *index += 3;
				 psubstr = extract(str, index);   // Extract substring in brackets
				 *value = log(*expr(psubstr));
			 }
			 else if (!isdigit(*PtrToStringChars(str[*index])))
			 { // There's no digits so input is junk...
				 if (str[*index] == "-")
				 {
					 (*index)++;
					 *value = -*number(str, index);
					 return value;
				 }
				 MyForm1^ f = gcnew MyForm1();
				 f->ShowDialog();
				 *check = 1;
				 return value;
			 }
			
			 while (isdigit(*PtrToStringChars(str[*index])))       // Loop accumulating leading digits
				 *value = 10 * (*value) + (*PtrToStringChars(str[(*index)++]) - '0');

			 // Not a digit when we get to here
			 if (str[*index] != ".")            // so check for decimal point
			 {
				 *value = *othersym(value, str, index);

				 return value;                      // and if not, return value
			 }


			 double* factor = new double(1.0);                  // Factor for decimal places
			 while (isdigit(*PtrToStringChars(str[(++(*index))])))   // Loop as long as we have digits
			 {
				 *factor *= 0.1;                     // Decrease factor by factor of 10
				 *value = *value + (*PtrToStringChars(str[*index]) - '0')* *factor;   // Add decimal place
			 }
			 *value = *othersym(value, str, index);

			 return value;                        // On loop exit we are done
		 }

		 // Function to extract a substring between parentheses 
		 // (requires cstring)
		 array<String^>^ extract(array<String^>^ str, int^ index)
		 {
			 array<String^>^ buffer = gcnew array<String^>(100);                   // Temporary space for substring
			 array<String^>^ pstr;                // Pointer to new string for return
			 int^ numL = gcnew int(0);                        // Count of left parentheses found
			 *numL = 0;
			 int^ bufindex = gcnew int(0);                // Save starting value for index
			 *bufindex = 0;
			 *bufindex = *index;

			 do
			 {
				 buffer[(*index - *bufindex)] = str[*index];
				 switch (*PtrToStringChars(buffer[(*index - *bufindex)]))
				 {
				 case ')':
					 if (0 == *numL)
					 {
						 size_t* size = new size_t;
						 *size = *index - *bufindex;
						 buffer[(*index - *bufindex)] = "\0";  // Replace ')' with '\0' 
						 ++(*index);
						 pstr = gcnew array<String^>(*index - *bufindex);
						 if (!pstr)
						 {
							 MyForm2^ f = gcnew MyForm2();
							 f->ShowDialog();
							 *check = 1;
							 return pstr;
						 }
						 for (int^ o = 0; *o < *size + 1; (*o)++)
						 {
							 pstr[*o] = buffer[*o];
						 }
						// strcpy_s(pstr, (*index - *bufindex), buffer); // Copy substring to new memory
																	   //delete numL; delete bufindex; delete[] buffer;
						 return pstr;                 // Return substring in new memory
					 }
					 else
						 (*numL)--;                      // Reduce count of '(' to be matched
					 break;

				 case '(':
					 (*numL)++;                        // Increase count of '(' to be 
													   // matched
					 break;
				 }
			 } while (str[(*index)++] != "\0"); // Loop - don't overrun end of string

			 MyForm3^ f = gcnew MyForm3();
			 f->ShowDialog();
			 exit(1);
		 }

		 double^ othersym(double^ value, array<String^>^ str, int^ index)
		 {
			 if (str[*index] == "+" && str[(*index + 1)] == "+")		//x++
			 {
				 (*value)++;
				 *index += 2;
			 }
			 else if (str[*index] == "-" && str[(*index + 1)] == "-") //x--
			 {
				 (*value)--;
				 *index += 2;
			 }

			 if (str[*index] == "!")				//x!
			 {
				 int* i(new int(0));
				 double* sum(new double(1.0));
				 for (*i = 1; *i <= *value; (*i)++)
					 *sum *= *i;
				 *value = *sum;
				 ++(*index);
				 if (str[*index] == "+" && str[(*index + 1)] == "+")		//x++
				 {
					 (*value)++;
					 *index += 2;
				 }
				 else if (str[*index] == "-" && str[(*index + 1)] == "-") //x--
				 {
					 (*value)--;
					 *index += 2;
				 }
			 }


			 if (str[*index] == "^")				//x^y
			 {
				 ++(*index);
				 *value = pow(*value, *number(str, index));
			 }

			 return value;
		 }
		 

};
}
