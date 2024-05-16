#pragma once
#include "TxConsultaEntitat.h"
#include "ConsultarEsdevenimentsForm.h"
#include "TxConsultaEsdeveniments.h"
namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaEntitatForm
	/// </summary>
	public ref class ConsultaEntitatForm : public System::Windows::Forms::Form
	{
	
	public:
		ConsultaEntitatForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ConsultaEntitatForm(System::String^ ce)
		{
			
			InitializeComponent();
			this->_CorreuEntitat = ce;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaEntitatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NomText;
	protected:

	private: System::Windows::Forms::Label^ DescripcioText;




	private: System::Windows::Forms::Label^ TipusText;



	private: System::String^ _CorreuEntitat;

	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ CorreuLabelEdit;
	private: System::Windows::Forms::Label^ ModalitatLabelEdit;
	private: System::Windows::Forms::Label^ DescripcioLabelEdit;

	private: System::Windows::Forms::Label^ NomLabelEdit;

	private: System::Windows::Forms::DataGridView^ EsdevDataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Inici;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Preu;

	private: System::Windows::Forms::Label^ AjuntamentLabelEdit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonTorna;


	protected:

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
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->CorreuLabelEdit = (gcnew System::Windows::Forms::Label());
			this->ModalitatLabelEdit = (gcnew System::Windows::Forms::Label());
			this->DescripcioLabelEdit = (gcnew System::Windows::Forms::Label());
			this->NomLabelEdit = (gcnew System::Windows::Forms::Label());
			this->EsdevDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Inici = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AjuntamentLabelEdit = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());

			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsdevDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(27, 25);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(39, 16);
			this->NomText->TabIndex = 0;
			this->NomText->Text = L"Nom:";
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;

			this->DescripcioText->Location = System::Drawing::Point(199, 20);
			this->DescripcioText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(75, 16);
			this->DescripcioText->TabIndex = 1;
			this->DescripcioText->Text = L"Descripcio:";
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(27, 103);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(44, 16);
			this->TipusText->TabIndex = 5;
			this->TipusText->Text = L"Tipus:";
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(27, 64);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(50, 16);
			this->CorreuLabel->TabIndex = 7;
			this->CorreuLabel->Text = L"Correu:";
			// 
			// CorreuLabelEdit
			// 
			this->CorreuLabelEdit->AutoSize = true;
			this->CorreuLabelEdit->Location = System::Drawing::Point(96, 52);
			this->CorreuLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CorreuLabelEdit->Name = L"CorreuLabelEdit";
			this->CorreuLabelEdit->Size = System::Drawing::Size(0, 16);
			this->CorreuLabelEdit->TabIndex = 11;
			// 
			// ModalitatLabelEdit
			// 
			this->ModalitatLabelEdit->AutoSize = true;
			this->ModalitatLabelEdit->Location = System::Drawing::Point(96, 84);
			this->ModalitatLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ModalitatLabelEdit->Name = L"ModalitatLabelEdit";
			this->ModalitatLabelEdit->Size = System::Drawing::Size(0, 16);
			this->ModalitatLabelEdit->TabIndex = 10;
			// 
			// DescripcioLabelEdit
			// 
			this->DescripcioLabelEdit->AutoSize = true;

			this->DescripcioLabelEdit->Location = System::Drawing::Point(263, 20);
			this->DescripcioLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioLabelEdit->MaximumSize = System::Drawing::Size(488, 0);
			this->DescripcioLabelEdit->Name = L"DescripcioLabelEdit";
			this->DescripcioLabelEdit->Size = System::Drawing::Size(0, 16);
			this->DescripcioLabelEdit->TabIndex = 9;
			// 
			// NomLabelEdit
			// 
			this->NomLabelEdit->AutoSize = true;

			this->NomLabelEdit->Location = System::Drawing::Point(96, 20);
			this->NomLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);

			this->NomLabelEdit->Name = L"NomLabelEdit";
			this->NomLabelEdit->Size = System::Drawing::Size(0, 16);
			this->NomLabelEdit->TabIndex = 8;
			// 
			// EsdevDataGrid
			// 
			this->EsdevDataGrid->AllowUserToAddRows = false;
			this->EsdevDataGrid->AllowUserToDeleteRows = false;
			this->EsdevDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EsdevDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nom, this->Inici,
					this->Fi, this->Preu
			});

			this->EsdevDataGrid->Location = System::Drawing::Point(23, 137);
			this->EsdevDataGrid->Margin = System::Windows::Forms::Padding(2);
			this->EsdevDataGrid->Name = L"EsdevDataGrid";
			this->EsdevDataGrid->ReadOnly = true;
			this->EsdevDataGrid->RowHeadersWidth = 62;
			this->EsdevDataGrid->RowTemplate->Height = 28;
			this->EsdevDataGrid->Size = System::Drawing::Size(757, 212);
			this->EsdevDataGrid->TabIndex = 13;
			this->EsdevDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaEntitatForm::EsdevDataGrid_CellContentClick);
			// 
			// Nom
			// 
			this->Nom->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Nom->HeaderText = L"Nom";
			this->Nom->MinimumWidth = 8;
			this->Nom->Name = L"Nom";
			this->Nom->ReadOnly = true;
			this->Nom->Width = 65;
			// 
			// Inici
			// 
			this->Inici->HeaderText = L"Inici";
			this->Inici->MinimumWidth = 8;
			this->Inici->Name = L"Inici";
			this->Inici->ReadOnly = true;
			this->Inici->Width = 150;
			// 
			// Fi
			// 
			this->Fi->HeaderText = L"Fi";
			this->Fi->MinimumWidth = 8;
			this->Fi->Name = L"Fi";
			this->Fi->ReadOnly = true;
			this->Fi->Width = 150;
			// 
			// Preu
			// 
			this->Preu->HeaderText = L"Preu";
			this->Preu->MinimumWidth = 8;
			this->Preu->Name = L"Preu";
			this->Preu->ReadOnly = true;
			this->Preu->Width = 150;
			// 

			// AjuntamentLabelEdit
			// 
			this->AjuntamentLabelEdit->AutoSize = true;
			this->AjuntamentLabelEdit->Location = System::Drawing::Point(96, 112);
			this->AjuntamentLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AjuntamentLabelEdit->Name = L"AjuntamentLabelEdit";
			this->AjuntamentLabelEdit->Size = System::Drawing::Size(0, 13);
			this->AjuntamentLabelEdit->TabIndex = 15;
			this->AjuntamentLabelEdit->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 112);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ajuntament:";
			this->label2->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::label2_Click);
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(826, 338);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::buttonTorna_Click);

			// 
			// ConsultaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(722, 329);
			this->Controls->Add(this->AjuntamentLabelEdit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->EsdevDataGrid);
			this->Controls->Add(this->CorreuLabelEdit);
			this->Controls->Add(this->ModalitatLabelEdit);
			this->Controls->Add(this->DescripcioLabelEdit);
			this->Controls->Add(this->NomLabelEdit);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Location = System::Drawing::Point(16, 22);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ConsultaEntitatForm";
			this->Text = L"ConsultaEntitatForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitatForm::ConsultaEntitatForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsdevDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CorreuLabelEdit->Text = _CorreuEntitat;
		System::String^ correu = this->_CorreuEntitat;
		TxConsultaEntitat txCE(correu);
		try {
			txCE.executar();
			List<System::String^>^ sol = txCE.ObteResultat();
			NomLabelEdit->Text = sol[0];
			ModalitatLabelEdit->Text = sol[1];
			DescripcioLabelEdit->Text = sol[2];
			AjuntamentLabelEdit->Text = sol[3];
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("existent");
		}
		catch (std::runtime_error e) {
			MessageBox::Show(gcnew System::String(e.what()));
		}

		TxConsultaEsdeveniments txEsdev(_CorreuEntitat);
		try {
			txEsdev.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<List<System::String^>^>^ ve = txEsdev.obteResultat();
		for each (List<System::String^> ^ e in ve)
		{
			if (e[3] == "0") EsdevDataGrid->Rows->Add(e[0], e[1], e[2], "Gratuit");
			else EsdevDataGrid->Rows->Add(e[0], e[1], e[2], e[3]);
		}
	}
	private: System::Void EsdevDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			String^ nom = EsdevDataGrid->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			String^ inici = EsdevDataGrid->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			String^ fi = EsdevDataGrid->Rows[e->RowIndex]->Cells[2]->Value->ToString();

			application::ConsultaEsdevenimentForm^ Consulta_Esdeveniment = gcnew application::ConsultaEsdevenimentForm(nom, inici, fi);
			Consulta_Esdeveniment->ShowDialog();
		}
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
};
}
