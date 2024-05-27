#pragma once
#include "TxConsultaEntitats.h"
#include "TxConsultaEntitatsTipus.h"
#include "TxConsultaEntitatsNom.h"
#include "TxConsultaTipus.h"
#include "ConsultaEntitatForm.h"
#include "TxConsultaAjuntament.h"
#include "TxConsultaEntitatsAjuntament.h"
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





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ AjuntamentComboBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correu_Electronic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ajutament;
	private: System::Windows::Forms::Button^ buttonTorna;
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
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correu_Electronic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ajutament = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EntitatsLabel = (gcnew System::Windows::Forms::Label());
			this->TipusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->TipusLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AjuntamentComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
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
			this->dataGridViewEntitats->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nom,
					this->Descripcio, this->Tipus, this->Correu_Electronic, this->Ajutament
			});
			this->dataGridViewEntitats->Location = System::Drawing::Point(61, 91);
			this->dataGridViewEntitats->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridViewEntitats->Name = L"dataGridViewEntitats";
			this->dataGridViewEntitats->ReadOnly = true;
			this->dataGridViewEntitats->RowHeadersVisible = false;
			this->dataGridViewEntitats->RowHeadersWidth = 51;
			this->dataGridViewEntitats->Size = System::Drawing::Size(921, 781);
			this->dataGridViewEntitats->TabIndex = 0;
			this->dataGridViewEntitats->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaEntitats::dataGridViewEntitats_CellContentClick);
			// 
			// Nom
			// 
			this->Nom->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nom->HeaderText = L"Nom";
			this->Nom->MinimumWidth = 6;
			this->Nom->Name = L"Nom";
			this->Nom->ReadOnly = true;
			// 
			// Descripcio
			// 
			this->Descripcio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Descripcio->HeaderText = L"Descripcio";
			this->Descripcio->MinimumWidth = 6;
			this->Descripcio->Name = L"Descripcio";
			this->Descripcio->ReadOnly = true;
			// 
			// Tipus
			// 
			this->Tipus->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Tipus->HeaderText = L"Modalitat";
			this->Tipus->MinimumWidth = 6;
			this->Tipus->Name = L"Tipus";
			this->Tipus->ReadOnly = true;
			// 
			// Correu_Electronic
			// 
			this->Correu_Electronic->HeaderText = L"Correu_Electronic";
			this->Correu_Electronic->MinimumWidth = 6;
			this->Correu_Electronic->Name = L"Correu_Electronic";
			this->Correu_Electronic->ReadOnly = true;
			this->Correu_Electronic->Visible = false;
			this->Correu_Electronic->Width = 125;
			// 
			// Ajutament
			// 
			this->Ajutament->HeaderText = L"Ajuntament";
			this->Ajutament->MinimumWidth = 8;
			this->Ajutament->Name = L"Ajutament";
			this->Ajutament->ReadOnly = true;
			this->Ajutament->Width = 200;
			// 
			// EntitatsLabel
			// 
			this->EntitatsLabel->AutoSize = true;
			this->EntitatsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EntitatsLabel->Location = System::Drawing::Point(54, 20);
			this->EntitatsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EntitatsLabel->Name = L"EntitatsLabel";
			this->EntitatsLabel->Size = System::Drawing::Size(137, 40);
			this->EntitatsLabel->TabIndex = 1;
			this->EntitatsLabel->Text = L"Entitats";
			this->EntitatsLabel->Click += gcnew System::EventHandler(this, &ConsultaEntitats::EntitatsLabel_Click);
			// 
			// TipusComboBox
			// 
			this->TipusComboBox->FormattingEnabled = true;
			this->TipusComboBox->Location = System::Drawing::Point(802, 29);
			this->TipusComboBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TipusComboBox->Name = L"TipusComboBox";
			this->TipusComboBox->Size = System::Drawing::Size(180, 28);
			this->TipusComboBox->TabIndex = 6;
			this->TipusComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitats::TipusComboBox_SelectedIndexChanged);
			// 
			// TipusLabel
			// 
			this->TipusLabel->AutoSize = true;
			this->TipusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TipusLabel->Location = System::Drawing::Point(676, 29);
			this->TipusLabel->Name = L"TipusLabel";
			this->TipusLabel->Size = System::Drawing::Size(97, 25);
			this->TipusLabel->TabIndex = 8;
			this->TipusLabel->Text = L"Modalitat:";
			this->TipusLabel->Click += gcnew System::EventHandler(this, &ConsultaEntitats::TipusLabel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(344, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Ajuntament:";
			// 
			// AjuntamentComboBox
			// 
			this->AjuntamentComboBox->FormattingEnabled = true;
			this->AjuntamentComboBox->Location = System::Drawing::Point(476, 26);
			this->AjuntamentComboBox->Name = L"AjuntamentComboBox";
			this->AjuntamentComboBox->Size = System::Drawing::Size(136, 28);
			this->AjuntamentComboBox->TabIndex = 9;
			this->AjuntamentComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitats::AjuntamentcomboBox_SelectedIndexChanged);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(16, 477);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaEntitats::buttonTorna_Click);
			// 
			// ConsultaEntitats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1055, 992);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AjuntamentComboBox);
			this->Controls->Add(this->TipusLabel);
			this->Controls->Add(this->TipusComboBox);
			this->Controls->Add(this->EntitatsLabel);
			this->Controls->Add(this->dataGridViewEntitats);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ConsultaEntitats";
			this->Text = L"ConsultaEntitats";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitats::ConsultaEntitats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitats))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitats_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaEntitats ent("Totes", "Tots");
		try {
			ent.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<List<System::String^>^>^ ve = ent.ObteResultat();
		for each (List<System::String^>^ e in ve)
		{
			dataGridViewEntitats->Rows->Add(e[0], e[1], e[2], e[3], e[4]);
		}

		TxConsultaTipus tip;
		try {
			tip.executar();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<String^>^ tipus = tip.ObteResultat();
		tipus->Insert(0, "Totes");
		TipusComboBox->DataSource = tipus;
		
		TxConsultaAjuntament ca;
		try {
			ca.executar();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<String^>^ ajuntaments = ca.ObteResultat();
		ajuntaments->Insert(0, "Tots");
		AjuntamentComboBox->DataSource = ajuntaments;
	}
	private: System::Void dataGridViewEntitats_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			String^ cellText = dataGridViewEntitats->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			application::ConsultaEntitatForm^ Consulta_Entitat = gcnew application::ConsultaEntitatForm(cellText);
			Consulta_Entitat->ShowDialog();

		}
	}

private: System::Void TipusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewEntitats->Rows->Clear();
	TxConsultaEntitats en(this->TipusComboBox->SelectedItem->ToString(), this->AjuntamentComboBox->SelectedItem->ToString());
	try {
		en.executar();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	List<List<System::String^>^>^ ve = en.ObteResultat();
	for each (List<System::String^> ^ e in ve)
	{
		dataGridViewEntitats->Rows->Add(e[0], e[1], e[2], e[3], e[4]);
	}

}
private: System::Void TipusLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EntitatsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void AjuntamentcomboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		dataGridViewEntitats->Rows->Clear();
		TxConsultaEntitats en(this->TipusComboBox->SelectedItem->ToString(), this->AjuntamentComboBox->SelectedItem->ToString());
		try {
			en.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<List<System::String^>^>^ ve = en.ObteResultat();
		for each (List<System::String^> ^ e in ve)
		{
			dataGridViewEntitats->Rows->Add(e[0], e[1], e[2], e[3], e[4]);
		}

	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
