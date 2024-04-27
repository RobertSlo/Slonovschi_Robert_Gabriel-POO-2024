#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Afisaj;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ Impartire;
	private: System::Windows::Forms::Button^ Inmultire;
	private: System::Windows::Forms::Button^ Adunare;
	private: System::Windows::Forms::Button^ Scadere;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

	private:
		double stocare;
		char operatie;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Afisaj = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->Impartire = (gcnew System::Windows::Forms::Button());
			this->Inmultire = (gcnew System::Windows::Forms::Button());
			this->Adunare = (gcnew System::Windows::Forms::Button());
			this->Scadere = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Afisaj
			// 
			this->Afisaj->Location = System::Drawing::Point(12, 1);
			this->Afisaj->Multiline = true;
			this->Afisaj->Name = L"Afisaj";
			this->Afisaj->Size = System::Drawing::Size(260, 31);
			this->Afisaj->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(12, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(67, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(122, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Location = System::Drawing::Point(12, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 43);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Location = System::Drawing::Point(67, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(122, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Location = System::Drawing::Point(12, 143);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 43);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Location = System::Drawing::Point(67, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 43);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->Location = System::Drawing::Point(122, 143);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 43);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button10->Location = System::Drawing::Point(12, 192);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 43);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->Location = System::Drawing::Point(67, 192);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(58, 43);
			this->button11->TabIndex = 11;
			this->button11->Text = L"CLEAR";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->Location = System::Drawing::Point(122, 192);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 43);
			this->button12->TabIndex = 12;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// Impartire
			// 
			this->Impartire->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Impartire->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Impartire->Location = System::Drawing::Point(177, 38);
			this->Impartire->Name = L"Impartire";
			this->Impartire->Size = System::Drawing::Size(49, 43);
			this->Impartire->TabIndex = 13;
			this->Impartire->Text = L"/";
			this->Impartire->UseVisualStyleBackColor = false;
			this->Impartire->Click += gcnew System::EventHandler(this, &Form1::Impartire_Click);
			// 
			// Inmultire
			// 
			this->Inmultire->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Inmultire->Location = System::Drawing::Point(177, 94);
			this->Inmultire->Name = L"Inmultire";
			this->Inmultire->Size = System::Drawing::Size(49, 43);
			this->Inmultire->TabIndex = 14;
			this->Inmultire->Text = L"*";
			this->Inmultire->UseVisualStyleBackColor = false;
			this->Inmultire->Click += gcnew System::EventHandler(this, &Form1::Inmultire_Click);
			// 
			// Adunare
			// 
			this->Adunare->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Adunare->Location = System::Drawing::Point(177, 143);
			this->Adunare->Name = L"Adunare";
			this->Adunare->Size = System::Drawing::Size(49, 43);
			this->Adunare->TabIndex = 15;
			this->Adunare->Text = L"+";
			this->Adunare->UseVisualStyleBackColor = false;
			this->Adunare->Click += gcnew System::EventHandler(this, &Form1::Adunare_Click);
			// 
			// Scadere
			// 
			this->Scadere->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Scadere->Location = System::Drawing::Point(177, 192);
			this->Scadere->Name = L"Scadere";
			this->Scadere->Size = System::Drawing::Size(49, 43);
			this->Scadere->TabIndex = 16;
			this->Scadere->Text = L"-";
			this->Scadere->UseVisualStyleBackColor = false;
			this->Scadere->Click += gcnew System::EventHandler(this, &Form1::Scadere_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Scadere);
			this->Controls->Add(this->Adunare);
			this->Controls->Add(this->Inmultire);
			this->Controls->Add(this->Impartire);
			this->Controls->Add(this->button12);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Afisaj);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "9";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Text += "0";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Afisaj->Clear();
		stocare = Double::NaN;
		operatie = ']';
	}
	private: System::Void Impartire_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(Afisaj->Text))
		{
			double numar;
			if (Double::TryParse(Afisaj->Text, numar))
			{
				stocare = numar;
				Afisaj->Text = "";
				operatie = '/';
			}
			else
			{
				MessageBox::Show("Introdu un numar valid!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua Impartirea", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void Inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(Afisaj->Text))
		{
			double numar;
			if (Double::TryParse(Afisaj->Text, numar))
			{
				stocare = numar;
				Afisaj->Text = "";
				operatie = '*';
			}
			else
			{
				MessageBox::Show("Introdu un numar valid!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua Inmultirea", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void Adunare_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(Afisaj->Text))
		{
			double numar;
			if (Double::TryParse(Afisaj->Text, numar))
			{
				stocare = numar;
				Afisaj->Text = "";
				operatie = '+';
			}
			else
			{
				MessageBox::Show("Introdu un numar valid!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua Adunarea", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void Scadere_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!String::IsNullOrEmpty(Afisaj->Text))
		{
			double numar;
			if (Double::TryParse(Afisaj->Text, numar))
			{
				stocare = numar;
				Afisaj->Text = "";
				operatie = '-';
			}
			else
			{
				MessageBox::Show("Introdu un numar valid!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Introdu o valoare inainte de a efectua Scaderea", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(Afisaj->Text))
		{
			int numar;
			if (int::TryParse(Afisaj -> Text, numar))
			{
				double rezultat;
				switch (operatie)
				{
				case '+' :
					rezultat = stocare + numar;
					break;
				case '-':
					rezultat = stocare - numar;
					break;
				case '*':
					rezultat = stocare * numar;
					break;
				case '/':
					if (numar != 0)
					{
						rezultat = stocare / numar;
					}
					else
					{
						MessageBox::Show("Nu se poate efectua impartirea la 0", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					break;
				default:
					MessageBox::Show("Operatie nedefinita", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				Afisaj->Text = rezultat.ToString();
				stocare = rezultat;
			}
		}
	}
}
	; }