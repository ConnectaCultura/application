#pragma once
#include "TxConsultaEntitats.h"
#include "TxConsultaEntitatsTipus.h"
#include "TxConsultaTipus.h"
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
	protected:

	protected:





	private: System::Windows::Forms::ComboBox^ Tipus;
	private: System::Windows::Forms::Label^ TipusLabel;










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
			this->EntitatsLabel = (gcnew System::Windows::Forms::Label());
			this->Tipus = (gcnew System::Windows::Forms::ComboBox());
			this->TipusLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitats))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewEntitats
			// 
			this->dataGridViewEntitats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEntitats->Location = System::Drawing::Point(12, 59);
			this->dataGridViewEntitats->Name = L"dataGridViewEntitats";
			this->dataGridViewEntitats->Size = System::Drawing::Size(800, 352);
			this->dataGridViewEntitats->TabIndex = 0;
			this->dataGridViewEntitats->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaEntitats::dataGridViewEntitats_CellContentClick);
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
			// Tipus
			// 
			this->Tipus->FormattingEnabled = true;
			this->Tipus->Location = System::Drawing::Point(672, 21);
			this->Tipus->Name = L"Tipus";
			this->Tipus->Size = System::Drawing::Size(121, 21);
			this->Tipus->TabIndex = 6;
			this->Tipus->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitats::Tipus_SelectedIndexChanged);
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
			this->ClientSize = System::Drawing::Size(824, 423);
			this->Controls->Add(this->TipusLabel);
			this->Controls->Add(this->Tipus);
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

		dataGridViewEntitats->DataSource = ent.ObteResultat();
		///falta comprovar si genera be les columnes
		

		TxConsultaTipus tip;
		try {
			tip.executar();
		}
		catch (System::Exception^ ex) {
			// codi per mostrar l’error en una finestra
			MessageBox::Show(ex->Message);
		}
		
		Tipus->DataSource = tip.ObteResultat();
		

		//si li puc posar un DataSource que sigui la Taula de entitats 
		//a lo millor no ens faria falta casi res de codi

		/*
		// Configura las columnas del DataGridView
		dataGridViewEntitats.AutoGenerateColumns = false;

		// Configura las columnas manualmente
		dataGridViewEntitats.Columns.Add("Nom", "Nom");
		dataGridViewEntitats.Columns.Add("Descripcio", "Descripcio");
		dataGridViewEntitats.Columns.Add("Tipus", "Tipus");

		// Asigna los noms de las propiedades a las columnas del DataGridView
		dataGridViewEntitats.Columns["Nom"].DataPropertyName = "Nom";
		dataGridViewEntitats.Columns["Descripcio"].DataPropertyName = "Descripcio";
		dataGridViewEntitats.Columns["Tipus"].DataPropertyName = "Tipus";
		*/
	}
	private: System::Void dataGridViewEntitats_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//quan cliqui en una row vull que carregui la pagina d'aquesta Entitat
		//Seria cridar la pantalla passarel·la entitat passant-li aquesta entitat (o la info)
	}

private: System::Void Tipus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	TxConsultaEntitatsTipus entip;
	//o es podria ocupar una altra capa
	if (this->Tipus->SelectedItem->ToString() != "") { 
		entip.SetTipus(this->Tipus->SelectedItem->ToString());
		try {
			entip.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		dataGridViewEntitats->DataSource = entip.ObteResultat();
	}
	else {
		TxConsultaEntitats en;
		try {
			en.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		dataGridViewEntitats->DataSource = en.ObteResultat();
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
