#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Wykres
	/// </summary>
	public ref class Wykres : public System::Windows::Forms::Form
	{
	public:
		Wykres(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Wykres()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Przycisk;
	private: System::Windows::Forms::Label^  pilka;
	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Wykres::typeid));
			this->Przycisk = (gcnew System::Windows::Forms::Button());
			this->pilka = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Przycisk
			// 
			this->Przycisk->Location = System::Drawing::Point(12, 82);
			this->Przycisk->Name = L"Przycisk";
			this->Przycisk->Size = System::Drawing::Size(44, 43);
			this->Przycisk->TabIndex = 0;
			this->Przycisk->Text = L"0,0";
			this->Przycisk->UseVisualStyleBackColor = true;
			this->Przycisk->Click += gcnew System::EventHandler(this, &Wykres::Przycisk_Click);
			// 
			// pilka
			// 
			this->pilka->AutoSize = true;
			this->pilka->BackColor = System::Drawing::Color::Transparent;
			this->pilka->Location = System::Drawing::Point(344, 361);
			this->pilka->Name = L"pilka";
			this->pilka->Size = System::Drawing::Size(15, 13);
			this->pilka->TabIndex = 1;
			this->pilka->Text = L"O";
			// 
			// Wykres
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(648, 685);
			this->Controls->Add(this->pilka);
			this->Controls->Add(this->Przycisk);
			this->Name = L"Wykres";
			this->Text = L"Wykres";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int Kratka=32;
	private: System::Void Przycisk_Click(System::Object^  sender, System::EventArgs^  e) {
		pilka->Top = 362 - Kratka;
		pilka->Left = 344 - Kratka;
		

	}
	};
}
