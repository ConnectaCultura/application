#pragma once
#include "TxAltaEsdeveniment.h"
#include "TxConsultaTipus.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAltaEsdeveniment
	/// </summary>
	public ref class FormAltaEsdeveniment : public System::Windows::Forms::Form
	{
	public:
		FormAltaEsdeveniment(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
			numericUpDown1->Visible = false;
			label5->Visible = false;
			numericUpDown2->Visible = false;
			label6->Visible = false;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormAltaEsdeveniment()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ Crea;
	private: System::Windows::Forms::ComboBox^ comboBox1;





	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::CheckBox^ checkBox1;





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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Crea = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(174, 255);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 22);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown2->Location = System::Drawing::Point(174, 289);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Descripcio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Data d\'inici:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Data d\'acabament:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Aforament:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Preu:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 185);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Modalitat:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(174, 65);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(192, 32);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			// 
			// Crea
			// 
			this->Crea->BackColor = System::Drawing::Color::OrangeRed;
			this->Crea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Crea->ForeColor = System::Drawing::Color::Transparent;
			this->Crea->Location = System::Drawing::Point(341, 321);
			this->Crea->Name = L"Crea";
			this->Crea->Size = System::Drawing::Size(105, 27);
			this->Crea->TabIndex = 16;
			this->Crea->Text = L"Crea";
			this->Crea->UseVisualStyleBackColor = false;
			this->Crea->Click += gcnew System::EventHandler(this, &FormAltaEsdeveniment::Crea_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(173, 182);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 17;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(174, 112);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(192, 22);
			this->dateTimePicker1->TabIndex = 20;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::dateTimePicker1_ValueChanged);
			this->dateTimePicker1->MinDate = DateTime::Now;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd-MM-yyyy HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(174, 149);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(192, 22);
			this->dateTimePicker2->TabIndex = 21;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::dateTimePicker2_ValueChanged);
			this->dateTimePicker1->MinDate = DateTime::Now;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(29, 215);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(194, 20);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Esdeveniment amb entrada";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::checkBox1_CheckedChanged);
			// 
			// FormAltaEsdeveniment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 360);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Crea);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAltaEsdeveniment";
			this->Text = L"FormAltaEsdeveniment";
			this->Load += gcnew System::EventHandler(this, &FormAltaEsdeveniment::FormAltaEsdeveniment_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void FormAltaEsdeveniment_Load(System::Object^ sender, System::EventArgs^ e) {

	TxConsultaTipus tip;
	try {
		tip.executar();
	}
	catch (System::Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	comboBox1->DataSource = tip.ObteResultat();
}
	private: System::Void Crea_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->Text == System::String::Empty || textBox2->Text == System::String::Empty) {
			MessageBox::Show("Falten camps per omplir.");
		}
		else {
			// Comprovo que la data fi >= data inici
			DateTime data_inici = this->dateTimePicker1->Value;
			DateTime data_fi = this->dateTimePicker2->Value;
			if (data_inici >= data_fi)
			{
				MessageBox::Show("La data d'acabament ha de ser més tard que la de inici");
				return;
			}

			System::String^ nom = this->textBox2->Text;
			if (nom == "") {
				MessageBox::Show("El nom no pot ser buit");
				return;
			}
			System::String^ descripcio = this->richTextBox1->Text;
			int^ aforament;
			System::String^ preu;
			if (!checkBox1->Checked) {
				aforament = nullptr;
				preu = nullptr;
			}
			else {
				aforament = Convert::ToInt32(this->numericUpDown1->Value);
				System::String^ valorStr = this->numericUpDown2->Value.ToString();
				//MessageBox::Show(valorStr);
				preu = valorStr->Replace(',', '.');
			}
			System::String^ tipus = this->comboBox1->Text;
			TxAltaEsdeveniment tx_ae(nom, descripcio, data_inici, data_fi, aforament, preu, tipus);
			try {
				tx_ae.executar();
				this->Close();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show("Aquest esdeveniment ja existeix, canvia el nom");
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
		// Comprovo que la data fi >= data inici
	{
		DateTime startDateTime = this->dateTimePicker1->Value;
		DateTime endDateTime = this->dateTimePicker2->Value;

		// Validation logic
		if (startDateTime >= endDateTime)
		{
			//MessageBox::Show("La data d'acabament ha de ser més tard que la de inici");
			return;
		}
	}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
// Comprovo que la data fi >= data inici
{
	DateTime startDateTime = this->dateTimePicker1->Value;
	DateTime endDateTime = this->dateTimePicker2->Value;

	// Validation logic
	if (startDateTime >= endDateTime)
	{
		//MessageBox::Show("La data d'acabament ha de ser més tard que la de inici");
		return;
	}

}

private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		label5->Visible = true;
		numericUpDown1->Visible = true;
		label6->Visible = true;
		numericUpDown2->Visible = true;

	}
	else {
		numericUpDown1->Visible = false;
		label5->Visible = false;
		numericUpDown2->Visible = false;
		label6->Visible = false;
	}
}
};
}
