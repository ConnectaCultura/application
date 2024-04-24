#pragma once
#include "TxConsultaEntitat.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaEntitatForm
	/// </summary>
	public ref class ConsultaEntitatForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaEntitatForm(void)
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
		~ConsultaEntitatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NomText;
	protected:

	private: System::Windows::Forms::Label^ DescripcioText;
	private: System::Windows::Forms::TextBox^ NomBox;

	private: System::Windows::Forms::TextBox^ DescripcioBox;
	private: System::Windows::Forms::Label^ CorreuText;
	private: System::Windows::Forms::Label^ TipusText;
	private: System::Windows::Forms::TextBox^ TipusBox;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->NomBox = (gcnew System::Windows::Forms::TextBox());
			this->DescripcioBox = (gcnew System::Windows::Forms::TextBox());
			this->CorreuText = (gcnew System::Windows::Forms::Label());
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->TipusBox = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(22, 86);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(39, 16);
			this->NomText->TabIndex = 0;
			this->NomText->Text = L"Nom:";
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;
			this->DescripcioText->Location = System::Drawing::Point(22, 155);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(75, 16);
			this->DescripcioText->TabIndex = 1;
			this->DescripcioText->Text = L"Descripcio:";
			// 
			// NomBox
			// 
			this->NomBox->Location = System::Drawing::Point(103, 80);
			this->NomBox->Name = L"NomBox";
			this->NomBox->Size = System::Drawing::Size(147, 22);
			this->NomBox->TabIndex = 2;
			// 
			// DescripcioBox
			// 
			this->DescripcioBox->Location = System::Drawing::Point(103, 155);
			this->DescripcioBox->Name = L"DescripcioBox";
			this->DescripcioBox->Size = System::Drawing::Size(228, 22);
			this->DescripcioBox->TabIndex = 3;
			// 
			// CorreuText
			// 
			this->CorreuText->AutoSize = true;
			this->CorreuText->Location = System::Drawing::Point(22, 27);
			this->CorreuText->Name = L"CorreuText";
			this->CorreuText->Size = System::Drawing::Size(46, 16);
			this->CorreuText->TabIndex = 4;
			this->CorreuText->Text = L"Escull:";
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(22, 121);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(44, 16);
			this->TipusText->TabIndex = 5;
			this->TipusText->Text = L"Tipus:";
			// 
			// TipusBox
			// 
			this->TipusBox->Location = System::Drawing::Point(103, 115);
			this->TipusBox->Name = L"TipusBox";
			this->TipusBox->Size = System::Drawing::Size(147, 22);
			this->TipusBox->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"hidi@gmail.com", L"ocine@gmail.com" });
			this->comboBox1->Location = System::Drawing::Point(103, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 24);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitatForm::comboBox1_SelectedIndexChanged);
			// 
			// ConsultaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(366, 307);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->TipusBox);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->CorreuText);
			this->Controls->Add(this->DescripcioBox);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Name = L"ConsultaEntitatForm";
			this->Text = L"ConsultaEntitatForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitatForm::ConsultaEntitatForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ correu = this->comboBox1->Text;
	TxConsultaEntitat txCE(correu);
	try {
		array<System::String^>^ sol = txCE.executar();
		NomBox->Text = sol[0];
		TipusBox->Text = sol[1];
		DescripcioBox->Text = sol[2];
	}
	catch (MySqlException^ ex) {
		MessageBox::Show("existent");
	}
	catch (std::runtime_error e) {
		MessageBox::Show(gcnew System::String(e.what()));
	}
	
}
};
}
