#pragma once

#include "TxConsultaValoracio.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaValoracioForm
	/// </summary>
	public ref class ConsultaValoracioForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaValoracioForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		ConsultaValoracioForm(System::String^ correu, System::String^ nom, System::String^ datainici, System::String^ datafi)
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
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaValoracioForm()
		{
			if (components)
			{
				delete components;
			}
		}

		
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ DataFiLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ DataIniciLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ esdevenimentLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ TornaButton;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::String^ _correuCiutada;
		System::String^ _nomEsdev;
		System::String^ _dataInici;
	private: System::Windows::Forms::Label^ label6;
		   System::String^ _dataFi;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultaValoracioForm::typeid));
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DataFiLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DataIniciLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->esdevenimentLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TornaButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			this->pictureBox9->Location = System::Drawing::Point(373, 188);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(35, 35);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 48;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.InitialImage")));
			this->pictureBox8->Location = System::Drawing::Point(332, 188);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(35, 35);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 47;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(291, 188);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(35, 35);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 46;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(250, 188);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(35, 35);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 45;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(373, 188);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 35);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 44;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(332, 188);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(35, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 43;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(291, 188);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 42;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(250, 188);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 41;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(209, 188);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(55, 242);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Opinió";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 196);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Puntuació";
			// 
			// DataFiLabel
			// 
			this->DataFiLabel->AutoSize = true;
			this->DataFiLabel->Location = System::Drawing::Point(206, 146);
			this->DataFiLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DataFiLabel->Name = L"DataFiLabel";
			this->DataFiLabel->Size = System::Drawing::Size(38, 13);
			this->DataFiLabel->TabIndex = 36;
			this->DataFiLabel->Text = L"DataFi";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 146);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Data Fi";
			// 
			// DataIniciLabel
			// 
			this->DataIniciLabel->AutoSize = true;
			this->DataIniciLabel->Location = System::Drawing::Point(206, 99);
			this->DataIniciLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DataIniciLabel->Name = L"DataIniciLabel";
			this->DataIniciLabel->Size = System::Drawing::Size(49, 13);
			this->DataIniciLabel->TabIndex = 34;
			this->DataIniciLabel->Text = L"DataInici";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 99);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Data Inici";
			// 
			// esdevenimentLabel
			// 
			this->esdevenimentLabel->AutoSize = true;
			this->esdevenimentLabel->Location = System::Drawing::Point(206, 60);
			this->esdevenimentLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->esdevenimentLabel->Name = L"esdevenimentLabel";
			this->esdevenimentLabel->Size = System::Drawing::Size(74, 13);
			this->esdevenimentLabel->TabIndex = 32;
			this->esdevenimentLabel->Text = L"Esdeveniment";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 60);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Nom Esdeveniment";
			// 
			// TornaButton
			// 
			this->TornaButton->BackColor = System::Drawing::Color::OrangeRed;
			this->TornaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TornaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TornaButton->Location = System::Drawing::Point(180, 317);
			this->TornaButton->Name = L"TornaButton";
			this->TornaButton->Size = System::Drawing::Size(75, 23);
			this->TornaButton->TabIndex = 49;
			this->TornaButton->Text = L"Torna";
			this->TornaButton->UseVisualStyleBackColor = false;
			this->TornaButton->Click += gcnew System::EventHandler(this, &ConsultaValoracioForm::TornaButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(209, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 50;
			this->label6->Text = L"label6";
			// 
			// ConsultaValoracioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 352);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TornaButton);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DataFiLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DataIniciLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->esdevenimentLabel);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaValoracioForm";
			this->Text = L"ConsultaValoracioForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaValoracioForm::ConsultaValoracioForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaValoracioForm_Load(System::Object^ sender, System::EventArgs^ e) {
		esdevenimentLabel->Text = _nomEsdev;
		DataIniciLabel->Text = _dataInici;
		DataFiLabel->Text = _dataFi;
		/*TxConsultaValoracio txCV;
		try {
			txCV.executar();
			List<System::String^>^ sol = txCV.obteResultat();
			label6->Text = sol[5];
			if (sol[4] == "1") {
				this->pictureBox2->Visible = false;
				this->pictureBox3->Visible = false;
				this->pictureBox4->Visible = false;
				this->pictureBox5->Visible = false;
				this->pictureBox6->Visible = true;
				this->pictureBox7->Visible = true;
				this->pictureBox8->Visible = true;
				this->pictureBox9->Visible = true;
			}
			else if (sol[4] == "2") {
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = false;
				this->pictureBox4->Visible = false;
				this->pictureBox5->Visible = false;
				this->pictureBox6->Visible = false;
				this->pictureBox7->Visible = true;
				this->pictureBox8->Visible = true;
				this->pictureBox9->Visible = true;
			}
			else if (sol[4] == "3") {
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = false;
				this->pictureBox5->Visible = false;
				this->pictureBox6->Visible = false;
				this->pictureBox7->Visible = false;
				this->pictureBox8->Visible = true;
				this->pictureBox9->Visible = true;
			}
			else if (sol[4] == "4") {
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = false;
				this->pictureBox6->Visible = false;
				this->pictureBox7->Visible = false;
				this->pictureBox8->Visible = false;
				this->pictureBox9->Visible = true;
			}
			else {
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = true;
				this->pictureBox6->Visible = false;
				this->pictureBox7->Visible = false;
				this->pictureBox8->Visible = false;
				this->pictureBox9->Visible = false;
			}
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}*/
	}
private: System::Void TornaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
