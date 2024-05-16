#pragma once
#include "Sessio.h"
#include "CercadoraUsuari.h"
#include "CercadoraCiutada.h"
#include "PassarelaUsuari.h"
#include "Sessio.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VeurePerfilForm
	/// </summary>
	public ref class VeurePerfilForm : public System::Windows::Forms::Form
	{
	public:
		VeurePerfilForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VeurePerfilForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ CorreuBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ TipusText;
	private: System::Windows::Forms::TextBox^ PuntsBox;

	private: System::Windows::Forms::TextBox^ NomBox;
	private: System::Windows::Forms::Label^ DescripcioText;
	private: System::Windows::Forms::Label^ NomText;


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
			this->CorreuBox = (gcnew System::Windows::Forms::TextBox());
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->PuntsBox = (gcnew System::Windows::Forms::TextBox());
			this->NomBox = (gcnew System::Windows::Forms::TextBox());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CorreuBox
			// 
			this->CorreuBox->Location = System::Drawing::Point(132, 54);
			this->CorreuBox->Margin = System::Windows::Forms::Padding(2);
			this->CorreuBox->Name = L"CorreuBox";
			this->CorreuBox->Size = System::Drawing::Size(111, 20);
			this->CorreuBox->TabIndex = 12;
			this->CorreuBox->TextChanged += gcnew System::EventHandler(this, &VeurePerfilForm::TipusBox_TextChanged);
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(22, 59);
			this->TipusText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(88, 13);
			this->TipusText->TabIndex = 11;
			this->TipusText->Text = L"Correu Electrònic:";
			this->TipusText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::TipusText_Click);
			// 
			// PuntsBox
			// 
			this->PuntsBox->Location = System::Drawing::Point(132, 87);
			this->PuntsBox->Margin = System::Windows::Forms::Padding(2);
			this->PuntsBox->Name = L"PuntsBox";
			this->PuntsBox->Size = System::Drawing::Size(112, 20);
			this->PuntsBox->TabIndex = 10;
			this->PuntsBox->TextChanged += gcnew System::EventHandler(this, &VeurePerfilForm::DescripcioBox_TextChanged);
			// 
			// NomBox
			// 
			this->NomBox->Location = System::Drawing::Point(133, 26);
			this->NomBox->Margin = System::Windows::Forms::Padding(2);
			this->NomBox->Name = L"NomBox";
			this->NomBox->Size = System::Drawing::Size(111, 20);
			this->NomBox->TabIndex = 9;
			this->NomBox->TextChanged += gcnew System::EventHandler(this, &VeurePerfilForm::NomBox_TextChanged);
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;
			this->DescripcioText->Location = System::Drawing::Point(22, 87);
			this->DescripcioText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(37, 13);
			this->DescripcioText->TabIndex = 8;
			this->DescripcioText->Text = L"Punts:";
			this->DescripcioText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::DescripcioText_Click);
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(22, 31);
			this->NomText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(32, 13);
			this->NomText->TabIndex = 7;
			this->NomText->Text = L"Nom:";
			this->NomText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::NomText_Click);
			// 
			// VeurePerfilForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 122);
			this->Controls->Add(this->CorreuBox);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->PuntsBox);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Name = L"VeurePerfilForm";
			this->Text = L"VeurePerfilForm";
			this->Load += gcnew System::EventHandler(this, &VeurePerfilForm::VeurePerfilForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void VeurePerfilForm_Load(System::Object^ sender, System::EventArgs^ e) {
			// Para hacer un consultaPerfil generico
			//TxConsultaPerfil txCP;
			try {
				Sessio^ s = Sessio::getInstance();
				PassarelaUsuari^ u = s->obteUsuari();
				CercadoraCiutada cC;
				PassarelaCiutada^ c = cC.cercaCiutada(u->obteCorreuElectronic());

				CorreuBox->Text = u->obteCorreuElectronic();
				NomBox->Text = u->obteNom();
				PuntsBox->Text = c->obtePunts().ToString();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

	private: System::Void NomText_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TipusText_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DescripcioBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void NomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DescripcioText_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TipusBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
