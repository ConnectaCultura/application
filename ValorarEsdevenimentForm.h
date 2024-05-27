#pragma once

#include "TxValorarEsdeveniment.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ValorarEsdevenimentForm
	/// </summary>
	public ref class ValorarEsdevenimentForm : public System::Windows::Forms::Form
	{
	public:
		ValorarEsdevenimentForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		ValorarEsdevenimentForm(System::String^ correu, System::String^ nom, System::String^ datainici, System::String^ datafi)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: Add the constructor code here
			//
			_correuCiutada = correu;
			_nomEsdev = nom;
			_dataInici = datainici;
			_dataFi = datafi;
			_puntuacio = 1;
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ValorarEsdevenimentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::String^ _correuCiutada;
		System::String^ _nomEsdev;
		System::String^ _dataInici;
		System::String^ _dataFi;
		int _puntuacio;

	private: System::Windows::Forms::Button^ enviar;
	private: System::Windows::Forms::Button^ TornaButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ esdevenimentLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ DataIniciLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ DataFiLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ValorarEsdevenimentForm::typeid));
			this->enviar = (gcnew System::Windows::Forms::Button());
			this->TornaButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->esdevenimentLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DataIniciLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DataFiLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// enviar
			// 
			this->enviar->Location = System::Drawing::Point(219, 318);
			this->enviar->Name = L"enviar";
			this->enviar->Size = System::Drawing::Size(147, 23);
			this->enviar->TabIndex = 0;
			this->enviar->Text = L"Enviar Valoració";
			this->enviar->UseVisualStyleBackColor = true;
			this->enviar->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::enviar_Click);
			// 
			// TornaButton
			// 
			this->TornaButton->BackColor = System::Drawing::Color::OrangeRed;
			this->TornaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TornaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TornaButton->Location = System::Drawing::Point(12, 318);
			this->TornaButton->Name = L"TornaButton";
			this->TornaButton->Size = System::Drawing::Size(75, 23);
			this->TornaButton->TabIndex = 11;
			this->TornaButton->Text = L"Torna";
			this->TornaButton->UseVisualStyleBackColor = false;
			this->TornaButton->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::TornaButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 52);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Nom Esdeveniment";
			// 
			// esdevenimentLabel
			// 
			this->esdevenimentLabel->AutoSize = true;
			this->esdevenimentLabel->Location = System::Drawing::Point(186, 52);
			this->esdevenimentLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->esdevenimentLabel->Name = L"esdevenimentLabel";
			this->esdevenimentLabel->Size = System::Drawing::Size(74, 13);
			this->esdevenimentLabel->TabIndex = 13;
			this->esdevenimentLabel->Text = L"Esdeveniment";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 91);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Data Inici";
			// 
			// DataIniciLabel
			// 
			this->DataIniciLabel->AutoSize = true;
			this->DataIniciLabel->Location = System::Drawing::Point(186, 91);
			this->DataIniciLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DataIniciLabel->Name = L"DataIniciLabel";
			this->DataIniciLabel->Size = System::Drawing::Size(49, 13);
			this->DataIniciLabel->TabIndex = 15;
			this->DataIniciLabel->Text = L"DataInici";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 138);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Data Fi";
			// 
			// DataFiLabel
			// 
			this->DataFiLabel->AutoSize = true;
			this->DataFiLabel->Location = System::Drawing::Point(186, 138);
			this->DataFiLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DataFiLabel->Name = L"DataFiLabel";
			this->DataFiLabel->Size = System::Drawing::Size(38, 13);
			this->DataFiLabel->TabIndex = 17;
			this->DataFiLabel->Text = L"DataFi";
			this->DataFiLabel->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::DataFiLabel_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 188);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Puntuació";
			this->label4->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 234);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Opinió";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(189, 234);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(196, 50);
			this->richTextBox1->TabIndex = 21;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::richTextBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(189, 180);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(230, 180);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(271, 180);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(312, 180);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(35, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(353, 180);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 35);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(230, 180);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(35, 35);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 27;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(271, 180);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(35, 35);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 28;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.InitialImage")));
			this->pictureBox8->Location = System::Drawing::Point(312, 180);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(35, 35);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 29;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			this->pictureBox9->Location = System::Drawing::Point(353, 180);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(35, 35);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 30;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::pictureBox9_Click);
			// 
			// ValorarEsdevenimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 353);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DataFiLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DataIniciLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->esdevenimentLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TornaButton);
			this->Controls->Add(this->enviar);
			this->Name = L"ValorarEsdevenimentForm";
			this->Text = L"ValorarEsdevenimentForm";
			this->Load += gcnew System::EventHandler(this, &ValorarEsdevenimentForm::ValorarEsdevenimentForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ValorarEsdevenimentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		esdevenimentLabel->Text = _nomEsdev;
		DataIniciLabel->Text = _dataInici;
		DataFiLabel->Text = _dataFi;
	}
	private: System::Void enviar_Click(System::Object^ sender, System::EventArgs^ e) {
		TxValorarEsdeveniment txVE(_correuCiutada, _nomEsdev, _dataInici, _dataFi, _puntuacio, richTextBox1->Text);
		try {
			txVE.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}

		this->Close();
	}
	private: System::Void DataFiLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella amarilla 1
	this->pictureBox2->Visible = false;
	this->pictureBox3->Visible = false;
	this->pictureBox4->Visible = false;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = true;
	this->pictureBox7->Visible = true;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	_puntuacio = 1;
}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella amarilla 2
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = false;
	this->pictureBox4->Visible = false;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = true;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	_puntuacio = 2;
}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella amarilla 3
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = false;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = false;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	_puntuacio = 3;
}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella amarilla 4
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = false;
	this->pictureBox8->Visible = false;
	this->pictureBox9->Visible = true;
	_puntuacio = 4;
}

private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella amarilla 5
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = true;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = false;
	this->pictureBox8->Visible = false;
	this->pictureBox9->Visible = false;
	_puntuacio = 5;
}

private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella negra 2
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = false;
	this->pictureBox4->Visible = false;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = true;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	_puntuacio = 1;
}

private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella negra 3
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = false;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = false;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	_puntuacio = 3;
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella negra 4
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = false;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = false;
	this->pictureBox8->Visible = false;
	this->pictureBox9->Visible = true;
	_puntuacio = 4;
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	//estrella negra 5
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = true;
	this->pictureBox6->Visible = false;
	this->pictureBox7->Visible = false;
	this->pictureBox8->Visible = false;
	this->pictureBox9->Visible = false;
	_puntuacio = 5;
}
private: System::Void TornaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}
