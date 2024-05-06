#pragma once

#include "FormAltaEsdeveniment.h"
#include "LogInForm.h"
#include "Sessio.h"
#include "AltaEntitatForm.h"
#include "BaixaEntitatForm.h"
#include "RegistreCiutadaForm.h"
#include "ConsultaEntitatForm.h"
#include "ConsultaEntitats.h"
#include "ModificarEntitatForm.h"
#include "BaixaCiutadaForm.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			logIn->Visible = true;
			logOut->Visible = false;
			altaEntitat->Visible = false;
			EsborrarEntitat->Visible = false;
			CreaEsdeveniment->Visible = false;
			ModificaEntitatButton->Visible = false;
			esborrarUsuari->Visible = false;

		}
		void ActualitzarForm1() {
			Sessio^ s = Sessio::getInstance();
			if (s->obteUsuari() == nullptr) {
				logIn->Visible = true;
				registreCiutada->Visible = true;
				logOut->Visible = false;
				altaEntitat->Visible = false;
				EsborrarEntitat->Visible = false;
				ModificaEntitatButton->Visible = false;
				esborrarUsuari->Visible = false;
			}
			else {
				logIn->Visible = false;
				registreCiutada->Visible = false;
				logOut->Visible = true;

				if (s->obteUsuari()->obteTipus() == "ajuntament") {
					altaEntitat->Visible = true;
					CreaEsdeveniment->Visible = false;
				}
				else if (s->obteUsuari()->obteTipus() == "entitat") {
					EsborrarEntitat->Visible = true;

					CreaEsdeveniment->Visible = true;

					ModificaEntitatButton->Visible = true;
				}
				else {
					esborrarUsuari->Visible = true;
				}
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ logIn;
	private: System::Windows::Forms::Button^ logOut;
	private: System::Windows::Forms::Button^ altaEntitat;
	private: System::Windows::Forms::Button^ EsborrarEntitat;
	private: System::Windows::Forms::Button^ registreCiutada;
	private: System::Windows::Forms::Button^ ConsultaEntitat;
	private: System::Windows::Forms::Button^ ConsultaEntitats;

	private: System::Windows::Forms::Button^ CreaEsdeveniment;
	private: System::Windows::Forms::Button^ ModificaEntitatButton;
	private: System::Windows::Forms::Label^ ConnectaCulturaTitle;
	private: System::Windows::Forms::Button^ esborrarUsuari;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->logIn = (gcnew System::Windows::Forms::Button());
			this->logOut = (gcnew System::Windows::Forms::Button());
			this->altaEntitat = (gcnew System::Windows::Forms::Button());
			this->EsborrarEntitat = (gcnew System::Windows::Forms::Button());
			this->registreCiutada = (gcnew System::Windows::Forms::Button());
			this->ConsultaEntitat = (gcnew System::Windows::Forms::Button());
			this->ConsultaEntitats = (gcnew System::Windows::Forms::Button());
			this->CreaEsdeveniment = (gcnew System::Windows::Forms::Button());
			this->ModificaEntitatButton = (gcnew System::Windows::Forms::Button());
			this->ConnectaCulturaTitle = (gcnew System::Windows::Forms::Label());
			this->esborrarUsuari = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// logIn
			// 
			this->logIn->BackColor = System::Drawing::Color::OrangeRed;
			this->logIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logIn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logIn->Location = System::Drawing::Point(344, 268);
			this->logIn->Name = L"logIn";
			this->logIn->Size = System::Drawing::Size(144, 43);
			this->logIn->TabIndex = 0;
			this->logIn->Text = L"iniciar sessi�";
			this->logIn->UseVisualStyleBackColor = false;
			this->logIn->Click += gcnew System::EventHandler(this, &Form1::logIn_Click);
			// 
			// logOut
			// 
			this->logOut->BackColor = System::Drawing::Color::OrangeRed;
			this->logOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOut->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logOut->Location = System::Drawing::Point(344, 317);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(144, 43);
			this->logOut->TabIndex = 1;
			this->logOut->Text = L"tancar sessi�";
			this->logOut->UseVisualStyleBackColor = false;
			this->logOut->Click += gcnew System::EventHandler(this, &Form1::logOut_Click);
			// 
			// altaEntitat
			// 
			this->altaEntitat->BackColor = System::Drawing::Color::DarkGray;
			this->altaEntitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->altaEntitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->altaEntitat->Location = System::Drawing::Point(39, 182);
			this->altaEntitat->Name = L"altaEntitat";
			this->altaEntitat->Size = System::Drawing::Size(201, 42);
			this->altaEntitat->TabIndex = 2;
			this->altaEntitat->Text = L"Donar d\'alta entitat";
			this->altaEntitat->UseVisualStyleBackColor = false;
			this->altaEntitat->Click += gcnew System::EventHandler(this, &Form1::altaEntitat_Click);
			// 
			// EsborrarEntitat
			// 
			this->EsborrarEntitat->BackColor = System::Drawing::Color::DarkGray;
			this->EsborrarEntitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EsborrarEntitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->EsborrarEntitat->Location = System::Drawing::Point(39, 243);
			this->EsborrarEntitat->Name = L"EsborrarEntitat";
			this->EsborrarEntitat->Size = System::Drawing::Size(201, 37);
			this->EsborrarEntitat->TabIndex = 3;
			this->EsborrarEntitat->Text = L"Esborrar entitat";
			this->EsborrarEntitat->UseVisualStyleBackColor = false;
			this->EsborrarEntitat->Click += gcnew System::EventHandler(this, &Form1::EsborrarEntitat_Click);
			// 
			// registreCiutada
			// 
			this->registreCiutada->BackColor = System::Drawing::Color::OrangeRed;
			this->registreCiutada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registreCiutada->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->registreCiutada->Location = System::Drawing::Point(344, 218);
			this->registreCiutada->Name = L"registreCiutada";
			this->registreCiutada->Size = System::Drawing::Size(144, 43);
			this->registreCiutada->TabIndex = 4;
			this->registreCiutada->Text = L"registrar-se";
			this->registreCiutada->UseVisualStyleBackColor = false;
			this->registreCiutada->Click += gcnew System::EventHandler(this, &Form1::registreCiutada_Click);
			// 
			// ConsultaEntitat
			// 
			this->ConsultaEntitat->BackColor = System::Drawing::Color::DarkGray;
			this->ConsultaEntitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultaEntitat->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ConsultaEntitat->Location = System::Drawing::Point(39, 300);
			this->ConsultaEntitat->Name = L"ConsultaEntitat";
			this->ConsultaEntitat->Size = System::Drawing::Size(201, 37);
			this->ConsultaEntitat->TabIndex = 5;
			this->ConsultaEntitat->Text = L"Consultar entitat";
			this->ConsultaEntitat->UseVisualStyleBackColor = false;
			this->ConsultaEntitat->Click += gcnew System::EventHandler(this, &Form1::ConsultaEntitat_Click);
			// 
			// ConsultaEntitats
			// 
			this->ConsultaEntitats->BackColor = System::Drawing::Color::DarkGray;
			this->ConsultaEntitats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultaEntitats->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ConsultaEntitats->Location = System::Drawing::Point(39, 357);
			this->ConsultaEntitats->Name = L"ConsultaEntitats";
			this->ConsultaEntitats->Size = System::Drawing::Size(201, 37);
			this->ConsultaEntitats->TabIndex = 6;
			this->ConsultaEntitats->Text = L"Consultar entitats";
			this->ConsultaEntitats->UseVisualStyleBackColor = false;
			this->ConsultaEntitats->Click += gcnew System::EventHandler(this, &Form1::ConsultaEntitats_Click);
			// 
			// CreaEsdeveniment
			// 
			this->CreaEsdeveniment->BackColor = System::Drawing::Color::DarkGray;
			this->CreaEsdeveniment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreaEsdeveniment->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CreaEsdeveniment->Location = System::Drawing::Point(39, 472);
			this->CreaEsdeveniment->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CreaEsdeveniment->Name = L"CreaEsdeveniment";
			this->CreaEsdeveniment->Size = System::Drawing::Size(201, 31);
			this->CreaEsdeveniment->TabIndex = 7;
			this->CreaEsdeveniment->Text = L"Crear esdeveniment";
			this->CreaEsdeveniment->UseVisualStyleBackColor = false;
			this->CreaEsdeveniment->Click += gcnew System::EventHandler(this, &Form1::CreaEsdeveniment_Click);
			// 
			// ModificaEntitatButton
			// 
			this->ModificaEntitatButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ModificaEntitatButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ModificaEntitatButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ModificaEntitatButton->Location = System::Drawing::Point(39, 412);
			this->ModificaEntitatButton->Name = L"ModificaEntitatButton";
			this->ModificaEntitatButton->Size = System::Drawing::Size(201, 37);
			this->ModificaEntitatButton->TabIndex = 7;
			this->ModificaEntitatButton->Text = L"Modifica Entitat";
			this->ModificaEntitatButton->UseVisualStyleBackColor = false;
			this->ModificaEntitatButton->Click += gcnew System::EventHandler(this, &Form1::ModificaEntitatButton_Click);
			// 
			// ConnectaCulturaTitle
			// 
			this->ConnectaCulturaTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConnectaCulturaTitle->Location = System::Drawing::Point(112, 85);
			this->ConnectaCulturaTitle->Name = L"ConnectaCulturaTitle";
			this->ConnectaCulturaTitle->Size = System::Drawing::Size(322, 49);
			this->ConnectaCulturaTitle->TabIndex = 8;
			this->ConnectaCulturaTitle->Text = L"ConnectaCultura";
			this->ConnectaCulturaTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ConnectaCulturaTitle->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// esborrarUsuari
			// 
			this->esborrarUsuari->Location = System::Drawing::Point(344, 370);
			this->esborrarUsuari->Name = L"esborrarUsuari";
			this->esborrarUsuari->Size = System::Drawing::Size(144, 33);
			this->esborrarUsuari->TabIndex = 9;
			this->esborrarUsuari->Text = L"Esborrar Usuari";
			this->esborrarUsuari->UseVisualStyleBackColor = true;
			this->esborrarUsuari->Click += gcnew System::EventHandler(this, &Form1::esborrarUsuari_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(600, 535);
			this->Controls->Add(this->esborrarUsuari);
			this->Controls->Add(this->CreaEsdeveniment);
			this->Controls->Add(this->ConnectaCulturaTitle);
			this->Controls->Add(this->ModificaEntitatButton);
			this->Controls->Add(this->ConsultaEntitats);
			this->Controls->Add(this->ConsultaEntitat);
			this->Controls->Add(this->registreCiutada);
			this->Controls->Add(this->EsborrarEntitat);
			this->Controls->Add(this->altaEntitat);
			this->Controls->Add(this->logOut);
			this->Controls->Add(this->logIn);
			this->Name = L"Form1";
			this->Text = L"ConnectaCultura";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void logIn_Click(System::Object^ sender, System::EventArgs^ e) {
		application::LogInForm^ login = gcnew application::LogInForm();
		login->ShowDialog();
		Sessio^ s = Sessio::getInstance();
		/*if (s->obteUsuari() != nullptr) {
			logIn->Visible = false;
			logOut->Visible = true;
		}*/
		Form1::ActualitzarForm1();
	}
	private: System::Void logOut_Click(System::Object^ sender, System::EventArgs^ e) {
		Sessio^ s = Sessio::getInstance();
		s->tancaSessio();
		Form1::ActualitzarForm1();
	}
	private: System::Void altaEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::AltaEntitatForm^ altaEntitat = gcnew application::AltaEntitatForm();
		altaEntitat->ShowDialog();
		Form1::ActualitzarForm1();

	}
	private: System::Void EsborrarEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::BaixaEntitatForm^ baixa_entitat = gcnew application::BaixaEntitatForm();
		baixa_entitat->ShowDialog();
		Form1::ActualitzarForm1();
	}
	private: System::Void registreCiutada_Click(System::Object^ sender, System::EventArgs^ e) {
		application::RegistreCiutadaForm^ registre_ciutada = gcnew application::RegistreCiutadaForm();
		registre_ciutada->ShowDialog();
		Form1::ActualitzarForm1();
	}
	private: System::Void ConsultaEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::ConsultaEntitatForm^ Consulta_Entitat = gcnew application::ConsultaEntitatForm();
		Consulta_Entitat->ShowDialog();
		Form1::ActualitzarForm1();
	}
	private: System::Void ConsultaEntitats_Click(System::Object^ sender, System::EventArgs^ e) {
		application::ConsultaEntitats^ Consulta_Entitats = gcnew application::ConsultaEntitats();
		Consulta_Entitats->ShowDialog();
		Form1::ActualitzarForm1();
	}

	private: System::Void CreaEsdeveniment_Click(System::Object^ sender, System::EventArgs^ e) {
		application::FormAltaEsdeveniment^ CreaEsdeveniment = gcnew application::FormAltaEsdeveniment();
		CreaEsdeveniment->ShowDialog();
	}

	private: System::Void ModificaEntitatButton_Click(System::Object^ sender, System::EventArgs^ e) {
		application::ModificarEntitatForm^ Modifica_Entitat = gcnew application::ModificarEntitatForm();
		Modifica_Entitat->ShowDialog();

		Form1::ActualitzarForm1();
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void esborrarUsuari_Click(System::Object^ sender, System::EventArgs^ e) {
	application::BaixaCiutadaForm^ Baixa_Ciutada = gcnew application::BaixaCiutadaForm();
	Baixa_Ciutada->ShowDialog();
	Form1::ActualitzarForm1();
}
};
}
