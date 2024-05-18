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
			//TODO: agregar c�digo de constructor aqu�
			//
			numericUpDown1->Visible = false;
			label5->Visible = false;
			numericUpDown2->Visible = false;
			label6->Visible = false;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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




	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::CheckBox^ checkBox1;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 35);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(215, 26);
			this->textBox2->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(196, 319);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(112, 26);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown2->Location = System::Drawing::Point(196, 361);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(135, 26);
			this->numericUpDown2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Descripci�";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Data d\'inici";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Data d\'acabament";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Aforament";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 363);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Preu";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Modalitat";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(196, 81);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(215, 39);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			// 
			// Crea
			// 
			this->Crea->Location = System::Drawing::Point(391, 433);
			this->Crea->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Crea->Name = L"Crea";
			this->Crea->Size = System::Drawing::Size(118, 32);
			this->Crea->TabIndex = 16;
			this->Crea->Text = L"Crea";
			this->Crea->UseVisualStyleBackColor = true;
			this->Crea->Click += gcnew System::EventHandler(this, &FormAltaEsdeveniment::Crea_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(195, 228);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 28);
			this->comboBox1->TabIndex = 17;
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(33, 431);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(120, 36);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &FormAltaEsdeveniment::buttonTorna_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(196, 140);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(215, 26);
			this->dateTimePicker1->TabIndex = 20;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd-MM-yyyy HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(196, 186);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(215, 26);
			this->dateTimePicker2->TabIndex = 21;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::dateTimePicker2_ValueChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(33, 269);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(230, 24);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Esdeveniment amb entrada";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &FormAltaEsdeveniment::checkBox1_CheckedChanged);
			// 
			// FormAltaEsdeveniment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 503);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->buttonTorna);
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
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
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
		// Comprovo que la data fi >= data inici
		DateTime data_inici = this->dateTimePicker1->Value;
		DateTime data_fi = this->dateTimePicker2->Value;
		if (data_inici >= data_fi)
		{
			MessageBox::Show("La data d'acabament ha de ser m�s tard que la de inici");
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
			MessageBox::Show(valorStr);
			preu = valorStr->Replace(',', '.');
		}
		System::String^ tipus = this->comboBox1->Text;
		TxAltaEsdeveniment tx_ae(nom, descripcio, data_inici, data_fi, aforament, preu, tipus);
		try{
			tx_ae.executar();
			this->Close();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("Aquest esdeveniment ja existeix, canvia el nom");
			MessageBox::Show(ex->Message);
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
		MessageBox::Show("La data d'acabament ha de ser m�s tard que la de inici");
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
		MessageBox::Show("La data d'acabament ha de ser m�s tard que la de inici");
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
