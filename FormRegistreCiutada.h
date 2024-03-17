#pragma once

#include "TxRegistreCiutada.h"
namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de FormRegistreCiutada
	/// </summary>
	public ref class FormRegistreCiutada : public System::Windows::Forms::Form
	{
	public:
		FormRegistreCiutada(void)
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
		~FormRegistreCiutada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ scrollAjuntaments;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->scrollAjuntaments = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ajuntament";
			this->label1->Click += gcnew System::EventHandler(this, &FormRegistreCiutada::label1_Click);
			// 
			// scrollAjuntaments
			// 
			this->scrollAjuntaments->BackColor = System::Drawing::SystemColors::Window;
			this->scrollAjuntaments->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scrollAjuntaments->FormattingEnabled = true;
			this->scrollAjuntaments->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Comarruga", L"Vilanova i la gentuza",
					L"Sants", L"Sitges", L"Delegació d\'estudiants", L"Village Vilanova", L"U.E. Legopavas"
			});
			this->scrollAjuntaments->Location = System::Drawing::Point(15, 37);
			this->scrollAjuntaments->Name = L"scrollAjuntaments";
			this->scrollAjuntaments->Size = System::Drawing::Size(291, 26);
			this->scrollAjuntaments->TabIndex = 1;
			this->scrollAjuntaments->SelectedIndexChanged += gcnew System::EventHandler(this, &FormRegistreCiutada::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom d\'usuari";
			this->label2->Click += gcnew System::EventHandler(this, &FormRegistreCiutada::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(15, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 26);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Correu electrònic";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(15, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 26);
			this->textBox2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Contrasenya";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(15, 229);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(291, 26);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(15, 293);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(291, 26);
			this->textBox4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Repeteix la contrasenya";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 32);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Torna";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormRegistreCiutada::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(79, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 32);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Registra\'t";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormRegistreCiutada::button2_Click);
			// 
			// FormRegistreCiutada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 588);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->scrollAjuntaments);
			this->Controls->Add(this->label1);
			this->Name = L"FormRegistreCiutada";
			this->Text = L"FormRegistreCiutada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ ajuntament = this->scrollAjuntaments->SelectedItem->ToString();
	System::String^ nom = this->textBox1->Text;
	System::String^ correuElectronic = this->textBox2->Text;
	System::String^ contrasenya = this->textBox3->Text;
	System::String^ contrasenya2 = this->textBox4->Text;
	if (contrasenya != contrasenya2) {

	}
	else {
		TxRegistreCiutada txRC(ajuntament, nom, correuElectronic, contrasenya);
		try {
			txRC.executar();
			this->Close();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
};
}
