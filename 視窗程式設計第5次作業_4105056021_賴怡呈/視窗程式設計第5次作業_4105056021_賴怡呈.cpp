// 視窗程式設計第5次作業_4105056021_賴怡呈.cpp: 主要專案檔。
/********
4105056021 賴怡呈 第五次作業12/4
								*********/

#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace 視窗程式設計第5次作業_4105056021_賴怡呈;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	MessageBox::Show("1.如要在sin(這種有括號的，根號也是，10的x次方也是)裡放運算式，先輸入(1+2)再按sin即可，左右括號都要輸入好\r\n2.請輸入完整算式");
	Application::Run(gcnew MyForm());

    return 0;
}
