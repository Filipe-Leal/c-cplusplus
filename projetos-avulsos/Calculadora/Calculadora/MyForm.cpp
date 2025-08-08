#include "MyForm.h" // Inclui o cabeçalho do seu formulário

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Necessário para aplicações Windows Forms
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Substitua "CalculadoraCplusplus" pelo nome do seu namespace
    Calculadora::MyForm form;
    Application::Run(% form);

    return 0;
}
