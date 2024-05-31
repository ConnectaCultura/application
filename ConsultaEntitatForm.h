#pragma once
#include "TxConsultaEntitat.h"
#include "ConsultarEsdevenimentsForm.h"
#include "TxConsultaEsdeveniments.h"
#include "TxConsultaFavorita.h"
#include "TxAfegirFavorita.h"
#include "TxEsborrarFavorita.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaEntitatForm
	/// </summary>
	public ref class ConsultaEntitatForm : public System::Windows::Forms::Form
	{
	
	public:
		ConsultaEntitatForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ConsultaEntitatForm(System::String^ ce)
		{
			
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			this->_CorreuEntitat = ce;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaEntitatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NomText;
	protected:

	private: System::Windows::Forms::Label^ DescripcioText;




	private: System::Windows::Forms::Label^ TipusText;



	private: System::String^ _CorreuEntitat;

	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ CorreuLabelEdit;
	private: System::Windows::Forms::Label^ ModalitatLabelEdit;
	private: System::Windows::Forms::Label^ DescripcioLabelEdit;

	private: System::Windows::Forms::Label^ NomLabelEdit;







	private: System::Windows::Forms::Label^ AjuntamentLabelEdit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonTorna;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultaEntitatForm::typeid));
			this->NomText = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::Label());
			this->TipusText = (gcnew System::Windows::Forms::Label());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->CorreuLabelEdit = (gcnew System::Windows::Forms::Label());
			this->ModalitatLabelEdit = (gcnew System::Windows::Forms::Label());
			this->DescripcioLabelEdit = (gcnew System::Windows::Forms::Label());
			this->NomLabelEdit = (gcnew System::Windows::Forms::Label());
			this->AjuntamentLabelEdit = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->AutoSize = true;
			this->NomText->Location = System::Drawing::Point(30, 31);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(46, 20);
			this->NomText->TabIndex = 0;
			this->NomText->Text = L"Nom:";
			// 
			// DescripcioText
			// 
			this->DescripcioText->AutoSize = true;
			this->DescripcioText->Location = System::Drawing::Point(201, 16);
			this->DescripcioText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(87, 20);
			this->DescripcioText->TabIndex = 1;
			this->DescripcioText->Text = L"Descripcio:";
			// 
			// TipusText
			// 
			this->TipusText->AutoSize = true;
			this->TipusText->Location = System::Drawing::Point(20, 82);
			this->TipusText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TipusText->Name = L"TipusText";
			this->TipusText->Size = System::Drawing::Size(51, 20);
			this->TipusText->TabIndex = 5;
			this->TipusText->Text = L"Tipus:";
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(30, 80);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(61, 20);
			this->CorreuLabel->TabIndex = 7;
			this->CorreuLabel->Text = L"Correu:";
			// 
			// CorreuLabelEdit
			// 
			this->CorreuLabelEdit->AutoSize = true;
			this->CorreuLabelEdit->Location = System::Drawing::Point(108, 65);
			this->CorreuLabelEdit->Name = L"CorreuLabelEdit";
			this->CorreuLabelEdit->Size = System::Drawing::Size(0, 20);
			this->CorreuLabelEdit->TabIndex = 11;
			// 
			// ModalitatLabelEdit
			// 
			this->ModalitatLabelEdit->AutoSize = true;
			this->ModalitatLabelEdit->Location = System::Drawing::Point(108, 105);
			this->ModalitatLabelEdit->Name = L"ModalitatLabelEdit";
			this->ModalitatLabelEdit->Size = System::Drawing::Size(0, 20);
			this->ModalitatLabelEdit->TabIndex = 10;
			// 
			// DescripcioLabelEdit
			// 
			this->DescripcioLabelEdit->AutoSize = true;
			this->DescripcioLabelEdit->Location = System::Drawing::Point(296, 25);
			this->DescripcioLabelEdit->MaximumSize = System::Drawing::Size(549, 0);
			this->DescripcioLabelEdit->Name = L"DescripcioLabelEdit";
			this->DescripcioLabelEdit->Size = System::Drawing::Size(0, 20);
			this->DescripcioLabelEdit->TabIndex = 9;
			// 
			// NomLabelEdit
			// 
			this->NomLabelEdit->AutoSize = true;
			this->NomLabelEdit->Location = System::Drawing::Point(108, 25);
			this->NomLabelEdit->Name = L"NomLabelEdit";
			this->NomLabelEdit->Size = System::Drawing::Size(0, 20);
			this->NomLabelEdit->TabIndex = 8;
			// 
			// AjuntamentLabelEdit
			// 
			this->AjuntamentLabelEdit->AutoSize = true;
			this->AjuntamentLabelEdit->Location = System::Drawing::Point(108, 140);
			this->AjuntamentLabelEdit->Name = L"AjuntamentLabelEdit";
			this->AjuntamentLabelEdit->Size = System::Drawing::Size(0, 13);
			this->AjuntamentLabelEdit->TabIndex = 15;
			this->AjuntamentLabelEdit->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ajuntament:";
			this->label2->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::label2_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(826, 338);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 18;
			this->buttonTorna->Text = L"Torna";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::buttonTorna_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(824, 25);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 60);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(824, 25);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(37, 188);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(973, 519);
			this->panel1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 713);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Torna";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultaEntitatForm::button1_Click);

			// 
			// ConsultaEntitatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1032, 773);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->AjuntamentLabelEdit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CorreuLabelEdit);
			this->Controls->Add(this->ModalitatLabelEdit);
			this->Controls->Add(this->DescripcioLabelEdit);
			this->Controls->Add(this->NomLabelEdit);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->TipusText);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->NomText);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(16, 22);
			this->Name = L"ConsultaEntitatForm";
			this->Text = L"ConsultaEntitatForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitatForm::ConsultaEntitatForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void ConsultaEntitatForm_Load(System::Object^ sender, System::EventArgs^ e) {

		CorreuLabelEdit->Text = _CorreuEntitat;
		System::String^ correu = this->_CorreuEntitat;
		TxConsultaEntitat txCE(correu);
		try {
			txCE.executar();
			List<System::String^>^ sol = txCE.ObteResultat();
			NomLabelEdit->Text = sol[0];
			ModalitatLabelEdit->Text = sol[1];
			DescripcioLabelEdit->Text = sol[2];
			AjuntamentLabelEdit->Text = sol[3];
		}
		catch (MySqlException^ ex) {
			MessageBox::Show("existent");
		}
		catch (std::runtime_error e) {
			MessageBox::Show(gcnew System::String(e.what()));
		}
		ConsultarEsdevenimentsForm^ c(gcnew application::ConsultarEsdevenimentsForm(correu));
		panel1->Size = c->Size;
		c->TopLevel = false;
		c->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->panel1->Controls->Add(c);
		this->panel1->Tag = c;
		c->Show();

		Sessio^ s = Sessio::getInstance();
		if (s->obteUsuari() != nullptr && s->obteUsuari()->obteTipus() == "ciutada") {
			TxConsultaFavorita txCF(correu);
			try {
				txCF.executar();
				List<System::String^>^ sol = txCF.obteResultat();
				if (sol[0] != nullptr) {
					this->pictureBox1->Visible = false;
					this->pictureBox2->Visible = true;
				}
				else {
					this->pictureBox1->Visible = false;
					this->pictureBox2->Visible = true;
				}
			}
			catch (std::runtime_error ex) {
			}
		}
		else {
			this->pictureBox1->Visible = false;
			this->pictureBox2->Visible = false;
		}
	}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NomBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Poner favorito
	System::String^ correu = this->_CorreuEntitat;
	TxAfegirFavorita txAF(correu);
	try {
		txAF.executar();
		this->pictureBox1->Visible = false;
		this->pictureBox2->Visible = true;
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}	
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Quitar favorito
	System::String^ correu = this->_CorreuEntitat;
	TxEsborrarFavorita txEF(correu);
	try {
		txEF.executar();
		this->pictureBox1->Visible = true;
		this->pictureBox2->Visible = false;
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
