#pragma once

namespace kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{

	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ skelet;
	protected:

	private: System::Windows::Forms::Button^ cherep2;
		  
	private: System::Windows::Forms::Button^ cherep1;
	private: System::Windows::Forms::Button^ pozvon2;

	private: System::Windows::Forms::Button^ pozvon1;
	private: System::Windows::Forms::Button^ rebra2;

	private: System::Windows::Forms::Button^ rebra1;
	private: System::Windows::Forms::Button^ taz2;
	private: System::Windows::Forms::Button^ taz1;
	private: System::Windows::Forms::Button^ predplech22;


	private: System::Windows::Forms::Button^ predplech21;
	private: System::Windows::Forms::Button^ predplech11;
	private: System::Windows::Forms::Button^ plecho22;
	private: System::Windows::Forms::Button^ plecho21;
	private: System::Windows::Forms::Button^ plecho11;

	private: System::Windows::Forms::Button^ lopatki;
	private: System::Windows::Forms::Button^ kluychitsi;
	private: System::Windows::Forms::Button^ stopy;
	private: System::Windows::Forms::Button^ goleni;
	private: System::Windows::Forms::Button^ bedra2;
	private: System::Windows::Forms::Button^ bedra1;
	private: System::Windows::Forms::Button^ ladon22;
	private: System::Windows::Forms::Button^ ladon21;
	private: System::Windows::Forms::Button^ ladon11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ nervi;
	private: System::Windows::Forms::Button^ plechevy;

	private: System::Windows::Forms::Button^ mejreberny;
	private: System::Windows::Forms::Button^ poyasnichny;
	private: System::Windows::Forms::Button^ bedrenny;
	private: System::Windows::Forms::Button^ sedalishniy;
	private: System::Windows::Forms::Button^ nervigoleni;
	private: System::Windows::Forms::Button^ spinnoy;
	private: System::Windows::Forms::Button^ handsnerv2;
	private: System::Windows::Forms::Button^ handsnerv1;
	private: System::Windows::Forms::Panel^ reproduct;
	private: System::Windows::Forms::Button^ yaichnick1;
	private: System::Windows::Forms::Button^ yaichnick2;
	private: System::Windows::Forms::Button^ vlagalische;
	private: System::Windows::Forms::Button^ matka;
	private: System::Windows::Forms::Panel^ venoznaya;
	private: System::Windows::Forms::Button^ yaremnyveny;

	private: System::Windows::Forms::Button^ venycherep;
	private: System::Windows::Forms::Button^ nijpolayavena;

	private: System::Windows::Forms::Button^ venynog;
	private: System::Windows::Forms::Button^ venyruk2;
	private: System::Windows::Forms::Button^ venyruk1;
	private: System::Windows::Forms::Button^ plechevyveny;
	private: System::Windows::Forms::Panel^ arterialnaya;

	private: System::Windows::Forms::Button^ mejrebernart;
	private: System::Windows::Forms::Button^ plechevyart;
	private: System::Windows::Forms::Button^ aorta;
	private: System::Windows::Forms::Button^ sonnayaart;
	private: System::Windows::Forms::Button^ mozgart;
	private: System::Windows::Forms::Button^ tazart;

	private: System::Windows::Forms::Button^ ruka2art;
	private: System::Windows::Forms::Button^ ryka1art;
	private: System::Windows::Forms::Button^ nogiart;
	private: System::Windows::Forms::Panel^ mishechnaya;
	private: System::Windows::Forms::Button^ grydniyemishtsi;

	private: System::Windows::Forms::Button^ mishtsineck;
	private: System::Windows::Forms::Button^ mishtsilica;
	private: System::Windows::Forms::Button^ predplechmishtsi1;


	private: System::Windows::Forms::Button^ trapetsevidnye;
	private: System::Windows::Forms::Button^ bitseps3;
	private: System::Windows::Forms::Button^ bitseps2;
	private: System::Windows::Forms::Button^ bitseps1;
	private: System::Windows::Forms::Button^ yagodichniyemishtsi;
	private: System::Windows::Forms::Button^ tazmishtsi;
	private: System::Windows::Forms::Button^ press;
	private: System::Windows::Forms::Button^ mishtsispini;
private: System::Windows::Forms::Button^ predplechmishtsi2;
private: System::Windows::Forms::Button^ stopmishtsi;
private: System::Windows::Forms::Button^ golenimishtsi;
private: System::Windows::Forms::Button^ bedramishtsi2;
private: System::Windows::Forms::Button^ bedromishtsi1;
private: System::Windows::Forms::Button^ kistimishtsi3;
private: System::Windows::Forms::Button^ kistimishtsi2;
private: System::Windows::Forms::Button^ kistimishtsi1;
private: System::Windows::Forms::Button^ predplechmishtsi3;
private: System::Windows::Forms::Panel^ limfa;
private: System::Windows::Forms::Button^ sheialimfa;
private: System::Windows::Forms::Button^ qisternalimfa;
private: System::Windows::Forms::Button^ pahlimfa;
private: System::Windows::Forms::Button^ podmish2limfa;
private: System::Windows::Forms::Button^ podmash1limfa;
private: System::Windows::Forms::Button^ kluychitsilimfa;
private: System::Windows::Forms::Button^ nizlimfa;
private: System::Windows::Forms::Button^ verh2limfa;
private: System::Windows::Forms::Button^ verh1limfa;
private: System::Windows::Forms::Button^ poyasnitsalimfa;
private: System::Windows::Forms::Button^ timus;
private: System::Windows::Forms::Button^ mindaliny;
private: System::Windows::Forms::Button^ selezenka;
private: System::Windows::Forms::Button^ grudlimfa;
private: System::Windows::Forms::Panel^ organy;
private: System::Windows::Forms::Button^ mozg;
private: System::Windows::Forms::Button^ jeludok;
private: System::Windows::Forms::Button^ diafragma;
private: System::Windows::Forms::Button^ legkie;
private: System::Windows::Forms::Button^ shitovidkaorgan;
private: System::Windows::Forms::Button^ tonky;
private: System::Windows::Forms::Button^ tolsty;
private: System::Windows::Forms::Button^ pechenorgan;
private: System::Windows::Forms::Button^ mochevoy;
private: System::Windows::Forms::Button^ heart;

private: System::Windows::Forms::Button^ pochki;
private: System::Windows::Forms::Button^ podjeludok;
private: System::Windows::Forms::Panel^ infotext;


private: System::Windows::Forms::PictureBox^ stroenie;








private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::WebBrowser^ webBrowser1;








	protected:






















	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->skelet = (gcnew System::Windows::Forms::Panel());
			this->stopy = (gcnew System::Windows::Forms::Button());
			this->goleni = (gcnew System::Windows::Forms::Button());
			this->bedra2 = (gcnew System::Windows::Forms::Button());
			this->bedra1 = (gcnew System::Windows::Forms::Button());
			this->ladon22 = (gcnew System::Windows::Forms::Button());
			this->ladon21 = (gcnew System::Windows::Forms::Button());
			this->ladon11 = (gcnew System::Windows::Forms::Button());
			this->predplech22 = (gcnew System::Windows::Forms::Button());
			this->predplech21 = (gcnew System::Windows::Forms::Button());
			this->predplech11 = (gcnew System::Windows::Forms::Button());
			this->plecho22 = (gcnew System::Windows::Forms::Button());
			this->plecho21 = (gcnew System::Windows::Forms::Button());
			this->plecho11 = (gcnew System::Windows::Forms::Button());
			this->lopatki = (gcnew System::Windows::Forms::Button());
			this->kluychitsi = (gcnew System::Windows::Forms::Button());
			this->rebra2 = (gcnew System::Windows::Forms::Button());
			this->rebra1 = (gcnew System::Windows::Forms::Button());
			this->taz2 = (gcnew System::Windows::Forms::Button());
			this->taz1 = (gcnew System::Windows::Forms::Button());
			this->pozvon2 = (gcnew System::Windows::Forms::Button());
			this->pozvon1 = (gcnew System::Windows::Forms::Button());
			this->cherep2 = (gcnew System::Windows::Forms::Button());
			this->cherep1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->nervi = (gcnew System::Windows::Forms::Panel());
			this->spinnoy = (gcnew System::Windows::Forms::Button());
			this->handsnerv2 = (gcnew System::Windows::Forms::Button());
			this->handsnerv1 = (gcnew System::Windows::Forms::Button());
			this->plechevy = (gcnew System::Windows::Forms::Button());
			this->mejreberny = (gcnew System::Windows::Forms::Button());
			this->poyasnichny = (gcnew System::Windows::Forms::Button());
			this->bedrenny = (gcnew System::Windows::Forms::Button());
			this->sedalishniy = (gcnew System::Windows::Forms::Button());
			this->nervigoleni = (gcnew System::Windows::Forms::Button());
			this->venoznaya = (gcnew System::Windows::Forms::Panel());
			this->nijpolayavena = (gcnew System::Windows::Forms::Button());
			this->venynog = (gcnew System::Windows::Forms::Button());
			this->venyruk2 = (gcnew System::Windows::Forms::Button());
			this->venyruk1 = (gcnew System::Windows::Forms::Button());
			this->plechevyveny = (gcnew System::Windows::Forms::Button());
			this->yaremnyveny = (gcnew System::Windows::Forms::Button());
			this->venycherep = (gcnew System::Windows::Forms::Button());
			this->reproduct = (gcnew System::Windows::Forms::Panel());
			this->yaichnick1 = (gcnew System::Windows::Forms::Button());
			this->yaichnick2 = (gcnew System::Windows::Forms::Button());
			this->vlagalische = (gcnew System::Windows::Forms::Button());
			this->matka = (gcnew System::Windows::Forms::Button());
			this->arterialnaya = (gcnew System::Windows::Forms::Panel());
			this->nogiart = (gcnew System::Windows::Forms::Button());
			this->tazart = (gcnew System::Windows::Forms::Button());
			this->ruka2art = (gcnew System::Windows::Forms::Button());
			this->ryka1art = (gcnew System::Windows::Forms::Button());
			this->mejrebernart = (gcnew System::Windows::Forms::Button());
			this->plechevyart = (gcnew System::Windows::Forms::Button());
			this->aorta = (gcnew System::Windows::Forms::Button());
			this->sonnayaart = (gcnew System::Windows::Forms::Button());
			this->mozgart = (gcnew System::Windows::Forms::Button());
			this->mishechnaya = (gcnew System::Windows::Forms::Panel());
			this->stopmishtsi = (gcnew System::Windows::Forms::Button());
			this->golenimishtsi = (gcnew System::Windows::Forms::Button());
			this->bedramishtsi2 = (gcnew System::Windows::Forms::Button());
			this->bedromishtsi1 = (gcnew System::Windows::Forms::Button());
			this->kistimishtsi3 = (gcnew System::Windows::Forms::Button());
			this->kistimishtsi2 = (gcnew System::Windows::Forms::Button());
			this->kistimishtsi1 = (gcnew System::Windows::Forms::Button());
			this->predplechmishtsi3 = (gcnew System::Windows::Forms::Button());
			this->predplechmishtsi2 = (gcnew System::Windows::Forms::Button());
			this->predplechmishtsi1 = (gcnew System::Windows::Forms::Button());
			this->trapetsevidnye = (gcnew System::Windows::Forms::Button());
			this->bitseps3 = (gcnew System::Windows::Forms::Button());
			this->bitseps2 = (gcnew System::Windows::Forms::Button());
			this->bitseps1 = (gcnew System::Windows::Forms::Button());
			this->yagodichniyemishtsi = (gcnew System::Windows::Forms::Button());
			this->tazmishtsi = (gcnew System::Windows::Forms::Button());
			this->press = (gcnew System::Windows::Forms::Button());
			this->mishtsispini = (gcnew System::Windows::Forms::Button());
			this->grydniyemishtsi = (gcnew System::Windows::Forms::Button());
			this->mishtsineck = (gcnew System::Windows::Forms::Button());
			this->mishtsilica = (gcnew System::Windows::Forms::Button());
			this->limfa = (gcnew System::Windows::Forms::Panel());
			this->nizlimfa = (gcnew System::Windows::Forms::Button());
			this->verh2limfa = (gcnew System::Windows::Forms::Button());
			this->verh1limfa = (gcnew System::Windows::Forms::Button());
			this->poyasnitsalimfa = (gcnew System::Windows::Forms::Button());
			this->timus = (gcnew System::Windows::Forms::Button());
			this->mindaliny = (gcnew System::Windows::Forms::Button());
			this->selezenka = (gcnew System::Windows::Forms::Button());
			this->grudlimfa = (gcnew System::Windows::Forms::Button());
			this->qisternalimfa = (gcnew System::Windows::Forms::Button());
			this->pahlimfa = (gcnew System::Windows::Forms::Button());
			this->podmish2limfa = (gcnew System::Windows::Forms::Button());
			this->podmash1limfa = (gcnew System::Windows::Forms::Button());
			this->kluychitsilimfa = (gcnew System::Windows::Forms::Button());
			this->sheialimfa = (gcnew System::Windows::Forms::Button());
			this->organy = (gcnew System::Windows::Forms::Panel());
			this->tonky = (gcnew System::Windows::Forms::Button());
			this->tolsty = (gcnew System::Windows::Forms::Button());
			this->pechenorgan = (gcnew System::Windows::Forms::Button());
			this->mochevoy = (gcnew System::Windows::Forms::Button());
			this->heart = (gcnew System::Windows::Forms::Button());
			this->pochki = (gcnew System::Windows::Forms::Button());
			this->podjeludok = (gcnew System::Windows::Forms::Button());
			this->jeludok = (gcnew System::Windows::Forms::Button());
			this->diafragma = (gcnew System::Windows::Forms::Button());
			this->legkie = (gcnew System::Windows::Forms::Button());
			this->shitovidkaorgan = (gcnew System::Windows::Forms::Button());
			this->mozg = (gcnew System::Windows::Forms::Button());
			this->infotext = (gcnew System::Windows::Forms::Panel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->stroenie = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->skelet->SuspendLayout();
			this->nervi->SuspendLayout();
			this->venoznaya->SuspendLayout();
			this->reproduct->SuspendLayout();
			this->arterialnaya->SuspendLayout();
			this->mishechnaya->SuspendLayout();
			this->limfa->SuspendLayout();
			this->organy->SuspendLayout();
			this->infotext->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stroenie))->BeginInit();
			this->SuspendLayout();
			// 
			// skelet
			// 
			this->skelet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->skelet->Controls->Add(this->stopy);
			this->skelet->Controls->Add(this->goleni);
			this->skelet->Controls->Add(this->bedra2);
			this->skelet->Controls->Add(this->bedra1);
			this->skelet->Controls->Add(this->ladon22);
			this->skelet->Controls->Add(this->ladon21);
			this->skelet->Controls->Add(this->ladon11);
			this->skelet->Controls->Add(this->predplech22);
			this->skelet->Controls->Add(this->predplech21);
			this->skelet->Controls->Add(this->predplech11);
			this->skelet->Controls->Add(this->plecho22);
			this->skelet->Controls->Add(this->plecho21);
			this->skelet->Controls->Add(this->plecho11);
			this->skelet->Controls->Add(this->lopatki);
			this->skelet->Controls->Add(this->kluychitsi);
			this->skelet->Controls->Add(this->rebra2);
			this->skelet->Controls->Add(this->rebra1);
			this->skelet->Controls->Add(this->taz2);
			this->skelet->Controls->Add(this->taz1);
			this->skelet->Controls->Add(this->pozvon2);
			this->skelet->Controls->Add(this->pozvon1);
			this->skelet->Controls->Add(this->cherep2);
			this->skelet->Controls->Add(this->cherep1);
			this->skelet->Enabled = false;
			this->skelet->Location = System::Drawing::Point(1157, 27);
			this->skelet->Name = L"skelet";
			this->skelet->Size = System::Drawing::Size(612, 724);
			this->skelet->TabIndex = 4;
			this->skelet->Visible = false;
			// 
			// stopy
			// 
			this->stopy->BackColor = System::Drawing::Color::Transparent;
			this->stopy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->stopy->FlatAppearance->BorderSize = 0;
			this->stopy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->stopy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->stopy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stopy->Location = System::Drawing::Point(85, 678);
			this->stopy->Name = L"stopy";
			this->stopy->Size = System::Drawing::Size(445, 45);
			this->stopy->TabIndex = 25;
			this->stopy->UseVisualStyleBackColor = false;
			this->stopy->Click += gcnew System::EventHandler(this, &MyForm2::stopy_Click);
			// 
			// goleni
			// 
			this->goleni->BackColor = System::Drawing::Color::Transparent;
			this->goleni->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->goleni->FlatAppearance->BorderSize = 0;
			this->goleni->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->goleni->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->goleni->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->goleni->Location = System::Drawing::Point(92, 518);
			this->goleni->Name = L"goleni";
			this->goleni->Size = System::Drawing::Size(438, 154);
			this->goleni->TabIndex = 24;
			this->goleni->UseVisualStyleBackColor = false;
			this->goleni->Click += gcnew System::EventHandler(this, &MyForm2::goleni_Click);
			// 
			// bedra2
			// 
			this->bedra2->BackColor = System::Drawing::Color::Transparent;
			this->bedra2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bedra2->FlatAppearance->BorderSize = 0;
			this->bedra2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bedra2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bedra2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bedra2->Location = System::Drawing::Point(403, 374);
			this->bedra2->Name = L"bedra2";
			this->bedra2->Size = System::Drawing::Size(127, 147);
			this->bedra2->TabIndex = 23;
			this->bedra2->UseVisualStyleBackColor = false;
			this->bedra2->Click += gcnew System::EventHandler(this, &MyForm2::bedra2_Click);
			// 
			// bedra1
			// 
			this->bedra1->BackColor = System::Drawing::Color::Transparent;
			this->bedra1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bedra1->FlatAppearance->BorderSize = 0;
			this->bedra1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bedra1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bedra1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bedra1->Location = System::Drawing::Point(85, 364);
			this->bedra1->Name = L"bedra1";
			this->bedra1->Size = System::Drawing::Size(149, 157);
			this->bedra1->TabIndex = 22;
			this->bedra1->UseVisualStyleBackColor = false;
			this->bedra1->Click += gcnew System::EventHandler(this, &MyForm2::bedra1_Click);
			// 
			// ladon22
			// 
			this->ladon22->BackColor = System::Drawing::Color::Transparent;
			this->ladon22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ladon22->FlatAppearance->BorderSize = 0;
			this->ladon22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ladon22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ladon22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ladon22->Location = System::Drawing::Point(555, 348);
			this->ladon22->Name = L"ladon22";
			this->ladon22->Size = System::Drawing::Size(55, 75);
			this->ladon22->TabIndex = 21;
			this->ladon22->UseVisualStyleBackColor = false;
			this->ladon22->Click += gcnew System::EventHandler(this, &MyForm2::ladon22_Click);
			// 
			// ladon21
			// 
			this->ladon21->BackColor = System::Drawing::Color::Transparent;
			this->ladon21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ladon21->FlatAppearance->BorderSize = 0;
			this->ladon21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ladon21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ladon21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ladon21->Location = System::Drawing::Point(258, 338);
			this->ladon21->Name = L"ladon21";
			this->ladon21->Size = System::Drawing::Size(122, 75);
			this->ladon21->TabIndex = 19;
			this->ladon21->UseVisualStyleBackColor = false;
			this->ladon21->Click += gcnew System::EventHandler(this, &MyForm2::ladon21_Click);
			// 
			// ladon11
			// 
			this->ladon11->BackColor = System::Drawing::Color::Transparent;
			this->ladon11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ladon11->FlatAppearance->BorderSize = 0;
			this->ladon11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ladon11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ladon11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ladon11->Location = System::Drawing::Point(14, 344);
			this->ladon11->Name = L"ladon11";
			this->ladon11->Size = System::Drawing::Size(55, 75);
			this->ladon11->TabIndex = 18;
			this->ladon11->UseVisualStyleBackColor = false;
			this->ladon11->Click += gcnew System::EventHandler(this, &MyForm2::ladon11_Click);
			// 
			// predplech22
			// 
			this->predplech22->BackColor = System::Drawing::Color::Transparent;
			this->predplech22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->predplech22->FlatAppearance->BorderSize = 0;
			this->predplech22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->predplech22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->predplech22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->predplech22->Location = System::Drawing::Point(545, 261);
			this->predplech22->Name = L"predplech22";
			this->predplech22->Size = System::Drawing::Size(35, 91);
			this->predplech22->TabIndex = 17;
			this->predplech22->UseVisualStyleBackColor = false;
			this->predplech22->Click += gcnew System::EventHandler(this, &MyForm2::predplech22_Click);
			// 
			// predplech21
			// 
			this->predplech21->BackColor = System::Drawing::Color::Transparent;
			this->predplech21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->predplech21->FlatAppearance->BorderSize = 0;
			this->predplech21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->predplech21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->predplech21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->predplech21->Location = System::Drawing::Point(228, 252);
			this->predplech21->Name = L"predplech21";
			this->predplech21->Size = System::Drawing::Size(153, 91);
			this->predplech21->TabIndex = 15;
			this->predplech21->UseVisualStyleBackColor = false;
			this->predplech21->Click += gcnew System::EventHandler(this, &MyForm2::predplech21_Click);
			// 
			// predplech11
			// 
			this->predplech11->BackColor = System::Drawing::Color::Transparent;
			this->predplech11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->predplech11->FlatAppearance->BorderSize = 0;
			this->predplech11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->predplech11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->predplech11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->predplech11->Location = System::Drawing::Point(41, 252);
			this->predplech11->Name = L"predplech11";
			this->predplech11->Size = System::Drawing::Size(45, 91);
			this->predplech11->TabIndex = 14;
			this->predplech11->UseVisualStyleBackColor = false;
			this->predplech11->Click += gcnew System::EventHandler(this, &MyForm2::predplech11_Click);
			// 
			// plecho22
			// 
			this->plecho22->BackColor = System::Drawing::Color::Transparent;
			this->plecho22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->plecho22->FlatAppearance->BorderSize = 0;
			this->plecho22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->plecho22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->plecho22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plecho22->Location = System::Drawing::Point(526, 152);
			this->plecho22->Name = L"plecho22";
			this->plecho22->Size = System::Drawing::Size(39, 115);
			this->plecho22->TabIndex = 13;
			this->plecho22->UseVisualStyleBackColor = false;
			this->plecho22->Click += gcnew System::EventHandler(this, &MyForm2::plecho22_Click);
			// 
			// plecho21
			// 
			this->plecho21->BackColor = System::Drawing::Color::Transparent;
			this->plecho21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->plecho21->FlatAppearance->BorderSize = 0;
			this->plecho21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->plecho21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->plecho21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plecho21->Location = System::Drawing::Point(208, 139);
			this->plecho21->Name = L"plecho21";
			this->plecho21->Size = System::Drawing::Size(203, 115);
			this->plecho21->TabIndex = 12;
			this->plecho21->UseVisualStyleBackColor = false;
			this->plecho21->Click += gcnew System::EventHandler(this, &MyForm2::plecho21_Click);
			// 
			// plecho11
			// 
			this->plecho11->BackColor = System::Drawing::Color::Transparent;
			this->plecho11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->plecho11->FlatAppearance->BorderSize = 0;
			this->plecho11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->plecho11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->plecho11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plecho11->Location = System::Drawing::Point(51, 141);
			this->plecho11->Name = L"plecho11";
			this->plecho11->Size = System::Drawing::Size(47, 115);
			this->plecho11->TabIndex = 11;
			this->plecho11->UseVisualStyleBackColor = false;
			this->plecho11->Click += gcnew System::EventHandler(this, &MyForm2::plecho11_Click);
			// 
			// lopatki
			// 
			this->lopatki->BackColor = System::Drawing::Color::Transparent;
			this->lopatki->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lopatki->FlatAppearance->BorderSize = 0;
			this->lopatki->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->lopatki->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->lopatki->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lopatki->Location = System::Drawing::Point(415, 141);
			this->lopatki->Name = L"lopatki";
			this->lopatki->Size = System::Drawing::Size(105, 55);
			this->lopatki->TabIndex = 9;
			this->lopatki->UseVisualStyleBackColor = false;
			this->lopatki->Click += gcnew System::EventHandler(this, &MyForm2::lopatki_Click);
			// 
			// kluychitsi
			// 
			this->kluychitsi->BackColor = System::Drawing::Color::Transparent;
			this->kluychitsi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->kluychitsi->FlatAppearance->BorderSize = 0;
			this->kluychitsi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->kluychitsi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->kluychitsi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kluychitsi->Location = System::Drawing::Point(85, 120);
			this->kluychitsi->Name = L"kluychitsi";
			this->kluychitsi->Size = System::Drawing::Size(149, 16);
			this->kluychitsi->TabIndex = 8;
			this->kluychitsi->UseVisualStyleBackColor = false;
			this->kluychitsi->Click += gcnew System::EventHandler(this, &MyForm2::kluychitsi_Click);
			// 
			// rebra2
			// 
			this->rebra2->BackColor = System::Drawing::Color::Transparent;
			this->rebra2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rebra2->FlatAppearance->BorderSize = 0;
			this->rebra2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->rebra2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->rebra2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rebra2->Location = System::Drawing::Point(417, 193);
			this->rebra2->Name = L"rebra2";
			this->rebra2->Size = System::Drawing::Size(103, 87);
			this->rebra2->TabIndex = 7;
			this->rebra2->UseVisualStyleBackColor = false;
			this->rebra2->Click += gcnew System::EventHandler(this, &MyForm2::rebra2_Click);
			// 
			// rebra1
			// 
			this->rebra1->BackColor = System::Drawing::Color::Transparent;
			this->rebra1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rebra1->FlatAppearance->BorderSize = 0;
			this->rebra1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->rebra1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->rebra1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rebra1->Location = System::Drawing::Point(104, 144);
			this->rebra1->Name = L"rebra1";
			this->rebra1->Size = System::Drawing::Size(120, 105);
			this->rebra1->TabIndex = 6;
			this->rebra1->UseVisualStyleBackColor = false;
			this->rebra1->Click += gcnew System::EventHandler(this, &MyForm2::rebra1_Click);
			// 
			// taz2
			// 
			this->taz2->BackColor = System::Drawing::Color::Transparent;
			this->taz2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->taz2->FlatAppearance->BorderSize = 0;
			this->taz2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->taz2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->taz2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->taz2->Location = System::Drawing::Point(403, 307);
			this->taz2->Name = L"taz2";
			this->taz2->Size = System::Drawing::Size(127, 72);
			this->taz2->TabIndex = 5;
			this->taz2->UseVisualStyleBackColor = false;
			this->taz2->Click += gcnew System::EventHandler(this, &MyForm2::taz2_Click);
			// 
			// taz1
			// 
			this->taz1->BackColor = System::Drawing::Color::Transparent;
			this->taz1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->taz1->FlatAppearance->BorderSize = 0;
			this->taz1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->taz1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->taz1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->taz1->Location = System::Drawing::Point(102, 289);
			this->taz1->Name = L"taz1";
			this->taz1->Size = System::Drawing::Size(120, 72);
			this->taz1->TabIndex = 4;
			this->taz1->UseVisualStyleBackColor = false;
			this->taz1->Click += gcnew System::EventHandler(this, &MyForm2::taz1_Click);
			// 
			// pozvon2
			// 
			this->pozvon2->BackColor = System::Drawing::Color::Transparent;
			this->pozvon2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pozvon2->FlatAppearance->BorderSize = 0;
			this->pozvon2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->pozvon2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->pozvon2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pozvon2->Location = System::Drawing::Point(455, 91);
			this->pozvon2->Name = L"pozvon2";
			this->pozvon2->Size = System::Drawing::Size(31, 223);
			this->pozvon2->TabIndex = 3;
			this->pozvon2->UseVisualStyleBackColor = false;
			this->pozvon2->Click += gcnew System::EventHandler(this, &MyForm2::pozvon2_Click);
			// 
			// pozvon1
			// 
			this->pozvon1->BackColor = System::Drawing::Color::Transparent;
			this->pozvon1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pozvon1->FlatAppearance->BorderSize = 0;
			this->pozvon1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->pozvon1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->pozvon1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pozvon1->Location = System::Drawing::Point(153, 101);
			this->pozvon1->Name = L"pozvon1";
			this->pozvon1->Size = System::Drawing::Size(31, 203);
			this->pozvon1->TabIndex = 2;
			this->pozvon1->UseVisualStyleBackColor = false;
			this->pozvon1->Click += gcnew System::EventHandler(this, &MyForm2::pozvon1_Click);
			// 
			// cherep2
			// 
			this->cherep2->BackColor = System::Drawing::Color::Transparent;
			this->cherep2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cherep2->FlatAppearance->BorderSize = 0;
			this->cherep2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->cherep2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->cherep2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cherep2->Location = System::Drawing::Point(433, 3);
			this->cherep2->Name = L"cherep2";
			this->cherep2->Size = System::Drawing::Size(69, 88);
			this->cherep2->TabIndex = 1;
			this->cherep2->UseVisualStyleBackColor = false;
			this->cherep2->Click += gcnew System::EventHandler(this, &MyForm2::cherep2_Click);
			// 
			// cherep1
			// 
			this->cherep1->BackColor = System::Drawing::Color::Transparent;
			this->cherep1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cherep1->FlatAppearance->BorderSize = 0;
			this->cherep1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->cherep1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->cherep1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cherep1->Location = System::Drawing::Point(136, 13);
			this->cherep1->Name = L"cherep1";
			this->cherep1->Size = System::Drawing::Size(59, 78);
			this->cherep1->TabIndex = 0;
			this->cherep1->UseVisualStyleBackColor = false;
			this->cherep1->Click += gcnew System::EventHandler(this, &MyForm2::cherep1_Click);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 0;
			// 
			// nervi
			// 
			this->nervi->BackColor = System::Drawing::Color::Transparent;
			this->nervi->Controls->Add(this->spinnoy);
			this->nervi->Controls->Add(this->handsnerv2);
			this->nervi->Controls->Add(this->handsnerv1);
			this->nervi->Controls->Add(this->plechevy);
			this->nervi->Controls->Add(this->mejreberny);
			this->nervi->Controls->Add(this->poyasnichny);
			this->nervi->Controls->Add(this->bedrenny);
			this->nervi->Controls->Add(this->sedalishniy);
			this->nervi->Controls->Add(this->nervigoleni);
			this->nervi->Enabled = false;
			this->nervi->Location = System::Drawing::Point(645, 693);
			this->nervi->Name = L"nervi";
			this->nervi->Size = System::Drawing::Size(349, 710);
			this->nervi->TabIndex = 5;
			this->nervi->Visible = false;
			// 
			// spinnoy
			// 
			this->spinnoy->FlatAppearance->BorderSize = 0;
			this->spinnoy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->spinnoy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->spinnoy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spinnoy->Location = System::Drawing::Point(159, 49);
			this->spinnoy->Name = L"spinnoy";
			this->spinnoy->Size = System::Drawing::Size(18, 292);
			this->spinnoy->TabIndex = 8;
			this->spinnoy->UseVisualStyleBackColor = true;
			this->spinnoy->Click += gcnew System::EventHandler(this, &MyForm2::spinnoy_Click);
			// 
			// handsnerv2
			// 
			this->handsnerv2->FlatAppearance->BorderSize = 0;
			this->handsnerv2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->handsnerv2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->handsnerv2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->handsnerv2->Location = System::Drawing::Point(229, 136);
			this->handsnerv2->Name = L"handsnerv2";
			this->handsnerv2->Size = System::Drawing::Size(53, 254);
			this->handsnerv2->TabIndex = 7;
			this->handsnerv2->UseVisualStyleBackColor = true;
			this->handsnerv2->Click += gcnew System::EventHandler(this, &MyForm2::handsnerv2_Click);
			// 
			// handsnerv1
			// 
			this->handsnerv1->FlatAppearance->BorderSize = 0;
			this->handsnerv1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->handsnerv1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->handsnerv1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->handsnerv1->Location = System::Drawing::Point(54, 136);
			this->handsnerv1->Name = L"handsnerv1";
			this->handsnerv1->Size = System::Drawing::Size(65, 273);
			this->handsnerv1->TabIndex = 6;
			this->handsnerv1->UseVisualStyleBackColor = true;
			this->handsnerv1->Click += gcnew System::EventHandler(this, &MyForm2::handsnerv1_Click);
			// 
			// plechevy
			// 
			this->plechevy->FlatAppearance->BorderSize = 0;
			this->plechevy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->plechevy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->plechevy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plechevy->Location = System::Drawing::Point(83, 97);
			this->plechevy->Name = L"plechevy";
			this->plechevy->Size = System::Drawing::Size(170, 49);
			this->plechevy->TabIndex = 5;
			this->plechevy->UseVisualStyleBackColor = true;
			this->plechevy->Click += gcnew System::EventHandler(this, &MyForm2::plechevy_Click);
			// 
			// mejreberny
			// 
			this->mejreberny->FlatAppearance->BorderSize = 0;
			this->mejreberny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mejreberny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mejreberny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mejreberny->Location = System::Drawing::Point(108, 136);
			this->mejreberny->Name = L"mejreberny";
			this->mejreberny->Size = System::Drawing::Size(115, 96);
			this->mejreberny->TabIndex = 4;
			this->mejreberny->UseVisualStyleBackColor = true;
			this->mejreberny->Click += gcnew System::EventHandler(this, &MyForm2::mejreberny_Click);
			// 
			// poyasnichny
			// 
			this->poyasnichny->FlatAppearance->BorderSize = 0;
			this->poyasnichny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->poyasnichny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->poyasnichny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->poyasnichny->Location = System::Drawing::Point(125, 238);
			this->poyasnichny->Name = L"poyasnichny";
			this->poyasnichny->Size = System::Drawing::Size(98, 50);
			this->poyasnichny->TabIndex = 3;
			this->poyasnichny->UseVisualStyleBackColor = true;
			this->poyasnichny->Click += gcnew System::EventHandler(this, &MyForm2::poyasnichny_Click);
			// 
			// bedrenny
			// 
			this->bedrenny->FlatAppearance->BorderSize = 0;
			this->bedrenny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bedrenny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bedrenny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bedrenny->Location = System::Drawing::Point(108, 294);
			this->bedrenny->Name = L"bedrenny";
			this->bedrenny->Size = System::Drawing::Size(115, 68);
			this->bedrenny->TabIndex = 2;
			this->bedrenny->UseVisualStyleBackColor = true;
			this->bedrenny->Click += gcnew System::EventHandler(this, &MyForm2::bedrenny_Click);
			// 
			// sedalishniy
			// 
			this->sedalishniy->FlatAppearance->BorderSize = 0;
			this->sedalishniy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->sedalishniy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->sedalishniy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sedalishniy->Location = System::Drawing::Point(99, 368);
			this->sedalishniy->Name = L"sedalishniy";
			this->sedalishniy->Size = System::Drawing::Size(140, 129);
			this->sedalishniy->TabIndex = 1;
			this->sedalishniy->UseVisualStyleBackColor = true;
			this->sedalishniy->Click += gcnew System::EventHandler(this, &MyForm2::sedalishniy_Click);
			// 
			// nervigoleni
			// 
			this->nervigoleni->FlatAppearance->BorderSize = 0;
			this->nervigoleni->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->nervigoleni->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->nervigoleni->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nervigoleni->Location = System::Drawing::Point(108, 516);
			this->nervigoleni->Name = L"nervigoleni";
			this->nervigoleni->Size = System::Drawing::Size(131, 194);
			this->nervigoleni->TabIndex = 0;
			this->nervigoleni->UseVisualStyleBackColor = true;
			this->nervigoleni->Click += gcnew System::EventHandler(this, &MyForm2::nervigoleni_Click);
			// 
			// venoznaya
			// 
			this->venoznaya->BackColor = System::Drawing::Color::Transparent;
			this->venoznaya->Controls->Add(this->nijpolayavena);
			this->venoznaya->Controls->Add(this->venynog);
			this->venoznaya->Controls->Add(this->venyruk2);
			this->venoznaya->Controls->Add(this->venyruk1);
			this->venoznaya->Controls->Add(this->plechevyveny);
			this->venoznaya->Controls->Add(this->yaremnyveny);
			this->venoznaya->Controls->Add(this->venycherep);
			this->venoznaya->Enabled = false;
			this->venoznaya->Location = System::Drawing::Point(1168, 6);
			this->venoznaya->Name = L"venoznaya";
			this->venoznaya->Size = System::Drawing::Size(228, 713);
			this->venoznaya->TabIndex = 7;
			this->venoznaya->Visible = false;
			// 
			// nijpolayavena
			// 
			this->nijpolayavena->FlatAppearance->BorderSize = 0;
			this->nijpolayavena->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->nijpolayavena->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->nijpolayavena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nijpolayavena->Location = System::Drawing::Point(86, 205);
			this->nijpolayavena->Name = L"nijpolayavena";
			this->nijpolayavena->Size = System::Drawing::Size(56, 169);
			this->nijpolayavena->TabIndex = 6;
			this->nijpolayavena->UseVisualStyleBackColor = true;
			this->nijpolayavena->Click += gcnew System::EventHandler(this, &MyForm2::nijpolayavena_Click);
			// 
			// venynog
			// 
			this->venynog->FlatAppearance->BorderSize = 0;
			this->venynog->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->venynog->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->venynog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->venynog->Location = System::Drawing::Point(44, 371);
			this->venynog->Name = L"venynog";
			this->venynog->Size = System::Drawing::Size(155, 344);
			this->venynog->TabIndex = 5;
			this->venynog->UseVisualStyleBackColor = true;
			this->venynog->Click += gcnew System::EventHandler(this, &MyForm2::venynog_Click);
			// 
			// venyruk2
			// 
			this->venyruk2->FlatAppearance->BorderSize = 0;
			this->venyruk2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->venyruk2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->venyruk2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->venyruk2->Location = System::Drawing::Point(169, 165);
			this->venyruk2->Name = L"venyruk2";
			this->venyruk2->Size = System::Drawing::Size(56, 249);
			this->venyruk2->TabIndex = 4;
			this->venyruk2->UseVisualStyleBackColor = true;
			this->venyruk2->Click += gcnew System::EventHandler(this, &MyForm2::venyruk2_Click);
			// 
			// venyruk1
			// 
			this->venyruk1->FlatAppearance->BorderSize = 0;
			this->venyruk1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->venyruk1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->venyruk1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->venyruk1->Location = System::Drawing::Point(3, 165);
			this->venyruk1->Name = L"venyruk1";
			this->venyruk1->Size = System::Drawing::Size(56, 249);
			this->venyruk1->TabIndex = 3;
			this->venyruk1->UseVisualStyleBackColor = true;
			this->venyruk1->Click += gcnew System::EventHandler(this, &MyForm2::venyruk1_Click);
			// 
			// plechevyveny
			// 
			this->plechevyveny->FlatAppearance->BorderSize = 0;
			this->plechevyveny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->plechevyveny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->plechevyveny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plechevyveny->Location = System::Drawing::Point(30, 130);
			this->plechevyveny->Name = L"plechevyveny";
			this->plechevyveny->Size = System::Drawing::Size(169, 44);
			this->plechevyveny->TabIndex = 2;
			this->plechevyveny->UseVisualStyleBackColor = true;
			this->plechevyveny->Click += gcnew System::EventHandler(this, &MyForm2::plechevyveny_Click);
			// 
			// yaremnyveny
			// 
			this->yaremnyveny->FlatAppearance->BorderSize = 0;
			this->yaremnyveny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->yaremnyveny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->yaremnyveny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yaremnyveny->Location = System::Drawing::Point(84, 93);
			this->yaremnyveny->Name = L"yaremnyveny";
			this->yaremnyveny->Size = System::Drawing::Size(55, 42);
			this->yaremnyveny->TabIndex = 1;
			this->yaremnyveny->UseVisualStyleBackColor = true;
			this->yaremnyveny->Click += gcnew System::EventHandler(this, &MyForm2::yaremnyveny_Click);
			// 
			// venycherep
			// 
			this->venycherep->FlatAppearance->BorderSize = 0;
			this->venycherep->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->venycherep->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->venycherep->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->venycherep->Location = System::Drawing::Point(70, 21);
			this->venycherep->Name = L"venycherep";
			this->venycherep->Size = System::Drawing::Size(82, 66);
			this->venycherep->TabIndex = 0;
			this->venycherep->UseVisualStyleBackColor = true;
			this->venycherep->Click += gcnew System::EventHandler(this, &MyForm2::venycherep_Click);
			// 
			// reproduct
			// 
			this->reproduct->BackColor = System::Drawing::Color::Transparent;
			this->reproduct->Controls->Add(this->yaichnick1);
			this->reproduct->Controls->Add(this->yaichnick2);
			this->reproduct->Controls->Add(this->vlagalische);
			this->reproduct->Controls->Add(this->matka);
			this->reproduct->Enabled = false;
			this->reproduct->Location = System::Drawing::Point(779, 705);
			this->reproduct->Name = L"reproduct";
			this->reproduct->Size = System::Drawing::Size(372, 279);
			this->reproduct->TabIndex = 6;
			this->reproduct->Visible = false;
			// 
			// yaichnick1
			// 
			this->yaichnick1->FlatAppearance->BorderSize = 0;
			this->yaichnick1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->yaichnick1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->yaichnick1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yaichnick1->Location = System::Drawing::Point(3, 10);
			this->yaichnick1->Name = L"yaichnick1";
			this->yaichnick1->Size = System::Drawing::Size(122, 133);
			this->yaichnick1->TabIndex = 3;
			this->yaichnick1->UseVisualStyleBackColor = true;
			this->yaichnick1->Click += gcnew System::EventHandler(this, &MyForm2::yaichnick1_Click);
			// 
			// yaichnick2
			// 
			this->yaichnick2->FlatAppearance->BorderSize = 0;
			this->yaichnick2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->yaichnick2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->yaichnick2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yaichnick2->Location = System::Drawing::Point(250, 16);
			this->yaichnick2->Name = L"yaichnick2";
			this->yaichnick2->Size = System::Drawing::Size(122, 133);
			this->yaichnick2->TabIndex = 2;
			this->yaichnick2->UseVisualStyleBackColor = true;
			this->yaichnick2->Click += gcnew System::EventHandler(this, &MyForm2::yaichnick2_Click);
			// 
			// vlagalische
			// 
			this->vlagalische->FlatAppearance->BorderSize = 0;
			this->vlagalische->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->vlagalische->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->vlagalische->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vlagalische->Location = System::Drawing::Point(134, 145);
			this->vlagalische->Name = L"vlagalische";
			this->vlagalische->Size = System::Drawing::Size(102, 131);
			this->vlagalische->TabIndex = 1;
			this->vlagalische->UseVisualStyleBackColor = true;
			this->vlagalische->Click += gcnew System::EventHandler(this, &MyForm2::vlagalische_Click);
			// 
			// matka
			// 
			this->matka->FlatAppearance->BorderSize = 0;
			this->matka->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->matka->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->matka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->matka->Location = System::Drawing::Point(103, 3);
			this->matka->Name = L"matka";
			this->matka->Size = System::Drawing::Size(158, 146);
			this->matka->TabIndex = 0;
			this->matka->UseVisualStyleBackColor = true;
			this->matka->Click += gcnew System::EventHandler(this, &MyForm2::matka_Click);
			// 
			// arterialnaya
			// 
			this->arterialnaya->BackColor = System::Drawing::Color::Transparent;
			this->arterialnaya->Controls->Add(this->nogiart);
			this->arterialnaya->Controls->Add(this->tazart);
			this->arterialnaya->Controls->Add(this->ruka2art);
			this->arterialnaya->Controls->Add(this->ryka1art);
			this->arterialnaya->Controls->Add(this->mejrebernart);
			this->arterialnaya->Controls->Add(this->plechevyart);
			this->arterialnaya->Controls->Add(this->aorta);
			this->arterialnaya->Controls->Add(this->sonnayaart);
			this->arterialnaya->Controls->Add(this->mozgart);
			this->arterialnaya->Enabled = false;
			this->arterialnaya->Location = System::Drawing::Point(1100, 713);
			this->arterialnaya->Name = L"arterialnaya";
			this->arterialnaya->Size = System::Drawing::Size(227, 719);
			this->arterialnaya->TabIndex = 8;
			this->arterialnaya->Visible = false;
			// 
			// nogiart
			// 
			this->nogiart->FlatAppearance->BorderSize = 0;
			this->nogiart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->nogiart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->nogiart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nogiart->Location = System::Drawing::Point(48, 406);
			this->nogiart->Name = L"nogiart";
			this->nogiart->Size = System::Drawing::Size(126, 304);
			this->nogiart->TabIndex = 8;
			this->nogiart->UseVisualStyleBackColor = true;
			this->nogiart->Click += gcnew System::EventHandler(this, &MyForm2::nogiart_Click);
			// 
			// tazart
			// 
			this->tazart->FlatAppearance->BorderSize = 0;
			this->tazart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tazart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tazart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tazart->Location = System::Drawing::Point(48, 315);
			this->tazart->Name = L"tazart";
			this->tazart->Size = System::Drawing::Size(126, 74);
			this->tazart->TabIndex = 7;
			this->tazart->UseVisualStyleBackColor = true;
			this->tazart->Click += gcnew System::EventHandler(this, &MyForm2::tazart_Click);
			// 
			// ruka2art
			// 
			this->ruka2art->FlatAppearance->BorderSize = 0;
			this->ruka2art->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ruka2art->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ruka2art->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ruka2art->Location = System::Drawing::Point(167, 168);
			this->ruka2art->Name = L"ruka2art";
			this->ruka2art->Size = System::Drawing::Size(57, 236);
			this->ruka2art->TabIndex = 6;
			this->ruka2art->UseVisualStyleBackColor = true;
			this->ruka2art->Click += gcnew System::EventHandler(this, &MyForm2::ruka2art_Click);
			// 
			// ryka1art
			// 
			this->ryka1art->FlatAppearance->BorderSize = 0;
			this->ryka1art->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ryka1art->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ryka1art->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ryka1art->Location = System::Drawing::Point(3, 158);
			this->ryka1art->Name = L"ryka1art";
			this->ryka1art->Size = System::Drawing::Size(59, 259);
			this->ryka1art->TabIndex = 5;
			this->ryka1art->UseVisualStyleBackColor = true;
			this->ryka1art->Click += gcnew System::EventHandler(this, &MyForm2::ryka1art_Click);
			// 
			// mejrebernart
			// 
			this->mejrebernart->FlatAppearance->BorderSize = 0;
			this->mejrebernart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mejrebernart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mejrebernart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mejrebernart->Location = System::Drawing::Point(57, 153);
			this->mejrebernart->Name = L"mejrebernart";
			this->mejrebernart->Size = System::Drawing::Size(104, 106);
			this->mejrebernart->TabIndex = 4;
			this->mejrebernart->UseVisualStyleBackColor = true;
			this->mejrebernart->Click += gcnew System::EventHandler(this, &MyForm2::mejrebernart_Click);
			// 
			// plechevyart
			// 
			this->plechevyart->FlatAppearance->BorderSize = 0;
			this->plechevyart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->plechevyart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->plechevyart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plechevyart->Location = System::Drawing::Point(48, 125);
			this->plechevyart->Name = L"plechevyart";
			this->plechevyart->Size = System::Drawing::Size(126, 27);
			this->plechevyart->TabIndex = 3;
			this->plechevyart->UseVisualStyleBackColor = true;
			this->plechevyart->Click += gcnew System::EventHandler(this, &MyForm2::plechevyart_Click);
			// 
			// aorta
			// 
			this->aorta->FlatAppearance->BorderSize = 0;
			this->aorta->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->aorta->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->aorta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->aorta->Location = System::Drawing::Point(99, 153);
			this->aorta->Name = L"aorta";
			this->aorta->Size = System::Drawing::Size(22, 166);
			this->aorta->TabIndex = 2;
			this->aorta->UseVisualStyleBackColor = true;
			this->aorta->Click += gcnew System::EventHandler(this, &MyForm2::aorta_Click);
			// 
			// sonnayaart
			// 
			this->sonnayaart->FlatAppearance->BorderSize = 0;
			this->sonnayaart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->sonnayaart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->sonnayaart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sonnayaart->Location = System::Drawing::Point(82, 98);
			this->sonnayaart->Name = L"sonnayaart";
			this->sonnayaart->Size = System::Drawing::Size(50, 33);
			this->sonnayaart->TabIndex = 1;
			this->sonnayaart->UseVisualStyleBackColor = true;
			this->sonnayaart->Click += gcnew System::EventHandler(this, &MyForm2::sonnayaart_Click);
			// 
			// mozgart
			// 
			this->mozgart->FlatAppearance->BorderSize = 0;
			this->mozgart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mozgart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mozgart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mozgart->Location = System::Drawing::Point(78, 7);
			this->mozgart->Name = L"mozgart";
			this->mozgart->Size = System::Drawing::Size(73, 85);
			this->mozgart->TabIndex = 0;
			this->mozgart->UseVisualStyleBackColor = true;
			this->mozgart->Click += gcnew System::EventHandler(this, &MyForm2::mozgart_Click);
			// 
			// mishechnaya
			// 
			this->mishechnaya->BackColor = System::Drawing::Color::Transparent;
			this->mishechnaya->Controls->Add(this->stopmishtsi);
			this->mishechnaya->Controls->Add(this->golenimishtsi);
			this->mishechnaya->Controls->Add(this->bedramishtsi2);
			this->mishechnaya->Controls->Add(this->bedromishtsi1);
			this->mishechnaya->Controls->Add(this->kistimishtsi3);
			this->mishechnaya->Controls->Add(this->kistimishtsi2);
			this->mishechnaya->Controls->Add(this->kistimishtsi1);
			this->mishechnaya->Controls->Add(this->predplechmishtsi3);
			this->mishechnaya->Controls->Add(this->predplechmishtsi2);
			this->mishechnaya->Controls->Add(this->predplechmishtsi1);
			this->mishechnaya->Controls->Add(this->trapetsevidnye);
			this->mishechnaya->Controls->Add(this->bitseps3);
			this->mishechnaya->Controls->Add(this->bitseps2);
			this->mishechnaya->Controls->Add(this->bitseps1);
			this->mishechnaya->Controls->Add(this->yagodichniyemishtsi);
			this->mishechnaya->Controls->Add(this->tazmishtsi);
			this->mishechnaya->Controls->Add(this->press);
			this->mishechnaya->Controls->Add(this->mishtsispini);
			this->mishechnaya->Controls->Add(this->grydniyemishtsi);
			this->mishechnaya->Controls->Add(this->mishtsineck);
			this->mishechnaya->Controls->Add(this->mishtsilica);
			this->mishechnaya->Enabled = false;
			this->mishechnaya->Location = System::Drawing::Point(580, 716);
			this->mishechnaya->Name = L"mishechnaya";
			this->mishechnaya->Size = System::Drawing::Size(530, 718);
			this->mishechnaya->TabIndex = 9;
			this->mishechnaya->Visible = false;
			// 
			// stopmishtsi
			// 
			this->stopmishtsi->FlatAppearance->BorderSize = 0;
			this->stopmishtsi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->stopmishtsi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->stopmishtsi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stopmishtsi->Location = System::Drawing::Point(44, 669);
			this->stopmishtsi->Name = L"stopmishtsi";
			this->stopmishtsi->Size = System::Drawing::Size(450, 49);
			this->stopmishtsi->TabIndex = 20;
			this->stopmishtsi->UseVisualStyleBackColor = true;
			this->stopmishtsi->Click += gcnew System::EventHandler(this, &MyForm2::stopmishtsi_Click);
			// 
			// golenimishtsi
			// 
			this->golenimishtsi->FlatAppearance->BorderSize = 0;
			this->golenimishtsi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->golenimishtsi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->golenimishtsi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->golenimishtsi->Location = System::Drawing::Point(53, 504);
			this->golenimishtsi->Name = L"golenimishtsi";
			this->golenimishtsi->Size = System::Drawing::Size(428, 165);
			this->golenimishtsi->TabIndex = 19;
			this->golenimishtsi->UseVisualStyleBackColor = true;
			this->golenimishtsi->Click += gcnew System::EventHandler(this, &MyForm2::golenimishtsi_Click);
			// 
			// bedramishtsi2
			// 
			this->bedramishtsi2->FlatAppearance->BorderSize = 0;
			this->bedramishtsi2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bedramishtsi2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bedramishtsi2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bedramishtsi2->Location = System::Drawing::Point(331, 395);
			this->bedramishtsi2->Name = L"bedramishtsi2";
			this->bedramishtsi2->Size = System::Drawing::Size(152, 141);
			this->bedramishtsi2->TabIndex = 18;
			this->bedramishtsi2->UseVisualStyleBackColor = true;
			this->bedramishtsi2->Click += gcnew System::EventHandler(this, &MyForm2::bedramishtsi2_Click);
			// 
			// bedromishtsi1
			// 
			this->bedromishtsi1->FlatAppearance->BorderSize = 0;
			this->bedromishtsi1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bedromishtsi1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bedromishtsi1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bedromishtsi1->Location = System::Drawing::Point(44, 357);
			this->bedromishtsi1->Name = L"bedromishtsi1";
			this->bedromishtsi1->Size = System::Drawing::Size(152, 141);
			this->bedromishtsi1->TabIndex = 17;
			this->bedromishtsi1->UseVisualStyleBackColor = true;
			this->bedromishtsi1->Click += gcnew System::EventHandler(this, &MyForm2::bedromishtsi1_Click);
			// 
			// kistimishtsi3
			// 
			this->kistimishtsi3->FlatAppearance->BorderSize = 0;
			this->kistimishtsi3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->kistimishtsi3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->kistimishtsi3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kistimishtsi3->Location = System::Drawing::Point(486, 357);
			this->kistimishtsi3->Name = L"kistimishtsi3";
			this->kistimishtsi3->Size = System::Drawing::Size(44, 62);
			this->kistimishtsi3->TabIndex = 16;
			this->kistimishtsi3->UseVisualStyleBackColor = true;
			this->kistimishtsi3->Click += gcnew System::EventHandler(this, &MyForm2::kistimishtsi3_Click);
			// 
			// kistimishtsi2
			// 
			this->kistimishtsi2->FlatAppearance->BorderSize = 0;
			this->kistimishtsi2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->kistimishtsi2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->kistimishtsi2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kistimishtsi2->Location = System::Drawing::Point(202, 357);
			this->kistimishtsi2->Name = L"kistimishtsi2";
			this->kistimishtsi2->Size = System::Drawing::Size(123, 62);
			this->kistimishtsi2->TabIndex = 15;
			this->kistimishtsi2->UseVisualStyleBackColor = true;
			this->kistimishtsi2->Click += gcnew System::EventHandler(this, &MyForm2::kistimishtsi2_Click);
			// 
			// kistimishtsi1
			// 
			this->kistimishtsi1->FlatAppearance->BorderSize = 0;
			this->kistimishtsi1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->kistimishtsi1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->kistimishtsi1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kistimishtsi1->Location = System::Drawing::Point(3, 357);
			this->kistimishtsi1->Name = L"kistimishtsi1";
			this->kistimishtsi1->Size = System::Drawing::Size(44, 62);
			this->kistimishtsi1->TabIndex = 14;
			this->kistimishtsi1->UseVisualStyleBackColor = true;
			this->kistimishtsi1->Click += gcnew System::EventHandler(this, &MyForm2::kistimishtsi1_Click);
			// 
			// predplechmishtsi3
			// 
			this->predplechmishtsi3->FlatAppearance->BorderSize = 0;
			this->predplechmishtsi3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->predplechmishtsi3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->predplechmishtsi3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->predplechmishtsi3->Location = System::Drawing::Point(468, 267);
			this->predplechmishtsi3->Name = L"predplechmishtsi3";
			this->predplechmishtsi3->Size = System::Drawing::Size(44, 104);
			this->predplechmishtsi3->TabIndex = 13;
			this->predplechmishtsi3->UseVisualStyleBackColor = true;
			this->predplechmishtsi3->Click += gcnew System::EventHandler(this, &MyForm2::predplechmishtsi3_Click);
			// 
			// predplechmishtsi2
			// 
			this->predplechmishtsi2->FlatAppearance->BorderSize = 0;
			this->predplechmishtsi2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->predplechmishtsi2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->predplechmishtsi2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->predplechmishtsi2->Location = System::Drawing::Point(189, 247);
			this->predplechmishtsi2->Name = L"predplechmishtsi2";
			this->predplechmishtsi2->Size = System::Drawing::Size(155, 104);
			this->predplechmishtsi2->TabIndex = 12;
			this->predplechmishtsi2->UseVisualStyleBackColor = true;
			this->predplechmishtsi2->Click += gcnew System::EventHandler(this, &MyForm2::predplechmishtsi2_Click);
			// 
			// predplechmishtsi1
			// 
			this->predplechmishtsi1->FlatAppearance->BorderSize = 0;
			this->predplechmishtsi1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->predplechmishtsi1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->predplechmishtsi1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->predplechmishtsi1->Location = System::Drawing::Point(15, 247);
			this->predplechmishtsi1->Name = L"predplechmishtsi1";
			this->predplechmishtsi1->Size = System::Drawing::Size(44, 104);
			this->predplechmishtsi1->TabIndex = 11;
			this->predplechmishtsi1->UseVisualStyleBackColor = true;
			this->predplechmishtsi1->Click += gcnew System::EventHandler(this, &MyForm2::predplechmishtsi1_Click);
			// 
			// trapetsevidnye
			// 
			this->trapetsevidnye->FlatAppearance->BorderSize = 0;
			this->trapetsevidnye->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->trapetsevidnye->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->trapetsevidnye->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->trapetsevidnye->Location = System::Drawing::Point(350, 110);
			this->trapetsevidnye->Name = L"trapetsevidnye";
			this->trapetsevidnye->Size = System::Drawing::Size(118, 79);
			this->trapetsevidnye->TabIndex = 10;
			this->trapetsevidnye->UseVisualStyleBackColor = true;
			this->trapetsevidnye->Click += gcnew System::EventHandler(this, &MyForm2::trapetsevidnye_Click);
			// 
			// bitseps3
			// 
			this->bitseps3->FlatAppearance->BorderSize = 0;
			this->bitseps3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bitseps3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bitseps3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bitseps3->Location = System::Drawing::Point(459, 160);
			this->bitseps3->Name = L"bitseps3";
			this->bitseps3->Size = System::Drawing::Size(47, 109);
			this->bitseps3->TabIndex = 9;
			this->bitseps3->UseVisualStyleBackColor = true;
			this->bitseps3->Click += gcnew System::EventHandler(this, &MyForm2::bitseps3_Click);
			// 
			// bitseps2
			// 
			this->bitseps2->FlatAppearance->BorderSize = 0;
			this->bitseps2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bitseps2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bitseps2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bitseps2->Location = System::Drawing::Point(178, 143);
			this->bitseps2->Name = L"bitseps2";
			this->bitseps2->Size = System::Drawing::Size(172, 114);
			this->bitseps2->TabIndex = 8;
			this->bitseps2->UseVisualStyleBackColor = true;
			this->bitseps2->Click += gcnew System::EventHandler(this, &MyForm2::bitseps2_Click);
			// 
			// bitseps1
			// 
			this->bitseps1->FlatAppearance->BorderSize = 0;
			this->bitseps1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->bitseps1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->bitseps1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bitseps1->Location = System::Drawing::Point(24, 133);
			this->bitseps1->Name = L"bitseps1";
			this->bitseps1->Size = System::Drawing::Size(52, 124);
			this->bitseps1->TabIndex = 7;
			this->bitseps1->UseVisualStyleBackColor = true;
			this->bitseps1->Click += gcnew System::EventHandler(this, &MyForm2::bitseps1_Click);
			// 
			// yagodichniyemishtsi
			// 
			this->yagodichniyemishtsi->FlatAppearance->BorderSize = 0;
			this->yagodichniyemishtsi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->yagodichniyemishtsi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->yagodichniyemishtsi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yagodichniyemishtsi->Location = System::Drawing::Point(335, 296);
			this->yagodichniyemishtsi->Name = L"yagodichniyemishtsi";
			this->yagodichniyemishtsi->Size = System::Drawing::Size(146, 104);
			this->yagodichniyemishtsi->TabIndex = 6;
			this->yagodichniyemishtsi->UseVisualStyleBackColor = true;
			this->yagodichniyemishtsi->Click += gcnew System::EventHandler(this, &MyForm2::yagodichniyemishtsi_Click);
			// 
			// tazmishtsi
			// 
			this->tazmishtsi->FlatAppearance->BorderSize = 0;
			this->tazmishtsi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tazmishtsi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tazmishtsi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tazmishtsi->Location = System::Drawing::Point(53, 283);
			this->tazmishtsi->Name = L"tazmishtsi";
			this->tazmishtsi->Size = System::Drawing::Size(143, 88);
			this->tazmishtsi->TabIndex = 5;
			this->tazmishtsi->UseVisualStyleBackColor = true;
			this->tazmishtsi->Click += gcnew System::EventHandler(this, &MyForm2::tazmishtsi_Click);
			// 
			// press
			// 
			this->press->FlatAppearance->BorderSize = 0;
			this->press->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->press->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->press->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->press->Location = System::Drawing::Point(65, 198);
			this->press->Name = L"press";
			this->press->Size = System::Drawing::Size(118, 104);
			this->press->TabIndex = 4;
			this->press->UseVisualStyleBackColor = true;
			this->press->Click += gcnew System::EventHandler(this, &MyForm2::press_Click);
			// 
			// mishtsispini
			// 
			this->mishtsispini->FlatAppearance->BorderSize = 0;
			this->mishtsispini->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mishtsispini->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mishtsispini->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mishtsispini->Location = System::Drawing::Point(350, 180);
			this->mishtsispini->Name = L"mishtsispini";
			this->mishtsispini->Size = System::Drawing::Size(112, 122);
			this->mishtsispini->TabIndex = 3;
			this->mishtsispini->UseVisualStyleBackColor = true;
			this->mishtsispini->Click += gcnew System::EventHandler(this, &MyForm2::mishtsispini_Click);
			// 
			// grydniyemishtsi
			// 
			this->grydniyemishtsi->FlatAppearance->BorderSize = 0;
			this->grydniyemishtsi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->grydniyemishtsi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->grydniyemishtsi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grydniyemishtsi->Location = System::Drawing::Point(65, 133);
			this->grydniyemishtsi->Name = L"grydniyemishtsi";
			this->grydniyemishtsi->Size = System::Drawing::Size(118, 80);
			this->grydniyemishtsi->TabIndex = 2;
			this->grydniyemishtsi->UseVisualStyleBackColor = true;
			this->grydniyemishtsi->Click += gcnew System::EventHandler(this, &MyForm2::grydniyemishtsi_Click);
			// 
			// mishtsineck
			// 
			this->mishtsineck->FlatAppearance->BorderSize = 0;
			this->mishtsineck->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mishtsineck->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mishtsineck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mishtsineck->Location = System::Drawing::Point(89, 83);
			this->mishtsineck->Name = L"mishtsineck";
			this->mishtsineck->Size = System::Drawing::Size(357, 44);
			this->mishtsineck->TabIndex = 1;
			this->mishtsineck->UseVisualStyleBackColor = true;
			this->mishtsineck->Click += gcnew System::EventHandler(this, &MyForm2::mishtsineck_Click);
			// 
			// mishtsilica
			// 
			this->mishtsilica->FlatAppearance->BorderSize = 0;
			this->mishtsilica->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mishtsilica->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mishtsilica->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mishtsilica->Location = System::Drawing::Point(89, 8);
			this->mishtsilica->Name = L"mishtsilica";
			this->mishtsilica->Size = System::Drawing::Size(357, 78);
			this->mishtsilica->TabIndex = 0;
			this->mishtsilica->UseVisualStyleBackColor = true;
			this->mishtsilica->Click += gcnew System::EventHandler(this, &MyForm2::mishtsilica_Click);
			// 
			// limfa
			// 
			this->limfa->BackColor = System::Drawing::Color::Transparent;
			this->limfa->Controls->Add(this->nizlimfa);
			this->limfa->Controls->Add(this->verh2limfa);
			this->limfa->Controls->Add(this->verh1limfa);
			this->limfa->Controls->Add(this->poyasnitsalimfa);
			this->limfa->Controls->Add(this->timus);
			this->limfa->Controls->Add(this->mindaliny);
			this->limfa->Controls->Add(this->selezenka);
			this->limfa->Controls->Add(this->grudlimfa);
			this->limfa->Controls->Add(this->qisternalimfa);
			this->limfa->Controls->Add(this->pahlimfa);
			this->limfa->Controls->Add(this->podmish2limfa);
			this->limfa->Controls->Add(this->podmash1limfa);
			this->limfa->Controls->Add(this->kluychitsilimfa);
			this->limfa->Controls->Add(this->sheialimfa);
			this->limfa->Enabled = false;
			this->limfa->Location = System::Drawing::Point(1140, 694);
			this->limfa->Name = L"limfa";
			this->limfa->Size = System::Drawing::Size(241, 712);
			this->limfa->TabIndex = 10;
			this->limfa->Visible = false;
			// 
			// nizlimfa
			// 
			this->nizlimfa->FlatAppearance->BorderSize = 0;
			this->nizlimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->nizlimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->nizlimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nizlimfa->Location = System::Drawing::Point(45, 400);
			this->nizlimfa->Name = L"nizlimfa";
			this->nizlimfa->Size = System::Drawing::Size(151, 309);
			this->nizlimfa->TabIndex = 13;
			this->nizlimfa->UseVisualStyleBackColor = true;
			this->nizlimfa->Click += gcnew System::EventHandler(this, &MyForm2::nizlimfa_Click);
			// 
			// verh2limfa
			// 
			this->verh2limfa->FlatAppearance->BorderSize = 0;
			this->verh2limfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->verh2limfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->verh2limfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->verh2limfa->Location = System::Drawing::Point(166, 202);
			this->verh2limfa->Name = L"verh2limfa";
			this->verh2limfa->Size = System::Drawing::Size(58, 192);
			this->verh2limfa->TabIndex = 12;
			this->verh2limfa->UseVisualStyleBackColor = true;
			this->verh2limfa->Click += gcnew System::EventHandler(this, &MyForm2::verh2limfa_Click);
			// 
			// verh1limfa
			// 
			this->verh1limfa->FlatAppearance->BorderSize = 0;
			this->verh1limfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->verh1limfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->verh1limfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->verh1limfa->Location = System::Drawing::Point(3, 202);
			this->verh1limfa->Name = L"verh1limfa";
			this->verh1limfa->Size = System::Drawing::Size(52, 192);
			this->verh1limfa->TabIndex = 11;
			this->verh1limfa->UseVisualStyleBackColor = true;
			this->verh1limfa->Click += gcnew System::EventHandler(this, &MyForm2::verh1limfa_Click);
			// 
			// poyasnitsalimfa
			// 
			this->poyasnitsalimfa->FlatAppearance->BorderSize = 0;
			this->poyasnitsalimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->poyasnitsalimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->poyasnitsalimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->poyasnitsalimfa->Location = System::Drawing::Point(51, 289);
			this->poyasnitsalimfa->Name = L"poyasnitsalimfa";
			this->poyasnitsalimfa->Size = System::Drawing::Size(123, 42);
			this->poyasnitsalimfa->TabIndex = 10;
			this->poyasnitsalimfa->UseVisualStyleBackColor = true;
			this->poyasnitsalimfa->Click += gcnew System::EventHandler(this, &MyForm2::poyasnitsalimfa_Click);
			// 
			// timus
			// 
			this->timus->FlatAppearance->BorderSize = 0;
			this->timus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->timus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->timus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->timus->Location = System::Drawing::Point(102, 112);
			this->timus->Name = L"timus";
			this->timus->Size = System::Drawing::Size(29, 42);
			this->timus->TabIndex = 9;
			this->timus->UseVisualStyleBackColor = true;
			this->timus->Click += gcnew System::EventHandler(this, &MyForm2::timus_Click);
			// 
			// mindaliny
			// 
			this->mindaliny->FlatAppearance->BorderSize = 0;
			this->mindaliny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mindaliny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mindaliny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mindaliny->Location = System::Drawing::Point(91, 70);
			this->mindaliny->Name = L"mindaliny";
			this->mindaliny->Size = System::Drawing::Size(48, 15);
			this->mindaliny->TabIndex = 8;
			this->mindaliny->UseVisualStyleBackColor = true;
			this->mindaliny->Click += gcnew System::EventHandler(this, &MyForm2::mindaliny_Click);
			// 
			// selezenka
			// 
			this->selezenka->FlatAppearance->BorderSize = 0;
			this->selezenka->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->selezenka->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->selezenka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->selezenka->Location = System::Drawing::Point(121, 220);
			this->selezenka->Name = L"selezenka";
			this->selezenka->Size = System::Drawing::Size(39, 28);
			this->selezenka->TabIndex = 7;
			this->selezenka->UseVisualStyleBackColor = true;
			this->selezenka->Click += gcnew System::EventHandler(this, &MyForm2::selezenka_Click);
			// 
			// grudlimfa
			// 
			this->grudlimfa->FlatAppearance->BorderSize = 0;
			this->grudlimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->grudlimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->grudlimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grudlimfa->Location = System::Drawing::Point(83, 154);
			this->grudlimfa->Name = L"grudlimfa";
			this->grudlimfa->Size = System::Drawing::Size(48, 94);
			this->grudlimfa->TabIndex = 6;
			this->grudlimfa->UseVisualStyleBackColor = true;
			this->grudlimfa->Click += gcnew System::EventHandler(this, &MyForm2::grudlimfa_Click);
			// 
			// qisternalimfa
			// 
			this->qisternalimfa->FlatAppearance->BorderSize = 0;
			this->qisternalimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->qisternalimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->qisternalimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->qisternalimfa->Location = System::Drawing::Point(91, 247);
			this->qisternalimfa->Name = L"qisternalimfa";
			this->qisternalimfa->Size = System::Drawing::Size(40, 52);
			this->qisternalimfa->TabIndex = 5;
			this->qisternalimfa->UseVisualStyleBackColor = true;
			this->qisternalimfa->Click += gcnew System::EventHandler(this, &MyForm2::qisternalimfa_Click);
			// 
			// pahlimfa
			// 
			this->pahlimfa->FlatAppearance->BorderSize = 0;
			this->pahlimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->pahlimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->pahlimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pahlimfa->Location = System::Drawing::Point(45, 357);
			this->pahlimfa->Name = L"pahlimfa";
			this->pahlimfa->Size = System::Drawing::Size(133, 42);
			this->pahlimfa->TabIndex = 4;
			this->pahlimfa->UseVisualStyleBackColor = true;
			this->pahlimfa->Click += gcnew System::EventHandler(this, &MyForm2::pahlimfa_Click);
			// 
			// podmish2limfa
			// 
			this->podmish2limfa->FlatAppearance->BorderSize = 0;
			this->podmish2limfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->podmish2limfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->podmish2limfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->podmish2limfa->Location = System::Drawing::Point(148, 154);
			this->podmish2limfa->Name = L"podmish2limfa";
			this->podmish2limfa->Size = System::Drawing::Size(48, 42);
			this->podmish2limfa->TabIndex = 3;
			this->podmish2limfa->UseVisualStyleBackColor = true;
			this->podmish2limfa->Click += gcnew System::EventHandler(this, &MyForm2::podmish2limfa_Click);
			// 
			// podmash1limfa
			// 
			this->podmash1limfa->FlatAppearance->BorderSize = 0;
			this->podmash1limfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->podmash1limfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->podmash1limfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->podmash1limfa->Location = System::Drawing::Point(29, 154);
			this->podmash1limfa->Name = L"podmash1limfa";
			this->podmash1limfa->Size = System::Drawing::Size(48, 42);
			this->podmash1limfa->TabIndex = 2;
			this->podmash1limfa->UseVisualStyleBackColor = true;
			this->podmash1limfa->Click += gcnew System::EventHandler(this, &MyForm2::podmash1limfa_Click);
			// 
			// kluychitsilimfa
			// 
			this->kluychitsilimfa->FlatAppearance->BorderSize = 0;
			this->kluychitsilimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->kluychitsilimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->kluychitsilimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kluychitsilimfa->Location = System::Drawing::Point(45, 112);
			this->kluychitsilimfa->Name = L"kluychitsilimfa";
			this->kluychitsilimfa->Size = System::Drawing::Size(133, 19);
			this->kluychitsilimfa->TabIndex = 1;
			this->kluychitsilimfa->UseVisualStyleBackColor = true;
			// 
			// sheialimfa
			// 
			this->sheialimfa->FlatAppearance->BorderSize = 0;
			this->sheialimfa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->sheialimfa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->sheialimfa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sheialimfa->Location = System::Drawing::Point(91, 91);
			this->sheialimfa->Name = L"sheialimfa";
			this->sheialimfa->Size = System::Drawing::Size(40, 31);
			this->sheialimfa->TabIndex = 0;
			this->sheialimfa->UseVisualStyleBackColor = true;
			this->sheialimfa->Click += gcnew System::EventHandler(this, &MyForm2::sheialimfa_Click);
			// 
			// organy
			// 
			this->organy->BackColor = System::Drawing::Color::Transparent;
			this->organy->Controls->Add(this->tonky);
			this->organy->Controls->Add(this->tolsty);
			this->organy->Controls->Add(this->pechenorgan);
			this->organy->Controls->Add(this->mochevoy);
			this->organy->Controls->Add(this->heart);
			this->organy->Controls->Add(this->pochki);
			this->organy->Controls->Add(this->podjeludok);
			this->organy->Controls->Add(this->jeludok);
			this->organy->Controls->Add(this->diafragma);
			this->organy->Controls->Add(this->legkie);
			this->organy->Controls->Add(this->shitovidkaorgan);
			this->organy->Controls->Add(this->mozg);
			this->organy->Enabled = false;
			this->organy->Location = System::Drawing::Point(1148, 229);
			this->organy->Name = L"organy";
			this->organy->Size = System::Drawing::Size(696, 699);
			this->organy->TabIndex = 11;
			this->organy->Visible = false;
			// 
			// tonky
			// 
			this->tonky->FlatAppearance->BorderSize = 0;
			this->tonky->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tonky->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tonky->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tonky->Location = System::Drawing::Point(446, 501);
			this->tonky->Name = L"tonky";
			this->tonky->Size = System::Drawing::Size(123, 108);
			this->tonky->TabIndex = 11;
			this->tonky->UseVisualStyleBackColor = true;
			this->tonky->Click += gcnew System::EventHandler(this, &MyForm2::tonky_Click);
			// 
			// tolsty
			// 
			this->tolsty->FlatAppearance->BorderSize = 0;
			this->tolsty->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->tolsty->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->tolsty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tolsty->Location = System::Drawing::Point(432, 453);
			this->tolsty->Name = L"tolsty";
			this->tolsty->Size = System::Drawing::Size(172, 172);
			this->tolsty->TabIndex = 10;
			this->tolsty->UseVisualStyleBackColor = true;
			this->tolsty->Click += gcnew System::EventHandler(this, &MyForm2::tolsty_Click);
			// 
			// pechenorgan
			// 
			this->pechenorgan->FlatAppearance->BorderSize = 0;
			this->pechenorgan->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->pechenorgan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->pechenorgan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pechenorgan->Location = System::Drawing::Point(432, 362);
			this->pechenorgan->Name = L"pechenorgan";
			this->pechenorgan->Size = System::Drawing::Size(110, 85);
			this->pechenorgan->TabIndex = 9;
			this->pechenorgan->UseVisualStyleBackColor = true;
			this->pechenorgan->Click += gcnew System::EventHandler(this, &MyForm2::pechenorgan_Click);
			// 
			// mochevoy
			// 
			this->mochevoy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mochevoy.BackgroundImage")));
			this->mochevoy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->mochevoy->FlatAppearance->BorderSize = 0;
			this->mochevoy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mochevoy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mochevoy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mochevoy->Location = System::Drawing::Point(458, 606);
			this->mochevoy->Name = L"mochevoy";
			this->mochevoy->Size = System::Drawing::Size(111, 93);
			this->mochevoy->TabIndex = 8;
			this->mochevoy->UseVisualStyleBackColor = true;
			this->mochevoy->Click += gcnew System::EventHandler(this, &MyForm2::mochevoy_Click);
			// 
			// heart
			// 
			this->heart->AutoEllipsis = true;
			this->heart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"heart.BackgroundImage")));
			this->heart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->heart->FlatAppearance->BorderSize = 0;
			this->heart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->heart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->heart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->heart->Location = System::Drawing::Point(222, 61);
			this->heart->Name = L"heart";
			this->heart->Size = System::Drawing::Size(112, 99);
			this->heart->TabIndex = 7;
			this->heart->UseVisualStyleBackColor = true;
			this->heart->Click += gcnew System::EventHandler(this, &MyForm2::heart_Click);
			// 
			// pochki
			// 
			this->pochki->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pochki.BackgroundImage")));
			this->pochki->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pochki->FlatAppearance->BorderSize = 0;
			this->pochki->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->pochki->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->pochki->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pochki->Location = System::Drawing::Point(199, 559);
			this->pochki->Name = L"pochki";
			this->pochki->Size = System::Drawing::Size(103, 106);
			this->pochki->TabIndex = 6;
			this->pochki->UseVisualStyleBackColor = true;
			this->pochki->Click += gcnew System::EventHandler(this, &MyForm2::pochki_Click);
			// 
			// podjeludok
			// 
			this->podjeludok->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"podjeludok.BackgroundImage")));
			this->podjeludok->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->podjeludok->FlatAppearance->BorderSize = 0;
			this->podjeludok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->podjeludok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->podjeludok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->podjeludok->Location = System::Drawing::Point(32, 430);
			this->podjeludok->Name = L"podjeludok";
			this->podjeludok->Size = System::Drawing::Size(118, 116);
			this->podjeludok->TabIndex = 5;
			this->podjeludok->UseVisualStyleBackColor = true;
			this->podjeludok->Click += gcnew System::EventHandler(this, &MyForm2::podjeludok_Click);
			// 
			// jeludok
			// 
			this->jeludok->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jeludok.BackgroundImage")));
			this->jeludok->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->jeludok->FlatAppearance->BorderSize = 0;
			this->jeludok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->jeludok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->jeludok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jeludok->Location = System::Drawing::Point(199, 307);
			this->jeludok->Name = L"jeludok";
			this->jeludok->Size = System::Drawing::Size(105, 100);
			this->jeludok->TabIndex = 4;
			this->jeludok->UseVisualStyleBackColor = true;
			this->jeludok->Click += gcnew System::EventHandler(this, &MyForm2::jeludok_Click);
			// 
			// diafragma
			// 
			this->diafragma->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"diafragma.BackgroundImage")));
			this->diafragma->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->diafragma->FlatAppearance->BorderSize = 0;
			this->diafragma->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->diafragma->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->diafragma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->diafragma->Location = System::Drawing::Point(23, 114);
			this->diafragma->Name = L"diafragma";
			this->diafragma->Size = System::Drawing::Size(172, 140);
			this->diafragma->TabIndex = 3;
			this->diafragma->UseVisualStyleBackColor = true;
			this->diafragma->Click += gcnew System::EventHandler(this, &MyForm2::diafragma_Click);
			// 
			// legkie
			// 
			this->legkie->FlatAppearance->BorderSize = 0;
			this->legkie->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->legkie->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->legkie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->legkie->Location = System::Drawing::Point(432, 243);
			this->legkie->Name = L"legkie";
			this->legkie->Size = System::Drawing::Size(172, 128);
			this->legkie->TabIndex = 2;
			this->legkie->UseVisualStyleBackColor = true;
			this->legkie->Click += gcnew System::EventHandler(this, &MyForm2::legkie_Click);
			// 
			// shitovidkaorgan
			// 
			this->shitovidkaorgan->FlatAppearance->BorderSize = 0;
			this->shitovidkaorgan->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->shitovidkaorgan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->shitovidkaorgan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shitovidkaorgan->Location = System::Drawing::Point(498, 200);
			this->shitovidkaorgan->Name = L"shitovidkaorgan";
			this->shitovidkaorgan->Size = System::Drawing::Size(42, 37);
			this->shitovidkaorgan->TabIndex = 1;
			this->shitovidkaorgan->UseVisualStyleBackColor = true;
			this->shitovidkaorgan->Click += gcnew System::EventHandler(this, &MyForm2::shitovidkaorgan_Click);
			// 
			// mozg
			// 
			this->mozg->FlatAppearance->BorderSize = 0;
			this->mozg->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mozg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mozg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mozg->Location = System::Drawing::Point(458, 16);
			this->mozg->Name = L"mozg";
			this->mozg->Size = System::Drawing::Size(125, 128);
			this->mozg->TabIndex = 0;
			this->mozg->UseVisualStyleBackColor = true;
			this->mozg->Click += gcnew System::EventHandler(this, &MyForm2::mozg_Click);
			// 
			// infotext
			// 
			this->infotext->BackColor = System::Drawing::Color::Brown;
			this->infotext->Controls->Add(this->webBrowser1);
			this->infotext->Controls->Add(this->button1);
			this->infotext->Controls->Add(this->stroenie);
			this->infotext->Enabled = false;
			this->infotext->Location = System::Drawing::Point(5, 109);
			this->infotext->Name = L"infotext";
			this->infotext->Size = System::Drawing::Size(501, 607);
			this->infotext->TabIndex = 12;
			this->infotext->Visible = false;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(12, 27);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(474, 357);
			this->webBrowser1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(465, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 35);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// stroenie
			// 
			this->stroenie->BackColor = System::Drawing::Color::LightCoral;
			this->stroenie->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->stroenie->Location = System::Drawing::Point(12, 395);
			this->stroenie->Name = L"stroenie";
			this->stroenie->Size = System::Drawing::Size(474, 204);
			this->stroenie->TabIndex = 0;
			this->stroenie->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Скелет", L"Мышечная система", L"Нервная система",
					L"Лимфатическая система", L"Репродуктивная систсема", L"Кровеносная система", L"Система органов"
			});
			this->comboBox1->Location = System::Drawing::Point(79, 69);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(298, 34);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::SeaShell;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(54, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(345, 60);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Выберите систему организма для дальнейшего изучения:";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 31);
			this->button2->TabIndex = 15;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1174, 728);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->infotext);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->organy);
			this->Controls->Add(this->limfa);
			this->Controls->Add(this->mishechnaya);
			this->Controls->Add(this->arterialnaya);
			this->Controls->Add(this->venoznaya);
			this->Controls->Add(this->reproduct);
			this->Controls->Add(this->nervi);
			this->Controls->Add(this->skelet);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"женский организм";
			this->skelet->ResumeLayout(false);
			this->nervi->ResumeLayout(false);
			this->venoznaya->ResumeLayout(false);
			this->reproduct->ResumeLayout(false);
			this->arterialnaya->ResumeLayout(false);
			this->mishechnaya->ResumeLayout(false);
			this->limfa->ResumeLayout(false);
			this->organy->ResumeLayout(false);
			this->infotext->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stroenie))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedItem = comboBox1->SelectedItem->ToString();
	if (selectedItem == "Скелет") 
	{ 
		this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\скелетж.png");
		this->skelet->Visible = true;
		this->skelet->Enabled = true;
		this->skelet->Location = System::Drawing::Point(550, 1);

		this->venoznaya->Visible = false;
		this->venoznaya->Enabled = false;
		this->mishechnaya->Visible = false;
		this->mishechnaya->Enabled = false;
		this->nervi->Visible = false;
		this->nervi->Enabled = false;
		this->limfa->Visible = false;
		this->limfa->Enabled = false;
		this->reproduct->Enabled = false;
		this->reproduct->Visible = false;
		this->organy->Visible = false;
		this->organy->Enabled = false;
		this->arterialnaya->Visible = false;
		this->arterialnaya->Enabled = false;
	}
	else if (selectedItem == "Мышечная система") 
	{
		this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\мышцыж.png");
		this->mishechnaya->Visible = true;
		this->mishechnaya->Enabled = true;
		this->mishechnaya->Location = System::Drawing::Point(606, 3);

		this->venoznaya->Visible = false;
		this->venoznaya->Enabled = false;
		this->skelet->Visible = false;
		this->skelet->Enabled = false;
		this->nervi->Visible = false;
		this->nervi->Enabled = false;
		this->limfa->Visible = false;
		this->limfa->Enabled = false;
		this->reproduct->Enabled = false;
		this->reproduct->Visible = false;
		this->organy->Visible = false;
		this->organy->Enabled = false;
		this->arterialnaya->Visible = false;
		this->arterialnaya->Enabled = false;


	}
	else if (selectedItem == "Нервная система") 
	{
		this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\нервыж.png");
		this->nervi->Visible = true;
		this->nervi->Enabled = true;
		this->nervi->Location = System::Drawing::Point(724, 6);

		this->venoznaya->Visible = false;
		this->venoznaya->Enabled = false;
		this->mishechnaya->Visible = false;
		this->mishechnaya->Enabled = false;
		this->skelet->Visible = false;
		this->skelet->Enabled = false;
		this->limfa->Visible = false;
		this->limfa->Enabled = false;
		this->reproduct->Enabled = false;
		this->reproduct->Visible = false;
		this->organy->Visible = false;
		this->organy->Enabled = false;
		this->arterialnaya->Visible = false;
		this->arterialnaya->Enabled = false;


	}
	else if (selectedItem == "Лимфатическая система") 
	{
		this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\лимфаж.png");
		this->limfa->Visible = true;
		this->limfa->Enabled = true;
		this->limfa->Location = System::Drawing::Point(862, 4);

		this->venoznaya->Visible = false;
		this->venoznaya->Enabled = false;
		this->mishechnaya->Visible = false;
		this->mishechnaya->Enabled = false;
		this->nervi->Visible = false;
		this->nervi->Enabled = false;
		this->skelet->Visible = false;
		this->skelet->Enabled = false;
		this->reproduct->Enabled = false;
		this->reproduct->Visible = false;
		this->organy->Visible = false;
		this->organy->Enabled = false;
		this->arterialnaya->Visible = false;
		this->arterialnaya->Enabled = false;


	}
	else if (selectedItem == "Репродуктивная систсема")
	{
		this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\репродуктивнаяж.png");
		this->reproduct->Visible = true;
		this->reproduct->Enabled = true;
		this->reproduct->Location = System::Drawing::Point(559, 218);

		this->venoznaya->Visible = false;
		this->venoznaya->Enabled = false;
		this->mishechnaya->Visible = false;
		this->mishechnaya->Enabled = false;
		this->nervi->Visible = false;
		this->nervi->Enabled = false;
		this->limfa->Visible = false;
		this->limfa->Enabled = false;
		this->skelet->Enabled = false;
		this->skelet->Visible = false;
		this->organy->Visible = false;
		this->organy->Enabled = false;
		this->arterialnaya->Visible = false;
		this->arterialnaya->Enabled = false;


	}
	else if (selectedItem == "Система органов") 
	{ this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\органыж.png");
	this->organy->Visible = true;
	this->organy->Enabled = true;
	this->organy->Location = System::Drawing::Point(467, 14);

	this->venoznaya->Visible = false;
	this->venoznaya->Enabled = false;
	this->mishechnaya->Visible = false;
	this->mishechnaya->Enabled = false;
	this->nervi->Visible = false;
	this->nervi->Enabled = false;
	this->limfa->Visible = false;
	this->limfa->Enabled = false;
	this->reproduct->Enabled = false;
	this->reproduct->Visible = false;
	this->skelet->Visible = false;
	this->skelet->Enabled = false;
	this->arterialnaya->Visible = false;
	this->arterialnaya->Enabled = false;


	}
	else if (selectedItem == "Кровеносная система")
	{
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Вас интересует артериальная система?", "Подтвердите", System::Windows::Forms::MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes) 
		{ 
			this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\артерииж.png");
			this->arterialnaya->Visible = true;
			this->arterialnaya->Enabled = true;
			this->arterialnaya->Location = System::Drawing::Point(780, 5);

			this->venoznaya->Visible = false;
			this->venoznaya->Enabled = false;
			this->mishechnaya->Visible = false;
			this->mishechnaya->Enabled = false;
			this->nervi->Visible = false;
			this->nervi->Enabled = false;
			this->limfa->Visible = false;
			this->limfa->Enabled = false;
			this->reproduct->Enabled = false;
			this->reproduct->Visible = false;
			this->skelet->Visible = false;
			this->skelet->Enabled = false;
			this->organy->Visible = false;
			this->organy->Enabled = false;


		}
		else if (result == System::Windows::Forms::DialogResult::No) 
		{
			this->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\фоны\\веныж.png");
			this->venoznaya->Visible = true;
			this->venoznaya->Enabled = true;
			this->venoznaya->Location = System::Drawing::Point(778, 0);

			this->organy->Visible = false;
			this->organy->Enabled = false;
			this->mishechnaya->Visible = false;
			this->mishechnaya->Enabled = false;
			this->nervi->Visible = false;
			this->nervi->Enabled = false;
			this->limfa->Visible = false;
			this->limfa->Enabled = false;
			this->reproduct->Enabled = false;
			this->reproduct->Visible = false;
			this->skelet->Visible = false;
			this->skelet->Enabled = false;
			this->arterialnaya->Visible = false;
			this->arterialnaya->Enabled = false;


		}
	}
}
private: System::Void cherep1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\черепстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Череп.htm"));

}
private: System::Void cherep2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\черепстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Череп.htm"));

}
private: System::Void kluychitsi_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Ключицы.htm"));

}
private: System::Void lopatki_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Лопатки.htm"));

}
private: System::Void plecho21_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Плечевая кость.htm"));

}
private: System::Void plecho22_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Плечевая кость.htm"));

}
private: System::Void plecho11_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Плечевая кость.htm"));

}
private: System::Void rebra1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Ребра.htm"));


}
private: System::Void rebra2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Ребра.htm"));

}
private: System::Void pozvon1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Позвоночник.htm"));

}
private: System::Void pozvon2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Позвоночник.htm"));

}
private: System::Void taz1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Таз.htm"));

}
private: System::Void taz2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Таз.htm"));

}
private: System::Void predplech11_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости предплечья.htm"));

}
private: System::Void predplech21_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости предплечья.htm"));

}
private: System::Void predplech22_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости предплечья.htm"));

}
private: System::Void ladon11_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости кисти.htm"));

}
private: System::Void ladon21_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости кисти.htm"));

}
private: System::Void ladon22_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile("\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости кисти.htm"));

}
private: System::Void bedra1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Бедренная кость.htm"));

}
private: System::Void bedra2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Бедренная кость.htm"));

}
private: System::Void goleni_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости голени.htm"));

}
private: System::Void stopy_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\костьстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Кости голени.htm"));

}
	   //мышцы
private: System::Void mishtsilica_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы лица.htm"));

}
private: System::Void mishtsineck_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы шеи.htm"));

}
private: System::Void bitseps1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы плеч.htm"));

}
private: System::Void bitseps2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы плеч.htm"));

}
private: System::Void bitseps3_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы плеч.htm"));

}
private: System::Void grydniyemishtsi_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Грудные мышцы.htm"));

}
private: System::Void trapetsevidnye_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Трапециевидная мышца.htm"));

}
private: System::Void tazmishtsi_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы таза.htm"));

}
private: System::Void press_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы пресса.htm"));


}
private: System::Void mishtsispini_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы спины.htm"));

}
private: System::Void yagodichniyemishtsi_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Ягодичные мышцы.htm"));

}
private: System::Void predplechmishtsi1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы предплечья.htm"));

}
private: System::Void predplechmishtsi2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы предплечья.htm"));

}
private: System::Void predplechmishtsi3_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы предплечья.htm"));

}
private: System::Void kistimishtsi1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы кисти.htm"));
}
private: System::Void kistimishtsi2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы кисти.htm"));

}
private: System::Void kistimishtsi3_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы кисти.htm"));

}
private: System::Void bedromishtsi1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы бедра.htm"));

}
private: System::Void bedramishtsi2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы бедра.htm"));

}
private: System::Void golenimishtsi_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы голени.htm"));

}
private: System::Void stopmishtsi_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мышцастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мышцы голени.htm"));

}
	   //нервы
private: System::Void spinnoy_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Спинной мозг.htm"));

}
private: System::Void plechevy_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Плечевое сплетение.htm"));
}
private: System::Void mejreberny_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Межреберные ы и подреберный.htm"));
}
private: System::Void handsnerv1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Лучевой.htm"));
}
private: System::Void handsnerv2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Лучевой.htm"));
}
private: System::Void poyasnichny_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Поясничное и крестцовое сплетения.htm"));
}

private: System::Void bedrenny_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Бедренный.htm"));
}
private: System::Void sedalishniy_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Седалищный.htm"));
}
private: System::Void nervigoleni_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\нервстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Берцовые нервы.htm"));

}
	   //лимфа 
private: System::Void mindaliny_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\миндалины.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Нёбные миндалины.htm"));

}
private: System::Void sheialimfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфоузелстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Шейные лимфоузлы.htm"));

}
private: System::Void timus_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\тимус.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Тимус.htm"));

}
private: System::Void grudlimfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфососудстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Грудной лимфатический проток.htm"));

}
private: System::Void selezenka_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\селезенка.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Селезенка.htm"));

}
private: System::Void verh2limfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфососудстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Лимфатические протоки верхних конечностей.htm"));

}
private: System::Void podmish2limfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфоузелстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Подмышечные лимфоузлы.htm"));

}
private: System::Void podmash1limfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфоузелстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Подмышечные лимфоузлы.htm"));

}
private: System::Void verh1limfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфососудстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Лимфатические протоки верхних конечностей.htm"));

}
private: System::Void poyasnitsalimfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфоузелстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Поясничные лимфоузлы.htm"));

}
private: System::Void qisternalimfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфоузелстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Цистерна грудного протока.htm"));

}

private: System::Void pahlimfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфоузелстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Паховые лимфоузлы.htm"));

}
private: System::Void nizlimfa_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\лимфососудстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Лимфатические протоки нижних конечностей.htm"));

}
	   //репродуктивка
private: System::Void yaichnick1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\маткастроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Яичники.htm"));

}
private: System::Void yaichnick2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\маткастроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Яичники.htm"));

}
private: System::Void matka_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\маткастроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Матка.htm"));

}
private: System::Void vlagalische_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\маткастроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Влагалище.htm"));

}
	   //органы 
private: System::Void mozg_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мозгстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Головной мозг.htm"));

}
private: System::Void heart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\сердцестроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Сердце.htm"));

}
private: System::Void diafragma_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\диафрагмастроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Диафрагма.htm"));


}
private: System::Void jeludok_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\желудокстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Желудок.htm"));

}
private: System::Void podjeludok_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\поджелудочнаястроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Поджелудочная железа.htm"));

}
private: System::Void pochki_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\почкастроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Почки.htm"));

}
private: System::Void shitovidkaorgan_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\щитовидкастроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Щитовидная железа.htm"));

}
private: System::Void legkie_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\легкиестроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Легкие.htm"));

}
private: System::Void pechenorgan_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\печеньстроение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Печень.htm"));

}
private: System::Void tolsty_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\толстыйк_строение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Толстый кишечник.htm"));

}
private: System::Void tonky_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\тонкийк_строение.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Тонкий кишечник.htm"));

}
private: System::Void mochevoy_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\мочевойстроение.png");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Мочевой пузырь.htm"));

}
	   //артериии
private: System::Void mozgart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Артерии мозга.htm"));

}
private: System::Void sonnayaart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Сонные артерии.htm"));

}
private: System::Void plechevyart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Плечевые артерии.htm"));

}
private: System::Void ryka1art_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Артерии рук.htm"));

}
private: System::Void ruka2art_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Артерии рук.htm"));

}
private: System::Void mejrebernart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Межреберные артерии.htm"));

}
private: System::Void aorta_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Аорта.htm"));

}
private: System::Void tazart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Артерии таза.htm"));

}
private: System::Void nogiart_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\артерииразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Артерии нижних конечностей.htm"));

}
	   //вены  
private: System::Void venycherep_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Внутричерепные вены.htm"));

}
private: System::Void yaremnyveny_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Яремные вены.htm"));

}
private: System::Void plechevyveny_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Плечевые артерии.htm"));

}
private: System::Void nijpolayavena_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Верхняя и нижняя полые вены.htm"));

}
private: System::Void venyruk2_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Вены рук.htm"));

}
private: System::Void venyruk1_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Вены рук.htm"));

}
private: System::Void venynog_Click(System::Object^ sender, System::EventArgs^ e) {
	infotext->Visible = true;
	infotext->Enabled = true;
	stroenie->BackgroundImage = System::Drawing::Image::FromFile(Application::StartupPath + "\\строения\\венаразрез.jpg");
	webBrowser1->Navigate(System::IO::Path::Combine(Application::StartupPath + "\\информация\\Вены ног.htm"));

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->infotext->Visible = false;
	this->infotext->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Application::OpenForms["MyForm1"]->Show();

}
};
}
