#pragma once
#include "TxConsultaEntitat.h"
#include "ConsultarEsdevenimentsForm.h"
#include "TxConsultaEsdeveniments.h"
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
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
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







	private: System::Windows::Forms::Label^ AjuntamentLabelEdit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::Panel^ panel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultaEntitatForm::typeid));
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->CorreuLabelEdit = (gcnew System::Windows::Forms::Label());
			this->ModalitatLabelEdit = (gcnew System::Windows::Forms::Label());
			this->DescripcioLabelEdit = (gcnew System::Windows::Forms::Label());
			this->NomLabelEdit = (gcnew System::Windows::Forms::Label());
			this->AjuntamentLabelEdit = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(30, 31);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(46, 20);
			this->NomText->TabIndex = 0;
			this->NomText->Text = L"Nom:";
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;
			this->DescripcioText->Location = System::Drawing::Point(315, 31);
			this->DescripcioText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(87, 20);
			this->DescripcioText->TabIndex = 1;
			this->DescripcioText->Text = L"Descripcio:";
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(30, 124);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(51, 20);
			this->TipusText->TabIndex = 5;
			this->TipusText->Text = L"Tipus:";
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(30, 80);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(61, 20);
			this->CorreuLabel->TabIndex = 7;
			this->CorreuLabel->Text = L"Correu:";
			// 
			// CorreuLabelEdit
			// 
			this->CorreuLabelEdit->AutoSize = true;
			this->CorreuLabelEdit->Location = System::Drawing::Point(129, 80);
			this->CorreuLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CorreuLabelEdit->Name = L"CorreuLabelEdit";
			this->CorreuLabelEdit->Size = System::Drawing::Size(35, 20);
			this->CorreuLabelEdit->TabIndex = 11;
			this->CorreuLabelEdit->Text = L"edit";
			// 
			// ModalitatLabelEdit
			// 
			this->ModalitatLabelEdit->AutoSize = true;
			this->ModalitatLabelEdit->Location = System::Drawing::Point(129, 124);
			this->ModalitatLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ModalitatLabelEdit->Name = L"ModalitatLabelEdit";
			this->ModalitatLabelEdit->Size = System::Drawing::Size(35, 20);
			this->ModalitatLabelEdit->TabIndex = 10;
			this->ModalitatLabelEdit->Text = L"edit";
			// 
			// DescripcioLabelEdit
			// 
			this->DescripcioLabelEdit->AutoSize = true;
			this->DescripcioLabelEdit->Location = System::Drawing::Point(428, 31);
			this->DescripcioLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioLabelEdit->MaximumSize = System::Drawing::Size(549, 0);
			this->DescripcioLabelEdit->Name = L"DescripcioLabelEdit";
			this->DescripcioLabelEdit->Size = System::Drawing::Size(35, 20);
			this->DescripcioLabelEdit->TabIndex = 9;
			this->DescripcioLabelEdit->Text = L"edit";
			// 
			// NomLabelEdit
			// 
			this->NomLabelEdit->AutoSize = true;
			this->NomLabelEdit->Location = System::Drawing::Point(129, 31);
			this->NomLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomLabelEdit->Name = L"NomLabelEdit";
			this->NomLabelEdit->Size = System::Drawing::Size(35, 20);
			this->NomLabelEdit->TabIndex = 8;
			this->NomLabelEdit->Text = L"edit";
			// 
			// AjuntamentLabelEdit
			// 
			this->AjuntamentLabelEdit->AutoSize = true;
			this->AjuntamentLabelEdit->Location = System::Drawing::Point(129, 172);
			this->AjuntamentLabelEdit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AjuntamentLabelEdit->Name = L"AjuntamentLabelEdit";
			this->AjuntamentLabelEdit->Size = System::Drawing::Size(35, 20);
			this->AjuntamentLabelEdit->TabIndex = 15;
			this->AjuntamentLabelEdit->Text = L"edit";
			this->AjuntamentLabelEdit->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 172);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ajuntament:";
			this->label2->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::label2_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(826, 338);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::buttonTorna_Click);
			// 
			// panel1
			// 
			this->panel1->AllowDrop = true;
			this->panel1->Location = System::Drawing::Point(34, 220);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(981, 566);
			this->panel1->TabIndex = 16;
			// 
			// ConsultaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1078, 727);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->AjuntamentLabelEdit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CorreuLabelEdit);
			this->Controls->Add(this->ModalitatLabelEdit);
			this->Controls->Add(this->DescripcioLabelEdit);
			this->Controls->Add(this->NomLabelEdit);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(16, 22);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
		
		ConsultarEsdevenimentsForm^ consultaEsdevenimentsForm = gcnew ConsultarEsdevenimentsForm(correu);

		// Establecer el formulario ConsultaEsdevenimentsForm como hijo del panel contenedor
		consultaEsdevenimentsForm->TopLevel = false;
		consultaEsdevenimentsForm->Dock = System::Windows::Forms::DockStyle::Fill;

		// Limpiar cualquier control existente dentro del panel contenedor
		panel1->Controls->Clear();

		// Agregar el formulario ConsultaEsdevenimentsForm al panel contenedor
		panel1->Controls->Add(consultaEsdevenimentsForm);

		// Mostrar el formulario ConsultaEsdevenimentsForm
		consultaEsdevenimentsForm->Show();
		TxConsultaEntitat txCE(correu);
		try {
			txCE.executar();
			List<System::String^>^ sol = txCE.ObteResultat();
			NomLabelEdit->Text = sol[0];
			ModalitatLabelEdit->Text = sol[1];
			DescripcioLabelEdit->Text = sol[2];
			AjuntamentLabelEdit->Text = sol[3];
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


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}


};
}
