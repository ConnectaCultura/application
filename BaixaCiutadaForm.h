#pragma once

#include "TxBaixaCiutada.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BaixaCiutadaForm
	/// </summary>
	public ref class BaixaCiutadaForm : public System::Windows::Forms::Form
	{
	public:
		BaixaCiutadaForm(void)
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
		~BaixaCiutadaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelbaixaciutada1;
	private: System::Windows::Forms::Label^ labelbaixaciutada2;
	private: System::Windows::Forms::TextBox^ textBoxbaixaciutada;
	private: System::Windows::Forms::Button^ buttonbaixaciutada;
	private: System::Windows::Forms::Button^ buttonTorna;



	protected:

	protected:

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
			this->labelbaixaciutada1 = (gcnew System::Windows::Forms::Label());
			this->labelbaixaciutada2 = (gcnew System::Windows::Forms::Label());
			this->textBoxbaixaciutada = (gcnew System::Windows::Forms::TextBox());
			this->buttonbaixaciutada = (gcnew System::Windows::Forms::Button());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelbaixaciutada1
			// 
			this->labelbaixaciutada1->AutoSize = true;
			this->labelbaixaciutada1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->labelbaixaciutada1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelbaixaciutada1->Location = System::Drawing::Point(11, 35);
			this->labelbaixaciutada1->Name = L"labelbaixaciutada1";
			this->labelbaixaciutada1->Size = System::Drawing::Size(302, 17);
			this->labelbaixaciutada1->TabIndex = 0;
			this->labelbaixaciutada1->Text = L"Estàs segur que vols donar-te de baixa\?";
			this->labelbaixaciutada1->Click += gcnew System::EventHandler(this, &BaixaCiutadaForm::labelbaixaciutada1_Click);
			// 
			// labelbaixaciutada2
			// 
			this->labelbaixaciutada2->AutoSize = true;
			this->labelbaixaciutada2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelbaixaciutada2->Location = System::Drawing::Point(11, 90);
			this->labelbaixaciutada2->Name = L"labelbaixaciutada2";
			this->labelbaixaciutada2->Size = System::Drawing::Size(100, 18);
			this->labelbaixaciutada2->TabIndex = 1;
			this->labelbaixaciutada2->Text = L"contrasenya";
			// 
			// textBoxbaixaciutada
			// 
			this->textBoxbaixaciutada->Location = System::Drawing::Point(145, 90);
			this->textBoxbaixaciutada->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxbaixaciutada->Name = L"textBoxbaixaciutada";
			this->textBoxbaixaciutada->Size = System::Drawing::Size(169, 22);
			this->textBoxbaixaciutada->TabIndex = 2;
			// 
			// buttonbaixaciutada
			// 
			this->buttonbaixaciutada->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonbaixaciutada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonbaixaciutada->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonbaixaciutada->Location = System::Drawing::Point(220, 138);
			this->buttonbaixaciutada->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonbaixaciutada->Name = L"buttonbaixaciutada";
			this->buttonbaixaciutada->Size = System::Drawing::Size(93, 31);
			this->buttonbaixaciutada->TabIndex = 3;
			this->buttonbaixaciutada->Text = L"confirmar";
			this->buttonbaixaciutada->UseVisualStyleBackColor = false;
			this->buttonbaixaciutada->Click += gcnew System::EventHandler(this, &BaixaCiutadaForm::button1_Click);
			this->textBoxbaixaciutada->PasswordChar = '*';
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(14, 140);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &BaixaCiutadaForm::buttonTorna_Click);
			// 
			// BaixaCiutadaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 194);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->buttonbaixaciutada);
			this->Controls->Add(this->textBoxbaixaciutada);
			this->Controls->Add(this->labelbaixaciutada2);
			this->Controls->Add(this->labelbaixaciutada1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BaixaCiutadaForm";
			this->Text = L"BaixaCiutadaForm";
			this->Load += gcnew System::EventHandler(this, &BaixaCiutadaForm::BaixaCiutadaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelbaixaciutada1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ contrasenya = this->textBoxbaixaciutada->Text;
		TxBaixaCiutada txBC(contrasenya);
		try {
			txBC.executar();
			this->Close();
		}
		catch (std::runtime_error e) {
			MessageBox::Show("Contrasenya incorrecta");
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void BaixaCiutadaForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
