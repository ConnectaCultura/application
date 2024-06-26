#pragma once
#include "FormAltaEsdeveniment.h"
#include "LogInForm.h"
#include "Sessio.h"
#include "AltaEntitatForm.h"
#include "BaixaEntitatForm.h"
#include "RegistreCiutadaForm.h"
#include "ConsultaEntitatForm.h"
#include "ConsultaEntitats.h"
#include "AltaAjuntamentForm.h"
#include "ModificarEntitatForm.h"
#include "BaixaCiutadaForm.h"
#include "FormConsultarAjuntament.h"
#include "VeurePerfilForm.h"
#include "ConsultarEsdevenimentsForm.h"
#include "ComprarEntradaForm.h"
#include "CancelaCompraForm.h"
#include "ConsultaCompresForm.h"
#include "ConsultaAjuntamentsForm.h"


namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PantallaPrincipal
	/// </summary>
	public ref class PantallaPrincipal : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized; // Maximiza la ventana
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;   // Elimina los bordes de la ventana
			logIn->Visible = true;
			logOut->Visible = false;
			altaEntitat->Visible = false;
			EsborrarEntitat->Visible = false;
			altaAjuntament->Visible = false;
			CreaEsdeveniment->Visible = false;
			ModificaEntitatButton->Visible = false;
			esborrarUsuari->Visible = false;
			veurePerfil->Visible = false;
			ConsultaCompresButton->Visible = true;
		}
		void ActualitzarPantallaPrincipal() {
			Sessio^ s = Sessio::getInstance();
			if (s->obteUsuari() == nullptr) {
				logIn->Visible = true;
				registreCiutada->Visible = true;
				logOut->Visible = false;
				altaEntitat->Visible = false;
				EsborrarEntitat->Visible = false;
				altaAjuntament->Visible = false;
				ModificaEntitatButton->Visible = false;
				esborrarUsuari->Visible = false;
				veurePerfil->Visible = false;
				CreaEsdeveniment->Visible = false;
			}
			else {
				logIn->Visible = false;
				registreCiutada->Visible = false;
				logOut->Visible = true;
				if (s->obteUsuari()->obteTipus() == "ajuntament") {
					altaEntitat->Visible = true;
					CreaEsdeveniment->Visible = false;
					altaAjuntament->Visible = false;
					veurePerfil->Visible = true;
				}
				else if (s->obteUsuari()->obteTipus() == "entitat") {
					EsborrarEntitat->Visible = true;
					altaAjuntament->Visible = false;
					CreaEsdeveniment->Visible = true;
					ModificaEntitatButton->Visible = true;
					veurePerfil->Visible = true;
				}
				else if (s->obteUsuari()->obteTipus() == "administrador") {
					altaAjuntament->Visible = true;
				}
				else {
					esborrarUsuari->Visible = true;
					veurePerfil->Visible = true;
				}
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PantallaPrincipal()
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

	private: System::Windows::Forms::Button^ ConsultaEntitats;
	private: System::Windows::Forms::Button^ altaAjuntament;


	private: System::Windows::Forms::Button^ CreaEsdeveniment;
	private: System::Windows::Forms::Button^ ModificaEntitatButton;

	private: System::Windows::Forms::Button^ esborrarUsuari;
	private: System::Windows::Forms::Button^ ConsultaAjuntamentButton;
	private: System::Windows::Forms::Button^ veurePerfil;
	private: System::Windows::Forms::Button^ consultarEsdeveniments;
	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::Button^ ConsultaCompresButton;
	private: System::Windows::Forms::Panel^ panel_lateral;

	private: System::Windows::Forms::Panel^ margen;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel_contenedor;




















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
			this->ConsultaEntitats = (gcnew System::Windows::Forms::Button());
			this->altaAjuntament = (gcnew System::Windows::Forms::Button());
			this->CreaEsdeveniment = (gcnew System::Windows::Forms::Button());
			this->ModificaEntitatButton = (gcnew System::Windows::Forms::Button());
			this->esborrarUsuari = (gcnew System::Windows::Forms::Button());
			this->ConsultaAjuntamentButton = (gcnew System::Windows::Forms::Button());
			this->veurePerfil = (gcnew System::Windows::Forms::Button());
			this->consultarEsdeveniments = (gcnew System::Windows::Forms::Button());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->ConsultaCompresButton = (gcnew System::Windows::Forms::Button());
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->margen->SuspendLayout();
			this->SuspendLayout();
			// 
			// logIn
			// 
			this->logIn->BackColor = System::Drawing::Color::OrangeRed;
			this->logIn->Dock = System::Windows::Forms::DockStyle::Top;
			this->logIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logIn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logIn->Location = System::Drawing::Point(0, 104);
			this->logIn->Name = L"logIn";
			this->logIn->Size = System::Drawing::Size(522, 52);
			this->logIn->TabIndex = 0;
			this->logIn->Text = L"Iniciar sessio";
			this->logIn->UseVisualStyleBackColor = false;
			this->logIn->Click += gcnew System::EventHandler(this, &PantallaPrincipal::logIn_Click);
			// 
			// logOut
			// 
			this->logOut->BackColor = System::Drawing::Color::OrangeRed;
			this->logOut->Dock = System::Windows::Forms::DockStyle::Top;
			this->logOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOut->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logOut->Location = System::Drawing::Point(0, 52);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(522, 52);
			this->logOut->TabIndex = 1;
			this->logOut->Text = L"Tancar sessio";
			this->logOut->UseVisualStyleBackColor = false;
			this->logOut->Click += gcnew System::EventHandler(this, &PantallaPrincipal::logOut_Click);
			// 
			// altaEntitat
			// 
			this->altaEntitat->BackColor = System::Drawing::Color::DarkGray;
			this->altaEntitat->Dock = System::Windows::Forms::DockStyle::Top;
			this->altaEntitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->altaEntitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->altaEntitat->Location = System::Drawing::Point(0, 664);
			this->altaEntitat->Margin = System::Windows::Forms::Padding(6);
			this->altaEntitat->Name = L"altaEntitat";
			this->altaEntitat->Size = System::Drawing::Size(522, 49);
			this->altaEntitat->TabIndex = 2;
			this->altaEntitat->Text = L"Donar d\'alta entitat";
			this->altaEntitat->UseVisualStyleBackColor = false;
			this->altaEntitat->Click += gcnew System::EventHandler(this, &PantallaPrincipal::altaEntitat_Click);
			// 
			// EsborrarEntitat
			// 
			this->EsborrarEntitat->BackColor = System::Drawing::Color::DarkGray;
			this->EsborrarEntitat->Dock = System::Windows::Forms::DockStyle::Top;
			this->EsborrarEntitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EsborrarEntitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->EsborrarEntitat->Location = System::Drawing::Point(0, 49);
			this->EsborrarEntitat->Margin = System::Windows::Forms::Padding(6);
			this->EsborrarEntitat->Name = L"EsborrarEntitat";
			this->EsborrarEntitat->Size = System::Drawing::Size(522, 49);
			this->EsborrarEntitat->TabIndex = 3;
			this->EsborrarEntitat->Text = L"Esborrar entitat";
			this->EsborrarEntitat->UseVisualStyleBackColor = false;
			this->EsborrarEntitat->Click += gcnew System::EventHandler(this, &PantallaPrincipal::EsborrarEntitat_Click);
			// 
			// registreCiutada
			// 
			this->registreCiutada->BackColor = System::Drawing::Color::OrangeRed;
			this->registreCiutada->Dock = System::Windows::Forms::DockStyle::Top;
			this->registreCiutada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registreCiutada->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->registreCiutada->Location = System::Drawing::Point(0, 0);
			this->registreCiutada->Name = L"registreCiutada";
			this->registreCiutada->Size = System::Drawing::Size(522, 52);
			this->registreCiutada->TabIndex = 4;
			this->registreCiutada->Text = L"Registrar-se";
			this->registreCiutada->UseVisualStyleBackColor = false;
			this->registreCiutada->Click += gcnew System::EventHandler(this, &PantallaPrincipal::registreCiutada_Click);
			// 
			// ConsultaEntitats
			// 
			this->ConsultaEntitats->BackColor = System::Drawing::Color::DarkGray;
			this->ConsultaEntitats->Dock = System::Windows::Forms::DockStyle::Top;
			this->ConsultaEntitats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultaEntitats->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ConsultaEntitats->Location = System::Drawing::Point(0, 514);
			this->ConsultaEntitats->Margin = System::Windows::Forms::Padding(6);
			this->ConsultaEntitats->Name = L"ConsultaEntitats";
			this->ConsultaEntitats->Size = System::Drawing::Size(522, 49);
			this->ConsultaEntitats->TabIndex = 6;
			this->ConsultaEntitats->Text = L"Consultar entitats";
			this->ConsultaEntitats->UseVisualStyleBackColor = false;
			this->ConsultaEntitats->Click += gcnew System::EventHandler(this, &PantallaPrincipal::ConsultaEntitats_Click);
			// 
			// altaAjuntament
			// 
			this->altaAjuntament->BackColor = System::Drawing::Color::DarkGray;
			this->altaAjuntament->Dock = System::Windows::Forms::DockStyle::Top;
			this->altaAjuntament->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->altaAjuntament->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->altaAjuntament->Location = System::Drawing::Point(0, 563);
			this->altaAjuntament->Margin = System::Windows::Forms::Padding(6, 3, 6, 3);
			this->altaAjuntament->Name = L"altaAjuntament";
			this->altaAjuntament->Size = System::Drawing::Size(522, 46);
			this->altaAjuntament->TabIndex = 7;
			this->altaAjuntament->Text = L"Donar d\'alta ajuntament";
			this->altaAjuntament->UseVisualStyleBackColor = false;
			this->altaAjuntament->Click += gcnew System::EventHandler(this, &PantallaPrincipal::altaAjuntament_Click);
			// 
			// CreaEsdeveniment
			// 
			this->CreaEsdeveniment->BackColor = System::Drawing::Color::DarkGray;
			this->CreaEsdeveniment->Dock = System::Windows::Forms::DockStyle::Top;
			this->CreaEsdeveniment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreaEsdeveniment->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CreaEsdeveniment->Location = System::Drawing::Point(0, 419);
			this->CreaEsdeveniment->Margin = System::Windows::Forms::Padding(6);
			this->CreaEsdeveniment->Name = L"CreaEsdeveniment";
			this->CreaEsdeveniment->Size = System::Drawing::Size(522, 49);
			this->CreaEsdeveniment->TabIndex = 7;
			this->CreaEsdeveniment->Text = L"Crear esdeveniment";
			this->CreaEsdeveniment->UseVisualStyleBackColor = false;
			this->CreaEsdeveniment->Click += gcnew System::EventHandler(this, &PantallaPrincipal::CreaEsdeveniment_Click);
			// 
			// ModificaEntitatButton
			// 
			this->ModificaEntitatButton->BackColor = System::Drawing::Color::DarkGray;
			this->ModificaEntitatButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->ModificaEntitatButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ModificaEntitatButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ModificaEntitatButton->Location = System::Drawing::Point(0, 0);
			this->ModificaEntitatButton->Margin = System::Windows::Forms::Padding(6);
			this->ModificaEntitatButton->Name = L"ModificaEntitatButton";
			this->ModificaEntitatButton->Size = System::Drawing::Size(522, 49);
			this->ModificaEntitatButton->TabIndex = 7;
			this->ModificaEntitatButton->Text = L"Modifica entitat";
			this->ModificaEntitatButton->UseVisualStyleBackColor = false;
			this->ModificaEntitatButton->Click += gcnew System::EventHandler(this, &PantallaPrincipal::ModificaEntitatButton_Click);
			// 
			// esborrarUsuari
			// 
			this->esborrarUsuari->BackColor = System::Drawing::Color::DarkGray;
			this->esborrarUsuari->Dock = System::Windows::Forms::DockStyle::Top;
			this->esborrarUsuari->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esborrarUsuari->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->esborrarUsuari->Location = System::Drawing::Point(0, 468);
			this->esborrarUsuari->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->esborrarUsuari->Name = L"esborrarUsuari";
			this->esborrarUsuari->Size = System::Drawing::Size(522, 46);
			this->esborrarUsuari->TabIndex = 9;
			this->esborrarUsuari->Text = L"Esborrar usuari";
			this->esborrarUsuari->UseVisualStyleBackColor = false;
			this->esborrarUsuari->Click += gcnew System::EventHandler(this, &PantallaPrincipal::esborrarUsuari_Click);
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
			this->ConsultaAjuntamentButton->Click += gcnew System::EventHandler(this, &PantallaPrincipal::ConsultaAjuntamentButton_Click);
			// 
			// veurePerfil
			// 
			this->veurePerfil->BackColor = System::Drawing::Color::Snow;
			this->veurePerfil->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->veurePerfil->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->veurePerfil->Location = System::Drawing::Point(14, 11);
			this->veurePerfil->Name = L"veurePerfil";
			this->veurePerfil->Size = System::Drawing::Size(178, 46);
			this->veurePerfil->TabIndex = 9;
			this->veurePerfil->Text = L"Veure perfil";
			this->veurePerfil->UseVisualStyleBackColor = false;
			this->veurePerfil->Click += gcnew System::EventHandler(this, &PantallaPrincipal::veurePerfil_Click);
			// 
			// consultarEsdeveniments
			// 
			this->consultarEsdeveniments->BackColor = System::Drawing::Color::DarkGray;
			this->consultarEsdeveniments->Dock = System::Windows::Forms::DockStyle::Top;
			this->consultarEsdeveniments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->consultarEsdeveniments->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->consultarEsdeveniments->Location = System::Drawing::Point(0, 713);
			this->consultarEsdeveniments->Margin = System::Windows::Forms::Padding(6);
			this->consultarEsdeveniments->Name = L"consultarEsdeveniments";
			this->consultarEsdeveniments->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->consultarEsdeveniments->Size = System::Drawing::Size(522, 49);
			this->consultarEsdeveniments->TabIndex = 10;
			this->consultarEsdeveniments->Text = L"Consultar esdeveniments";
			this->consultarEsdeveniments->UseVisualStyleBackColor = false;
			this->consultarEsdeveniments->Click += gcnew System::EventHandler(this, &PantallaPrincipal::consultarEsdeveniments_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(0, 157);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(522, 43);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Surt";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &PantallaPrincipal::buttonTorna_Click);
			// 
			// ConsultaCompresButton
			// 
			this->ConsultaCompresButton->BackColor = System::Drawing::Color::DarkGray;
			this->ConsultaCompresButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->ConsultaCompresButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConsultaCompresButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ConsultaCompresButton->Location = System::Drawing::Point(0, 609);
			this->ConsultaCompresButton->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->ConsultaCompresButton->Name = L"ConsultaCompresButton";
			this->ConsultaCompresButton->Size = System::Drawing::Size(522, 55);
			this->ConsultaCompresButton->TabIndex = 11;
			this->ConsultaCompresButton->Text = L"Consulta ajuntaments";
			this->ConsultaCompresButton->UseVisualStyleBackColor = false;
			this->ConsultaCompresButton->Click += gcnew System::EventHandler(this, &PantallaPrincipal::ConsultaCompresButton_Click);
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel_lateral->Controls->Add(this->panel1);
			this->panel_lateral->Controls->Add(this->panel4);
			this->panel_lateral->Controls->Add(this->consultarEsdeveniments);
			this->panel_lateral->Controls->Add(this->altaEntitat);
			this->panel_lateral->Controls->Add(this->ConsultaCompresButton);
			this->panel_lateral->Controls->Add(this->altaAjuntament);
			this->panel_lateral->Controls->Add(this->ConsultaEntitats);
			this->panel_lateral->Controls->Add(this->esborrarUsuari);
			this->panel_lateral->Controls->Add(this->CreaEsdeveniment);
			this->panel_lateral->Controls->Add(this->panel3);
			this->panel_lateral->Controls->Add(this->panel2);
			this->panel_lateral->Controls->Add(this->margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(522, 1106);
			this->panel_lateral->TabIndex = 19;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->logIn);
			this->panel1->Controls->Add(this->logOut);
			this->panel1->Controls->Add(this->buttonTorna);
			this->panel1->Controls->Add(this->registreCiutada);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 980);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(522, 200);
			this->panel1->TabIndex = 13;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->EsborrarEntitat);
			this->panel4->Controls->Add(this->ModificaEntitatButton);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 762);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(522, 218);
			this->panel4->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 354);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(522, 65);
			this->panel3->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 126);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(522, 228);
			this->panel2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Connecta Cultura";
			this->label1->Click += gcnew System::EventHandler(this, &PantallaPrincipal::label1_Click_1);
			// 
			// margen
			// 
			this->margen->Controls->Add(this->veurePerfil);
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(522, 126);
			this->margen->TabIndex = 0;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(522, 0);
			this->panel_contenedor->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(1406, 1106);
			this->panel_contenedor->TabIndex = 20;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PantallaPrincipal::panel1_Paint_1);
			// 
			// PantallaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1928, 1106);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PantallaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ConnectaCultura";
			this->Load += gcnew System::EventHandler(this, &PantallaPrincipal::PantallaPrincipal_Load);
			this->panel_lateral->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->margen->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class T>
		void ObrirForm(T FormX) {
			if (this->panel_contenedor->Controls->Count > 0)
				this->panel_contenedor->Controls->RemoveAt(0);
			FormX->TopLevel = false;
			FormX->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(FormX);
			this->panel_contenedor->Tag = FormX;
			FormX->Show();
		}

	private: System::Void logIn_Click(System::Object^ sender, System::EventArgs^ e) {
		application::LogInForm^ login = gcnew application::LogInForm();
		login->ShowDialog();
		Sessio^ s = Sessio::getInstance();
		/*if (s->obteUsuari() != nullptr) {
			logIn->Visible = false;
			logOut->Visible = true;
		}*/
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void logOut_Click(System::Object^ sender, System::EventArgs^ e) {
		Sessio^ s = Sessio::getInstance();
		s->tancaSessio();
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void altaEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::AltaEntitatForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();

	}
	private: System::Void EsborrarEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::BaixaEntitatForm^ baixaE = gcnew application::BaixaEntitatForm();
		baixaE->ShowDialog();
		Sessio^ s = Sessio::getInstance();
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void registreCiutada_Click(System::Object^ sender, System::EventArgs^ e) {
		application::RegistreCiutadaForm^ registre = gcnew application::RegistreCiutadaForm();
		registre->ShowDialog();
		Sessio^ s = Sessio::getInstance();
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void ConsultaEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::ConsultaEntitatForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void ConsultaEntitats_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::ConsultaEntitats);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}

	private: System::Void CreaEsdeveniment_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::FormAltaEsdeveniment);
	}

	private: System::Void ModificaEntitatButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::ModificarEntitatForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}

	private: System::Void PantallaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void esborrarUsuari_Click(System::Object^ sender, System::EventArgs^ e) {
		application::BaixaCiutadaForm^ baixa = gcnew application::BaixaCiutadaForm();
		baixa->ShowDialog();
		Sessio^ s = Sessio::getInstance();
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void ConsultaAjuntamentButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::FormConsultarAjuntament("aj1"));
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void veurePerfil_Click(System::Object^ sender, System::EventArgs^ e) {
		Sessio^ s = Sessio::getInstance();
		if (s->obteUsuari()->obteTipus() == "ciutada") {
			this->ObrirForm(gcnew application::VeurePerfilForm);
		}
		else if (s->obteUsuari()->obteTipus() == "entitat") {
			this->ObrirForm(gcnew application::ConsultaEntitatForm(s->obteUsuari()->obteCorreuElectronic()));
		}
		else if (s->obteUsuari()->obteTipus() == "ajuntament") {
			this->ObrirForm(gcnew application::FormConsultarAjuntament(s->obteUsuari()->obteCorreuElectronic()));
		}
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}

		   //		application::VeurePerfilForm^ Veure_Perfil = gcnew application::VeurePerfilForm();
		   //		   Veure_Perfil->ShowDialog();
	private: System::Void consultarEsdeveniments_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::ConsultarEsdevenimentsForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CompraEntradaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::ComprarEntradaForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void CancelaCompraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::CancelaCompraForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void altaAjuntament_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ObrirForm(gcnew application::AltaAjuntamentForm);
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ConsultaCompresButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Sessio^ s = Sessio::getInstance();
		this->ObrirForm(gcnew application::ConsultaAjuntamentsForm());
		PantallaPrincipal::ActualitzarPantallaPrincipal();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}