#pragma once
#include "TxConsultaEsdeveniments.h"
#include "ConsultaEsdevenimentForm.h"
namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarEsdevenimentsForm
	/// </summary>
	public ref class ConsultarEsdevenimentsForm : public System::Windows::Forms::Form
	{
	public:
		ConsultarEsdevenimentsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			_correuEntitat = System::String::Empty;
		}
		ConsultarEsdevenimentsForm(System::String^ correu)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			_correuEntitat = correu;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ConsultarEsdevenimentsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ EsdevDataGrid;
	protected:

	protected:




	private: System::Windows::Forms::Label^ Esdeveniments;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Inici;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Preu;
	private: System::String^ _correuEntitat;
	private: System::Windows::Forms::Button^ buttonTorna;








	protected:





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->EsdevDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Inici = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Esdeveniments = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsdevDataGrid))->BeginInit();
			this->SuspendLayout();
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
			this->EsdevDataGrid->Location = System::Drawing::Point(125, 67);
			this->EsdevDataGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EsdevDataGrid->Name = L"EsdevDataGrid";
			this->EsdevDataGrid->ReadOnly = true;
			this->EsdevDataGrid->RowHeadersWidth = 62;
			this->EsdevDataGrid->RowTemplate->Height = 28;
			this->EsdevDataGrid->Size = System::Drawing::Size(757, 212);
			this->EsdevDataGrid->TabIndex = 0;
			this->EsdevDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultarEsdevenimentsForm::EsdevDataGrid_CellContentClick);
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
			// Esdeveniments
			// 
			this->Esdeveniments->AutoSize = true;
			this->Esdeveniments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Esdeveniments->Location = System::Drawing::Point(17, 20);
			this->Esdeveniments->Name = L"Esdeveniments";
			this->Esdeveniments->Size = System::Drawing::Size(178, 29);
			this->Esdeveniments->TabIndex = 1;
			this->Esdeveniments->Text = L"Esdeveniments";
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 293);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::buttonTorna_Click);
			// 
			// ConsultarEsdevenimentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 333);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->Esdeveniments);
			this->Controls->Add(this->EsdevDataGrid);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ConsultarEsdevenimentsForm";
			this->Text = L"ConsultarEsdevenimentsForm";
			this->Load += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::ConsultarEsdevenimentsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsdevDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void ConsultarEsdevenimentsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaEsdeveniments txEsdev(_correuEntitat);
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
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

