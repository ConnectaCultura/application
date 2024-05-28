#pragma once

#include "TxRegistreCiutada.h"
#include "TermesICondicions.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistreCiutadaForm
	/// </summary>
	public ref class RegistreCiutadaForm : public System::Windows::Forms::Form
	{
	public:
		RegistreCiutadaForm(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
			termes = false;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistreCiutadaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ registre;
	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::Label^ labelCondicio;
	bool termes;
	private: System::Windows::Forms::LinkLabel^ linkLabel;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->registre = (gcnew System::Windows::Forms::Button());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->labelCondicio = (gcnew System::Windows::Forms::Label());
			this->linkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Correu electrònic";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contrasenya";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(196, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 70);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(196, 101);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(164, 22);
			this->textBox3->TabIndex = 5;
			// 
			// registre
			// 
			this->registre->BackColor = System::Drawing::Color::OrangeRed;
			this->registre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registre->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->registre->Location = System::Drawing::Point(281, 181);
			this->registre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registre->Name = L"registre";
			this->registre->Size = System::Drawing::Size(119, 30);
			this->registre->TabIndex = 6;
			this->registre->Text = L"Registrar-se";
			this->registre->UseVisualStyleBackColor = false;
			this->registre->Click += gcnew System::EventHandler(this, &RegistreCiutadaForm::registre_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 182);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &RegistreCiutadaForm::buttonTorna_Click);
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(47, 146);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(18, 17);
			this->checkBox->TabIndex = 19;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &RegistreCiutadaForm::checkBox_CheckedChanged);
			// 
			// labelCondicio
			// 
			this->labelCondicio->AutoSize = true;
			this->labelCondicio->Location = System::Drawing::Point(71, 147);
			this->labelCondicio->Name = L"labelCondicio";
			this->labelCondicio->Size = System::Drawing::Size(135, 16);
			this->labelCondicio->TabIndex = 20;
			this->labelCondicio->Text = L"He llegit i accepto els";
			// 
			// linkLabel
			// 
			this->linkLabel->AutoSize = true;
			this->linkLabel->Location = System::Drawing::Point(203, 147);
			this->linkLabel->Name = L"linkLabel";
			this->linkLabel->Size = System::Drawing::Size(130, 16);
			this->linkLabel->TabIndex = 21;
			this->linkLabel->TabStop = true;
			this->linkLabel->Text = L"Termes i Condicions";
			this->linkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistreCiutadaForm::linkLabel_LinkClicked);
			// 
			// RegistreCiutadaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 222);
			this->Controls->Add(this->linkLabel);
			this->Controls->Add(this->labelCondicio);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->registre);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegistreCiutadaForm";
			this->Text = L"RegistreCiutadaForm";
			this->Load += gcnew System::EventHandler(this, &RegistreCiutadaForm::RegistreCiutadaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registre_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ nom = this->textBox1->Text;
		System::String^ correuElectronic = this->textBox2->Text;
		System::String^ contrasenya = this->textBox3->Text;
		TxRegistreCiutada txRC(nom, correuElectronic, contrasenya);
		if (textBox1->Text == System::String::Empty || textBox2->Text == System::String::Empty || textBox3->Text == System::String::Empty) {
			MessageBox::Show("Falten camps per omplir.");
		}
		else if (termes == false) {
			MessageBox::Show("Has d'acceptar els termes i condicions per a poder registrar-te");
		}
		else {
			try {
				txRC.executar();
				this->Close();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
				//MessageBox::Show("El correu electrònic ja existeix");
			}
		}
	
	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void RegistreCiutadaForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (termes == false) {
		termes = true;
	}
	else {
		termes = false;
	}
}
private: System::Void linkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	application::TermesICondicions^ Termes_I_Condicions = gcnew application::TermesICondicions();
	Termes_I_Condicions->ShowDialog();
}
};
}
