#pragma once
#include "TxConsultaEntitat.h"
#include "ConsultarEsdevenimentsForm.h"

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




	private: System::Windows::Forms::Label^ TipusText;



	private: System::String^ _CorreuEntitat;

	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ CorreuLabelEdit;
	private: System::Windows::Forms::Label^ ModalitatLabelEdit;
	private: System::Windows::Forms::Label^ DescripcioLabelEdit;

	private: System::Windows::Forms::Label^ NomLabelEdit;
	private: System::Windows::Forms::Button^ consultarEsdeveniments;




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
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->CorreuLabelEdit = (gcnew System::Windows::Forms::Label());
			this->ModalitatLabelEdit = (gcnew System::Windows::Forms::Label());
			this->DescripcioLabelEdit = (gcnew System::Windows::Forms::Label());
			this->NomLabelEdit = (gcnew System::Windows::Forms::Label());
			this->consultarEsdeveniments = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(23, 43);
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
			// CorreuLabelEdit
			// 
			this->CorreuLabelEdit->AutoSize = true;
			this->CorreuLabelEdit->Location = System::Drawing::Point(99, 75);
			this->CorreuLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CorreuLabelEdit->Name = L"CorreuLabelEdit";
			this->CorreuLabelEdit->Size = System::Drawing::Size(0, 13);
			this->CorreuLabelEdit->TabIndex = 11;
			// 
			// ModalitatLabelEdit
			// 
			this->ModalitatLabelEdit->AutoSize = true;
			this->ModalitatLabelEdit->Location = System::Drawing::Point(99, 107);
			this->ModalitatLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ModalitatLabelEdit->Name = L"ModalitatLabelEdit";
			this->ModalitatLabelEdit->Size = System::Drawing::Size(0, 13);
			this->ModalitatLabelEdit->TabIndex = 10;
			// 
			// DescripcioLabelEdit
			// 
			this->DescripcioLabelEdit->AutoSize = true;
			this->DescripcioLabelEdit->Location = System::Drawing::Point(99, 139);
			this->DescripcioLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioLabelEdit->Name = L"DescripcioLabelEdit";
			this->DescripcioLabelEdit->Size = System::Drawing::Size(0, 13);
			this->DescripcioLabelEdit->TabIndex = 9;
			// 
			// NomLabelEdit
			// 
			this->NomLabelEdit->AutoSize = true;
			this->NomLabelEdit->Location = System::Drawing::Point(99, 43);
			this->NomLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomLabelEdit->Name = L"NomLabelEdit";
			this->NomLabelEdit->Size = System::Drawing::Size(0, 13);
			this->NomLabelEdit->TabIndex = 8;
			// 
			// consultarEsdeveniments
			// 
			this->consultarEsdeveniments->BackColor = System::Drawing::Color::DarkGray;
			this->consultarEsdeveniments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->consultarEsdeveniments->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->consultarEsdeveniments->Location = System::Drawing::Point(26, 178);
			this->consultarEsdeveniments->Margin = System::Windows::Forms::Padding(2);
			this->consultarEsdeveniments->Name = L"consultarEsdeveniments";
			this->consultarEsdeveniments->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->consultarEsdeveniments->Size = System::Drawing::Size(187, 24);
			this->consultarEsdeveniments->TabIndex = 12;
			this->consultarEsdeveniments->Text = L"Consultar esdeveniments";
			this->consultarEsdeveniments->UseVisualStyleBackColor = false;
			this->consultarEsdeveniments->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::consultarEsdeveniments_Click);
			// 
			// ConsultaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(386, 222);
			this->Controls->Add(this->consultarEsdeveniments);
			this->Controls->Add(this->CorreuLabelEdit);
			this->Controls->Add(this->ModalitatLabelEdit);
			this->Controls->Add(this->DescripcioLabelEdit);
			this->Controls->Add(this->NomLabelEdit);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Location = System::Drawing::Point(16, 22);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ConsultaEntitatForm";
			this->Text = L"ConsultaEntitatForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitatForm::ConsultaEntitatForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CorreuLabelEdit->Text = _CorreuEntitat;
		System::String^ correu = this->_CorreuEntitat;
		TxConsultaEntitat txCE(correu);
		try {
			txCE.executar();
			List<System::String^>^ sol = txCE.ObteResultat();
			NomLabelEdit->Text = sol[0];
			ModalitatLabelEdit->Text = sol[1];
			DescripcioLabelEdit->Text = sol[2];
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
private: System::Void NomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void consultarEsdeveniments_Click(System::Object^ sender, System::EventArgs^ e) {
	application::ConsultarEsdevenimentsForm^ CEsdev = gcnew application::ConsultarEsdevenimentsForm(CorreuLabelEdit->Text);
	CEsdev->ShowDialog();
}
};
}
