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






	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ NumeroPostalLabel;
	private: System::Windows::Forms::Label^ TelefonLabel;
	private: System::String^ _CorreuAjuntament;




	private: System::Windows::Forms::Label^ NomLabel;
	private: System::Windows::Forms::Label^ TelefonLabelEdit;

	private: System::Windows::Forms::Label^ PostalLabelEdit;
	private: System::Windows::Forms::Label^ CorreuLabelEdit;

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
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->NumeroPostalLabel = (gcnew System::Windows::Forms::Label());
			this->TelefonLabel = (gcnew System::Windows::Forms::Label());
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->TelefonLabelEdit = (gcnew System::Windows::Forms::Label());
			this->PostalLabelEdit = (gcnew System::Windows::Forms::Label());
			this->CorreuLabelEdit = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			// TelefonLabelEdit
			// 
			this->TelefonLabelEdit->AutoSize = true;
			this->TelefonLabelEdit->Location = System::Drawing::Point(134, 134);
			this->TelefonLabelEdit->Name = L"TelefonLabelEdit";
			this->TelefonLabelEdit->Size = System::Drawing::Size(0, 13);
			this->TelefonLabelEdit->TabIndex = 12;
			// 
			// PostalLabelEdit
			// 
			this->PostalLabelEdit->AutoSize = true;
			this->PostalLabelEdit->Location = System::Drawing::Point(134, 100);
			this->PostalLabelEdit->Name = L"PostalLabelEdit";
			this->PostalLabelEdit->Size = System::Drawing::Size(0, 13);
			this->PostalLabelEdit->TabIndex = 11;
			// 
			// CorreuLabelEdit
			// 
			this->CorreuLabelEdit->AutoSize = true;
			this->CorreuLabelEdit->Location = System::Drawing::Point(134, 66);
			this->CorreuLabelEdit->Name = L"CorreuLabelEdit";
			this->CorreuLabelEdit->Size = System::Drawing::Size(0, 13);
			this->CorreuLabelEdit->TabIndex = 10;
			// 
			// FormConsultarAjuntament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->TelefonLabelEdit);
			this->Controls->Add(this->PostalLabelEdit);
			this->Controls->Add(this->CorreuLabelEdit);
			this->Controls->Add(this->NomLabel);
			this->Controls->Add(this->TelefonLabel);
			this->Controls->Add(this->NumeroPostalLabel);
			this->Controls->Add(this->CorreuLabel);
			this->Name = L"FormConsultarAjuntament";
			this->Text = L"FormConsultarAjuntament";
			this->Load += gcnew System::EventHandler(this, &FormConsultarAjuntament::FormConsultarAjuntament_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormConsultarAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {
		CorreuLabelEdit->Text = _CorreuAjuntament;
		System::String^ correu = this->_CorreuAjuntament;
		TxConsultaAjuntament txCA(correu);
		try {
			txCA.executar();
			List<System::String^>^ sol = txCA.ObteResultat();
			NomLabel->Text = sol[0];
			PostalLabelEdit->Text = sol[1];
			TelefonLabelEdit->Text = sol[2];
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
