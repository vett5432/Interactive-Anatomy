#include "MyForm.h"
#include <Windows.h>
using namespace kursovaya; // �������� ������� � �������� namespace (����������) ������ ���� �����������;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}
[STAThread]
void main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
}