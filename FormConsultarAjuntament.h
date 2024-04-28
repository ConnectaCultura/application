#pragma once
#include "TxConsultaAjuntament.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormConsultarAjuntament
	/// </summary>
	public ref class FormConsultarAjuntament : public System::Windows::Forms::Form
	{
	public:
		FormConsultarAjuntament(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormConsultarAjuntament(System::String^ ca)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			_CorreuAjuntament = ca;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormConsultarAjuntament()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ CorreuBox;
	private: System::Windows::Forms::TextBox^ NPostalBox;
	private: System::Windows::Forms::TextBox^ TelefonBox;



	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ NumeroPostalLabel;
	private: System::Windows::Forms::Label^ TelefonLabel;
	private: System::String^ _CorreuAjuntament;




	private: System::Windows::Forms::Label^ NomLabel;

	protected:

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
			this->CorreuBox = (gcnew System::Windows::Forms::TextBox());
			this->NPostalBox = (gcnew System::Windows::Forms::TextBox());
			this->TelefonBox = (gcnew System::Windows::Forms::TextBox());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->NumeroPostalLabel = (gcnew System::Windows::Forms::Label());
			this->TelefonLabel = (gcnew System::Windows::Forms::Label());
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CorreuBox
			// 
			this->CorreuBox->Location = System::Drawing::Point(122, 63);
			this->CorreuBox->Margin = System::Windows::Forms::Padding(7);
			this->CorreuBox->Name = L"CorreuBox";
			this->CorreuBox->ReadOnly = true;
			this->CorreuBox->Size = System::Drawing::Size(100, 20);
			this->CorreuBox->TabIndex = 0;
			// 
			// NPostalBox
			// 
			this->NPostalBox->Location = System::Drawing::Point(122, 97);
			this->NPostalBox->Margin = System::Windows::Forms::Padding(7);
			this->NPostalBox->Name = L"NPostalBox";
			this->NPostalBox->ReadOnly = true;
			this->NPostalBox->Size = System::Drawing::Size(100, 20);
			this->NPostalBox->TabIndex = 1;
			// 
			// TelefonBox
			// 
			this->TelefonBox->Location = System::Drawing::Point(122, 131);
			this->TelefonBox->Margin = System::Windows::Forms::Padding(7);
			this->TelefonBox->Name = L"TelefonBox";
			this->TelefonBox->ReadOnly = true;
			this->TelefonBox->Size = System::Drawing::Size(100, 20);
			this->TelefonBox->TabIndex = 2;
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(29, 66);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(88, 13);
			this->CorreuLabel->TabIndex = 4;
			this->CorreuLabel->Text = L"CorreuElectronic:";
			// 
			// NumeroPostalLabel
			// 
			this->NumeroPostalLabel->AutoSize = true;
			this->NumeroPostalLabel->Location = System::Drawing::Point(29, 100);
			this->NumeroPostalLabel->Name = L"NumeroPostalLabel";
			this->NumeroPostalLabel->Size = System::Drawing::Size(76, 13);
			this->NumeroPostalLabel->TabIndex = 5;
			this->NumeroPostalLabel->Text = L"NumeroPostal:";
			// 
			// TelefonLabel
			// 
			this->TelefonLabel->AutoSize = true;
			this->TelefonLabel->Location = System::Drawing::Point(29, 134);
			this->TelefonLabel->Name = L"TelefonLabel";
			this->TelefonLabel->Size = System::Drawing::Size(89, 13);
			this->TelefonLabel->TabIndex = 6;
			this->TelefonLabel->Text = L"TelefonContacte:";
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomLabel->Location = System::Drawing::Point(104, 19);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(56, 24);
			this->NomLabel->TabIndex = 9;
			this->NomLabel->Text = L"Nom:";
			// 
			// FormConsultarAjuntament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->NomLabel);
			this->Controls->Add(this->TelefonLabel);
			this->Controls->Add(this->NumeroPostalLabel);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->TelefonBox);
			this->Controls->Add(this->NPostalBox);
			this->Controls->Add(this->CorreuBox);
			this->Name = L"FormConsultarAjuntament";
			this->Text = L"FormConsultarAjuntament";
			this->Load += gcnew System::EventHandler(this, &FormConsultarAjuntament::FormConsultarAjuntament_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormConsultarAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {
		CorreuBox->Text = _CorreuAjuntament;
		System::String^ correu = this->_CorreuAjuntament;
		TxConsultaAjuntament txCA(correu);
		try {
			txCA.executar();
			List<System::String^>^ sol = txCA.ObteResultat();
			NomLabel->Text = sol[0];
			NPostalBox->Text = sol[1];
			TelefonBox->Text = sol[2];
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("existent");
		}
		catch (std::runtime_error e) {
			MessageBox::Show(gcnew System::String(e.what()));
		}
	}

};
}
