#pragma once
#include <stdexcept>
#include "TxAltaAjuntament.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AltaAjuntamentForm
	/// </summary>
	public ref class AltaAjuntamentForm : public System::Windows::Forms::Form
	{
	public:
		AltaAjuntamentForm(void)
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
		~AltaAjuntamentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	protected:


	private: System::Windows::Forms::Label^ labelContrasenya;

	private: System::Windows::Forms::Label^ labelCorreu;
	private: System::Windows::Forms::TextBox^ textBoxCorreu;
	private: System::Windows::Forms::TextBox^ textBoxContra;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelCodiPostal;
	private: System::Windows::Forms::Label^ labelTelefon;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPostal;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownTelefon;


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
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->labelContrasenya = (gcnew System::Windows::Forms::Label());
			this->labelCorreu = (gcnew System::Windows::Forms::Label());
			this->textBoxCorreu = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContra = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelCodiPostal = (gcnew System::Windows::Forms::Label());
			this->labelTelefon = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPostal = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTelefon = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPostal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTelefon))->BeginInit();
			this->SuspendLayout();
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->Location = System::Drawing::Point(36, 34);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(40, 17);
			this->labelNom->TabIndex = 1;
			this->labelNom->Text = L"Nom";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(213, 34);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(183, 22);
			this->textBoxNom->TabIndex = 6;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &AltaAjuntamentForm::textBoxNom_TextChanged);
			// 
			// labelContrasenya
			// 
			this->labelContrasenya->AutoSize = true;
			this->labelContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelContrasenya->Location = System::Drawing::Point(36, 142);
			this->labelContrasenya->Name = L"labelContrasenya";
			this->labelContrasenya->Size = System::Drawing::Size(99, 17);
			this->labelContrasenya->TabIndex = 7;
			this->labelContrasenya->Text = L"Contrasenya";
			// 
			// labelCorreu
			// 
			this->labelCorreu->AutoSize = true;
			this->labelCorreu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCorreu->Location = System::Drawing::Point(36, 92);
			this->labelCorreu->Name = L"labelCorreu";
			this->labelCorreu->Size = System::Drawing::Size(57, 17);
			this->labelCorreu->TabIndex = 8;
			this->labelCorreu->Text = L"Correu";
			// 
			// textBoxCorreu
			// 
			this->textBoxCorreu->Location = System::Drawing::Point(213, 87);
			this->textBoxCorreu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxCorreu->Name = L"textBoxCorreu";
			this->textBoxCorreu->Size = System::Drawing::Size(183, 22);
			this->textBoxCorreu->TabIndex = 9;
			// 
			// textBoxContra
			// 
			this->textBoxContra->Location = System::Drawing::Point(213, 142);
			this->textBoxContra->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxContra->Name = L"textBoxContra";
			this->textBoxContra->Size = System::Drawing::Size(183, 22);
			this->textBoxContra->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(303, 295);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 29);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Donar d\'alta";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AltaAjuntamentForm::button1_Click);
			// 
			// labelCodiPostal
			// 
			this->labelCodiPostal->AutoSize = true;
			this->labelCodiPostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCodiPostal->Location = System::Drawing::Point(36, 197);
			this->labelCodiPostal->Name = L"labelCodiPostal";
			this->labelCodiPostal->Size = System::Drawing::Size(90, 17);
			this->labelCodiPostal->TabIndex = 12;
			this->labelCodiPostal->Text = L"Codi Postal";
			// 
			// labelTelefon
			// 
			this->labelTelefon->AutoSize = true;
			this->labelTelefon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTelefon->Location = System::Drawing::Point(36, 254);
			this->labelTelefon->Name = L"labelTelefon";
			this->labelTelefon->Size = System::Drawing::Size(155, 17);
			this->labelTelefon->TabIndex = 13;
			this->labelTelefon->Text = L"Telefon de Contacte";
			// 
			// numericUpDownPostal
			// 
			this->numericUpDownPostal->Location = System::Drawing::Point(213, 191);
			this->numericUpDownPostal->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numericUpDownPostal->Name = L"numericUpDownPostal";
			this->numericUpDownPostal->Size = System::Drawing::Size(183, 22);
			this->numericUpDownPostal->TabIndex = 14;
			// 
			// numericUpDownTelefon
			// 
			this->numericUpDownTelefon->Location = System::Drawing::Point(213, 249);
			this->numericUpDownTelefon->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->numericUpDownTelefon->Name = L"numericUpDownTelefon";
			this->numericUpDownTelefon->Size = System::Drawing::Size(183, 22);
			this->numericUpDownTelefon->TabIndex = 15;
			// 
			// AltaAjuntamentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 355);
			this->Controls->Add(this->numericUpDownTelefon);
			this->Controls->Add(this->numericUpDownPostal);
			this->Controls->Add(this->labelTelefon);
			this->Controls->Add(this->labelCodiPostal);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxContra);
			this->Controls->Add(this->textBoxCorreu);
			this->Controls->Add(this->labelCorreu);
			this->Controls->Add(this->labelContrasenya);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->labelNom);
			this->Name = L"AltaAjuntamentForm";
			this->Text = L"AltaAjuntamentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPostal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTelefon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ nom = this->textBoxNom->Text;
	System::String^ correuElectronic = this->textBoxCorreu->Text;
	System::String^ contrasenya = this->textBoxContra->Text;
	int codiPostal  = System::Convert::ToInt32(this->numericUpDownPostal->Value);
	int telefon = System::Convert::ToInt32(this->numericUpDownTelefon->Value);
	
	TxAltaAjuntament txAA(nom, correuElectronic, contrasenya, codiPostal, telefon); 
	try {
		txAA.executar();
		this->Close();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show("Error en la crecio d'usuai");
	}
	catch (std::runtime_error e) {
		MessageBox::Show(gcnew System::String(e.what()));
	}

}

private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
