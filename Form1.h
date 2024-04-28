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
#include "FormConsultarAjuntament.h"

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
	private: System::Windows::Forms::Button^ ConsultaAjuntamentButton;




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
			this->ConsultaAjuntamentButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// logIn
			// 
			this->logIn->BackColor = System::Drawing::Color::OrangeRed;
			this->logIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logIn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logIn->Location = System::Drawing::Point(229, 174);
			this->logIn->Margin = System::Windows::Forms::Padding(2);
			this->logIn->Name = L"logIn";
			this->logIn->Size = System::Drawing::Size(94, 28);
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
			this->logOut->Location = System::Drawing::Point(229, 206);
			this->logOut->Margin = System::Windows::Forms::Padding(2);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(94, 28);
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
			this->altaEntitat->Location = System::Drawing::Point(26, 118);
			this->altaEntitat->Margin = System::Windows::Forms::Padding(2);
			this->altaEntitat->Name = L"altaEntitat";
			this->altaEntitat->Size = System::Drawing::Size(134, 27);
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
			this->EsborrarEntitat->Location = System::Drawing::Point(26, 158);
			this->EsborrarEntitat->Margin = System::Windows::Forms::Padding(2);
			this->EsborrarEntitat->Name = L"EsborrarEntitat";
			this->EsborrarEntitat->Size = System::Drawing::Size(134, 24);
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
			this->registreCiutada->Location = System::Drawing::Point(229, 142);
			this->registreCiutada->Margin = System::Windows::Forms::Padding(2);
			this->registreCiutada->Name = L"registreCiutada";
			this->registreCiutada->Size = System::Drawing::Size(96, 28);
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
			this->ConsultaEntitat->Location = System::Drawing::Point(26, 195);
			this->ConsultaEntitat->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaEntitat->Name = L"ConsultaEntitat";
			this->ConsultaEntitat->Size = System::Drawing::Size(134, 24);
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
			this->ConsultaEntitats->Location = System::Drawing::Point(26, 232);
			this->ConsultaEntitats->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaEntitats->Name = L"ConsultaEntitats";
			this->ConsultaEntitats->Size = System::Drawing::Size(134, 24);
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
			this->CreaEsdeveniment->Location = System::Drawing::Point(26, 307);
			this->CreaEsdeveniment->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->CreaEsdeveniment->Name = L"CreaEsdeveniment";
			this->CreaEsdeveniment->Size = System::Drawing::Size(134, 20);
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
			this->ModificaEntitatButton->Location = System::Drawing::Point(26, 268);
			this->ModificaEntitatButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificaEntitatButton->Name = L"ModificaEntitatButton";
			this->ModificaEntitatButton->Size = System::Drawing::Size(134, 24);
			this->ModificaEntitatButton->TabIndex = 7;
			this->ModificaEntitatButton->Text = L"Modifica Entitat";
			this->ModificaEntitatButton->UseVisualStyleBackColor = false;
			this->ModificaEntitatButton->Click += gcnew System::EventHandler(this, &Form1::ModificaEntitatButton_Click);
			// 
			// ConnectaCulturaTitle
			// 
			this->ConnectaCulturaTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConnectaCulturaTitle->Location = System::Drawing::Point(75, 55);
			this->ConnectaCulturaTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ConnectaCulturaTitle->Name = L"ConnectaCulturaTitle";
			this->ConnectaCulturaTitle->Size = System::Drawing::Size(215, 32);
			this->ConnectaCulturaTitle->TabIndex = 8;
			this->ConnectaCulturaTitle->Text = L"ConnectaCultura";
			this->ConnectaCulturaTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ConnectaCulturaTitle->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// ConsultaAjuntamentButton
			// 
			this->ConsultaAjuntamentButton->BackColor = System::Drawing::Color::DarkGray;
			this->ConsultaAjuntamentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConsultaAjuntamentButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ConsultaAjuntamentButton->Location = System::Drawing::Point(207, 307);
			this->ConsultaAjuntamentButton->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->ConsultaAjuntamentButton->Name = L"ConsultaAjuntamentButton";
			this->ConsultaAjuntamentButton->Size = System::Drawing::Size(134, 20);
			this->ConsultaAjuntamentButton->TabIndex = 9;
			this->ConsultaAjuntamentButton->Text = L"Consulta ajuntament";
			this->ConsultaAjuntamentButton->UseVisualStyleBackColor = false;
			this->ConsultaAjuntamentButton->Click += gcnew System::EventHandler(this, &Form1::ConsultaAjuntamentButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(400, 348);
			this->Controls->Add(this->ConsultaAjuntamentButton);
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
			this->Margin = System::Windows::Forms::Padding(2);
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
	private: System::Void ConsultaAjuntamentButton_Click(System::Object^ sender, System::EventArgs^ e) {
		application::FormConsultarAjuntament^ Consulta_Ajuntament = gcnew application::FormConsultarAjuntament("aj1");
		Consulta_Ajuntament->ShowDialog();
		Form1::ActualitzarForm1();
	}
};
}
