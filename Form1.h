#pragma once

#include "FormBaixaEntitat.h"
#include "FormAltaEsdeveniment.h"

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
	private: System::Windows::Forms::Button^ NouEsdeveniment;
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
			this->NouEsdeveniment = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 42);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Esborrar entitat";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::EsborrarEntitat_Click);
			// 
			// NouEsdeveniment
			// 
			this->NouEsdeveniment->Location = System::Drawing::Point(25, 103);
			this->NouEsdeveniment->Name = L"NouEsdeveniment";
			this->NouEsdeveniment->Size = System::Drawing::Size(196, 23);
			this->NouEsdeveniment->TabIndex = 1;
			this->NouEsdeveniment->Text = L"Nou esdevenimiment";
			this->NouEsdeveniment->UseVisualStyleBackColor = true;
			this->NouEsdeveniment->Click += gcnew System::EventHandler(this, &Form1::NouEsdeveniment_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 321);
			this->Controls->Add(this->NouEsdeveniment);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EsborrarEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::FormBaixaEntitat^ baixa_entitat = gcnew application::FormBaixaEntitat();
		baixa_entitat->Show();
	}
	private: System::Void NouEsdeveniment_Click(System::Object^ sender, System::EventArgs^ e) {
		application::FormAltaEsdeveniment^ alta_esdeveniment = gcnew application::FormAltaEsdeveniment();
		alta_esdeveniment->Show();
	}
	};
}
