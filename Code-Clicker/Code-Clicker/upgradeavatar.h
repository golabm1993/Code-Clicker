#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o upgradeavatar
	/// </summary>
	public ref class upgradeavatar : public System::Windows::Forms::Form
	{
	public:
		upgradeavatar(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~upgradeavatar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Bback;
	private: System::Windows::Forms::Button^  B4;
	private: System::Windows::Forms::Label^  L4perk;
	private: System::Windows::Forms::Label^  L4cost;

	private: System::Windows::Forms::Label^  L4;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Label^  L3perk;
	private: System::Windows::Forms::Label^  L3cost;

	private: System::Windows::Forms::Label^  L3;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Label^  L2perk;
	private: System::Windows::Forms::Label^  L2cost;

	private: System::Windows::Forms::Label^  L2;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Label^  L1perk;
	private: System::Windows::Forms::Label^  L1cost;

	private: System::Windows::Forms::Label^  L1;
	private: System::Windows::Forms::Button^  B5;
	private: System::Windows::Forms::Label^  L5perk;
	private: System::Windows::Forms::Label^  L5cost;
	private: System::Windows::Forms::Label^  L5;
	private: System::Windows::Forms::Label^  L5description;
	private: System::Windows::Forms::Label^  L4description;
	private: System::Windows::Forms::Label^  L3description;
	private: System::Windows::Forms::Label^  L2description;
	private: System::Windows::Forms::Label^  L1description;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale�y modyfikowa�
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradeavatar::typeid));
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->L4perk = (gcnew System::Windows::Forms::Label());
			this->L4cost = (gcnew System::Windows::Forms::Label());
			this->L4 = (gcnew System::Windows::Forms::Label());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->L3perk = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::Label());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->L2perk = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->L1perk = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->L5perk = (gcnew System::Windows::Forms::Label());
			this->L5cost = (gcnew System::Windows::Forms::Label());
			this->L5 = (gcnew System::Windows::Forms::Label());
			this->L5description = (gcnew System::Windows::Forms::Label());
			this->L4description = (gcnew System::Windows::Forms::Label());
			this->L3description = (gcnew System::Windows::Forms::Label());
			this->L2description = (gcnew System::Windows::Forms::Label());
			this->L1description = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(234, 342);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 28;
			this->Bback->TabStop = false;
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(462, 219);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(120, 39);
			this->B4->TabIndex = 67;
			this->B4->Text = L"Rezerwuj";
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Visible = false;
			// 
			// L4perk
			// 
			this->L4perk->AutoSize = true;
			this->L4perk->ForeColor = System::Drawing::Color::Lime;
			this->L4perk->Location = System::Drawing::Point(146, 245);
			this->L4perk->Name = L"L4perk";
			this->L4perk->Size = System::Drawing::Size(240, 13);
			this->L4perk->TabIndex = 66;
			this->L4perk->Text = L"ZYSK:   dodatkowe cztery linie kodu za klikni�cie";
			// 
			// L4cost
			// 
			this->L4cost->AutoSize = true;
			this->L4cost->ForeColor = System::Drawing::Color::Red;
			this->L4cost->Location = System::Drawing::Point(30, 245);
			this->L4cost->Name = L"L4cost";
			this->L4cost->Size = System::Drawing::Size(91, 13);
			this->L4cost->TabIndex = 65;
			this->L4cost->Text = L"KOSZT:   1 000z�";
			// 
			// L4
			// 
			this->L4->AutoSize = true;
			this->L4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L4->Location = System::Drawing::Point(30, 219);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(142, 13);
			this->L4->TabIndex = 63;
			this->L4->Text = L"Legendarny programista";
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(462, 156);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(120, 39);
			this->B3->TabIndex = 62;
			this->B3->Text = L"Rezerwuj";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Visible = false;
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(146, 182);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(228, 13);
			this->L3perk->TabIndex = 61;
			this->L3perk->Text = L"ZYSK:   dodatkowe trzy linie kodu za klikni�cie";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(30, 182);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(82, 13);
			this->L3cost->TabIndex = 60;
			this->L3cost->Text = L"KOSZT:   500z�";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(30, 156);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(111, 13);
			this->L3->TabIndex = 58;
			this->L3->Text = L"Epicki programista";
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(462, 91);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(120, 39);
			this->B2->TabIndex = 57;
			this->B2->Text = L"Rezerwuj";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Visible = false;
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(146, 117);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(234, 13);
			this->L2perk->TabIndex = 56;
			this->L2perk->Text = L"ZYSK:   dodatkowe dwie linie kodu za klikni�cie";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(30, 117);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(82, 13);
			this->L2cost->TabIndex = 55;
			this->L2cost->Text = L"KOSZT:   200z�";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(30, 91);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(118, 13);
			this->L2->TabIndex = 53;
			this->L2->Text = L"S�awny programista";
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(462, 30);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(120, 39);
			this->B1->TabIndex = 52;
			this->B1->Text = L"Rezerwuj";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Visible = false;
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(146, 56);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(209, 13);
			this->L1perk->TabIndex = 51;
			this->L1perk->Text = L"ZYSK:   dodatkowa linia kodu za klikni�cie";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(30, 56);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(76, 13);
			this->L1cost->TabIndex = 50;
			this->L1cost->Text = L"KOSZT:   50z�";
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(30, 30);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(152, 13);
			this->L1->TabIndex = 48;
			this->L1->Text = L"Profesjonalny programista";
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(462, 283);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(120, 39);
			this->B5->TabIndex = 72;
			this->B5->Text = L"Rezerwuj";
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Visible = false;
			// 
			// L5perk
			// 
			this->L5perk->AutoSize = true;
			this->L5perk->ForeColor = System::Drawing::Color::Lime;
			this->L5perk->Location = System::Drawing::Point(146, 309);
			this->L5perk->Name = L"L5perk";
			this->L5perk->Size = System::Drawing::Size(228, 13);
			this->L5perk->TabIndex = 71;
			this->L5perk->Text = L"ZYSK:   dodatkowe pi�� linii kodu za klikni�cie";
			// 
			// L5cost
			// 
			this->L5cost->AutoSize = true;
			this->L5cost->ForeColor = System::Drawing::Color::Red;
			this->L5cost->Location = System::Drawing::Point(30, 309);
			this->L5cost->Name = L"L5cost";
			this->L5cost->Size = System::Drawing::Size(91, 13);
			this->L5cost->TabIndex = 70;
			this->L5cost->Text = L"KOSZT:   3 000z�";
			// 
			// L5
			// 
			this->L5->AutoSize = true;
			this->L5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L5->Location = System::Drawing::Point(30, 283);
			this->L5->Name = L"L5";
			this->L5->Size = System::Drawing::Size(125, 13);
			this->L5->TabIndex = 68;
			this->L5->Text = L"Mityczny programista";
			// 
			// L5description
			// 
			this->L5description->AutoSize = true;
			this->L5description->Location = System::Drawing::Point(30, 296);
			this->L5description->Name = L"L5description";
			this->L5description->Size = System::Drawing::Size(310, 13);
			this->L5description->TabIndex = 69;
			this->L5description->Text = L"po tym kursie wespniesz sie do panteonu bog�w programowania";
			// 
			// L4description
			// 
			this->L4description->AutoSize = true;
			this->L4description->Location = System::Drawing::Point(30, 232);
			this->L4description->Name = L"L4description";
			this->L4description->Size = System::Drawing::Size(355, 13);
			this->L4description->TabIndex = 64;
			this->L4description->Text = L"dzi�ki temu kursowi staniesz si� programist� o kt�rym b�d� �piewa� pie�ni";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->Location = System::Drawing::Point(30, 169);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(230, 13);
			this->L3description->TabIndex = 59;
			this->L3description->Text = L"ten kurs zrobi z Ciebie niezwyk�ego programist�";
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->Location = System::Drawing::Point(30, 104);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(358, 13);
			this->L2description->TabIndex = 54;
			this->L2description->Text = L"dzi�ki temu kursowi Twoje umiej�tno�ci programistyczne znacznie wzrosn�";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->Location = System::Drawing::Point(30, 43);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(327, 13);
			this->L1description->TabIndex = 49;
			this->L1description->Text = L"ten kurs pozwoli Ci podszlifowa� Twoje umiej�tno�ci programowania";
			// 
			// upgradeavatar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(607, 421);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->L5perk);
			this->Controls->Add(this->L5cost);
			this->Controls->Add(this->L5description);
			this->Controls->Add(this->L5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->L4perk);
			this->Controls->Add(this->L4cost);
			this->Controls->Add(this->L4description);
			this->Controls->Add(this->L4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->L3perk);
			this->Controls->Add(this->L3cost);
			this->Controls->Add(this->L3description);
			this->Controls->Add(this->L3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->L2perk);
			this->Controls->Add(this->L2cost);
			this->Controls->Add(this->L2description);
			this->Controls->Add(this->L2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->L1perk);
			this->Controls->Add(this->L1cost);
			this->Controls->Add(this->L1description);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->Bback);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"upgradeavatar";
			this->ShowIcon = false;
			this->Text = L"Ulepszenia zwi�kszaj�ce umiej�tno�ci Twojego programisty";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
