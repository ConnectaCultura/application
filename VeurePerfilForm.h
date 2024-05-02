#pragma once
#include "Sessio.h"
#include "TxConsultaPerfil.h"

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

	protected:

	protected:
	private: System::Windows::Forms::Label^ TipusText;



	private: System::Windows::Forms::Label^ DescripcioText;
	private: System::Windows::Forms::Label^ NomText;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


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
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(22, 59);
			this->TipusText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(91, 13);
			this->TipusText->TabIndex = 11;
			this->TipusText->Text = L"Correu Electrònic:";
			this->TipusText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::TipusText_Click);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 12;
			this->label1->Click += gcnew System::EventHandler(this, &VeurePerfilForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(147, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(147, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 14;
			// 
			// VeurePerfilForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 164);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TipusText);
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
			TxConsultaPerfil txCP;
			try {
				
				txCP.executar();
				txCP.obteResultat();
				label1->Text = u->obteCorreuElectronic();
				label2->Text = u->obteNom();
				label3->Text = c->obtePunts()->ToString();
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

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
