#pragma once
#include "TxCompraEntrada.h"
#include "TxConsultaEsdeveniment.h"
#include "TxPuntsCiutada.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ComprarEntradaForm
	/// </summary>
	public ref class ComprarEntradaForm : public System::Windows::Forms::Form
	{
	public:
		ComprarEntradaForm(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ComprarEntradaForm(String^ nom, String^ inici, String^ fi)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			//
			//TODO: agregar código de constructor aquí
			//
			_nom = nom;
			_inici = inici;
			_fi = fi;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ComprarEntradaForm()
		{
			if (components)
			{
				delete components;
			}
		}
		void CheckQuantitat(int quantitat) {
			Sessio^ s = Sessio::getInstance();
			TxPuntsCiutada pc(s->obteUsuari()->obteCorreuElectronic());
			try {
				pc.executar();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message);
			}
			int maxpunts = pc.obteResultat();
			System::String^ preuCompra = this->PreuEntradaLabel->Text;
			System::Decimal preuc;
			if (preuCompra == "Gratuit") preuc = 0;
			else preuc = System::Decimal::Parse(preuCompra);
			preuc = preuc.Ceiling(preuc);
			preuc = preuc * quantitat;
			DescompteNumeric->Maximum = __min(maxpunts, preuc);
		}

		System::String^ ActualitzaPreuTotal(void) {
			System::String^ preuCompra= PreuEntradaLabel->Text;
			System::Decimal preuc;
			if (PreuEntradaLabel->Text != "Gratuit") {
				preuCompra = this->PreuEntradaLabel->Text;
				preuc = System::Decimal::Parse(preuCompra);
				preuc = preuc * QuantitatNumeric->Value;
				preuc = preuc.Subtract(preuc, DescompteNumeric->Value);
				if (preuc < 0) {
					preuc = 0;
				}
				preuCompra = preuc.ToString();
			}
			return preuCompra;
		}
	private: System::Windows::Forms::NumericUpDown^ DescompteNumeric;
	protected:
	private: System::Windows::Forms::Label^ DescompteLabel;
	private: System::Windows::Forms::NumericUpDown^ QuantitatNumeric;
	private: System::Windows::Forms::Label^ quant;
	private: System::Windows::Forms::Button^ ComprarButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ PreuTotalLabel;


	private:
		String^ _nom;
		String^ _inici;
		String^ _fi;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ PreuEntradaLabel;
	private: System::Windows::Forms::Label^ NomEsdevLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ EntradesDispLabel;
	private: System::Windows::Forms::Button^ TornaButton;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ComprarEntradaForm::typeid));
			this->DescompteNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->DescompteLabel = (gcnew System::Windows::Forms::Label());
			this->QuantitatNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->quant = (gcnew System::Windows::Forms::Label());
			this->ComprarButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PreuTotalLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PreuEntradaLabel = (gcnew System::Windows::Forms::Label());
			this->NomEsdevLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EntradesDispLabel = (gcnew System::Windows::Forms::Label());
			this->TornaButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DescompteNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QuantitatNumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// DescompteNumeric
			// 
			this->DescompteNumeric->Location = System::Drawing::Point(197, 186);
			this->DescompteNumeric->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DescompteNumeric->Name = L"DescompteNumeric";
			this->DescompteNumeric->Size = System::Drawing::Size(49, 22);
			this->DescompteNumeric->TabIndex = 34;
			this->DescompteNumeric->ValueChanged += gcnew System::EventHandler(this, &ComprarEntradaForm::DescompteNumeric_ValueChanged);
			// 
			// DescompteLabel
			// 
			this->DescompteLabel->AutoSize = true;
			this->DescompteLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescompteLabel->Location = System::Drawing::Point(67, 186);
			this->DescompteLabel->Name = L"DescompteLabel";
			this->DescompteLabel->Size = System::Drawing::Size(100, 20);
			this->DescompteLabel->TabIndex = 33;
			this->DescompteLabel->Text = L"Descompte:";
			// 
			// QuantitatNumeric
			// 
			this->QuantitatNumeric->Location = System::Drawing::Point(197, 138);
			this->QuantitatNumeric->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->QuantitatNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->QuantitatNumeric->Name = L"QuantitatNumeric";
			this->QuantitatNumeric->Size = System::Drawing::Size(49, 22);
			this->QuantitatNumeric->TabIndex = 32;
			this->QuantitatNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->QuantitatNumeric->ValueChanged += gcnew System::EventHandler(this, &ComprarEntradaForm::QuantitatNumeric_ValueChanged);
			// 
			// quant
			// 
			this->quant->AutoSize = true;
			this->quant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quant->Location = System::Drawing::Point(67, 138);
			this->quant->Name = L"quant";
			this->quant->Size = System::Drawing::Size(82, 20);
			this->quant->TabIndex = 31;
			this->quant->Text = L"Quantitat:";
			// 
			// ComprarButton
			// 
			this->ComprarButton->BackColor = System::Drawing::Color::OrangeRed;
			this->ComprarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComprarButton->ForeColor = System::Drawing::Color::Transparent;
			this->ComprarButton->Location = System::Drawing::Point(349, 332);
			this->ComprarButton->Margin = System::Windows::Forms::Padding(3, 1, 3, 1);
			this->ComprarButton->Name = L"ComprarButton";
			this->ComprarButton->Size = System::Drawing::Size(163, 31);
			this->ComprarButton->TabIndex = 28;
			this->ComprarButton->Text = L"Comprar Entrada";
			this->ComprarButton->UseVisualStyleBackColor = false;
			this->ComprarButton->Click += gcnew System::EventHandler(this, &ComprarEntradaForm::ComprarButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 29);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Preu Total:";
			// 
			// PreuTotalLabel
			// 
			this->PreuTotalLabel->AutoSize = true;
			this->PreuTotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PreuTotalLabel->Location = System::Drawing::Point(235, 261);
			this->PreuTotalLabel->Name = L"PreuTotalLabel";
			this->PreuTotalLabel->Size = System::Drawing::Size(0, 29);
			this->PreuTotalLabel->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(67, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 20);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Preu Unitari:";
			// 
			// PreuEntradaLabel
			// 
			this->PreuEntradaLabel->AutoSize = true;
			this->PreuEntradaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PreuEntradaLabel->Location = System::Drawing::Point(193, 89);
			this->PreuEntradaLabel->Name = L"PreuEntradaLabel";
			this->PreuEntradaLabel->Size = System::Drawing::Size(0, 20);
			this->PreuEntradaLabel->TabIndex = 38;
			// 
			// NomEsdevLabel
			// 
			this->NomEsdevLabel->AutoSize = true;
			this->NomEsdevLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomEsdevLabel->Location = System::Drawing::Point(29, 22);
			this->NomEsdevLabel->Name = L"NomEsdevLabel";
			this->NomEsdevLabel->Size = System::Drawing::Size(0, 31);
			this->NomEsdevLabel->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(327, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 20);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Entrades Disponibles:";
			// 
			// EntradesDispLabel
			// 
			this->EntradesDispLabel->AutoSize = true;
			this->EntradesDispLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EntradesDispLabel->Location = System::Drawing::Point(404, 191);
			this->EntradesDispLabel->Name = L"EntradesDispLabel";
			this->EntradesDispLabel->Size = System::Drawing::Size(0, 20);
			this->EntradesDispLabel->TabIndex = 41;
			// 
			// TornaButton
			// 
			this->TornaButton->BackColor = System::Drawing::Color::OrangeRed;
			this->TornaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TornaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TornaButton->Location = System::Drawing::Point(16, 335);
			this->TornaButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TornaButton->Name = L"TornaButton";
			this->TornaButton->Size = System::Drawing::Size(100, 28);
			this->TornaButton->TabIndex = 42;
			this->TornaButton->Text = L"Torna";
			this->TornaButton->UseVisualStyleBackColor = false;
			this->TornaButton->Click += gcnew System::EventHandler(this, &ComprarEntradaForm::TornaButton_Click);
			// 
			// ComprarEntradaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 375);
			this->Controls->Add(this->TornaButton);
			this->Controls->Add(this->EntradesDispLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NomEsdevLabel);
			this->Controls->Add(this->PreuEntradaLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PreuTotalLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DescompteNumeric);
			this->Controls->Add(this->DescompteLabel);
			this->Controls->Add(this->QuantitatNumeric);
			this->Controls->Add(this->quant);
			this->Controls->Add(this->ComprarButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ComprarEntradaForm";
			this->Text = L"Comprar Entrada";
			this->Load += gcnew System::EventHandler(this, &ComprarEntradaForm::ComprarEntradaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DescompteNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QuantitatNumeric))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void data_inici_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ComprarEntradaForm_Load(System::Object^ sender, System::EventArgs^ e) {
	TxConsultaEsdeveniment txCE(_nom, _inici, _fi);
	try {
		txCE.executar();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	List<System::String^>^ ve = txCE.obteResultat();
	NomEsdevLabel->Text = _nom;
	if (ve[3] != nullptr) {
		if (ve[3] == "0") this->PreuEntradaLabel->Text = "Gratuit";
		else this->PreuEntradaLabel->Text = ve[3];
		EntradesDispLabel->Text = ve[5];
		QuantitatNumeric->Maximum = int::Parse(ve[5]);
		PreuTotalLabel->Text = PreuEntradaLabel->Text;
	}
	CheckQuantitat(QuantitatNumeric->Value.ToInt32(QuantitatNumeric->Value));
}
private: System::Void ComprarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ preuCompra = ActualitzaPreuTotal();
	if (preuCompra == "Gratuit") preuCompra = "0";
	System::String^ preuDef = preuCompra->Replace(',', '.');
	System::String^ quantitat = QuantitatNumeric->Value.ToString();
	int puntsgastats = DescompteNumeric->Value.ToInt32(DescompteNumeric->Value);
	TxCompraEntrada entrada(_nom, _inici, _fi, preuDef, quantitat, puntsgastats);
	try {
		entrada.executar();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	this->Close();
}
private: System::Void QuantitatNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckQuantitat(QuantitatNumeric->Value.ToInt32(QuantitatNumeric->Value));
	System::String^ preuCompra = ActualitzaPreuTotal();
	PreuTotalLabel->Text = preuCompra;
	
}
private: System::Void DescompteNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ preuCompra = ActualitzaPreuTotal();
	PreuTotalLabel->Text = preuCompra;
}
private: System::Void TornaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
