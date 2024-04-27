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
		ConsultaEntitatForm(System::String^ ce)
		{
			
			InitializeComponent();
			this->_CorreuEntitat = ce;

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

	private: System::Windows::Forms::Label^ TipusText;
	private: System::Windows::Forms::TextBox^ TipusBox;


	private: System::String^ _CorreuEntitat;
	private: System::Windows::Forms::TextBox^ CorreuBox;
	private: System::Windows::Forms::Label^ CorreuLabel;




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
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->TipusBox = (gcnew System::Windows::Forms::TextBox());
			this->CorreuBox = (gcnew System::Windows::Forms::TextBox());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(23, 45);
			this->NomText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(32, 13);
			this->NomText->TabIndex = 0;
			this->NomText->Text = L"Nom:";
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;
			this->DescripcioText->Location = System::Drawing::Point(23, 139);
			this->DescripcioText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(60, 13);
			this->DescripcioText->TabIndex = 1;
			this->DescripcioText->Text = L"Descripcio:";
			// 
			// NomBox
			// 
			this->NomBox->Location = System::Drawing::Point(84, 40);
			this->NomBox->Margin = System::Windows::Forms::Padding(2);
			this->NomBox->Name = L"NomBox";
			this->NomBox->ReadOnly = true;
			this->NomBox->Size = System::Drawing::Size(111, 20);
			this->NomBox->TabIndex = 2;
			// 
			// DescripcioBox
			// 
			this->DescripcioBox->Location = System::Drawing::Point(84, 136);
			this->DescripcioBox->Margin = System::Windows::Forms::Padding(10);
			this->DescripcioBox->Name = L"DescripcioBox";
			this->DescripcioBox->ReadOnly = true;
			this->DescripcioBox->Size = System::Drawing::Size(172, 20);
			this->DescripcioBox->TabIndex = 3;
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(23, 107);
			this->TipusText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(36, 13);
			this->TipusText->TabIndex = 5;
			this->TipusText->Text = L"Tipus:";
			// 
			// TipusBox
			// 
			this->TipusBox->Location = System::Drawing::Point(84, 104);
			this->TipusBox->Margin = System::Windows::Forms::Padding(2);
			this->TipusBox->Name = L"TipusBox";
			this->TipusBox->ReadOnly = true;
			this->TipusBox->Size = System::Drawing::Size(111, 20);
			this->TipusBox->TabIndex = 6;
			// 
			// CorreuBox
			// 
			this->CorreuBox->Location = System::Drawing::Point(84, 72);
			this->CorreuBox->Margin = System::Windows::Forms::Padding(10);
			this->CorreuBox->Name = L"CorreuBox";
			this->CorreuBox->ReadOnly = true;
			this->CorreuBox->Size = System::Drawing::Size(111, 20);
			this->CorreuBox->TabIndex = 8;
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(23, 75);
			this->CorreuLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(41, 13);
			this->CorreuLabel->TabIndex = 7;
			this->CorreuLabel->Text = L"Correu:";
			// 
			// ConsultaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(274, 249);
			this->Controls->Add(this->CorreuBox);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->TipusBox);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->DescripcioBox);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ConsultaEntitatForm";
			this->Text = L"ConsultaEntitatForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitatForm::ConsultaEntitatForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CorreuBox->Text = _CorreuEntitat;
		System::String^ correu = this->_CorreuEntitat;
		TxConsultaEntitat txCE(correu);
		try {
			txCE.executar();
			List<System::String^>^ sol = txCE.ObteResultat();
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

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
