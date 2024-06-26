#pragma once
#include "TxCancelaCompra.h"
#include "TxComprobacontrasenya.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CancelaCompraForm
	/// </summary>
	public ref class CancelaCompraForm : public System::Windows::Forms::Form
	{
	public:
		CancelaCompraForm(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: Add the constructor code here
			//
		}
		CancelaCompraForm(System::String^ correu, System::String^ nom, System::String^ datainici, System::String^ datafi)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: Add the constructor code here
			//
			_correuCiutada = correu;
			_nomEsdev = nom;
			_dataInici = datainici;
			_dataFi = datafi;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CancelaCompraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ InfoLabel;
	protected:
	private:
		System::String^ _correuCiutada;
		System::String^ _nomEsdev;
		System::String^ _dataInici;
		System::String^ _dataFi;

	private: System::Windows::Forms::Button^ ConfirmarButton;
	private: System::Windows::Forms::Label^ InfoLabel2;
	private: System::Windows::Forms::TextBox^ ContrasenyaBox;






	private: System::Windows::Forms::Button^ buttonTorna;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CancelaCompraForm::typeid));
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->ConfirmarButton = (gcnew System::Windows::Forms::Button());
			this->InfoLabel2 = (gcnew System::Windows::Forms::Label());
			this->ContrasenyaBox = (gcnew System::Windows::Forms::TextBox());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoLabel->Location = System::Drawing::Point(102, 31);
			this->InfoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(538, 29);
			this->InfoLabel->TabIndex = 0;
			this->InfoLabel->Text = L"Estas segur que vol cancelar la teva compra\?";
			// 
			// ConfirmarButton
			// 
			this->ConfirmarButton->BackColor = System::Drawing::Color::OrangeRed;
			this->ConfirmarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmarButton->ForeColor = System::Drawing::Color::Transparent;
			this->ConfirmarButton->Location = System::Drawing::Point(323, 225);
			this->ConfirmarButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ConfirmarButton->Name = L"ConfirmarButton";
			this->ConfirmarButton->Size = System::Drawing::Size(112, 35);
			this->ConfirmarButton->TabIndex = 1;
			this->ConfirmarButton->Text = L"Confirmar";
			this->ConfirmarButton->UseVisualStyleBackColor = false;
			this->ConfirmarButton->Click += gcnew System::EventHandler(this, &CancelaCompraForm::ConfirmarButton_Click);
			// 
			// InfoLabel2
			// 
			this->InfoLabel2->AutoSize = true;
			this->InfoLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoLabel2->Location = System::Drawing::Point(184, 80);
			this->InfoLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->InfoLabel2->Name = L"InfoLabel2";
			this->InfoLabel2->Size = System::Drawing::Size(365, 29);
			this->InfoLabel2->TabIndex = 2;
			this->InfoLabel2->Text = L"Introdueix la teva contrasenya.";
			// 
			// ContrasenyaBox
			// 
			this->ContrasenyaBox->Location = System::Drawing::Point(303, 145);
			this->ContrasenyaBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ContrasenyaBox->Name = L"ContrasenyaBox";
			this->ContrasenyaBox->PasswordChar = '*';
			this->ContrasenyaBox->Size = System::Drawing::Size(148, 26);
			this->ContrasenyaBox->TabIndex = 3;
			this->ContrasenyaBox->TextChanged += gcnew System::EventHandler(this, &CancelaCompraForm::ContrasenyaBox_TextChanged);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(27, 225);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(112, 35);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &CancelaCompraForm::buttonTorna_Click);
			// 
			// CancelaCompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 279);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->ContrasenyaBox);
			this->Controls->Add(this->InfoLabel2);
			this->Controls->Add(this->ConfirmarButton);
			this->Controls->Add(this->InfoLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"CancelaCompraForm";
			this->Text = L"Cancelar Compra";
			this->Load += gcnew System::EventHandler(this, &CancelaCompraForm::CancelaCompraForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelaCompraForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ConfirmarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TxComprobacontrasenya co(ContrasenyaBox->Text);
		try {
			co.executar();
			TxCancelaCompra cancelacompra(_correuCiutada, _nomEsdev, _dataInici, _dataFi);
			try {
				cancelacompra.executar();
				MessageBox::Show("Se t'han restat els punts de la compra i retornat els diners");
				this->Close();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show("Error al cancelar la compra");
			}
			catch (std::runtime_error e) {
				MessageBox::Show(gcnew System::String(e.what()));
			}
		}
		catch (std::runtime_error e) {
			MessageBox::Show(gcnew System::String(e.what()));
		}
		


	}

	private: System::Void ContrasenyaBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
