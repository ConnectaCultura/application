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
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
			_correuEntitat = System::String::Empty;
		}
		ConsultarEsdevenimentsForm(System::String^ correu)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			_correuEntitat = correu;
		}

		void actualitzarForm(void) {
			EsdevDataGrid-> Rows->Clear();
			System::String^ nomEsd = textBox1->Text;
			TxConsultaEsdeveniments txEsdev(_correuEntitat, nomEsd, checkBox1->Checked, checkBox2->Checked, checkBox3->Checked);
			try {
				txEsdev.executar();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
			}
			List<List<System::String^>^>^ ve = txEsdev.obteResultat();
			for each (List<System::String^> ^ e in ve)
			{
				if (e[3] == nullptr) EsdevDataGrid->Rows->Add(e[0], e[1], e[2], "Sense entrada");
				else if (e[3] == "0") EsdevDataGrid->Rows->Add(e[0], e[1], e[2], "Gratuit");
				else EsdevDataGrid->Rows->Add(e[0], e[1], e[2], e[3]);
			}
			ajustarAlcadaDataGrid();
		}
		void ajustarAlcadaDataGrid() {
			int minHeight = 20;  // Altura mínima 
			int maxHeight = 200;  // Altura máxima
			int rowHeight = 30;
			int rowCount = EsdevDataGrid->RowCount;
			int totalHeight = (rowHeight) * (rowCount+1);

			// Ajustar alçada dins dels limits desitjats
			if (totalHeight < minHeight) 
				EsdevDataGrid->Height = minHeight;
			else if (totalHeight > maxHeight)
				EsdevDataGrid->Height = maxHeight;
			else
				EsdevDataGrid->Height = totalHeight;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;









	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultarEsdevenimentsForm::typeid));
			this->EsdevDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Inici = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Esdeveniments = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsdevDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// EsdevDataGrid
			// 
			this->EsdevDataGrid->AllowUserToAddRows = false;
			this->EsdevDataGrid->AllowUserToDeleteRows = false;
			this->EsdevDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->EsdevDataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EsdevDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EsdevDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nom, this->Inici,
					this->Fi, this->Preu
			});
			this->EsdevDataGrid->GridColor = System::Drawing::SystemColors::Control;
			this->EsdevDataGrid->Location = System::Drawing::Point(51, 204);
			this->EsdevDataGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EsdevDataGrid->Name = L"EsdevDataGrid";
			this->EsdevDataGrid->ReadOnly = true;
			this->EsdevDataGrid->RowHeadersVisible = false;
			this->EsdevDataGrid->RowHeadersWidth = 62;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Fuchsia;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Purple;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			this->EsdevDataGrid->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->EsdevDataGrid->RowTemplate->Height = 28;
			this->EsdevDataGrid->Size = System::Drawing::Size(890, 682);
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
			this->Nom->Width = 78;
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
			this->Esdeveniments->Location = System::Drawing::Point(19, 25);
			this->Esdeveniments->Name = L"Esdeveniments";
			this->Esdeveniments->Size = System::Drawing::Size(209, 32);
			this->Esdeveniments->TabIndex = 1;
			this->Esdeveniments->Text = L"Esdeveniments";
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(51, 902);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(120, 36);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::buttonTorna_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(531, 78);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(360, 24);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Mostra tots tambe els esdeveniments acabats";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(531, 108);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(92, 24);
			this->checkBox2->TabIndex = 20;
			this->checkBox2->Text = L"Gratuits";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(531, 139);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(140, 24);
			this->checkBox3->TabIndex = 21;
			this->checkBox3->Text = L"Sense entrada";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::checkBox3_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(356, 26);
			this->textBox1->TabIndex = 22;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(446, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::pictureBox1_Click);
			// 
			// ConsultarEsdevenimentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 949);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->Esdeveniments);
			this->Controls->Add(this->EsdevDataGrid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ConsultarEsdevenimentsForm";
			this->Text = L"Esdeveniments";
			this->Load += gcnew System::EventHandler(this, &ConsultarEsdevenimentsForm::ConsultarEsdevenimentsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsdevDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
private: System::Void ConsultarEsdevenimentsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	actualitzarForm();
}

private: System::Void EsdevDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
		String^ nom = EsdevDataGrid->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		String^ inici = EsdevDataGrid->Rows[e->RowIndex]->Cells[1]->Value->ToString();
		String^ fi = EsdevDataGrid->Rows[e->RowIndex]->Cells[2]->Value->ToString();
		application::ConsultaEsdevenimentForm^ Consulta_Esdeveniment = gcnew application::ConsultaEsdevenimentForm(nom, inici, fi);
		Consulta_Esdeveniment->ShowDialog();
	}
	actualitzarForm();
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	actualitzarForm();
}


private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox2->Checked) checkBox3->Checked=false;
	actualitzarForm();
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox3->Checked) checkBox2->Checked = false;
	actualitzarForm();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	actualitzarForm();
}
};
}