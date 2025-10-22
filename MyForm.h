#pragma once
#include "MyForm1.h"


namespace kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ scalpel;
	private: System::Windows::Forms::PictureBox^ redd;

	private: System::Windows::Forms::Label^ label2;






	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->scalpel = (gcnew System::Windows::Forms::PictureBox());
			this->redd = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scalpel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redd))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// scalpel
			// 
			this->scalpel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scalpel.BackgroundImage")));
			this->scalpel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->scalpel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scalpel.Image")));
			this->scalpel->Location = System::Drawing::Point(12, 434);
			this->scalpel->Name = L"scalpel";
			this->scalpel->Size = System::Drawing::Size(304, 214);
			this->scalpel->TabIndex = 0;
			this->scalpel->TabStop = false;
			// 
			// redd
			// 
			this->redd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->redd->Location = System::Drawing::Point(12, 654);
			this->redd->Name = L"redd";
			this->redd->Size = System::Drawing::Size(10, 10);
			this->redd->TabIndex = 1;
			this->redd->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(92, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(985, 273);
			this->label2->TabIndex = 3;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(1174, 728);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->redd);
			this->Controls->Add(this->scalpel);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Загрузка...";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scalpel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redd))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Point Pos = scalpel->Location;
		Pos.X += 20;
		scalpel->Location = Pos;
		redd->Width = scalpel->Location.X - redd->Location.X;
		if (scalpel->Location.X >= 1053) {
			timer1->Enabled = false;
			MyForm1^ newForm = gcnew MyForm1();
			newForm->Show();
			this->Hide();
		}

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
	}
};
}
