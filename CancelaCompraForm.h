#pragma once
#include "TxCancelaCompra.h"

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
			//
			//TODO: Add the constructor code here
			//
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

	private: System::Windows::Forms::Button^ ConfirmarButton;
	private: System::Windows::Forms::Label^ InfoLabel2;
	private: System::Windows::Forms::TextBox^ ContrasenyaBox;


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
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->ConfirmarButton = (gcnew System::Windows::Forms::Button());
			this->InfoLabel2 = (gcnew System::Windows::Forms::Label());
			this->ContrasenyaBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoLabel->Location = System::Drawing::Point(68, 20);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(372, 20);
			this->InfoLabel->TabIndex = 0;
			this->InfoLabel->Text = L"Estas segur que vol cancelar la teva compra\?";
			// 
			// ConfirmarButton
			// 
			this->ConfirmarButton->Location = System::Drawing::Point(215, 146);
			this->ConfirmarButton->Name = L"ConfirmarButton";
			this->ConfirmarButton->Size = System::Drawing::Size(75, 23);
			this->ConfirmarButton->TabIndex = 1;
			this->ConfirmarButton->Text = L"Confirmar";
			this->ConfirmarButton->UseVisualStyleBackColor = true;
			this->ConfirmarButton->Click += gcnew System::EventHandler(this, &CancelaCompraForm::ConfirmarButton_Click);
			// 
			// InfoLabel2
			// 
			this->InfoLabel2->AutoSize = true;
			this->InfoLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoLabel2->Location = System::Drawing::Point(123, 52);
			this->InfoLabel2->Name = L"InfoLabel2";
			this->InfoLabel2->Size = System::Drawing::Size(255, 20);
			this->InfoLabel2->TabIndex = 2;
			this->InfoLabel2->Text = L"Introdueix la teva contrasenya.";
			// 
			// ContrasenyaBox
			// 
			this->ContrasenyaBox->Location = System::Drawing::Point(202, 94);
			this->ContrasenyaBox->Name = L"ContrasenyaBox";
			this->ContrasenyaBox->Size = System::Drawing::Size(100, 20);
			this->ContrasenyaBox->TabIndex = 3;
			this->ContrasenyaBox->TextChanged += gcnew System::EventHandler(this, &CancelaCompraForm::ContrasenyaBox_TextChanged);
			// 
			// CancelaCompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 181);
			this->Controls->Add(this->ContrasenyaBox);
			this->Controls->Add(this->InfoLabel2);
			this->Controls->Add(this->ConfirmarButton);
			this->Controls->Add(this->InfoLabel);
			this->Name = L"CancelaCompraForm";
			this->Text = L"CancelaCompraForm";
			this->Load += gcnew System::EventHandler(this, &CancelaCompraForm::CancelaCompraForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelaCompraForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ConfirmarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//Necesito una forma per pasar-li la PassarelaCompra
		TxCancelaCompra tc(ContrasenyaBox->Text/*, Compra*/);
		tc.executar();
	}
	private: System::Void ContrasenyaBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
