#pragma once
#include "TxCancelaEsdeveniment.h"
#include"TxComprobacontrasenya.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CancelarEsdevenimentForm
	/// </summary>
	public ref class CancelarEsdevenimentForm : public System::Windows::Forms::Form
	{
	public:
		CancelarEsdevenimentForm(String^ nom_esdev, String^ data_ini, String^ data_fi)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
			this->nom_esdev = nom_esdev;
			this->data_ini = data_ini;
			this->data_fi = data_fi;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CancelarEsdevenimentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Acceptar_button;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Contrasenya_box;

	private:
		String^ nom_esdev;
		String^ data_ini;
		String^ data_fi;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CancelarEsdevenimentForm::typeid));
			this->Acceptar_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Contrasenya_box = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Acceptar_button
			// 
			this->Acceptar_button->BackColor = System::Drawing::Color::OrangeRed;
			this->Acceptar_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Acceptar_button->ForeColor = System::Drawing::Color::Transparent;
			this->Acceptar_button->Location = System::Drawing::Point(272, 151);
			this->Acceptar_button->Name = L"Acceptar_button";
			this->Acceptar_button->Size = System::Drawing::Size(95, 28);
			this->Acceptar_button->TabIndex = 0;
			this->Acceptar_button->Text = L"Confirmar";
			this->Acceptar_button->UseVisualStyleBackColor = false;
			this->Acceptar_button->Click += gcnew System::EventHandler(this, &CancelarEsdevenimentForm::Acceptar_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Contrasenya:";
			// 
			// Contrasenya_box
			// 
			this->Contrasenya_box->Location = System::Drawing::Point(169, 82);
			this->Contrasenya_box->Name = L"Contrasenya_box";
			this->Contrasenya_box->PasswordChar = '*';
			this->Contrasenya_box->Size = System::Drawing::Size(127, 22);
			this->Contrasenya_box->TabIndex = 2;
			// 
			// CancelarEsdevenimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 195);
			this->Controls->Add(this->Contrasenya_box);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Acceptar_button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CancelarEsdevenimentForm";
			this->Text = L"Cancelar Esdeveniment";
			this->Load += gcnew System::EventHandler(this, &CancelarEsdevenimentForm::CancelarEsdevenimentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelarEsdevenimentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Acceptar_button_Click(System::Object^ sender, System::EventArgs^ e) {
		TxComprobacontrasenya cc(Contrasenya_box->Text);
		try {
			cc.executar();
			DateTime iniciDateTime = DateTime::Parse(data_ini);
			System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
			TxCancelaEsdeveniment tx_Ce(nom_esdev, data_ini, data_fi);
			try {
				tx_Ce.executar();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
			}
			this->Close();
		}
		catch (std::runtime_error e) {
			MessageBox::Show("La contrasenya no es correcta no s'ha cancelat l'esdeveniment");
		}

	}
};
}

