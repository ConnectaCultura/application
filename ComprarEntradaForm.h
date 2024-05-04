#pragma once
#include "TxCompraEntrada.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ComprarEntradaForm
	/// </summary>
	public ref class ComprarEntradaForm : public System::Windows::Forms::Form
	{
	public:
		ComprarEntradaForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ComprarEntradaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ data_inici;
	private: System::Windows::Forms::Label^ data_fi;
	private: System::Windows::Forms::Label^ preu;







	private: System::Windows::Forms::Label^ esdeveniment;

	private: System::Windows::Forms::Label^ Ciutada;





	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->data_inici = (gcnew System::Windows::Forms::Label());
			this->data_fi = (gcnew System::Windows::Forms::Label());
			this->preu = (gcnew System::Windows::Forms::Label());
			this->esdeveniment = (gcnew System::Windows::Forms::Label());
			this->Ciutada = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(400, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Comprar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ComprarEntradaForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"COMPRAR ENTRADA";
			this->label1->Click += gcnew System::EventHandler(this, &ComprarEntradaForm::label1_Click);
			// 
			// data_inici
			// 
			this->data_inici->AutoSize = true;
			this->data_inici->Location = System::Drawing::Point(71, 189);
			this->data_inici->Name = L"data_inici";
			this->data_inici->Size = System::Drawing::Size(91, 20);
			this->data_inici->TabIndex = 3;
			this->data_inici->Text = L"2024-04-25";
			// 
			// data_fi
			// 
			this->data_fi->AutoSize = true;
			this->data_fi->Location = System::Drawing::Point(71, 235);
			this->data_fi->Name = L"data_fi";
			this->data_fi->Size = System::Drawing::Size(91, 20);
			this->data_fi->TabIndex = 4;
			this->data_fi->Text = L"2024-04-25";
			// 
			// preu
			// 
			this->preu->AutoSize = true;
			this->preu->Location = System::Drawing::Point(71, 274);
			this->preu->Name = L"preu";
			this->preu->Size = System::Drawing::Size(27, 20);
			this->preu->TabIndex = 5;
			this->preu->Text = L"20";
			// 
			// esdeveniment
			// 
			this->esdeveniment->AutoSize = true;
			this->esdeveniment->Location = System::Drawing::Point(71, 137);
			this->esdeveniment->Name = L"esdeveniment";
			this->esdeveniment->Size = System::Drawing::Size(19, 20);
			this->esdeveniment->TabIndex = 6;
			this->esdeveniment->Text = L"vi";
			// 
			// Ciutada
			// 
			this->Ciutada->AutoSize = true;
			this->Ciutada->Location = System::Drawing::Point(71, 92);
			this->Ciutada->Name = L"Ciutada";
			this->Ciutada->Size = System::Drawing::Size(18, 20);
			this->Ciutada->TabIndex = 7;
			this->Ciutada->Text = L"a";
			// 
			// ComprarEntradaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 387);
			this->Controls->Add(this->Ciutada);
			this->Controls->Add(this->esdeveniment);
			this->Controls->Add(this->preu);
			this->Controls->Add(this->data_fi);
			this->Controls->Add(this->data_inici);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"ComprarEntradaForm";
			this->Text = L"ComprarEntradaForm";
			this->Load += gcnew System::EventHandler(this, &ComprarEntradaForm::ComprarEntradaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float preuCompra = Convert::ToSingle(this->preu->Text);
		TxCompraEntrada entrada(Ciutada->Text, esdeveniment->Text, data_inici->Text, data_fi->Text, preuCompra);
		entrada.executar();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void data_inici_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ComprarEntradaForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
