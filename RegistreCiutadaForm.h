#pragma once

#include "TxRegistreCiutada.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistreCiutadaForm
	/// </summary>
	public ref class RegistreCiutadaForm : public System::Windows::Forms::Form
	{
	public:
		RegistreCiutadaForm(void)
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
		~RegistreCiutadaForm()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ registre;
	private: System::Windows::Forms::Button^ buttonTorna;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->registre = (gcnew System::Windows::Forms::Button());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Correu electronic";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contrasenya";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 70);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 102);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 133);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(164, 22);
			this->textBox3->TabIndex = 5;
			// 
			// registre
			// 
			this->registre->BackColor = System::Drawing::Color::OrangeRed;
			this->registre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registre->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->registre->Location = System::Drawing::Point(281, 181);
			this->registre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registre->Name = L"registre";
			this->registre->Size = System::Drawing::Size(119, 30);
			this->registre->TabIndex = 6;
			this->registre->Text = L"registrar-se";
			this->registre->UseVisualStyleBackColor = false;
			this->registre->Click += gcnew System::EventHandler(this, &RegistreCiutadaForm::registre_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 182);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &RegistreCiutadaForm::buttonTorna_Click);
			// 
			// RegistreCiutadaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 222);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->registre);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegistreCiutadaForm";
			this->Text = L"RegistreCiutadaForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registre_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ nom = this->textBox1->Text;
		System::String^ correuElectronic = this->textBox2->Text;
		System::String^ contrasenya = this->textBox3->Text;
		TxRegistreCiutada txRC(nom, correuElectronic, contrasenya);
		try {
			txRC.executar();
			this->Close();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
			//MessageBox::Show("El correu electrònic ja existeix");
		}

	
	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
