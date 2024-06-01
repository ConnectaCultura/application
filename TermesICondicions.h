#pragma once

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de TermesICondicions
	/// </summary>
	public ref class TermesICondicions : public System::Windows::Forms::Form
	{
	public:
		TermesICondicions(void)
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
		~TermesICondicions()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ buttonTorna;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TermesICondicions::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->buttonTorna = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(36, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(489, 91);
			this->label3->TabIndex = 2;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(80, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(445, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Termes i Condicions d\'Us de l\'Aplicacio Conecta Cultura";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(532, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"1. Introduccio";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(532, 21);
			this->label1->TabIndex = 5;
			this->label1->Text = L"2. Compres d\'Entrades";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(36, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(489, 145);
			this->label2->TabIndex = 6;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(532, 21);
			this->label6->TabIndex = 7;
			this->label6->Text = L"3. Politica de Cancel.lacio i Reemborsament";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(36, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(489, 330);
			this->label7->TabIndex = 8;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 612);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(532, 21);
			this->label8->TabIndex = 9;
			this->label8->Text = L"4. Responsabilitat";
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(36, 633);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(489, 70);
			this->label9->TabIndex = 10;
			this->label9->Text = resources->GetString(L"label9.Text");
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 682);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(532, 21);
			this->label10->TabIndex = 11;
			this->label10->Text = L"5. Privacitat";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(36, 703);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(489, 74);
			this->label11->TabIndex = 12;
			this->label11->Text = resources->GetString(L"label11.Text");
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 756);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(532, 21);
			this->label12->TabIndex = 13;
			this->label12->Text = L"6. Modificacions";
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(36, 777);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(489, 91);
			this->label13->TabIndex = 14;
			this->label13->Text = resources->GetString(L"label13.Text");
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(12, 863);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(532, 21);
			this->label14->TabIndex = 15;
			this->label14->Text = L"7. Disposicions Generals";
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(36, 884);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(489, 134);
			this->label15->TabIndex = 16;
			this->label15->Text = resources->GetString(L"label15.Text");
			this->label15->Click += gcnew System::EventHandler(this, &TermesICondicions::label15_Click);
			// 
			// buttonTorna
			// 
			this->buttonTorna->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonTorna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTorna->ForeColor = System::Drawing::Color::Transparent;
			this->buttonTorna->Location = System::Drawing::Point(212, 998);
			this->buttonTorna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTorna->Name = L"buttonTorna";
			this->buttonTorna->Size = System::Drawing::Size(107, 29);
			this->buttonTorna->TabIndex = 19;
			this->buttonTorna->Text = L"Vale";
			this->buttonTorna->UseVisualStyleBackColor = false;
			this->buttonTorna->Click += gcnew System::EventHandler(this, &TermesICondicions::buttonTorna_Click);
			// 
			// TermesICondicions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(560, 518);
			this->Controls->Add(this->buttonTorna);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TermesICondicions";
			this->Text = L"Termes i Condicions";
			this->Load += gcnew System::EventHandler(this, &TermesICondicions::TermesICondicions_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
private: System::Void TermesICondicions_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonTorna_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
