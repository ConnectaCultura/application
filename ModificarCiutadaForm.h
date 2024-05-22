#pragma once
#include "Sessio.h"
#include "TxModificaCiutada.h"
#include "CercadoraCiutada.h"
#include "PassarelaCiutada.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarCiutadaForm
	/// </summary>
	public ref class ModificarCiutadaForm : public System::Windows::Forms::Form
	{
	public:
		ModificarCiutadaForm(void)
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
		~ModificarCiutadaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ buttonTorna;





	private: System::Windows::Forms::Label^ NomText;
	private: System::Windows::Forms::TextBox^ NomBox;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->NomBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(316, 203);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 30);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarCiutadaForm::button1_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 203);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 30);
			this->buttonTorna->TabIndex = 27;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ModificarCiutadaForm::buttonTorna_Click);
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(35, 100);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(39, 16);
			this->NomText->TabIndex = 21;
			this->NomText->Text = L"Nom:";
			// 
			// NomBox
			// 
			this->NomBox->Location = System::Drawing::Point(170, 97);
			this->NomBox->Name = L"NomBox";
			this->NomBox->Size = System::Drawing::Size(259, 22);
			this->NomBox->TabIndex = 30;
			// 
			// ModificarCiutadaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 244);
			this->Controls->Add(this->NomBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->NomText);
			this->Name = L"ModificarCiutadaForm";
			this->Text = L"ModificarCiutadaForm";
			this->Load += gcnew System::EventHandler(this, &ModificarCiutadaForm::ModificarCiutadaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	TxModificaCiutada Mod(NomBox->Text, u);
	if (NomBox->Text == System::String::Empty) {
		MessageBox::Show("No s'ha pogut modificar.");
	}
	else {
		try {
			Mod.executar();
			this->Close();
			s->modificaUsuari(NomBox->Text);
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("No s'ha pogut modificar.");
		}
	}
}
private: System::Void ModificarCiutadaForm_Load(System::Object^ sender, System::EventArgs^ e) {



}
};
}
