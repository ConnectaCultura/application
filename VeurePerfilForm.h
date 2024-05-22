#pragma once
#include "Sessio.h"
#include "TxConsultaPerfil.h"
#include "ConsultaCompresForm.h"
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
	/// Resumen de VeurePerfilForm
	/// </summary>
	public ref class VeurePerfilForm : public System::Windows::Forms::Form
	{
	public:
		VeurePerfilForm(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VeurePerfilForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^ TipusText;




	private: System::Windows::Forms::Label^ DescripcioText;
	private: System::Windows::Forms::Label^ NomText;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ PuntsLabelEdit;
	private: System::Windows::Forms::Button^ buttonTorna;
	private: System::Windows::Forms::Button^ MostraCompresButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ nomBox;

	private: System::Windows::Forms::Button^ button2;







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
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->MostraCompresButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nomBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(29, 92);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(112, 16);
			this->TipusText->TabIndex = 11;
			this->TipusText->Text = L"Correu Electrònic:";
			this->TipusText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::TipusText_Click);
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;
			this->DescripcioText->Location = System::Drawing::Point(29, 148);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(43, 16);
			this->DescripcioText->TabIndex = 8;
			this->DescripcioText->Text = L"Punts:";
			this->DescripcioText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::DescripcioText_Click);
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(29, 38);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(39, 16);
			this->NomText->TabIndex = 7;
			this->NomText->Text = L"Nom:";
			this->NomText->Click += gcnew System::EventHandler(this, &VeurePerfilForm::NomText_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(196, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 12;
			this->label1->Click += gcnew System::EventHandler(this, &VeurePerfilForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(196, 92);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(196, 150);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 14;
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(12, 200);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 30);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &VeurePerfilForm::buttonTorna_Click);
			// 
			// MostraCompresButton
			// 
			this->MostraCompresButton->BackColor = System::Drawing::Color::OrangeRed;
			this->MostraCompresButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MostraCompresButton->ForeColor = System::Drawing::Color::Transparent;
			this->MostraCompresButton->Location = System::Drawing::Point(305, 200);
			this->MostraCompresButton->Margin = System::Windows::Forms::Padding(4);
			this->MostraCompresButton->Name = L"MostraCompresButton";
			this->MostraCompresButton->Size = System::Drawing::Size(137, 28);
			this->MostraCompresButton->TabIndex = 19;
			this->MostraCompresButton->Text = L"Mostra Compres";
			this->MostraCompresButton->UseVisualStyleBackColor = false;
			this->MostraCompresButton->Click += gcnew System::EventHandler(this, &VeurePerfilForm::MostraCompresButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(149, 200);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 30);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Modifica perfil";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &VeurePerfilForm::button1_Click);
			// 
			// nomBox
			// 
			this->nomBox->Location = System::Drawing::Point(185, 35);
			this->nomBox->Name = L"nomBox";
			this->nomBox->Size = System::Drawing::Size(224, 22);
			this->nomBox->TabIndex = 21;
			this->nomBox->TextChanged += gcnew System::EventHandler(this, &VeurePerfilForm::nomBox_TextChanged_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VeurePerfilForm::button2_Click);
			// 
			// VeurePerfilForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 244);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->nomBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->MostraCompresButton);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"VeurePerfilForm";
			this->Text = L"VeurePerfilForm";
			this->Load += gcnew System::EventHandler(this, &VeurePerfilForm::VeurePerfilForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void VeurePerfilForm_Load(System::Object^ sender, System::EventArgs^ e) {
			// Para hacer un consultaPerfil generico
			nomBox->Visible = false;
			TxConsultaPerfil txCP;
			try {
				txCP.executar();
				List<String^>^ ciutada = txCP.obteResultat();
				label1->Text = ciutada[1];
				label2->Text = ciutada[0];
				label3->Text = ciutada[2];
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

	private: System::Void NomText_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TipusText_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DescripcioBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void NomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DescripcioText_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TipusBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void MostraCompresButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Sessio^ s = Sessio::getInstance();
	application::ConsultaCompresForm^ CCompres = gcnew application::ConsultaCompresForm(s->obteUsuari()->obteCorreuElectronic());
	CCompres->ShowDialog();
	//Form1::ActualitzarForm1();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	TxModificaCiutada Mod(nomBox->Text, u);
	if (nomBox->Text == System::String::Empty) {
		MessageBox::Show("El camp de modificar esta buit.");
	}
	else {
		try {
			Mod.executar();
			this->Close();
			s->modificaUsuari(nomBox->Text);
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("No s'ha pogut modificar.");
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nomBox->Visible == false) {
		nomBox->Visible = true;
	}
	else {
		nomBox->Visible = false;
	}
}
private: System::Void nomBox_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = nomBox->Text;
}
};
}
