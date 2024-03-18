#pragma once
#include "TxConsultaEntitats.h"
namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConsultaEntitats
	/// </summary>
	public ref class ConsultaEntitats : public System::Windows::Forms::Form
	{
	public:
		ConsultaEntitats(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dataGridViewEntitats = gcnew System::Windows::Forms::DataGridView();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConsultaEntitats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewEntitats;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ Menu;
	private: System::Windows::Forms::Button^ PantallaPrincipal;
	private: System::Windows::Forms::ComboBox^ Ajuntament;
	private: System::Windows::Forms::ComboBox^ Tipus;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewEntitats = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Menu = (gcnew System::Windows::Forms::Button());
			this->PantallaPrincipal = (gcnew System::Windows::Forms::Button());
			this->Ajuntament = (gcnew System::Windows::Forms::ComboBox());
			this->Tipus = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitats))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewEntitats
			// 
			this->dataGridViewEntitats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEntitats->Location = System::Drawing::Point(12, 59);
			this->dataGridViewEntitats->Name = L"dataGridViewEntitats";
			this->dataGridViewEntitats->Size = System::Drawing::Size(800, 327);
			this->dataGridViewEntitats->TabIndex = 0;
			this->dataGridViewEntitats->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaEntitats::dataGridViewEntitats_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Entitats";
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(737, 392);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 2;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &ConsultaEntitats::Back_Click);
			// 
			// Menu
			// 
			this->Menu->Location = System::Drawing::Point(13, 391);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(75, 23);
			this->Menu->TabIndex = 3;
			this->Menu->Text = L"Menu";
			this->Menu->UseVisualStyleBackColor = true;
			this->Menu->Click += gcnew System::EventHandler(this, &ConsultaEntitats::Menu_Click);
			// 
			// PantallaPrincipal
			// 
			this->PantallaPrincipal->Location = System::Drawing::Point(94, 392);
			this->PantallaPrincipal->Name = L"PantallaPrincipal";
			this->PantallaPrincipal->Size = System::Drawing::Size(111, 23);
			this->PantallaPrincipal->TabIndex = 4;
			this->PantallaPrincipal->Text = L"PantallaPrincipal";
			this->PantallaPrincipal->UseVisualStyleBackColor = true;
			this->PantallaPrincipal->Click += gcnew System::EventHandler(this, &ConsultaEntitats::PantallaPrincipal_Click);
			// 
			// Ajuntament
			// 
			this->Ajuntament->FormattingEnabled = true;
			this->Ajuntament->Location = System::Drawing::Point(485, 20);
			this->Ajuntament->Name = L"Ajuntament";
			this->Ajuntament->Size = System::Drawing::Size(121, 21);
			this->Ajuntament->TabIndex = 5;
			this->Ajuntament->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitats::Ajuntament_SelectedIndexChanged);
			// 
			// Tipus
			// 
			this->Tipus->FormattingEnabled = true;
			this->Tipus->Location = System::Drawing::Point(672, 21);
			this->Tipus->Name = L"Tipus";
			this->Tipus->Size = System::Drawing::Size(121, 21);
			this->Tipus->TabIndex = 6;
			this->Tipus->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaEntitats::Tipus_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(403, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Ajuntament:";
			this->label2->Click += gcnew System::EventHandler(this, &ConsultaEntitats::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(622, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Tipus:";
			this->label3->Click += gcnew System::EventHandler(this, &ConsultaEntitats::label3_Click);
			// 
			// ConsultaEntitats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 423);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Tipus);
			this->Controls->Add(this->Ajuntament);
			this->Controls->Add(this->PantallaPrincipal);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewEntitats);
			this->Name = L"ConsultaEntitats";
			this->Text = L"ConsultaEntitats";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitats::ConsultaEntitats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntitats))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEntitats_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaEntitats ent;

		ent.executar();

		dataGridViewEntitats.DataSource = ent.ObteResultat();
		//em dona error ahahahahhahah
		
		//si li puc posar un DataSource que sigui la Taula de entitats 
		//a lo millor no ens faria falta casi res de codi

		/*
		// Configura las columnas del DataGridView
		dataGridViewEntitats.AutoGenerateColumns = false;

		// Configura las columnas manualmente
		dataGridViewEntitats.Columns.Add("Nom", "Nom");
		dataGridViewEntitats.Columns.Add("Descripcio", "Descripcio");
		dataGridViewEntitats.Columns.Add("Tipus", "Tipus");

		// Asigna los noms de las propiedades a las columnas del DataGridView
		dataGridViewEntitats.Columns["Nom"].DataPropertyName = "Nom";
		dataGridViewEntitats.Columns["Descripcio"].DataPropertyName = "Descripcio";
		dataGridViewEntitats.Columns["Tipus"].DataPropertyName = "Tipus";
		*/
		//Quan faci la connecio crec que podre posarli de DataSource Entitat així que les columnes es crearien soles.
	}
	private: System::Void dataGridViewEntitats_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//quan cliqui en una row vull que carregui la pagina d'aquesta Entitat
		//Seria cridar la pantalla passarel·la entitat passant-li aquesta entitat (o la info)
	}

private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
	//L'envia a la pantalla anterior
}
private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void PantallaPrincipal_Click(System::Object^ sender, System::EventArgs^ e) {
	//Torna a la pantalla principal
}
private: System::Void Ajuntament_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Use Data Bound Items	
	//DataSource => Ajuntaments
	//Selected Value => Client.AjuntamentPrincipal
	//Codi
	/*
		O fas una nova crida al MySQL i nomes sel·lecciones els que tinguin el Ajuntament Tal
		O per exemple Tenint la llista del MySQL, fas un bucle per només mostrar les d'aquell Ajuntament

		while(i< length(LlistaEntitat)){
			LlistaEntitatA =
		}

		Crec que Sera més facil amb MySQL si sender es el nom del seleccionat. O si el puc obtenir d'alguna forma.
	*/
}
private: System::Void Tipus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	////Use Data Bound Items	
	//DataSource => Tipus     (Un Enum al MySQL)
	//Selected Value => None or " " (buit)
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
};
}
