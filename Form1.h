#pragma once
#include "ConsultaEntitats.h"
#include "AltaEntitat.h"
#include "FormBaixaEntitat.h"

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ AltaEntitat;
	private: System::Windows::Forms::Button^ ConsultaEntitats;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AltaEntitat = (gcnew System::Windows::Forms::Button());
			this->ConsultaEntitats = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 21);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Esborrar entitat";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::EsborrarEntitat_Click);
			// 
			// AltaEntitat
			// 
			this->AltaEntitat->Location = System::Drawing::Point(66, 86);
			this->AltaEntitat->Name = L"AltaEntitat";
			this->AltaEntitat->Size = System::Drawing::Size(154, 23);
			this->AltaEntitat->TabIndex = 1;
			this->AltaEntitat->Text = L"AltaEntitat";
			this->AltaEntitat->UseVisualStyleBackColor = true;
			this->AltaEntitat->Click += gcnew System::EventHandler(this, &Form1::AltaEntitat_Click);
			// 
			// ConsultaEntitats
			// 
			this->ConsultaEntitats->Location = System::Drawing::Point(66, 143);
			this->ConsultaEntitats->Name = L"ConsultaEntitats";
			this->ConsultaEntitats->Size = System::Drawing::Size(154, 23);
			this->ConsultaEntitats->TabIndex = 2;
			this->ConsultaEntitats->Text = L"ConsultaEntitats";
			this->ConsultaEntitats->UseVisualStyleBackColor = true;
			this->ConsultaEntitats->Click += gcnew System::EventHandler(this, &Form1::ConsultaEntitats_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->ConsultaEntitats);
			this->Controls->Add(this->AltaEntitat);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EsborrarEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::FormBaixaEntitat^ baixa_entitat = gcnew application::FormBaixaEntitat();
		baixa_entitat->Show();
	}

	private: System::Void AltaEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::AltaEntitat^ alta_entitat = gcnew application::AltaEntitat();
		alta_entitat->Show();
	}
	private: System::Void ConsultaEntitats_Click(System::Object^ sender, System::EventArgs^ e) {
		application::ConsultaEntitats^ consulta_entitats = gcnew application::ConsultaEntitats();
		consulta_entitats->Show();
	}
	};
}
