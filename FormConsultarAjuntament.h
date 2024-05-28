#pragma once
#include "TxConsultaAjuntament.h"
#include "TxConsultaEntitats.h"
#include "ConsultaEntitatForm.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormConsultarAjuntament
	/// </summary>
	public ref class FormConsultarAjuntament : public System::Windows::Forms::Form
	{
	public:
		FormConsultarAjuntament(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: Add the constructor code here
			//
		}
		FormConsultarAjuntament(System::String^ ca)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			_CorreuAjuntament = ca;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormConsultarAjuntament()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ NumeroPostalLabel;
	private: System::Windows::Forms::Label^ TelefonLabel;
	private: System::String^ _CorreuAjuntament;




	private: System::Windows::Forms::Label^ NomLabel;
	private: System::Windows::Forms::Label^ TelefonLabelEdit;

	private: System::Windows::Forms::Label^ PostalLabelEdit;
	private: System::Windows::Forms::Label^ CorreuLabelEdit;

	private: System::Windows::Forms::DataGridView^ dataGridViewEntitatsAjuntament;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correu_Electronic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ajutament;

	private: System::Windows::Forms::Button^ buttonTorna;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->NumeroPostalLabel = (gcnew System::Windows::Forms::Label());
			this->TelefonLabel = (gcnew System::Windows::Forms::Label());
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->TelefonLabelEdit = (gcnew System::Windows::Forms::Label());
			this->PostalLabelEdit = (gcnew System::Windows::Forms::Label());
			this->CorreuLabelEdit = (gcnew System::Windows::Forms::Label());
			this->dataGridViewEntitatsAjuntament = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correu_Electronic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ajutament = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitatsAjuntament))->BeginInit();

			this->buttonTorna = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(39, 81);
			this->CorreuLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(109, 16);
			this->CorreuLabel->TabIndex = 4;
			this->CorreuLabel->Text = L"CorreuElectronic:";
			// 
			// NumeroPostalLabel
			// 
			this->NumeroPostalLabel->AutoSize = true;
			this->NumeroPostalLabel->Location = System::Drawing::Point(39, 123);
			this->NumeroPostalLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NumeroPostalLabel->Name = L"NumeroPostalLabel";
			this->NumeroPostalLabel->Size = System::Drawing::Size(96, 16);
			this->NumeroPostalLabel->TabIndex = 5;
			this->NumeroPostalLabel->Text = L"NumeroPostal:";
			// 
			// TelefonLabel
			// 
			this->TelefonLabel->AutoSize = true;
			this->TelefonLabel->Location = System::Drawing::Point(39, 165);
			this->TelefonLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TelefonLabel->Name = L"TelefonLabel";
			this->TelefonLabel->Size = System::Drawing::Size(109, 16);
			this->TelefonLabel->TabIndex = 6;
			this->TelefonLabel->Text = L"TelefonContacte:";
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomLabel->Location = System::Drawing::Point(139, 23);
			this->NomLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(71, 29);
			this->NomLabel->TabIndex = 9;
			this->NomLabel->Text = L"Nom:";
			// 
			// TelefonLabelEdit
			// 
			this->TelefonLabelEdit->AutoSize = true;
			this->TelefonLabelEdit->Location = System::Drawing::Point(179, 165);
			this->TelefonLabelEdit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TelefonLabelEdit->Name = L"TelefonLabelEdit";
			this->TelefonLabelEdit->Size = System::Drawing::Size(0, 16);
			this->TelefonLabelEdit->TabIndex = 12;
			// 
			// PostalLabelEdit
			// 
			this->PostalLabelEdit->AutoSize = true;
			this->PostalLabelEdit->Location = System::Drawing::Point(179, 123);
			this->PostalLabelEdit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PostalLabelEdit->Name = L"PostalLabelEdit";
			this->PostalLabelEdit->Size = System::Drawing::Size(0, 16);
			this->PostalLabelEdit->TabIndex = 11;
			// 
			// CorreuLabelEdit
			// 
			this->CorreuLabelEdit->AutoSize = true;
			this->CorreuLabelEdit->Location = System::Drawing::Point(179, 81);
			this->CorreuLabelEdit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CorreuLabelEdit->Name = L"CorreuLabelEdit";
			this->CorreuLabelEdit->Size = System::Drawing::Size(0, 16);
			this->CorreuLabelEdit->TabIndex = 10;
			// 

			// dataGridViewEntitatsAjuntament
			// 
			this->dataGridViewEntitatsAjuntament->AllowUserToAddRows = false;
			this->dataGridViewEntitatsAjuntament->AllowUserToDeleteRows = false;
			this->dataGridViewEntitatsAjuntament->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewEntitatsAjuntament->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewEntitatsAjuntament->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEntitatsAjuntament->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nom,
					this->Descripcio, this->Tipus, this->Correu_Electronic, this->Ajutament
			});
			this->dataGridViewEntitatsAjuntament->Location = System::Drawing::Point(32, 174);
			this->dataGridViewEntitatsAjuntament->Name = L"dataGridViewEntitatsAjuntament";
			this->dataGridViewEntitatsAjuntament->ReadOnly = true;
			this->dataGridViewEntitatsAjuntament->Size = System::Drawing::Size(637, 163);
			this->dataGridViewEntitatsAjuntament->TabIndex = 13;
			this->dataGridViewEntitatsAjuntament->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormConsultarAjuntament::dataGridViewEntitatsAjuntament_CellContentClick);
			// 
			// Nom
			// 
			this->Nom->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nom->HeaderText = L"Nom";
			this->Nom->Name = L"Nom";
			this->Nom->ReadOnly = true;
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
			this->Tipus->HeaderText = L"Modalitat";
			this->Tipus->Name = L"Tipus";
			this->Tipus->ReadOnly = true;
			// 
			// Correu_Electronic
			// 
			this->Correu_Electronic->HeaderText = L"Correu_Electronic";
			this->Correu_Electronic->Name = L"Correu_Electronic";
			this->Correu_Electronic->ReadOnly = true;
			this->Correu_Electronic->Visible = false;
			// 
			// Ajutament
			// 
			this->Ajutament->HeaderText = L"Ajuntament";
			this->Ajutament->Name = L"Ajutament";
			this->Ajutament->ReadOnly = true;
			this->Ajutament->Width = 150;
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 281);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &FormConsultarAjuntament::buttonTorna_Click);

			// 
			// FormConsultarAjuntament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->ClientSize = System::Drawing::Size(681, 349);
			this->Controls->Add(this->dataGridViewEntitatsAjuntament);

			this->Controls->Add(this->TelefonLabelEdit);
			this->Controls->Add(this->PostalLabelEdit);
			this->Controls->Add(this->CorreuLabelEdit);
			this->Controls->Add(this->NomLabel);
			this->Controls->Add(this->TelefonLabel);
			this->Controls->Add(this->NumeroPostalLabel);
			this->Controls->Add(this->CorreuLabel);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FormConsultarAjuntament";
			this->Text = L"FormConsultarAjuntament";
			this->Load += gcnew System::EventHandler(this, &FormConsultarAjuntament::FormConsultarAjuntament_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitatsAjuntament))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormConsultarAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {
		CorreuLabelEdit->Text = _CorreuAjuntament;
		System::String^ correu = this->_CorreuAjuntament;
		TxConsultaAjuntament txCA(correu);
		try {
			txCA.executar();
			List<System::String^>^ sol = txCA.ObteResultat();
			NomLabel->Text = sol[0];
			PostalLabelEdit->Text = sol[1];
			TelefonLabelEdit->Text = sol[2];
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("existent");
		}
		catch (std::runtime_error e) {
			MessageBox::Show(gcnew System::String(e.what()));
		}
		TxConsultaEntitats ca("", "Totes", this->_CorreuAjuntament);
		try {
			ca.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<List<System::String^>^>^ ve = ca.ObteResultat();
		for each (List<System::String^> ^ e in ve)
		{
			dataGridViewEntitatsAjuntament->Rows->Add(e[0], e[1], e[2], e[3], e[4]);
		}


	}


	private: System::Void dataGridViewEntitatsAjuntament_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			String^ cellText = dataGridViewEntitatsAjuntament->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			application::ConsultaEntitatForm^ Consulta_Entitat = gcnew application::ConsultaEntitatForm(cellText);
			Consulta_Entitat->ShowDialog();

		}
	} 
	private: System::Void buttonTorna_Click(System::Object ^ sender, System::EventArgs ^ e) {
		this->Close();

	}
	
};
}
