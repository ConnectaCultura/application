#pragma once
#include "TxConsultaEntitats.h"
#include "TxConsultaEntitatsTipus.h"
#include "TxConsultaTipus.h"
#include "ConsultaEntitatForm.h"
#include <stdexcept>

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConsultaEntitats
	/// </summary>
	public ref class ConsultaEntitats : public System::Windows::Forms::Form
	{
	public:
		ConsultaEntitats(void)
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
		~ConsultaEntitats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewEntitats;
	private: System::Windows::Forms::Label^ EntitatsLabel;
	private: System::Windows::Forms::ComboBox^ TipusComboBox;
	protected:

	protected:






	private: System::Windows::Forms::Label^ TipusLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CorreuElectronic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipus;













	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewEntitats = (gcnew System::Windows::Forms::DataGridView());
			this->CorreuElectronic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EntitatsLabel = (gcnew System::Windows::Forms::Label());
			this->TipusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->TipusLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitats))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewEntitats
			// 
			this->dataGridViewEntitats->AllowUserToAddRows = false;
			this->dataGridViewEntitats->AllowUserToDeleteRows = false;
			this->dataGridViewEntitats->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewEntitats->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewEntitats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEntitats->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->CorreuElectronic,
					this->Descripcio, this->Tipus
			});
			this->dataGridViewEntitats->Location = System::Drawing::Point(12, 59);
			this->dataGridViewEntitats->Name = L"dataGridViewEntitats";
			this->dataGridViewEntitats->ReadOnly = true;
			this->dataGridViewEntitats->Size = System::Drawing::Size(800, 352);
			this->dataGridViewEntitats->TabIndex = 0;
			this->dataGridViewEntitats->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaEntitats::dataGridViewEntitats_CellContentClick);
			// 
			// CorreuElectronic
			// 
			this->CorreuElectronic->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->CorreuElectronic->HeaderText = L"CorreuElectronic";
			this->CorreuElectronic->Name = L"CorreuElectronic";
			this->CorreuElectronic->ReadOnly = true;
			// 
			// Descripcio
			// 
			this->Descripcio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Descripcio->HeaderText = L"Descripcio";
			this->Descripcio->Name = L"Descripcio";
			this->Descripcio->ReadOnly = true;
			// 
			// Tipus
			// 
			this->Tipus->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Tipus->HeaderText = L"Tipus";
			this->Tipus->Name = L"Tipus";
			this->Tipus->ReadOnly = true;
			// 
			// EntitatsLabel
			// 
			this->EntitatsLabel->AutoSize = true;
			this->EntitatsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EntitatsLabel->Location = System::Drawing::Point(36, 13);
			this->EntitatsLabel->Name = L"EntitatsLabel";
			this->EntitatsLabel->Size = System::Drawing::Size(91, 29);
			this->EntitatsLabel->TabIndex = 1;
			this->EntitatsLabel->Text = L"Entitats";
			this->EntitatsLabel->Click += gcnew System::EventHandler(this, &ConsultaEntitats::EntitatsLabel_Click);
			// 
			// TipusComboBox
			// 
			this->TipusComboBox->FormattingEnabled = true;
			this->TipusComboBox->Location = System::Drawing::Point(672, 21);
			this->TipusComboBox->Name = L"TipusComboBox";
			this->TipusComboBox->Size = System::Drawing::Size(121, 21);
			this->TipusComboBox->TabIndex = 6;
			this->TipusComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitats::TipusComboBox_SelectedIndexChanged);
			// 
			// TipusLabel
			// 
			this->TipusLabel->AutoSize = true;
			this->TipusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TipusLabel->Location = System::Drawing::Point(622, 23);
			this->TipusLabel->Name = L"TipusLabel";
			this->TipusLabel->Size = System::Drawing::Size(44, 16);
			this->TipusLabel->TabIndex = 8;
			this->TipusLabel->Text = L"Tipus:";
			this->TipusLabel->Click += gcnew System::EventHandler(this, &ConsultaEntitats::TipusLabel_Click);
			// 
			// ConsultaEntitats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(824, 423);
			this->Controls->Add(this->TipusLabel);
			this->Controls->Add(this->TipusComboBox);
			this->Controls->Add(this->EntitatsLabel);
			this->Controls->Add(this->dataGridViewEntitats);
			this->Name = L"ConsultaEntitats";
			this->Text = L"ConsultaEntitats";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitats::ConsultaEntitats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitats))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitats_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaEntitats ent;
		try {
			ent.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<PassarelaEntitat^>^ ve = ent.ObteResultat();
		for each (PassarelaEntitat ^ e in ve)
		{
			dataGridViewEntitats->Rows->Add(e->obteCorreuElectronic(), e->obteDescripcio(), e->obteTipus());
		}
		//tecnicament no fa falta ja que al inicialitzarlo s'autoseleciona el tipus buit i pertant s'escriu sencer

		TxConsultaTipus tip;
		try {
			tip.executar();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
		TipusComboBox->DataSource = tip.ObteResultat();
	}
	private: System::Void dataGridViewEntitats_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			String^ cellText = dataGridViewEntitats->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
			application::ConsultaEntitatForm^ Consulta_Entitat = gcnew application::ConsultaEntitatForm(cellText);
			Consulta_Entitat->ShowDialog();

		}
	}

private: System::Void TipusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewEntitats->Rows->Clear();
	TxConsultaEntitatsTipus entip;
	if (this->TipusComboBox->SelectedItem->ToString() != "") {

		entip.SetTipus(this->TipusComboBox->SelectedItem->ToString());
		try {
			entip.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<PassarelaEntitat^>^ ve = entip.ObteResultat();
		for each (PassarelaEntitat ^ e in ve)
		{
			dataGridViewEntitats->Rows->Add(e->obteCorreuElectronic(), e->obteDescripcio(), e->obteTipus());
		}
	}
	else {
		TxConsultaEntitats en;
		try {
			en.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<PassarelaEntitat^>^ ve = en.ObteResultat();
		for each (PassarelaEntitat ^ e in ve)
		{
			dataGridViewEntitats->Rows->Add(e->obteCorreuElectronic(), e->obteDescripcio(), e->obteTipus());
		}
	}
}
private: System::Void TipusLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EntitatsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
