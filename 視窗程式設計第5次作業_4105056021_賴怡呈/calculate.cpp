// WindowsProgramming_3thHomework.cpp : 定義主控台應用程式的進入點。
//
/********
4105056021 賴怡呈 第三次作業10/29 *********/

#include "stdafx.h"
#include <iostream>                   // For stream input/output
#include <cstdlib>                    // For the exit() function
#include <cctype>                     // For the isdigit() function
#include <cstring>                    // For the strcpy() function
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

string* path = new string;
fstream* f;

void eatspaces(char* str);            // Function to eliminate blanks
double* expr(char* str);               // Function evaluating an expression
double* term(char* str, int* index);   // Function analyzing a term
double* number(char* str, int* index); // Function to recognize a number
char* extract(char* str, int* index); // Function to extract a substring
char* extract1(char* str, int* index); // Function to extract a substring
char* extract2(char* str, int* index); // Function to extract a substring
double* othersym(double* value, char* str, int* index);
//int* MAX = new int;                    // Maximum expression length, 
// including '\0'
int* max(new int(100));

int main()
{
	char* buffer = new char[*max];    // Input area for expression to be evaluated
	cout << "說明:" << endl;
	cout << "1.log10(x)可以輸入log(x)，也就是log(x)是以10為基底的log" << endl;
	cout << "2.乘上sin(),cos()這些時，請打出*，不要打3sin(5)這種" << endl;
	cout << "3.exp(),sin(),log10()......這些要打出括號" << endl;
	cout << "4.可以輸入負數" << endl;
	*buffer = ' ';
	int *choose = new int(0);
	//*choose = 0;
re:
	cout << endl
		<< "Enter 1(load from expression.txt) or 2(input formula)"
		<< endl;

	cin >> *choose;

	if (*choose == 1)					//讀檔
	{
	ent:
		//*path = "expression.txt";
		//fstream* f;
		f = new fstream("expression.txt", ios::in);
		if (!f->is_open())
		{
			cout << "檔案打不開，檔案名稱輸入錯誤" << endl;
			goto ent;
		}
		char* line = new char[100];
		while (f->getline(line, 100))
		{
			cout << line << endl;
			cout << "\t= " << *expr(line)        // Output value of expression
				<< endl << endl;

		}
		f->close();
		goto re;
	}
	else if (*choose == 2)				//直接輸入公式
	{
		cout << "輸入公式:" << endl;
		cin.get();
		int* i = new int(0);

		for (;;)
		{

			cin.getline(buffer, 100);   // Read an input line
			eatspaces(buffer);                    // Remove blanks from input

			if (!*buffer)                        // Empty line ends calculator
				return 0;

			cout << "\t= " << *expr(buffer)        // Output value of expression
				<< endl << endl;
		}
	}
	else
	{
		cin.get();
		cout << "輸入錯誤，請重新輸入" << endl;
		goto re;
	}
	//delete choose;
	return 0;
}


// Function to eliminate spaces from a string
void eatspaces(char* str)
{
	int* i(new int(0));                              // 'Copy to' index to string
	int* j(new int(0));                              // 'Copy from' index to string

	while ((*(str + *i) = *(str + (*j)++)) != '\0')  // Loop while character
													 // copied is not \0
		if (*(str + *i) != ' ')                    // Increment i as long as
			(*i)++;                                  // character is not a space
	delete i; delete j;
	return;
}

// Function to evaluate an arithmetic expression
double* expr(char* str)
{
	double* value = new double(0.0);                   // Store result here
	int* index = new int(0);                        // Keeps track of current character position
	*value = *term(str, index);            // Get first term

	for (;;)                              // Indefinite loop, all exits inside
	{
		switch (*(str + (*index)++))           // Choose action based on current character
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
			cout << endl                  // is junk
				<< "Arrrgh!*#!! There's an error"
				<< endl;
			exit(1);
		}
	}
}

// Function to get the value of a term
double* term(char* str, int* index)
{
	double* value = new double(0.0);                   // Somewhere to accumulate 
													   // the result

	*value = *number(str, index);          // Get the first number in the term

										   // Loop as long as we have a good operator
	while (true)
	{

		if (*(str + *index) == '*')          // If it's multiply,
		{
			++(*index);
			*value *= *number(str, index);   // multiply by next number
		}
		else if (*(str + *index) == '/')     // If it's divide,
		{
			++(*index);
			*value /= *number(str, index);   // divide by next number
		}
		else if (*(str + *index) == '%')
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
double* number(char* str, int* index)
{
	double* value = new double(0.0);                   // Store the resulting value
	char* psubstr(nullptr);            // Pointer for substring
	if (*(str + *index) == '(')            // Start of parentheses
	{
		//char* psubstr(nullptr);            // Pointer for substring
		++(*index);
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = *expr(psubstr);             // Get the value of the substring
		*value = *othersym(value, str, index);

		//delete[]  psubstr;                   // Clean up the free store
		return value;                      // Return substring value
	}
	if (*(str + *index) == '[')            // Start of parentheses
	{
		//char* psubstr(nullptr);            // Pointer for substring
		++(*index);
		psubstr = extract1(str, index);   // Extract substring in brackets
		*value = *expr(psubstr);             // Get the value of the substring
		*value = *othersym(value, str, index);

		//delete [] psubstr;                   // Clean up the free store
		return value;                      // Return substring value
	}
	if (*(str + *index) == '{')            // Start of parentheses
	{
		//char* psubstr(nullptr);            // Pointer for substring
		++(*index);
		psubstr = extract2(str, index);   // Extract substring in brackets
		*value = *expr(psubstr);             // Get the value of the substring
		*value = *othersym(value, str, index);

		//delete [] psubstr;                   // Clean up the free store
		return value;                      // Return substring value
	}


	// There must be at least one digit...
	if (*(str + *index) == 'e' &&  *(str + (*index + 1)) == 'x' && *(str + (*index + 2)) == 'p')			//exp(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = exp(*expr(psubstr));
	}
	else if (*(str + *index) == 's' &&  *(str + (*index + 1)) == 'i' && *(str + (*index + 2)) == 'n')	//sin(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = sin(*expr(psubstr));
	}
	else if (*(str + *index) == 'c' &&  *(str + (*index + 1)) == 'o' && *(str + (*index + 2)) == 's')	//cos(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = cos(*expr(psubstr));
	}
	else if (*(str + *index) == 't' &&  *(str + (*index + 1)) == 'a' && *(str + (*index + 2)) == 'n')	//tan(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = tan(*expr(psubstr));
	}
	else if (*(str + *index) == 'c' &&  *(str + (*index + 1)) == 'o' && *(str + (*index + 2)) == 't')	//cot(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = 1 / tan(*expr(psubstr));
	}
	else if (*(str + *index) == 's' &&  *(str + (*index + 1)) == 'e' && *(str + (*index + 2)) == 'c')	//sec(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = 1 / cos(*expr(psubstr));
		//delete[] psubstr;
	}
	else if (*(str + *index) == 'c' &&  *(str + (*index + 1)) == 's' && *(str + (*index + 2)) == 'c')	//csc(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = 1 / sin(*expr(psubstr));
	}
	else if (*(str + *index) == 's' &&  *(str + (*index + 1)) == 'q' && *(str + (*index + 2)) == 'r' && *(str + (*index + 3)) == 't')	//sqrt(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 5;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = sqrt(*expr(psubstr));
	}
	else if (*(str + *index) == 'l' &&  *(str + (*index + 1)) == 'o' && *(str + (*index + 2)) == 'g' && *(str + (*index + 3)) == '1' && *(str + (*index + 4)) == '0')	//log(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 6;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = log10(*expr(psubstr));
	}
	else if (*(str + *index) == 'l' &&  *(str + (*index + 1)) == 'o' && *(str + (*index + 2)) == 'g')	//log(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 4;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = log10(*expr(psubstr));
	}
	else if (*(str + *index) == 'l' &&  *(str + (*index + 1)) == 'n')	//ln(x)
	{
		//char* psubstr(nullptr);            // Pointer for substring
		*index += 3;
		psubstr = extract(str, index);   // Extract substring in brackets
		*value = log(*expr(psubstr));
	}
	else if (!isdigit(*(str + *index)))
	{ // There's no digits so input is junk...
		if (*(str + *index) == '-')
		{
			(*index)++;
			*value = -*number(str, index);
			return value;
		}
		cout << endl
			<< "Arrrgh!*#!! There's an error"
			<< endl;
		exit(1);
	}

	while (isdigit(*(str + *index)))       // Loop accumulating leading digits
		*value = 10 * (*value) + (*(str + (*index)++) - '0');

	// Not a digit when we get to here
	if (*(str + *index) != '.')            // so check for decimal point
	{
		*value = *othersym(value, str, index);

		return value;                      // and if not, return value
	}


	double* factor = new double(1.0);                  // Factor for decimal places
	while (isdigit(*(str + (++(*index)))))   // Loop as long as we have digits
	{
		*factor *= 0.1;                     // Decrease factor by factor of 10
		*value = *value + (*(str + *index) - '0')* *factor;   // Add decimal place
	}
	*value = *othersym(value, str, index);

	return value;                        // On loop exit we are done
}

// Function to extract a substring between parentheses 
// (requires cstring)
char* extract(char* str, int* index)
{
	char* buffer = new char[*max];                   // Temporary space for substring
	char* pstr(nullptr);                // Pointer to new string for return
	int* numL = new int(0);                        // Count of left parentheses found
	*numL = 0;
	int* bufindex = new int(0);                // Save starting value for index
	*bufindex = 0;
	*bufindex = *index;

	do
	{
		*(buffer + (*index - *bufindex)) = *(str + *index);
		switch (*(buffer + (*index - *bufindex)))
		{
		case ')':
			if (0 == *numL)
			{
				size_t* size = new size_t;
				*size = *index - *bufindex;
				*(buffer + (*index - *bufindex)) = '\0';  // Replace ')' with '\0' 
				++(*index);
				pstr = new char[*index - *bufindex];
				if (!pstr)
				{
					cout << "Memory allocation failed,"
						<< " program terminated.";
					exit(1);
				}
				strcpy_s(pstr, (*index - *bufindex), buffer); // Copy substring to new memory
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
	} while (*(str + (*index)++) != '\0'); // Loop - don't overrun end of string

	cout << "Ran off the end of the expression, must be bad input."
		<< endl;
	exit(1);
}

char* extract1(char* str, int* index)
{
	char* buffer(new char(*max));                   // Temporary space for substring
	char* pstr(nullptr);                // Pointer to new string for return
	int* numL = new int(0);                        // Count of left parentheses found
	*numL = 0;
	int* bufindex = new int(0);                // Save starting value for index
	*bufindex = 0;
	*bufindex = *index;

	do
	{
		*(buffer + (*index - *bufindex)) = *(str + *index);
		switch (*(buffer + (*index - *bufindex)))
		{
		case ']':
			if (0 == *numL)
			{
				size_t* size = new size_t;
				*size = *index - *bufindex;
				*(buffer + (*index - *bufindex)) = '\0';  // Replace ')' with '\0' 
				++(*index);
				pstr = new char[*index - *bufindex];
				if (!pstr)
				{
					cout << "Memory allocation failed,"
						<< " program terminated.";
					exit(1);
				}
				strcpy_s(pstr, (*index - *bufindex), buffer); // Copy substring to new memory
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
	} while (*(str + (*index)++) != '\0'); // Loop - don't overrun end of string

	cout << "Ran off the end of the expression, must be bad input."
		<< endl;
	exit(1);
}

char* extract2(char* str, int* index)
{
	char* buffer(new char(*max));                   // Temporary space for substring
	char* pstr;                // Pointer to new string for return
	int* numL = new int(0);                        // Count of left parentheses found
	*numL = 0;
	int* bufindex = new int(0);                // Save starting value for index
	*bufindex = 0;
	*bufindex = *index;

	do
	{
		*(buffer + (*index - *bufindex)) = *(str + *index);
		switch (*(buffer + (*index - *bufindex)))
		{
		case '}':
			if (0 == *numL)
			{
				size_t* size = new size_t;
				*size = *index - *bufindex;
				*(buffer + (*index - *bufindex)) = '\0';  // Replace ')' with '\0' 
				++(*index);
				pstr = new char[*index - *bufindex];
				if (!pstr)
				{
					cout << "Memory allocation failed,"
						<< " program terminated.";
					exit(1);
				}
				strcpy_s(pstr, (*index - *bufindex), buffer); // Copy substring to new memory
															  //delete numL; delete bufindex; delete[] buffer; delete size;
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
	} while (*(str + (*index)++) != '\0'); // Loop - don't overrun end of string

	cout << "Ran off the end of the expression, must be bad input."
		<< endl;
	exit(1);
}

double* othersym(double* value, char* str, int* index)
{
	if (*(str + *index) == '+' && *(str + (*index + 1)) == '+')		//x++
	{
		(*value)++;
		*index += 2;
	}
	else if (*(str + *index) == '-' && *(str + (*index + 1)) == '-') //x--
	{
		(*value)--;
		*index += 2;
	}

	if (*(str + *index) == '!')				//x!
	{
		int* i(new int(0));
		double* sum(new double(1.0));
		for (*i = 1; *i <= *value; (*i)++)
			*sum *= *i;
		*value = *sum;
		++(*index);
		if (*(str + *index) == '+' && *(str + (*index + 1)) == '+')		//x++
		{
			(*value)++;
			*index += 2;
		}
		else if (*(str + *index) == '-' && *(str + (*index + 1)) == '-') //x--
		{
			(*value)--;
			*index += 2;
		}
	}


	if (*(str + *index) == '^')				//x^y
	{
		++(*index);
		*value = pow(*value, *number(str, index));
	}

	return value;
}


