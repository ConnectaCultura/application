#pragma once
#include <stdexcept>
#include "TxAltaEntitat.h"
#include "TxConsultaTipus.h"
#include "Sessio.h"

//COSES A MILLORAR: Ara mateix tenim un despelgable amb els tipus que no s'omple a partir de la base de dades si no a partir del codi

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AltaEntitatForm
	/// </summary>
	public ref class AltaEntitatForm : public System::Windows::Forms::Form
	{
	public:
		AltaEntitatForm(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AltaEntitatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Descripcio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Modalitat:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correu electronic:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contrasenya:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(231, 47);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(231, 90);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(231, 188);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(197, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(231, 239);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(197, 22);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(284, 282);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 28);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Donar d\'alta";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AltaEntitatForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(231, 137);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(197, 24);
			this->comboBox1->TabIndex = 12;
			// 
			// AltaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 348);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AltaEntitatForm";
			this->Text = L"AltaEntitatForm";
			this->Load += gcnew System::EventHandler(this, &AltaEntitatForm::AltaEntitatForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ nom = this->textBox1->Text;
		System::String^ descripcio = this->textBox2->Text;
		System::String^ tipus = this->comboBox1->Text;
		System::String^ correuElectronic = this->textBox4->Text;
		System::String^ contrasenya = this->textBox5->Text;
		Sessio^ s = Sessio::getInstance();
		System::String^ ajuntament = s->obteUsuari()->obteCorreuElectronic();
		TxAltaEntitat txAE(nom, descripcio, tipus, correuElectronic, contrasenya, ajuntament);
		if (textBox1->Text == System::String::Empty || textBox2->Text == System::String::Empty || textBox4->Text == System::String::Empty || textBox5->Text == System::String::Empty) {
			MessageBox::Show("Falten camps per omplir.");
		}
		else {
			try {
				txAE.executar();
				this->Close();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
			}
			catch (std::runtime_error e) {
				MessageBox::Show(gcnew System::String(e.what()));
			}
		}
	
	}
private: System::Void AltaEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {
	TxConsultaTipus tip;
	try {
		tip.executar();
	}
	catch (System::Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	comboBox1->DataSource = tip.ObteResultat();
}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
