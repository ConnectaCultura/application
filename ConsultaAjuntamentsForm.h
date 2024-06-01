#pragma once

#include "TxConsultaAjuntaments.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaAjuntamentsForm
	/// </summary>
	public ref class ConsultaAjuntamentsForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaAjuntamentsForm(void)
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
		~ConsultaAjuntamentsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AjuntamentsLabel;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ buttonTorna;












	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultaAjuntamentsForm::typeid));
			this->AjuntamentsLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// AjuntamentsLabel
			// 
			this->AjuntamentsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AjuntamentsLabel->Location = System::Drawing::Point(36, 13);
			this->AjuntamentsLabel->Name = L"AjuntamentsLabel";
			this->AjuntamentsLabel->Size = System::Drawing::Size(152, 29);
			this->AjuntamentsLabel->TabIndex = 0;
			this->AjuntamentsLabel->Text = L"Ajuntaments:";
			this->AjuntamentsLabel->Click += gcnew System::EventHandler(this, &ConsultaAjuntamentsForm::AjuntamentsLabel_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(246, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(398, 23);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(17, 17);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->Location = System::Drawing::Point(41, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(406, 220);
			this->dataGridView1->TabIndex = 25;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaAjuntamentsForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nom";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 120;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Codi Postal";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Telèfon";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 120;
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(11, 308);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(80, 23);
			this->buttonTorna->TabIndex = 26;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaAjuntamentsForm::buttonTorna_Click);
			// 
			// ConsultaAjuntamentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 350);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->AjuntamentsLabel);
			this->Name = L"ConsultaAjuntamentsForm";
			this->Text = L"ConsultaAjuntamentsForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaAjuntamentsForm::ConsultaAjuntamentsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaAjuntamentsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaAjuntaments txCA("Tots");
		try {
			txCA.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}

		List<List<System::String^>^>^ ve = txCA.ObteResultat();
		for each (List<System::String^> ^ e in ve)
		{
			dataGridView1->Rows->Add(e[0], e[1], e[2]);
		}

	}

	private: System::Void AjuntamentsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
