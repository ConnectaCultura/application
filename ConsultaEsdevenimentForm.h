#pragma once
#include "TxConsultaEsdeveniment.h"
#include "TxCompraEntrada.h"
#include "TxConsultaEntEsde.h"
#include "TxExisteixCompra.h"
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
		ConsultaEsdevenimentForm(String^ nom, String^ inici, String^ fi)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
			_nom = nom;
			_inici = inici;
			_fi = fi;

		}
		void CheckUsuari() {
			Sessio^ s = Sessio::getInstance();
			if (s->obteUsuari() == nullptr || s->obteUsuari()->obteTipus()=="ajuntament" || s->obteUsuari()->obteTipus() == "administrador") {
				_usuari = 0;
			}
			else if (s->obteUsuari()->obteTipus() == "entitat") {
				TxConsultaEntEsde cEE (s->obteUsuari()->obteCorreuElectronic(), _nom, _inici, _fi);
				try {
					cEE.executar();
					if (cEE.obteResultat())
						_usuari = 3;
					else 
						_usuari = 0;
				}
				catch (MySqlException^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
			else if (s->obteUsuari()->obteTipus() == "ciutada") {
				//comprovar si ja ha comprat aquest esdeveniment l'usuari
				TxExisteixCompra txEC(s->obteUsuari()->obteCorreuElectronic(), _nom, _inici, _fi);
				txEC.executar();
				if (txEC.obteResultat()) {
					_usuari = 2;
				}
				else {
					_usuari = 1;
				}
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
	private: System::Windows::Forms::Label^ inici;

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
		int _usuari = 0;
			// Si es 0 és un ciutadà anonim o una entitat (que l'esdeveniment no es seu) o un ajuntament
			// Si es 1 és un ciutadà que no ha comprat l'esdeveniment
			// Si es 2 és un ciutadà que ja ha comprat l'esdeveniment
			// Si es 3 és una entitat que l'esdeveniment és seu
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ descripcio;
	private: System::Windows::Forms::Button^ ComprarButton;
	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::Button^ Cancel_button;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ fi;
	private: System::Windows::Forms::Button^ VeureCompraButton;


	private: System::Windows::Forms::Button^ ModificarButton;


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
			this->inici = (gcnew System::Windows::Forms::Label());
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->fi = (gcnew System::Windows::Forms::Label());
			this->VeureCompraButton = (gcnew System::Windows::Forms::Button());
			this->ModificarButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(249, 51);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(51, 20);
			this->nom->TabIndex = 1;
			this->nom->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Entitat organizadora";
			// 
			// correu
			// 
			this->correu->AutoSize = true;
			this->correu->Location = System::Drawing::Point(249, 205);
			this->correu->Name = L"correu";
			this->correu->Size = System::Drawing::Size(51, 20);
			this->correu->TabIndex = 4;
			this->correu->Text = L"label4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Inici";
			// 
			// inici
			// 
			this->inici->AutoSize = true;
			this->inici->Location = System::Drawing::Point(249, 248);
			this->inici->Name = L"inici";
			this->inici->Size = System::Drawing::Size(51, 20);
			this->inici->TabIndex = 6;
			this->inici->Text = L"label5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Aforament maxim";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 449);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Entrades disponibles";
			// 
			// lable7
			// 
			this->lable7->AutoSize = true;
			this->lable7->Location = System::Drawing::Point(50, 374);
			this->lable7->Name = L"lable7";
			this->lable7->Size = System::Drawing::Size(42, 20);
			this->lable7->TabIndex = 9;
			this->lable7->Text = L"Preu";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 332);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Modalitat";
			// 
			// modalitat
			// 
			this->modalitat->AutoSize = true;
			this->modalitat->Location = System::Drawing::Point(249, 332);
			this->modalitat->Name = L"modalitat";
			this->modalitat->Size = System::Drawing::Size(51, 20);
			this->modalitat->TabIndex = 11;
			this->modalitat->Text = L"label8";
			// 
			// preu
			// 
			this->preu->AutoSize = true;
			this->preu->Location = System::Drawing::Point(249, 374);
			this->preu->Name = L"preu";
			this->preu->Size = System::Drawing::Size(51, 20);
			this->preu->TabIndex = 12;
			this->preu->Text = L"label8";
			// 
			// afMax
			// 
			this->afMax->AutoSize = true;
			this->afMax->Location = System::Drawing::Point(249, 408);
			this->afMax->Name = L"afMax";
			this->afMax->Size = System::Drawing::Size(51, 20);
			this->afMax->TabIndex = 13;
			this->afMax->Text = L"label8";
			// 
			// eDisp
			// 
			this->eDisp->AutoSize = true;
			this->eDisp->Location = System::Drawing::Point(249, 449);
			this->eDisp->Name = L"eDisp";
			this->eDisp->Size = System::Drawing::Size(51, 20);
			this->eDisp->TabIndex = 14;
			this->eDisp->Text = L"label8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(54, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Descripció";
			// 
			// descripcio
			// 
			this->descripcio->AutoSize = true;
			this->descripcio->Location = System::Drawing::Point(253, 95);
			this->descripcio->Name = L"descripcio";
			this->descripcio->Size = System::Drawing::Size(51, 20);
			this->descripcio->TabIndex = 16;
			this->descripcio->Text = L"label9";
			// 
			// ComprarButton
			// 
			this->ComprarButton->Location = System::Drawing::Point(432, 501);
			this->ComprarButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ComprarButton->Name = L"ComprarButton";
			this->ComprarButton->Size = System::Drawing::Size(183, 39);
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
			this->buttonTorna->Location = System::Drawing::Point(54, 501);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(120, 36);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::buttonTorna_Click);
			// 
			// Cancel_button
			// 
			this->Cancel_button->Location = System::Drawing::Point(432, 449);
			this->Cancel_button->Margin = System::Windows::Forms::Padding(2);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(183, 39);
			this->Cancel_button->TabIndex = 18;
			this->Cancel_button->Text = L"Cancelar";
			this->Cancel_button->UseVisualStyleBackColor = true;
			this->Cancel_button->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::Cancel_button_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 293);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Fi";
			// 
			// fi
			// 
			this->fi->AutoSize = true;
			this->fi->Location = System::Drawing::Point(249, 293);
			this->fi->Name = L"fi";
			this->fi->Size = System::Drawing::Size(51, 20);
			this->fi->TabIndex = 20;
			this->fi->Text = L"label5";
			// 
			// VeureCompraButton
			// 
			this->VeureCompraButton->Location = System::Drawing::Point(432, 389);
			this->VeureCompraButton->Margin = System::Windows::Forms::Padding(2);
			this->VeureCompraButton->Name = L"VeureCompraButton";
			this->VeureCompraButton->Size = System::Drawing::Size(183, 39);
			this->VeureCompraButton->TabIndex = 21;
			this->VeureCompraButton->Text = L"Veure compra";
			this->VeureCompraButton->UseVisualStyleBackColor = true;
			// 
			// ModificarButton
			// 
			this->ModificarButton->Location = System::Drawing::Point(432, 323);
			this->ModificarButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(183, 39);
			this->ModificarButton->TabIndex = 22;
			this->ModificarButton->Text = L"Modificar";
			this->ModificarButton->UseVisualStyleBackColor = true;
			// 
			// ConsultaEsdevenimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 566);
			this->Controls->Add(this->ModificarButton);
			this->Controls->Add(this->VeureCompraButton);
			this->Controls->Add(this->fi);
			this->Controls->Add(this->label9);
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
			this->Controls->Add(this->inici);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->correu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ConsultaEsdevenimentForm";
			this->Text = L"ConsultaEsdevenimentForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::ConsultaEsdevenimentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEsdevenimentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CheckUsuari();
		if (_usuari == 0) {
			VeureCompraButton->Visible = false;
			ModificarButton->Visible = false;
			ComprarButton->Visible = false;
			Cancel_button->Visible = false;
		} else if (_usuari == 1) {
			ComprarButton->Visible = true;
			Cancel_button->Visible = false;
			ModificarButton->Visible = false;
			VeureCompraButton->Visible = false;
		}
		else if (_usuari == 2) {
			ComprarButton->Visible = false;
			Cancel_button->Visible = false;
			ModificarButton->Visible = false;
			VeureCompraButton->Visible = true;
		}
		else if (_usuari == 3) {
			ComprarButton->Visible = false;
			Cancel_button->Visible = true;
			ModificarButton->Visible = true;
			VeureCompraButton->Visible = false;
		}
		this->nom->Text = _nom;
		this->inici->Text = _inici;
		this->fi->Text=_fi;
		System::DateTime now = System::DateTime::Now;
		System::TimeSpan twentyFourHours(24, 0, 0); // 24 horas
		System::DateTime futureTime = now + twentyFourHours;
		if (DateTime::Parse(_inici) < futureTime) {
			Cancel_button->Visible = false;
			ModificarButton->Visible = false;
		}
		if (DateTime::Parse(_fi) < now)
			ComprarButton->Visible = false;
		TxConsultaEsdeveniment txCE(_nom, _inici, _fi);
		txCE.executar();
		List<System::String^>^ ve = txCE.obteResultat();
		this->descripcio->Text = ve[0];
		this->correu->Text = ve[1];
		this->modalitat->Text = ve[2];
		if (ve[3] != nullptr) {
			if (ve[3] == "0") this->preu->Text = "Gratuit";
			else this->preu->Text = ve[3];
			afMax->Text = ve[4];
			eDisp->Text = ve[5];
			if(eDisp->Text == "0") ComprarButton->Visible = false;
		}
		else{
			this->preu->Text = "Sense entrada";
			ComprarButton->Visible = false;
			label5->Visible = false;
			afMax->Visible = false;
			label6->Visible = false;
			eDisp->Visible = false;
		}
	
	}
private: System::Void ComprarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ preuCompra;
	if (preu->Text == "Gratuit") {
		preuCompra = "0";
	}
	else {
		preuCompra = this->preu->Text;
	}
	System::String^ preuDef = preuCompra->Replace(',', '.');
	MessageBox::Show(_nom);
	TxCompraEntrada entrada(_nom, _inici, _fi, preuDef);
	entrada.executar();
	this->Close();
}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void Cancel_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
	application::CancelarEsdevenimentForm^ CancelaEsdev = gcnew application::CancelarEsdevenimentForm(_nom, _inici, _fi);
	CancelaEsdev->ShowDialog();
	this->Close();
}
};
}
