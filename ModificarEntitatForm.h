#pragma once

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarEntitatForm
	/// </summary>
	public ref class ModificarEntitatForm : public System::Windows::Forms::Form
	{
	public:
		ModificarEntitatForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarEntitatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NomLabel;
	private: System::Windows::Forms::Label^ TipusLabel;
	private: System::Windows::Forms::Label^ DescripcioLabel;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ NomBox;
	private: System::Windows::Forms::TextBox^ TipusBox;
	private: System::Windows::Forms::TextBox^ DescripcioBox;
	private: System::Windows::Forms::Button^ ModificaButton;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->TipusLabel = (gcnew System::Windows::Forms::Label());
			this->DescripcioLabel = (gcnew System::Windows::Forms::Label());
			this->NomBox = (gcnew System::Windows::Forms::TextBox());
			this->TipusBox = (gcnew System::Windows::Forms::TextBox());
			this->DescripcioBox = (gcnew System::Windows::Forms::TextBox());
			this->ModificaButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Location = System::Drawing::Point(32, 25);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(39, 16);
			this->NomLabel->TabIndex = 0;
			this->NomLabel->Text = L"Nom:";
			// 
			// TipusLabel
			// 
			this->TipusLabel->AutoSize = true;
			this->TipusLabel->Location = System::Drawing::Point(32, 67);
			this->TipusLabel->Name = L"TipusLabel";
			this->TipusLabel->Size = System::Drawing::Size(44, 16);
			this->TipusLabel->TabIndex = 1;
			this->TipusLabel->Text = L"Tipus:";
			// 
			// DescripcioLabel
			// 
			this->DescripcioLabel->AutoSize = true;
			this->DescripcioLabel->Location = System::Drawing::Point(32, 112);
			this->DescripcioLabel->Name = L"DescripcioLabel";
			this->DescripcioLabel->Size = System::Drawing::Size(75, 16);
			this->DescripcioLabel->TabIndex = 2;
			this->DescripcioLabel->Text = L"Descripció:";
			// 
			// NomBox
			// 
			this->NomBox->Location = System::Drawing::Point(121, 25);
			this->NomBox->Name = L"NomBox";
			this->NomBox->Size = System::Drawing::Size(100, 22);
			this->NomBox->TabIndex = 3;
			// 
			// TipusBox
			// 
			this->TipusBox->Location = System::Drawing::Point(121, 61);
			this->TipusBox->Name = L"TipusBox";
			this->TipusBox->Size = System::Drawing::Size(100, 22);
			this->TipusBox->TabIndex = 4;
			// 
			// DescripcioBox
			// 
			this->DescripcioBox->Location = System::Drawing::Point(121, 109);
			this->DescripcioBox->Name = L"DescripcioBox";
			this->DescripcioBox->Size = System::Drawing::Size(100, 22);
			this->DescripcioBox->TabIndex = 5;
			// 
			// ModificaButton
			// 
			this->ModificaButton->Location = System::Drawing::Point(239, 172);
			this->ModificaButton->Name = L"ModificaButton";
			this->ModificaButton->Size = System::Drawing::Size(75, 23);
			this->ModificaButton->TabIndex = 6;
			this->ModificaButton->Text = L"Modifica";
			this->ModificaButton->UseVisualStyleBackColor = true;
			this->ModificaButton->Click += gcnew System::EventHandler(this, &ModificarEntitatForm::ModificaButton_Click);
			// 
			// ModificarEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(351, 229);
			this->Controls->Add(this->ModificaButton);
			this->Controls->Add(this->DescripcioBox);
			this->Controls->Add(this->TipusBox);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->DescripcioLabel);
			this->Controls->Add(this->TipusLabel);
			this->Controls->Add(this->NomLabel);
			this->Name = L"ModificarEntitatForm";
			this->Text = L"ModificarEntitatForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModificaButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
