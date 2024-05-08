#pragma once
#include "Sessio.h"
#include "TxModificaEntitat.h"
#include "CercadoraEntitat.h"
#include "PassarelaEntitat.h"
#include "TxConsultaTipus.h"


namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarEntitatForm
	/// </summary>
	public ref class ModificarEntitatForm : public System::Windows::Forms::Form
	{
	public:
		ModificarEntitatForm(void)
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
		~ModificarEntitatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NomLabel;
	private: System::Windows::Forms::Label^ TipusLabel;
	private: System::Windows::Forms::Label^ DescripcioLabel;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ NomBox;

	private: System::Windows::Forms::TextBox^ DescripcioBox;
	private: System::Windows::Forms::Button^ ModificaButton;
	private: System::Windows::Forms::ComboBox^ comboBox1;





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
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->TipusLabel = (gcnew System::Windows::Forms::Label());
			this->DescripcioLabel = (gcnew System::Windows::Forms::Label());
			this->NomBox = (gcnew System::Windows::Forms::TextBox());
			this->DescripcioBox = (gcnew System::Windows::Forms::TextBox());
			this->ModificaButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Location = System::Drawing::Point(24, 20);
			this->NomLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(32, 13);
			this->NomLabel->TabIndex = 0;
			this->NomLabel->Text = L"Nom:";
			// 
			// TipusLabel
			// 
			this->TipusLabel->AutoSize = true;
			this->TipusLabel->Location = System::Drawing::Point(24, 54);
			this->TipusLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TipusLabel->Name = L"TipusLabel";
			this->TipusLabel->Size = System::Drawing::Size(53, 13);
			this->TipusLabel->TabIndex = 1;
			this->TipusLabel->Text = L"Modalitat:";
			this->TipusLabel->Click += gcnew System::EventHandler(this, &ModificarEntitatForm::TipusLabel_Click);
			// 
			// DescripcioLabel
			// 
			this->DescripcioLabel->AutoSize = true;
			this->DescripcioLabel->Location = System::Drawing::Point(24, 91);
			this->DescripcioLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioLabel->Name = L"DescripcioLabel";
			this->DescripcioLabel->Size = System::Drawing::Size(60, 13);
			this->DescripcioLabel->TabIndex = 2;
			this->DescripcioLabel->Text = L"Descripció:";
			// 
			// NomBox
			// 
			this->NomBox->Location = System::Drawing::Point(91, 20);
			this->NomBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->NomBox->Name = L"NomBox";
			this->NomBox->Size = System::Drawing::Size(76, 20);
			this->NomBox->TabIndex = 3;
			this->NomBox->TextChanged += gcnew System::EventHandler(this, &ModificarEntitatForm::NomBox_TextChanged);
			// 
			// DescripcioBox
			// 
			this->DescripcioBox->Location = System::Drawing::Point(91, 89);
			this->DescripcioBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DescripcioBox->Name = L"DescripcioBox";
			this->DescripcioBox->Size = System::Drawing::Size(145, 20);
			this->DescripcioBox->TabIndex = 5;
			this->DescripcioBox->TextChanged += gcnew System::EventHandler(this, &ModificarEntitatForm::DescripcioBox_TextChanged);
			// 
			// ModificaButton
			// 
			this->ModificaButton->Location = System::Drawing::Point(179, 140);
			this->ModificaButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ModificaButton->Name = L"ModificaButton";
			this->ModificaButton->Size = System::Drawing::Size(56, 19);
			this->ModificaButton->TabIndex = 6;
			this->ModificaButton->Text = L"Modifica";
			this->ModificaButton->UseVisualStyleBackColor = true;
			this->ModificaButton->Click += gcnew System::EventHandler(this, &ModificarEntitatForm::ModificaButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(91, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ModificarEntitatForm::comboBox1_SelectedIndexChanged);
			// 
			// ModificarEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(263, 186);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ModificaButton);
			this->Controls->Add(this->DescripcioBox);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->DescripcioLabel);
			this->Controls->Add(this->TipusLabel);
			this->Controls->Add(this->NomLabel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ModificarEntitatForm";
			this->Text = L"ModificarEntitatForm";
			this->Load += gcnew System::EventHandler(this, &ModificarEntitatForm::ModificarEntitatForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModificaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Sessio^ s = Sessio::getInstance();
		PassarelaUsuari^ u = s->obteUsuari();
		TxModificaEntitat Mod(NomBox->Text, DescripcioBox->Text, comboBox1->Text, u);
		try {
			Mod.executar();
			this->Close();
			s->modificaUsuari(NomBox->Text);
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("No s'ha pogut modificar.");
		}
	}

private: System::Void ModificarEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	NomBox->Text = u->obteNom();

	CercadoraEntitat^ ce;
	PassarelaEntitat^ entitat = ce->CercaEntitat(u->obteCorreuElectronic());
	DescripcioBox->Text = entitat->obteDescripcio();

	TxConsultaTipus txCT;
	txCT.executar();
	comboBox1->DataSource = txCT.ObteResultat();
	int index = comboBox1->FindStringExact(entitat->obteTipus());
	comboBox1->SelectedIndex = index;
}

	private: System::Void NomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TipusBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DescripcioBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void TipusLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
