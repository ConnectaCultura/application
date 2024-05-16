#pragma once
#include ""

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaCompraForm
	/// </summary>
	public ref class ConsultaCompraForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaCompraForm(String^ nom, String^ inici, String^ fi, String^ preu)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			_nomEsdev = nom;
			_dataInici = inici;
			_dataFi = fi;
			_preu = preu;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaCompraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ esdevenimentLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ DataIniciLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ DataFiLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ PreuLabel;
	protected:

	protected:








	private:
		String^ _nomEsdev;
		String^ _dataInici;
		String^ _dataFi;
		String^ _preu;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->esdevenimentLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DataIniciLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DataFiLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PreuLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom Esdeveniment";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::label1_Click_1);
			// 
			// esdevenimentLabel
			// 
			this->esdevenimentLabel->AutoSize = true;
			this->esdevenimentLabel->Location = System::Drawing::Point(304, 80);
			this->esdevenimentLabel->Name = L"esdevenimentLabel";
			this->esdevenimentLabel->Size = System::Drawing::Size(110, 20);
			this->esdevenimentLabel->TabIndex = 1;
			this->esdevenimentLabel->Text = L"Esdeveniment";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(149, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Data Inici";
			// 
			// DataIniciLabel
			// 
			this->DataIniciLabel->AutoSize = true;
			this->DataIniciLabel->Location = System::Drawing::Point(304, 136);
			this->DataIniciLabel->Name = L"DataIniciLabel";
			this->DataIniciLabel->Size = System::Drawing::Size(72, 20);
			this->DataIniciLabel->TabIndex = 3;
			this->DataIniciLabel->Text = L"DataInici";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(164, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Data Fi";
			this->label3->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::label3_Click);
			// 
			// DataFiLabel
			// 
			this->DataFiLabel->AutoSize = true;
			this->DataFiLabel->Location = System::Drawing::Point(304, 198);
			this->DataFiLabel->Name = L"DataFiLabel";
			this->DataFiLabel->Size = System::Drawing::Size(57, 20);
			this->DataFiLabel->TabIndex = 5;
			this->DataFiLabel->Text = L"DataFi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(183, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Preu";
			// 
			// PreuLabel
			// 
			this->PreuLabel->AutoSize = true;
			this->PreuLabel->Location = System::Drawing::Point(304, 261);
			this->PreuLabel->Name = L"PreuLabel";
			this->PreuLabel->Size = System::Drawing::Size(42, 20);
			this->PreuLabel->TabIndex = 7;
			this->PreuLabel->Text = L"Preu";
			// 
			// ConsultaCompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 382);
			this->Controls->Add(this->PreuLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DataFiLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DataIniciLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->esdevenimentLabel);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaCompraForm";
			this->Text = L"ConsultaCompraForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaCompraForm::ConsultaCompraForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ConsultaCompraForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
