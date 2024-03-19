#pragma once

#include "AltaEntitat.h"

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
	private: System::Windows::Forms::Button^ alta_entitat;
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
			this->alta_entitat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// alta_entitat
			// 
			this->alta_entitat->BackColor = System::Drawing::Color::OrangeRed;
			this->alta_entitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->alta_entitat->Location = System::Drawing::Point(57, 45);
			this->alta_entitat->Name = L"alta_entitat";
			this->alta_entitat->Size = System::Drawing::Size(184, 45);
			this->alta_entitat->TabIndex = 0;
			this->alta_entitat->Text = L"Alta entitat";
			this->alta_entitat->UseVisualStyleBackColor = false;
			this->alta_entitat->Click += gcnew System::EventHandler(this, &Form1::alta_entitat_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(293, 318);
			this->Controls->Add(this->alta_entitat);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void alta_entitat_Click(System::Object^ sender, System::EventArgs^ e) {
		application::AltaEntitat^ alta_entitat = gcnew application::AltaEntitat();
		alta_entitat->Show();
	}

	};
}
