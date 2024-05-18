#pragma once
#include "Sessio.h"
#include "TxModificaEntitat.h"
#include "CercadoraEntitat.h"
#include "PassarelaEntitat.h"
#include "TxConsultaTipus.h"
#include "TxConsultaEntitat.h"


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
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ AjuntamentLabelEdit;
	private: System::Windows::Forms::Button^ buttonTorna;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AjuntamentLabelEdit = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Location = System::Drawing::Point(32, 25);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(39, 16);
			this->NomLabel->TabIndex = 0;
			this->NomLabel->Text = L"Nom:";
			// 
			// TipusLabel
			// 
			this->TipusLabel->AutoSize = true;
			this->TipusLabel->Location = System::Drawing::Point(32, 66);
			this->TipusLabel->Name = L"TipusLabel";
			this->TipusLabel->Size = System::Drawing::Size(65, 16);
			this->TipusLabel->TabIndex = 1;
			this->TipusLabel->Text = L"Modalitat:";
			this->TipusLabel->Click += gcnew System::EventHandler(this, &ModificarEntitatForm::TipusLabel_Click);
			// 
			// DescripcioLabel
			// 
			this->DescripcioLabel->AutoSize = true;
			this->DescripcioLabel->Location = System::Drawing::Point(32, 112);
			this->DescripcioLabel->Name = L"DescripcioLabel";
			this->DescripcioLabel->Size = System::Drawing::Size(75, 16);
			this->DescripcioLabel->TabIndex = 2;
			this->DescripcioLabel->Text = L"Descripció:";
			// 
			// NomBox
			// 

			this->NomBox->Location = System::Drawing::Point(91, 20);
			this->NomBox->Margin = System::Windows::Forms::Padding(2);

			this->NomBox->Name = L"NomBox";
			this->NomBox->Size = System::Drawing::Size(100, 22);
			this->NomBox->TabIndex = 3;
			this->NomBox->TextChanged += gcnew System::EventHandler(this, &ModificarEntitatForm::NomBox_TextChanged);
			// 
			// DescripcioBox
			// 

			this->DescripcioBox->Location = System::Drawing::Point(91, 89);
			this->DescripcioBox->Margin = System::Windows::Forms::Padding(2);

			this->DescripcioBox->Name = L"DescripcioBox";
			this->DescripcioBox->Size = System::Drawing::Size(192, 22);
			this->DescripcioBox->TabIndex = 5;
			this->DescripcioBox->TextChanged += gcnew System::EventHandler(this, &ModificarEntitatForm::DescripcioBox_TextChanged);
			// 
			// ModificaButton
			// 

			this->ModificaButton->Location = System::Drawing::Point(180, 156);
			this->ModificaButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificaButton->Name = L"ModificaButton";
			this->ModificaButton->Size = System::Drawing::Size(75, 23);
			this->ModificaButton->TabIndex = 6;
			this->ModificaButton->Text = L"Modifica";
			this->ModificaButton->UseVisualStyleBackColor = true;
			this->ModificaButton->Click += gcnew System::EventHandler(this, &ModificarEntitatForm::ModificaButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(121, 66);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ModificarEntitatForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 125);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Ajuntament:";
			// 
			// AjuntamentLabelEdit
			// 
			this->AjuntamentLabelEdit->AutoSize = true;
			this->AjuntamentLabelEdit->Location = System::Drawing::Point(91, 125);
			this->AjuntamentLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AjuntamentLabelEdit->Name = L"AjuntamentLabelEdit";
			this->AjuntamentLabelEdit->Size = System::Drawing::Size(0, 13);
			this->AjuntamentLabelEdit->TabIndex = 9;

			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 174);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ModificarEntitatForm::buttonTorna_Click);

			// 
			// ModificarEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->ClientSize = System::Drawing::Size(263, 186);
			this->Controls->Add(this->AjuntamentLabelEdit);
			this->Controls->Add(this->label1);

			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ModificaButton);
			this->Controls->Add(this->DescripcioBox);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->DescripcioLabel);
			this->Controls->Add(this->TipusLabel);
			this->Controls->Add(this->NomLabel);

			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
	NomBox->Text = s->obteUsuari()->obteNom();
	TxConsultaEntitat ce(s->obteUsuari()->obteCorreuElectronic());
	try {
		ce.executar();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	List<System::String^>^ entitat = ce.ObteResultat();
	DescripcioBox->Text = entitat[2];
	AjuntamentLabelEdit->Text = entitat[3];



	TxConsultaTipus txCT;
	txCT.executar();
	comboBox1->DataSource = txCT.ObteResultat();
	int index = comboBox1->FindStringExact(entitat[1]);
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
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
