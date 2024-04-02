#pragma once

#include "LogInForm.h"
#include "Sessio.h"
#include "AltaEntitatForm.h"
#include "BaixaEntitatForm.h"
#include "RegistreCiutadaForm.h"
#include "ConsultaEntitatForm.h"

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

		}
		void ActualitzarForm1() {
			Sessio^ s = Sessio::getInstance();
			if (s->obteUsuari() == nullptr) {
				logIn->Visible = true;
				registreCiutada->Visible = true;
				logOut->Visible = false;
				altaEntitat->Visible = false;
				EsborrarEntitat->Visible = false;
			}
			else {
				logIn->Visible = false;
				registreCiutada->Visible = false;
				logOut->Visible = true;
				if (s->obteUsuari()->obteTipus() == "ajuntament") {
					altaEntitat->Visible = true;
				}
				else if (s->obteUsuari()->obteTipus() == "entitat") {
					EsborrarEntitat->Visible = true;
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



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->SuspendLayout();
			// 
			// logIn
			// 
			this->logIn->BackColor = System::Drawing::Color::OrangeRed;
			this->logIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logIn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logIn->Location = System::Drawing::Point(202, 17);
			this->logIn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logIn->Name = L"logIn";
			this->logIn->Size = System::Drawing::Size(126, 34);
			this->logIn->TabIndex = 0;
			this->logIn->Text = L"iniciar sessió";
			this->logIn->UseVisualStyleBackColor = false;
			this->logIn->Click += gcnew System::EventHandler(this, &Form1::logIn_Click);
			// 
			// logOut
			// 
			this->logOut->BackColor = System::Drawing::Color::OrangeRed;
			this->logOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOut->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logOut->Location = System::Drawing::Point(202, 17);
			this->logOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(126, 34);
			this->logOut->TabIndex = 1;
			this->logOut->Text = L"tancar sessió";
			this->logOut->UseVisualStyleBackColor = false;
			this->logOut->Click += gcnew System::EventHandler(this, &Form1::logOut_Click);
			// 
			// altaEntitat
			// 
			this->altaEntitat->BackColor = System::Drawing::Color::DarkGray;
			this->altaEntitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->altaEntitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->altaEntitat->Location = System::Drawing::Point(35, 85);
			this->altaEntitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->altaEntitat->Name = L"altaEntitat";
			this->altaEntitat->Size = System::Drawing::Size(167, 33);
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
			this->EsborrarEntitat->Location = System::Drawing::Point(35, 134);
			this->EsborrarEntitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EsborrarEntitat->Name = L"EsborrarEntitat";
			this->EsborrarEntitat->Size = System::Drawing::Size(167, 30);
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
			this->registreCiutada->Location = System::Drawing::Point(35, 17);
			this->registreCiutada->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registreCiutada->Name = L"registreCiutada";
			this->registreCiutada->Size = System::Drawing::Size(128, 34);
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
			this->ConsultaEntitat->Location = System::Drawing::Point(35, 180);
			this->ConsultaEntitat->Name = L"ConsultaEntitat";
			this->ConsultaEntitat->Size = System::Drawing::Size(167, 30);
			this->ConsultaEntitat->TabIndex = 5;
			this->ConsultaEntitat->Text = L"Consultar entitat";
			this->ConsultaEntitat->UseVisualStyleBackColor = false;
			this->ConsultaEntitat->Click += gcnew System::EventHandler(this, &Form1::ConsultaEntitat_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(353, 293);
			this->Controls->Add(this->ConsultaEntitat);
			this->Controls->Add(this->registreCiutada);
			this->Controls->Add(this->EsborrarEntitat);
			this->Controls->Add(this->altaEntitat);
			this->Controls->Add(this->logOut);
			this->Controls->Add(this->logIn);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
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
};
}
