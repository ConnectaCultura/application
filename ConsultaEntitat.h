#pragma once

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaEntitat
	/// </summary>
	public ref class ConsultaEntitat : public System::Windows::Forms::Form
	{
	public:
		ConsultaEntitat(void)
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
		~ConsultaEntitat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ labelnom;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ CorreuBox;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelnom = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CorreuBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(236, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Tipus:";
			this->label5->Click += gcnew System::EventHandler(this, &ConsultaEntitat::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Correu:";
			this->label4->Click += gcnew System::EventHandler(this, &ConsultaEntitat::label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nom:";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultaEntitat::label1_Click);
			// 
			// labelnom
			// 
			this->labelnom->AutoSize = true;
			this->labelnom->Location = System::Drawing::Point(106, 80);
			this->labelnom->Name = L"labelnom";
			this->labelnom->Size = System::Drawing::Size(44, 16);
			this->labelnom->TabIndex = 16;
			this->labelnom->Text = L"label8";
			this->labelnom->Click += gcnew System::EventHandler(this, &ConsultaEntitat::labelnom_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(330, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"label9";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Descripció:";
			this->label3->Click += gcnew System::EventHandler(this, &ConsultaEntitat::label3_Click_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(125, 151);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 16);
			this->label10->TabIndex = 19;
			this->label10->Text = L"label10";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(256, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultaEntitat::button1_Click);
			// 
			// CorreuBox
			// 
			this->CorreuBox->Location = System::Drawing::Point(81, 22);
			this->CorreuBox->Name = L"CorreuBox";
			this->CorreuBox->Size = System::Drawing::Size(150, 22);
			this->CorreuBox->TabIndex = 23;
			this->CorreuBox->TextChanged += gcnew System::EventHandler(this, &ConsultaEntitat::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Tancar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConsultaEntitat::button2_Click);
			// 
			// ConsultaEntitat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 198);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->CorreuBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->labelnom);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaEntitat";
			this->Text = L"ConsultaEntitat";
			this->Load += gcnew System::EventHandler(this, &ConsultaEntitat::ConsultaEntitat_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//TXConsultaEntitat per parametre nom entitat: this->ComboCorreu->text 
	//Tx executar
	//Tx obtenir resultat "resultat"
	//this->labelnom->text = "resultat"
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void ConsultaEntitat_Load(System::Object^ sender, System::EventArgs^ e) {
	//cridar TxConsultaEntitats i amb el executar cridar al obte resultats
}
private: System::Void labelnom_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = nomE;
	labelnom->Text = nom;
}


};
}
