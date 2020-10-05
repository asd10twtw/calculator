#pragma once
#include <msclr\marshal.h>
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"

namespace 視窗程式設計第5次作業_4105056021_賴怡呈 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;

	/// <summary>
	/// readfile 的摘要
	/// </summary>
	public ref class readfile : public System::Windows::Forms::Form
	{
	public:
		readfile(void)
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
		~readfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;

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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::GrayText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(106, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(535, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"選擇開啟舊檔";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &readfile::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->Enabled = false;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"華康粗黑體", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(720, 230);
			this->label1->TabIndex = 1;
			// 
			// readfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(744, 315);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"readfile";
			this->Text = L"readfile";
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		int^ check = gcnew int(0);			//0沒錯，1有錯
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::OpenFileDialog^ f = gcnew System::Windows::Forms::OpenFileDialog;
		/*if (f->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			f->FileName;
			MessageBox::Show(f->FileName);
		}*/
		
		DirectoryInfo^ dir = gcnew DirectoryInfo(System::Windows::Forms::Application::StartupPath);
		f->InitialDirectory = dir->Parent->FullName;
		f->ShowDialog();
		bool^ bReturn = System::IO::File::Exists(f->FileName);
		// 讀取檔案
		StreamReader^ din = File::OpenText(f->FileName);

		String^ delimStr = " ";
		array<Char>^ delimiter = delimStr->ToCharArray();
		String^ str;
		int^ count = 0;
		array<String^>^ words = gcnew array<String^>{};
		double^ ans = gcnew double;
		while ((str = din->ReadLine()) != nullptr)
		{
			*ans = *calculate(str);
			if (*check == 1)
				label1->Text += str + "	 =	 " + "error";
			else
				label1->Text += str + "	 =	 " + *ans;
			label1->Text += "\r\n";
			*check = 0;
		}

		din->Close();
	}

			 public:
				 int^ max = gcnew int(100);
				 
				 double^ calculate(String^ buffer)
				 {
					 array<String^>^  str = gcnew array<String^>(100);
					 for (int^ o = 0; *o < buffer->Length; (*o)++)
						 str[*o] = buffer->Substring(*o, 1);

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
							 
							 //exit(1);
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
					 if (str[*index] == "[")            // Start of parentheses
					 {
						 ++(*index);
						 psubstr = extract1(str, index);   // Extract substring in brackets
						 *value = *expr(psubstr);             // Get the value of the substring
						 *value = *othersym(value, str, index);
							                 // Clean up the free store
						 return value;                      // Return substring value
					 }
					 if (str[*index] == "{")            // Start of parentheses
					 {
						 ++(*index);
						 psubstr = extract2(str, index);   // Extract substring in brackets
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
						 *value = sin(*expr(psubstr));
					 }
					 else if (str[*index] == "a" &&  str[(*index + 1)] == "s" && str[(*index + 2)] == "i" && str[(*index + 3)] == "n")	//sin(x)
					 {
						 *index += 5;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = asin(*expr(psubstr));
					 }
					 else if (str[*index] == "c" &&   str[(*index + 1)] == "o" && str[(*index + 2)] == "s")	//cos(x)
					 {
						 *index += 4;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = cos(*expr(psubstr));
					 }
					 else if (str[*index] == "a" &&  str[(*index + 1)] == "c" && str[(*index + 2)] == "o" && str[(*index + 3)] == "s")	//sin(x)
					 {
						 *index += 5;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = acos(*expr(psubstr));
					 }
					 else if (str[*index] == "t" &&   str[(*index + 1)] == "a" && str[(*index + 2)] == "n")	//tan(x)
					 {
						 *index += 4;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = tan(*expr(psubstr));
					 }
					 else if (str[*index] == "a" &&  str[(*index + 1)] == "t" && str[(*index + 2)] == "a" && str[(*index + 3)] == "n")	//sin(x)
					 {
						 *index += 5;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = atan(*expr(psubstr));
					 }
					 else if (str[*index] == "c" &&   str[(*index + 1)] == "o" && str[(*index + 2)] == "t")	//cot(x)
					 {
						 *index += 4;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = 1 / tan(*expr(psubstr));
					 }
					 else if (str[*index] == "s" &&   str[(*index + 1)] == "e" && str[(*index + 2)] == "c")	//sec(x)
					 {
						 *index += 4;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = 1 / cos(*expr(psubstr));
					 }
					 else if (str[*index] == "c" &&  str[(*index + 1)] == "s" && str[(*index + 2)] == "c")	//csc(x)
					 {
						 *index += 4;
						 psubstr = extract(str, index);   // Extract substring in brackets
						 *value = 1 / sin(*expr(psubstr));
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
					 else if (str[*index] == "l" &&  str[(*index + 1)] == "o" && str[(*index + 2)] == "g" && str[(*index + 3)] == "1" && str[(*index + 4)] == "0")	//log(x)
					 {
						 *index += 6;
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
						 *check = 1;
						 MyForm1^ f = gcnew MyForm1();
						 f->ShowDialog();
						 return value;
						 //exit(1);
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
									 *check = 1;
									 MyForm2^ f = gcnew MyForm2();
									 f->ShowDialog();
									 return pstr;
									 //exit(1);
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

					 *check = 1;
					 MyForm3^ f = gcnew MyForm3();
					 f->ShowDialog();
					 return pstr;
					 //exit(1);
				 }
				 array<String^>^ extract1(array<String^>^ str, int^ index)
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
						 case ']':
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
									 //exit(1);
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

						 case '[':
							 (*numL)++;                        // Increase count of '(' to be 
															   // matched
							 break;
						 }
					 } while (str[(*index)++] != "\0"); // Loop - don't overrun end of string

					 MyForm3^ f = gcnew MyForm3();
					 f->ShowDialog();
					 *check = 1;
					 return pstr;
					 //exit(1);
				 }

				 array<String^>^ extract2(array<String^>^ str, int^ index)
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
						 case '}':
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
									 //exit(1);
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

						 case '{':
							 (*numL)++;                        // Increase count of '(' to be 
															   // matched
							 break;
						 }
					 } while (str[(*index)++] != "\0"); // Loop - don't overrun end of string

					 MyForm3^ f = gcnew MyForm3();
					 f->ShowDialog();
					 *check = 1;
					 return pstr;
					 //exit(1);
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
