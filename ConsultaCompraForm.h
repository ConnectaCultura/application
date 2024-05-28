#pragma once
#include "TxConsultaCompra.h"
#include "Sessio.h"
#include "CancelaCompraForm.h"
#include "ValorarEsdevenimentForm.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaCompraForm
	/// </summary>
	public ref class ConsultaCompraForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaCompraForm(String^ nom, String^ inici, String^ fi)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			_nomEsdev = nom;
			_dataInici = inici;
			_dataFi = fi;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaCompraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ esdevenimentLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ DataIniciLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ DataFiLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ PreuLabel;
	protected:

	protected:








	private:
		String^ _nomEsdev;
		String^ _dataInici;
		String^ _dataFi;
	private: System::Windows::Forms::Label^ QuantitatLabel;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ TornaButton;
	private: System::Windows::Forms::Button^ CancelaCompraButton;
	private: System::Windows::Forms::Button^ valorarE;
	private: System::Windows::Forms::Button^ consultarV;



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
			this->esdevenimentLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DataIniciLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DataFiLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PreuLabel = (gcnew System::Windows::Forms::Label());
			this->QuantitatLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TornaButton = (gcnew System::Windows::Forms::Button());
			this->CancelaCompraButton = (gcnew System::Windows::Forms::Button());
			this->valorarE = (gcnew System::Windows::Forms::Button());
			this->consultarV = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 52);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom Esdeveniment";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::label1_Click_1);
			// 
			// esdevenimentLabel
			// 
			this->esdevenimentLabel->AutoSize = true;
			this->esdevenimentLabel->Location = System::Drawing::Point(173, 52);
			this->esdevenimentLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->esdevenimentLabel->Name = L"esdevenimentLabel";
			this->esdevenimentLabel->Size = System::Drawing::Size(74, 13);
			this->esdevenimentLabel->TabIndex = 1;
			this->esdevenimentLabel->Text = L"Esdeveniment";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 88);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Data Inici";
			// 
			// DataIniciLabel
			// 
			this->DataIniciLabel->AutoSize = true;
			this->DataIniciLabel->Location = System::Drawing::Point(173, 88);
			this->DataIniciLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DataIniciLabel->Name = L"DataIniciLabel";
			this->DataIniciLabel->Size = System::Drawing::Size(49, 13);
			this->DataIniciLabel->TabIndex = 3;
			this->DataIniciLabel->Text = L"DataInici";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 129);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Data Fi";
			this->label3->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::label3_Click);
			// 
			// DataFiLabel
			// 
			this->DataFiLabel->AutoSize = true;
			this->DataFiLabel->Location = System::Drawing::Point(173, 129);
			this->DataFiLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DataFiLabel->Name = L"DataFiLabel";
			this->DataFiLabel->Size = System::Drawing::Size(38, 13);
			this->DataFiLabel->TabIndex = 5;
			this->DataFiLabel->Text = L"DataFi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 170);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Preu";
			// 
			// PreuLabel
			// 
			this->PreuLabel->AutoSize = true;
			this->PreuLabel->Location = System::Drawing::Point(173, 170);
			this->PreuLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PreuLabel->Name = L"PreuLabel";
			this->PreuLabel->Size = System::Drawing::Size(29, 13);
			this->PreuLabel->TabIndex = 7;
			this->PreuLabel->Text = L"Preu";
			// 
			// QuantitatLabel
			// 
			this->QuantitatLabel->AutoSize = true;
			this->QuantitatLabel->Location = System::Drawing::Point(173, 203);
			this->QuantitatLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->QuantitatLabel->Name = L"QuantitatLabel";
			this->QuantitatLabel->Size = System::Drawing::Size(50, 13);
			this->QuantitatLabel->TabIndex = 9;
			this->QuantitatLabel->Text = L"Quantitat";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 203);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Quantitat";
			// 
			// TornaButton
			// 
			this->TornaButton->BackColor = System::Drawing::Color::OrangeRed;
			this->TornaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TornaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TornaButton->Location = System::Drawing::Point(12, 239);
			this->TornaButton->Name = L"TornaButton";
			this->TornaButton->Size = System::Drawing::Size(75, 23);
			this->TornaButton->TabIndex = 10;
			this->TornaButton->Text = L"Torna";
			this->TornaButton->UseVisualStyleBackColor = false;
			this->TornaButton->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::TornaButton_Click);
			// 
			// CancelaCompraButton
			// 
			this->CancelaCompraButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->CancelaCompraButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CancelaCompraButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->CancelaCompraButton->Location = System::Drawing::Point(230, 239);
			this->CancelaCompraButton->Name = L"CancelaCompraButton";
			this->CancelaCompraButton->Size = System::Drawing::Size(107, 23);
			this->CancelaCompraButton->TabIndex = 11;
			this->CancelaCompraButton->Text = L"CancelaCompra";
			this->CancelaCompraButton->UseVisualStyleBackColor = false;
			this->CancelaCompraButton->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::CancelaCompraButton_Click);
			// 
			// valorarE
			// 
			this->valorarE->Location = System::Drawing::Point(230, 239);
			this->valorarE->Name = L"valorarE";
			this->valorarE->Size = System::Drawing::Size(107, 23);
			this->valorarE->TabIndex = 12;
			this->valorarE->Text = L"Valorar Esdeveniment";
			this->valorarE->UseVisualStyleBackColor = true;
			this->valorarE->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::button1_Click);
			// 
			// consultarV
			// 
			this->consultarV->Location = System::Drawing::Point(230, 239);
			this->consultarV->Name = L"consultarV";
			this->consultarV->Size = System::Drawing::Size(107, 23);
			this->consultarV->TabIndex = 13;
			this->consultarV->Text = L"Consulta Valoració";
			this->consultarV->UseVisualStyleBackColor = true;
			this->consultarV->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::consultarV_Click);
			// 
			// ConsultaCompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 274);
			this->Controls->Add(this->consultarV);
			this->Controls->Add(this->valorarE);
			this->Controls->Add(this->CancelaCompraButton);
			this->Controls->Add(this->TornaButton);
			this->Controls->Add(this->QuantitatLabel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->PreuLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DataFiLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DataIniciLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->esdevenimentLabel);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ConsultaCompraForm";
			this->Text = L"ConsultaCompraForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaCompraForm::ConsultaCompraForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ConsultaCompraForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (DateTime::Parse(_dataFi) < System::DateTime::Now) {
		CancelaCompraButton->Visible = false;
	}
	Sessio^ s = Sessio::getInstance();
	TxConsultaCompra cc(s->obteUsuari()->obteCorreuElectronic(), _nomEsdev, _dataInici, _dataFi);
	try {
		cc.executar();
		System::DateTime now = System::DateTime::Now;
		List<System::String^>^ e = cc.obteResultat();
		esdevenimentLabel->Text = e[1];
		DataIniciLabel->Text = e[2];
		DataFiLabel->Text = e[3];
		PreuLabel->Text = e[4];
		QuantitatLabel->Text = e[5];

		if (DateTime::Parse(e[3]) < now) {
			this->CancelaCompraButton->Visible = false;
			CercadoraValoracio cv;
			
			try {
				PassarelaValoracio^ pv = cv.CercaValoracio(s->obteUsuari()->obteCorreuElectronic(), _nomEsdev, _dataInici, _dataFi);
				this->valorarE->Visible = false;
				this->consultarV->Visible = true;
			}
			catch (std::runtime_error e) {
				this->valorarE->Visible = true;
				this->consultarV->Visible = false;
			}
		}
		else {
			this->valorarE->Visible = false;
			this->CancelaCompraButton->Visible = true;
			this->consultarV->Visible = false;

		}
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: System::Void TornaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void CancelaCompraButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Sessio^ s = Sessio::getInstance();
	application::CancelaCompraForm^ Cancela_Compra = gcnew application::CancelaCompraForm(s->obteUsuari()->obteCorreuElectronic(), esdevenimentLabel->Text, DataIniciLabel->Text, DataFiLabel->Text);
	Cancela_Compra->ShowDialog();
	this->Close();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Sessio^ s = Sessio::getInstance();
	application::ValorarEsdevenimentForm^ Valorar_Esdeveniment = gcnew application::ValorarEsdevenimentForm(s->obteUsuari()->obteCorreuElectronic(), esdevenimentLabel->Text, DataIniciLabel->Text, DataFiLabel->Text);
	Valorar_Esdeveniment->ShowDialog();
	this->Close();
}
private: System::Void consultarV_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
