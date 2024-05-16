#pragma once
#include "TxConsultaEsdeveniment.h"
#include "TxCompraEntrada.h"
#include "CancelarEsdevenimentForm.h"
namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaEsdevenimentForm
	/// </summary>
	public ref class ConsultaEsdevenimentForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaEsdevenimentForm(String^nom, String^inici, String^fi)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			_nom = nom;
			_inici = inici;
			_fi = fi; 
			
		}
		void CheckUsuari() {
			Sessio^ s = Sessio::getInstance();
			if (s->obteUsuari() == nullptr || s->obteUsuari()->obteTipus() != "ciutada") {
				ComprarButton->Visible = false;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaEsdevenimentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ correu;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ data;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lable7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ modalitat;
	private: System::Windows::Forms::Label^ preu;
	private: System::Windows::Forms::Label^ afMax;
	private: System::Windows::Forms::Label^ eDisp;

	protected:


	private:
		String^ _nom;
		String^ _inici;
		String^ _fi;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ descripcio;
	private: System::Windows::Forms::Button^ ComprarButton;
	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::Button^ Cancel_button;
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
			this->nom = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->correu = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lable7 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->modalitat = (gcnew System::Windows::Forms::Label());
			this->preu = (gcnew System::Windows::Forms::Label());
			this->afMax = (gcnew System::Windows::Forms::Label());
			this->eDisp = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->descripcio = (gcnew System::Windows::Forms::Label());
			this->ComprarButton = (gcnew System::Windows::Forms::Button());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->Cancel_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(221, 41);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(44, 16);
			this->nom->TabIndex = 1;
			this->nom->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Entitat organizadora";
			// 
			// correu
			// 
			this->correu->AutoSize = true;
			this->correu->Location = System::Drawing::Point(221, 164);
			this->correu->Name = L"correu";
			this->correu->Size = System::Drawing::Size(44, 16);
			this->correu->TabIndex = 4;
			this->correu->Text = L"label4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Data";
			// 
			// data
			// 
			this->data->AutoSize = true;
			this->data->Location = System::Drawing::Point(221, 198);
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(44, 16);
			this->data->TabIndex = 6;
			this->data->Text = L"label5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Aforament maxim";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 327);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Entrades disponibles";
			// 
			// lable7
			// 
			this->lable7->AutoSize = true;
			this->lable7->Location = System::Drawing::Point(44, 267);
			this->lable7->Name = L"lable7";
			this->lable7->Size = System::Drawing::Size(35, 16);
			this->lable7->TabIndex = 9;
			this->lable7->Text = L"Preu";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(44, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Modalitat";
			// 
			// modalitat
			// 
			this->modalitat->AutoSize = true;
			this->modalitat->Location = System::Drawing::Point(221, 234);
			this->modalitat->Name = L"modalitat";
			this->modalitat->Size = System::Drawing::Size(44, 16);
			this->modalitat->TabIndex = 11;
			this->modalitat->Text = L"label8";
			// 
			// preu
			// 
			this->preu->AutoSize = true;
			this->preu->Location = System::Drawing::Point(221, 267);
			this->preu->Name = L"preu";
			this->preu->Size = System::Drawing::Size(44, 16);
			this->preu->TabIndex = 12;
			this->preu->Text = L"label8";
			// 
			// afMax
			// 
			this->afMax->AutoSize = true;
			this->afMax->Location = System::Drawing::Point(221, 294);
			this->afMax->Name = L"afMax";
			this->afMax->Size = System::Drawing::Size(44, 16);
			this->afMax->TabIndex = 13;
			this->afMax->Text = L"label8";
			// 
			// eDisp
			// 
			this->eDisp->AutoSize = true;
			this->eDisp->Location = System::Drawing::Point(221, 327);
			this->eDisp->Name = L"eDisp";
			this->eDisp->Size = System::Drawing::Size(44, 16);
			this->eDisp->TabIndex = 14;
			this->eDisp->Text = L"label8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(48, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Descripció";
			// 
			// descripcio
			// 
			this->descripcio->AutoSize = true;
			this->descripcio->Location = System::Drawing::Point(225, 76);
			this->descripcio->Name = L"descripcio";
			this->descripcio->Size = System::Drawing::Size(44, 16);
			this->descripcio->TabIndex = 16;
			this->descripcio->Text = L"label9";
			// 
			// ComprarButton
			// 
			this->ComprarButton->Location = System::Drawing::Point(392, 369);
			this->ComprarButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ComprarButton->Name = L"ComprarButton";
			this->ComprarButton->Size = System::Drawing::Size(163, 31);
			this->ComprarButton->TabIndex = 17;
			this->ComprarButton->Text = L"Comprar Entrada";
			this->ComprarButton->UseVisualStyleBackColor = true;
			this->ComprarButton->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::ComprarButton_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(13, 369);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::buttonTorna_Click);
      //
			// Cancel_button
			// 
			this->Cancel_button->Location = System::Drawing::Point(237, 266);
			this->Cancel_button->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(71, 24);
			this->Cancel_button->TabIndex = 18;
			this->Cancel_button->Text = L"Cance·lar";
			this->Cancel_button->UseVisualStyleBackColor = true;
			this->Cancel_button->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::Cancel_button_Click_1);
			// 
			// ConsultaEsdevenimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 411);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->Cancel_button);
			this->Controls->Add(this->ComprarButton);
			this->Controls->Add(this->descripcio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->eDisp);
			this->Controls->Add(this->afMax);
			this->Controls->Add(this->preu);
			this->Controls->Add(this->modalitat);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lable7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->data);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->correu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ConsultaEsdevenimentForm";
			this->Text = L"ConsultaEsdevenimentForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::ConsultaEsdevenimentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEsdevenimentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CheckUsuari();
		this->nom->Text = _nom;
		this->data->Text = _inici + "  " + _fi;

		Sessio^ s = Sessio::getInstance();
		if (s->obteUsuari()->obteTipus() != "ciutada") {
			ComprarButton->Visible = false;
		}
		if (s->obteUsuari()->obteTipus() != "entitat") {
			Cancel_button->Visible = false;
		}
		//MessageBox::Show(iniciMySQL);
		TxConsultaEsdeveniment txCE(_nom, _inici, _fi);
		txCE.executar();
		List<System::String^>^ ve = txCE.obteResultat();
		this->descripcio->Text = ve[0];
		this->correu->Text = ve[1];
		this->modalitat->Text = ve[2];
		if (ve[3] != "0") this->preu->Text = ve[3];
		else this->preu->Text = "Gratuit";
		if (ve[4] == "-1") {
			label5->Visible = false;
			afMax->Visible = false;
			label6->Visible = false;
			eDisp->Visible = false;
		}
		else {
			afMax->Text = ve[4];
			//eDisp->Text = ve[5];

		}
	
	}
private: System::Void ComprarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	float preuCompra;
	if (preu->Text == "Gratuit") {
		preuCompra = 0;
	}
	else {
		preuCompra = Convert::ToSingle(this->preu->Text);
	}
	TxCompraEntrada entrada(nom->Text, data->Text, preuCompra);
	entrada.executar();
	this->Close();
}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void Cancel_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
	application::CancelarEsdevenimentForm^ CancelaEsdev = gcnew application::CancelarEsdevenimentForm(_nom, _inici, _fi);
	CancelaEsdev->ShowDialog();
}
};
}
