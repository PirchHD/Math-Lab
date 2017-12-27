#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Jednostki
	/// </summary>
	public ref class Jednostki : public System::Windows::Forms::Form
	{
	public:
		Jednostki(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Jednostki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  przycisk3;
	protected:


	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  Okno;
	private: System::Windows::Forms::Button^  przycisk8;

	private: System::Windows::Forms::Button^  przycisk4;





	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  przycisk10;
	private: System::Windows::Forms::Button^  przycisk12;










	private: System::Windows::Forms::Button^  przycisk11;











	private: System::Windows::Forms::Button^  przycisk1;
	private: System::Windows::Forms::Button^  przycisk2;
	private: System::Windows::Forms::Button^  przycisk9;
	private: System::Windows::Forms::Button^  przycisk13;




	private: System::Windows::Forms::TextBox^  JEDNOSTKA;
	private: System::Windows::Forms::Button^  przycisk5;
	private: System::Windows::Forms::Button^  przycisk6;
	private: System::Windows::Forms::Button^  przycisk7;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jednostkiMiaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jednostkiWagiToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::ToolStripMenuItem^  jednostkiObszarToolStripMenuItem;
	private: System::Windows::Forms::Button^  button18;
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

private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Button^  button30;
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
private: System::Windows::Forms::ToolStripMenuItem^  jednostkiSzybkościToolStripMenuItem;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Button^  button51;


	private: System::ComponentModel::IContainer^  components;












	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Jednostki::typeid));
			this->przycisk3 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->Okno = (gcnew System::Windows::Forms::TextBox());
			this->przycisk8 = (gcnew System::Windows::Forms::Button());
			this->przycisk4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->przycisk10 = (gcnew System::Windows::Forms::Button());
			this->przycisk12 = (gcnew System::Windows::Forms::Button());
			this->przycisk11 = (gcnew System::Windows::Forms::Button());
			this->przycisk1 = (gcnew System::Windows::Forms::Button());
			this->przycisk2 = (gcnew System::Windows::Forms::Button());
			this->przycisk9 = (gcnew System::Windows::Forms::Button());
			this->przycisk13 = (gcnew System::Windows::Forms::Button());
			this->JEDNOSTKA = (gcnew System::Windows::Forms::TextBox());
			this->przycisk5 = (gcnew System::Windows::Forms::Button());
			this->przycisk6 = (gcnew System::Windows::Forms::Button());
			this->przycisk7 = (gcnew System::Windows::Forms::Button());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jednostkiMiaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jednostkiWagiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jednostkiObszarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jednostkiSzybkościToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
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
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
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
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// przycisk3
			// 
			this->przycisk3->Location = System::Drawing::Point(185, 252);
			this->przycisk3->Name = L"przycisk3";
			this->przycisk3->Size = System::Drawing::Size(83, 27);
			this->przycisk3->TabIndex = 1;
			this->przycisk3->Tag = L"1";
			this->przycisk3->Text = L"Cm->M";
			this->przycisk3->UseVisualStyleBackColor = true;
			this->przycisk3->Click += gcnew System::EventHandler(this, &Jednostki::button1_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Open Sans", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(63, 274);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 50);
			this->button11->TabIndex = 23;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Jednostki::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(7, 274);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 22;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Jednostki::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(7, 106);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 21;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Jednostki::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(63, 106);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 20;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Jednostki::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(119, 106);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 19;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Jednostki::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(119, 161);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 18;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Jednostki::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(63, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 17;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Jednostki::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(7, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 16;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Jednostki::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(119, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 15;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Jednostki::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(63, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 14;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Jednostki::button2_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(7, 218);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 13;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Jednostki::button12_Click);
			// 
			// Okno
			// 
			this->Okno->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Okno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Okno->Font = (gcnew System::Drawing::Font(L"Open Sans", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Okno->ForeColor = System::Drawing::SystemColors::Window;
			this->Okno->Location = System::Drawing::Point(7, 27);
			this->Okno->Name = L"Okno";
			this->Okno->Size = System::Drawing::Size(249, 73);
			this->Okno->TabIndex = 24;
			this->Okno->Text = L"0";
			this->Okno->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Okno->TextChanged += gcnew System::EventHandler(this, &Jednostki::Okno_TextChanged);
			// 
			// przycisk8
			// 
			this->przycisk8->Location = System::Drawing::Point(363, 219);
			this->przycisk8->Name = L"przycisk8";
			this->przycisk8->Size = System::Drawing::Size(83, 27);
			this->przycisk8->TabIndex = 25;
			this->przycisk8->Tag = L"1";
			this->przycisk8->Text = L"M->Cm";
			this->przycisk8->UseVisualStyleBackColor = true;
			this->przycisk8->Click += gcnew System::EventHandler(this, &Jednostki::button13_Click);
			// 
			// przycisk4
			// 
			this->przycisk4->Location = System::Drawing::Point(185, 285);
			this->przycisk4->Name = L"przycisk4";
			this->przycisk4->Size = System::Drawing::Size(83, 27);
			this->przycisk4->TabIndex = 26;
			this->przycisk4->Tag = L"1";
			this->przycisk4->Text = L"Cm->Km";
			this->przycisk4->UseVisualStyleBackColor = true;
			this->przycisk4->Click += gcnew System::EventHandler(this, &Jednostki::button14_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(341, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(236, 129);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Open Sans", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(185, 106);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(81, 50);
			this->button19->TabIndex = 32;
			this->button19->Text = L"C";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Jednostki::button19_Click);
			// 
			// przycisk10
			// 
			this->przycisk10->Location = System::Drawing::Point(363, 285);
			this->przycisk10->Name = L"przycisk10";
			this->przycisk10->Size = System::Drawing::Size(83, 27);
			this->przycisk10->TabIndex = 33;
			this->przycisk10->Tag = L"1";
			this->przycisk10->Text = L"M-> Km";
			this->przycisk10->UseVisualStyleBackColor = true;
			this->przycisk10->Click += gcnew System::EventHandler(this, &Jednostki::button20_Click);
			// 
			// przycisk12
			// 
			this->przycisk12->Location = System::Drawing::Point(452, 252);
			this->przycisk12->Name = L"przycisk12";
			this->przycisk12->Size = System::Drawing::Size(83, 27);
			this->przycisk12->TabIndex = 43;
			this->przycisk12->Tag = L"1";
			this->przycisk12->Text = L"Km-> m";
			this->przycisk12->UseVisualStyleBackColor = true;
			this->przycisk12->Click += gcnew System::EventHandler(this, &Jednostki::button29_Click);
			// 
			// przycisk11
			// 
			this->przycisk11->Location = System::Drawing::Point(452, 220);
			this->przycisk11->Name = L"przycisk11";
			this->przycisk11->Size = System::Drawing::Size(83, 27);
			this->przycisk11->TabIndex = 45;
			this->przycisk11->Tag = L"1";
			this->przycisk11->Text = L"Km-> cm";
			this->przycisk11->UseVisualStyleBackColor = true;
			this->przycisk11->Click += gcnew System::EventHandler(this, &Jednostki::button31_Click);
			// 
			// przycisk1
			// 
			this->przycisk1->Location = System::Drawing::Point(185, 186);
			this->przycisk1->Name = L"przycisk1";
			this->przycisk1->Size = System::Drawing::Size(83, 27);
			this->przycisk1->TabIndex = 48;
			this->przycisk1->Tag = L"1";
			this->przycisk1->Text = L"Cm->mm";
			this->przycisk1->UseVisualStyleBackColor = true;
			this->przycisk1->Click += gcnew System::EventHandler(this, &Jednostki::button15_Click_1);
			// 
			// przycisk2
			// 
			this->przycisk2->Location = System::Drawing::Point(185, 219);
			this->przycisk2->Name = L"przycisk2";
			this->przycisk2->Size = System::Drawing::Size(83, 27);
			this->przycisk2->TabIndex = 49;
			this->przycisk2->Tag = L"1";
			this->przycisk2->Text = L"Cm->Dm";
			this->przycisk2->UseVisualStyleBackColor = true;
			this->przycisk2->Click += gcnew System::EventHandler(this, &Jednostki::button16_Click_1);
			// 
			// przycisk9
			// 
			this->przycisk9->Location = System::Drawing::Point(363, 252);
			this->przycisk9->Name = L"przycisk9";
			this->przycisk9->Size = System::Drawing::Size(83, 27);
			this->przycisk9->TabIndex = 50;
			this->przycisk9->Tag = L"1";
			this->przycisk9->Text = L"M->Dm";
			this->przycisk9->UseVisualStyleBackColor = true;
			this->przycisk9->Click += gcnew System::EventHandler(this, &Jednostki::button17_Click_1);
			// 
			// przycisk13
			// 
			this->przycisk13->Location = System::Drawing::Point(452, 285);
			this->przycisk13->Name = L"przycisk13";
			this->przycisk13->Size = System::Drawing::Size(83, 27);
			this->przycisk13->TabIndex = 51;
			this->przycisk13->Tag = L"1";
			this->przycisk13->Text = L"Km-> dm";
			this->przycisk13->UseVisualStyleBackColor = true;
			this->przycisk13->Click += gcnew System::EventHandler(this, &Jednostki::button18_Click_1);
			// 
			// JEDNOSTKA
			// 
			this->JEDNOSTKA->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->JEDNOSTKA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->JEDNOSTKA->Font = (gcnew System::Drawing::Font(L"Open Sans", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->JEDNOSTKA->ForeColor = System::Drawing::SystemColors::Window;
			this->JEDNOSTKA->Location = System::Drawing::Point(262, 42);
			this->JEDNOSTKA->Name = L"JEDNOSTKA";
			this->JEDNOSTKA->Size = System::Drawing::Size(95, 58);
			this->JEDNOSTKA->TabIndex = 52;
			this->JEDNOSTKA->Text = L"0";
			this->JEDNOSTKA->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->JEDNOSTKA->TextChanged += gcnew System::EventHandler(this, &Jednostki::JEDNOSTKA_TextChanged);
			// 
			// przycisk5
			// 
			this->przycisk5->Location = System::Drawing::Point(274, 219);
			this->przycisk5->Name = L"przycisk5";
			this->przycisk5->Size = System::Drawing::Size(83, 27);
			this->przycisk5->TabIndex = 53;
			this->przycisk5->Tag = L"1";
			this->przycisk5->Text = L"Dm->cm";
			this->przycisk5->UseVisualStyleBackColor = true;
			this->przycisk5->Click += gcnew System::EventHandler(this, &Jednostki::button21_Click);
			// 
			// przycisk6
			// 
			this->przycisk6->Location = System::Drawing::Point(274, 252);
			this->przycisk6->Name = L"przycisk6";
			this->przycisk6->Size = System::Drawing::Size(83, 27);
			this->przycisk6->TabIndex = 54;
			this->przycisk6->Tag = L"1";
			this->przycisk6->Text = L"Dm->m";
			this->przycisk6->UseVisualStyleBackColor = true;
			this->przycisk6->Click += gcnew System::EventHandler(this, &Jednostki::button22_Click);
			// 
			// przycisk7
			// 
			this->przycisk7->Location = System::Drawing::Point(274, 285);
			this->przycisk7->Name = L"przycisk7";
			this->przycisk7->Size = System::Drawing::Size(83, 27);
			this->przycisk7->TabIndex = 55;
			this->przycisk7->Tag = L"1";
			this->przycisk7->Text = L"Dm->Km";
			this->przycisk7->UseVisualStyleBackColor = true;
			this->przycisk7->Click += gcnew System::EventHandler(this, &Jednostki::button23_Click);
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij. :)";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->jednostkiMiaryToolStripMenuItem,
					this->jednostkiWagiToolStripMenuItem, this->jednostkiObszarToolStripMenuItem, this->jednostkiSzybkościToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->widokToolStripMenuItem->Text = L"Jednostki";
			// 
			// jednostkiMiaryToolStripMenuItem
			// 
			this->jednostkiMiaryToolStripMenuItem->Name = L"jednostkiMiaryToolStripMenuItem";
			this->jednostkiMiaryToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->jednostkiMiaryToolStripMenuItem->Text = L"Jednostki Miary";
			this->jednostkiMiaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::jednostkiMiaryToolStripMenuItem_Click);
			// 
			// jednostkiWagiToolStripMenuItem
			// 
			this->jednostkiWagiToolStripMenuItem->Name = L"jednostkiWagiToolStripMenuItem";
			this->jednostkiWagiToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->jednostkiWagiToolStripMenuItem->Text = L"Jednostki Wagi";
			this->jednostkiWagiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::jednostkiWagiToolStripMenuItem_Click);
			// 
			// jednostkiObszarToolStripMenuItem
			// 
			this->jednostkiObszarToolStripMenuItem->Name = L"jednostkiObszarToolStripMenuItem";
			this->jednostkiObszarToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->jednostkiObszarToolStripMenuItem->Text = L"Jednostki Obszar";
			this->jednostkiObszarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::jednostkiObszarToolStripMenuItem_Click);
			// 
			// jednostkiSzybkościToolStripMenuItem
			// 
			this->jednostkiSzybkościToolStripMenuItem->Name = L"jednostkiSzybkościToolStripMenuItem";
			this->jednostkiSzybkościToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->jednostkiSzybkościToolStripMenuItem->Text = L"Jednostki Szybkości";
			this->jednostkiSzybkościToolStripMenuItem->Click += gcnew System::EventHandler(this, &Jednostki::jednostkiSzybkościToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1102, 24);
			this->menuStrip1->TabIndex = 47;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"910d226ea0f124b1a2aacb2b09939ffb.jpg");
			this->imageList1->Images->SetKeyName(1, L"waga.jpg");
			this->imageList1->Images->SetKeyName(2, L"images.png");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 27);
			this->button1->TabIndex = 56;
			this->button1->Tag = L"2";
			this->button1->Text = L"Kg-> g";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Jednostki::button1_Click_1);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(185, 219);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(83, 27);
			this->button13->TabIndex = 57;
			this->button13->Tag = L"2";
			this->button13->Text = L"Kg-> dag";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Jednostki::button13_Click_1);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(274, 186);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(83, 27);
			this->button14->TabIndex = 58;
			this->button14->Tag = L"2";
			this->button14->Text = L"g->kg";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Jednostki::button14_Click_1);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(274, 219);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 27);
			this->button15->TabIndex = 59;
			this->button15->Tag = L"2";
			this->button15->Text = L"g->dag";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Jednostki::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(363, 186);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 27);
			this->button16->TabIndex = 60;
			this->button16->Tag = L"2";
			this->button16->Text = L"dag->kg";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Jednostki::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(363, 219);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(83, 27);
			this->button17->TabIndex = 61;
			this->button17->Tag = L"2";
			this->button17->Text = L"dag->g";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Jednostki::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(185, 219);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(83, 27);
			this->button18->TabIndex = 62;
			this->button18->Tag = L"3";
			this->button18->Text = L"cm²->dm²";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Jednostki::button18_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(185, 252);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(83, 27);
			this->button20->TabIndex = 63;
			this->button20->Tag = L"3";
			this->button20->Text = L"cm²->m²";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Jednostki::button20_Click_1);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(185, 285);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(83, 27);
			this->button21->TabIndex = 64;
			this->button21->Tag = L"3";
			this->button21->Text = L"cm²->a";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Jednostki::button21_Click_1);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(185, 186);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(83, 27);
			this->button22->TabIndex = 65;
			this->button22->Tag = L"3";
			this->button22->Text = L"cm²->mm²";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Jednostki::button22_Click_1);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(274, 153);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(83, 27);
			this->button23->TabIndex = 66;
			this->button23->Tag = L"3";
			this->button23->Text = L"m²->cm²";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Jednostki::button23_Click_1);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(274, 186);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(83, 27);
			this->button24->TabIndex = 67;
			this->button24->Tag = L"3";
			this->button24->Text = L"m²->dm²";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Jednostki::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(274, 219);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(83, 27);
			this->button25->TabIndex = 68;
			this->button25->Tag = L"3";
			this->button25->Text = L"m²->Km²";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Jednostki::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(274, 252);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(83, 27);
			this->button26->TabIndex = 69;
			this->button26->Tag = L"3";
			this->button26->Text = L"m²-> a";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Jednostki::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(274, 285);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(83, 27);
			this->button27->TabIndex = 70;
			this->button27->Tag = L"3";
			this->button27->Text = L"m²-> ha";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Jednostki::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(363, 219);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(83, 27);
			this->button28->TabIndex = 71;
			this->button28->Tag = L"3";
			this->button28->Text = L"dm²->m²";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Jednostki::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(363, 186);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(83, 27);
			this->button29->TabIndex = 72;
			this->button29->Tag = L"3";
			this->button29->Text = L"dm²->cm²";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Jednostki::button29_Click_1);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(363, 252);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(83, 27);
			this->button31->TabIndex = 74;
			this->button31->Tag = L"3";
			this->button31->Text = L"dm²->a";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Jednostki::button31_Click_1);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(363, 285);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(83, 27);
			this->button32->TabIndex = 75;
			this->button32->Tag = L"3";
			this->button32->Text = L"dm²->ha";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Jednostki::button32_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(452, 186);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(83, 27);
			this->button30->TabIndex = 76;
			this->button30->Tag = L"3";
			this->button30->Text = L"km²->m²";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Jednostki::button30_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(452, 219);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(83, 27);
			this->button33->TabIndex = 77;
			this->button33->Tag = L"3";
			this->button33->Text = L"km²->dm²";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Jednostki::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(452, 252);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(83, 27);
			this->button34->TabIndex = 78;
			this->button34->Tag = L"3";
			this->button34->Text = L"km²->a";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Jednostki::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(452, 285);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(83, 27);
			this->button35->TabIndex = 79;
			this->button35->Tag = L"3";
			this->button35->Text = L"km²->ha";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Jednostki::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(541, 186);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(83, 27);
			this->button36->TabIndex = 80;
			this->button36->Tag = L"3";
			this->button36->Text = L"a->km²";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Jednostki::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(541, 219);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(83, 27);
			this->button37->TabIndex = 81;
			this->button37->Tag = L"3";
			this->button37->Text = L"a->ha";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Jednostki::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(541, 252);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(83, 27);
			this->button38->TabIndex = 82;
			this->button38->Tag = L"3";
			this->button38->Text = L"ha->km²";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Jednostki::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(541, 285);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(83, 27);
			this->button39->TabIndex = 83;
			this->button39->Tag = L"3";
			this->button39->Text = L"ha->a";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Jednostki::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(733, 129);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(83, 27);
			this->button40->TabIndex = 84;
			this->button40->Tag = L"4";
			this->button40->Text = L"m/s -> km/s";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Jednostki::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(733, 90);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(83, 27);
			this->button41->TabIndex = 85;
			this->button41->Tag = L"4";
			this->button41->Text = L"m/s -> m/min";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Jednostki::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(733, 162);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(83, 27);
			this->button42->TabIndex = 86;
			this->button42->Tag = L"4";
			this->button42->Text = L"m/s -> km/h";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Jednostki::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(822, 161);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(83, 27);
			this->button43->TabIndex = 89;
			this->button43->Tag = L"4";
			this->button43->Text = L"m/min->km/h";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Jednostki::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(822, 90);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(83, 27);
			this->button44->TabIndex = 88;
			this->button44->Tag = L"4";
			this->button44->Text = L"m/min  -> m/s";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Jednostki::button44_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button45->Location = System::Drawing::Point(822, 128);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(83, 27);
			this->button45->TabIndex = 87;
			this->button45->Tag = L"4";
			this->button45->Text = L"m/min->Km/min";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Jednostki::button45_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(911, 90);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(83, 27);
			this->button46->TabIndex = 92;
			this->button46->Tag = L"4";
			this->button46->Text = L"km/h->m/s";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(911, 123);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(83, 27);
			this->button47->TabIndex = 91;
			this->button47->Tag = L"4";
			this->button47->Text = L"km/h-> m/min";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(911, 161);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(83, 27);
			this->button48->TabIndex = 90;
			this->button48->Tag = L"4";
			this->button48->Text = L"km/h -> km/s";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(1000, 90);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(83, 27);
			this->button49->TabIndex = 95;
			this->button49->Tag = L"4";
			this->button49->Text = L"km/s->m/s";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(1000, 123);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(83, 27);
			this->button50->TabIndex = 94;
			this->button50->Tag = L"4";
			this->button50->Text = L"km/s-> m/min";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(1003, 161);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(83, 27);
			this->button51->TabIndex = 93;
			this->button51->Tag = L"4";
			this->button51->Text = L"km/s -> km/h";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// Jednostki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1102, 400);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
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
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
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
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->przycisk7);
			this->Controls->Add(this->przycisk6);
			this->Controls->Add(this->przycisk5);
			this->Controls->Add(this->JEDNOSTKA);
			this->Controls->Add(this->przycisk13);
			this->Controls->Add(this->przycisk9);
			this->Controls->Add(this->przycisk2);
			this->Controls->Add(this->przycisk1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->przycisk11);
			this->Controls->Add(this->przycisk12);
			this->Controls->Add(this->przycisk10);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->przycisk4);
			this->Controls->Add(this->przycisk8);
			this->Controls->Add(this->Okno);
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
			this->Controls->Add(this->button12);
			this->Controls->Add(this->przycisk3);
			this->Name = L"Jednostki";
			this->Text = L"Jednostki";
			this->Load += gcnew System::EventHandler(this, &Jednostki::Jednostki_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		double pierwsza,Wynik;

#pragma endregion

		private: Void Wypisz(String^ liczba)
		{
			if (Okno->Text == "0" ) {
				Okno->Text = liczba;
			}
			else {
				this->Okno->Text += liczba;
			}
		}
				 private: Void WypiszJed(String^ jedn)
				 {
					 JEDNOSTKA->Text == "0";
					 JEDNOSTKA->Text = jedn;
				 }			 
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Okno_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("1");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("2");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("3");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("4");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("5");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("6");
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("7");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("8");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("9");
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 Wypisz(",");
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100;
	//this->Okno->Text = Convert::ToString(Wynik + "m");	   			<- String nie działą i wgl		bo string sie nie usuwaja 	 nwm jak to zrobić	  xd błąd

	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("m");
	   /* Liczbe w tekscie zmieniasz na double
		 wynik to pierwsza / 100;
		 wskazuje na *okno* pozniej na *text jego* rowna sie Zmieny double na string
	   */
}			   //cm na m
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	Wypisz("0");
}		
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("cm");
	
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Okno->Text = "0";
	WypiszJed("0");
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("km");
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("km");
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Jednostki::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;
}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Jednostki::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Czy wyłączyć Kalkulator? ", "Kalkulator", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("cm");
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("m");
}
private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("dm");
}
private: System::Void button17_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 10;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("dm");
}
private: System::Void JEDNOSTKA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button15_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 10;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("mm");


}
private: System::Void button18_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 10000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("dm");
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza *10 ;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("cm");
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("cm");
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("km");
}

private: System::Void jednostkiMiaryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Jednostki::Width = 562;
	Jednostki::Height = 366;
	pictureBox1->Image = imageList1->Images[0];

	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "1") elementy->Visible = true;
		if (elementy->Tag == "2") elementy->Visible = false;
		if (elementy->Tag == "3") elementy->Visible = false;
		if (elementy->Tag == "4") elementy->Visible = false;
	}
}
private: System::Void jednostkiWagiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Jednostki::Width = 562;
	Jednostki::Height = 366;
	pictureBox1->Image = imageList1->Images[1];
	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "1") elementy->Visible = false;
		if (elementy->Tag == "2") elementy->Visible = true;
		if (elementy->Tag == "3") elementy->Visible = false;
	}

}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("g");
}
private: System::Void button13_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("dag");
}
private: System::Void Jednostki_Load(System::Object^  sender, System::EventArgs^  e) {
	Jednostki::Width = 562;
	Jednostki::Height = 366;
	pictureBox1->Image = imageList1->Images[0];
	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "1") elementy->Visible = true;
		if (elementy->Tag == "2") elementy->Visible = false;
		if (elementy->Tag == "3") elementy->Visible = false;
		if (elementy->Tag == "4") elementy->Visible = false;
	}
}
private: System::Void button14_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("kg");
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("dag");
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("kg");

}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 10;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("g");
}
private: System::Void jednostkiObszarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[2];
	Jednostki::Width = 651;
	Jednostki::Height = 366;
	// Pokazuje to co ma pokazać
	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "1") elementy->Visible = false;
		if (elementy->Tag == "2") elementy->Visible = false;
		if(elementy->Tag == "4") elementy->Visible = false;
		if (elementy->Tag == "3") elementy->Visible = true;
	}

}
private: System::Void button22_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"mm²");

}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"dm²");
}
private: System::Void button20_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"m²");
}
private: System::Void button21_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("a");
}
private: System::Void button23_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 10000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"cm²");
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"dm²");
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"km²");
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza /100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"a");
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("ha");
}
private: System::Void button29_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"cm²");
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"m²");
}
private: System::Void button31_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 10000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("a");
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("ha");
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 1000000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"m²");
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100000000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"dm²");
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("a");
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("ha");
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"km²");
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("ha");
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed(L"km²");
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 100;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("a");
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza / 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("Km/s");

}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 60;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("m/min");
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 3600 / 1000;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("km/h");
}
private: System::Void jednostkiSzybkościToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "1") elementy->Visible = false;
		if (elementy->Tag == "2") elementy->Visible = false;
		if (elementy->Tag == "4") elementy->Visible = true;
		if (elementy->Tag == "3") elementy->Visible = false;
	}


}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 1 / 60;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("m/s");
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 0.001;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("km/min");
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	pierwsza = Convert::ToDouble(Okno->Text);
	Wynik = pierwsza * 0.06;
	this->Okno->Text = Convert::ToString(Wynik);
	WypiszJed("km/h");
}
};
}
