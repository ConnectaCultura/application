#pragma once
#include "TxBaixaEntitat.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de FormBaixaEntitat
	/// </summary>
	public ref class FormBaixaEntitat : public System::Windows::Forms::Form
	{
	public:
		FormBaixaEntitat(void)
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
		~FormBaixaEntitat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Estas segur que vols eliminar el teu compte\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contrasenya";
			this->label2->Click += gcnew System::EventHandler(this, &FormBaixaEntitat::label2_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormBaixaEntitat::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 27);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Acceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormBaixaEntitat::button1_Click);
			// 
			// FormBaixaEntitat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 207);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormBaixaEntitat";
			this->Text = L"FormBaixaEntitat";
			this->Load += gcnew System::EventHandler(this, &FormBaixaEntitat::FormBaixaEntitat_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormBaixaEntitat_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ contrasenya = this->textBox1->Text;
		TxBaixaEntitat txBE(contrasenya);
		try {
			txBE.executar();
			this->Close();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
