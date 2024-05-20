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
			System::String^ preuCompra;
			System::Decimal preuc;
			if (PreuEntradaLabel->Text == "Gratuit") {
				preuCompra = "0";
			}
			else {
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DescompteNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QuantitatNumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// DescompteNumeric
			// 
			this->DescompteNumeric->Location = System::Drawing::Point(210, 153);
			this->DescompteNumeric->Name = L"DescompteNumeric";
			this->DescompteNumeric->Size = System::Drawing::Size(30, 20);
			this->DescompteNumeric->TabIndex = 34;
			this->DescompteNumeric->ValueChanged += gcnew System::EventHandler(this, &ComprarEntradaForm::DescompteNumeric_ValueChanged);
			// 
			// DescompteLabel
			// 
			this->DescompteLabel->AutoSize = true;
			this->DescompteLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescompteLabel->Location = System::Drawing::Point(112, 153);
			this->DescompteLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescompteLabel->Name = L"DescompteLabel";
			this->DescompteLabel->Size = System::Drawing::Size(80, 16);
			this->DescompteLabel->TabIndex = 33;
			this->DescompteLabel->Text = L"Descompte:";
			// 
			// QuantitatNumeric
			// 
			this->QuantitatNumeric->Location = System::Drawing::Point(210, 114);
			this->QuantitatNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->QuantitatNumeric->Name = L"QuantitatNumeric";
			this->QuantitatNumeric->Size = System::Drawing::Size(30, 20);
			this->QuantitatNumeric->TabIndex = 32;
			this->QuantitatNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->QuantitatNumeric->ValueChanged += gcnew System::EventHandler(this, &ComprarEntradaForm::QuantitatNumeric_ValueChanged);
			// 
			// quant
			// 
			this->quant->AutoSize = true;
			this->quant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quant->Location = System::Drawing::Point(112, 114);
			this->quant->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->quant->Name = L"quant";
			this->quant->Size = System::Drawing::Size(62, 16);
			this->quant->TabIndex = 31;
			this->quant->Text = L"Quantitat:";
			// 
			// ComprarButton
			// 
			this->ComprarButton->Location = System::Drawing::Point(115, 273);
			this->ComprarButton->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->ComprarButton->Name = L"ComprarButton";
			this->ComprarButton->Size = System::Drawing::Size(122, 25);
			this->ComprarButton->TabIndex = 28;
			this->ComprarButton->Text = L"Comprar Entrada";
			this->ComprarButton->UseVisualStyleBackColor = true;
			this->ComprarButton->Click += gcnew System::EventHandler(this, &ComprarEntradaForm::ComprarButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 212);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 24);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Preu Total:";
			// 
			// PreuTotalLabel
			// 
			this->PreuTotalLabel->AutoSize = true;
			this->PreuTotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PreuTotalLabel->Location = System::Drawing::Point(176, 212);
			this->PreuTotalLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PreuTotalLabel->Name = L"PreuTotalLabel";
			this->PreuTotalLabel->Size = System::Drawing::Size(0, 24);
			this->PreuTotalLabel->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(112, 74);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 37;
			this->label2->Text = L"PreuUnitari:";
			// 
			// PreuEntradaLabel
			// 
			this->PreuEntradaLabel->AutoSize = true;
			this->PreuEntradaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PreuEntradaLabel->Location = System::Drawing::Point(207, 74);
			this->PreuEntradaLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PreuEntradaLabel->Name = L"PreuEntradaLabel";
			this->PreuEntradaLabel->Size = System::Drawing::Size(0, 16);
			this->PreuEntradaLabel->TabIndex = 38;
			// 
			// NomEsdevLabel
			// 
			this->NomEsdevLabel->AutoSize = true;
			this->NomEsdevLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomEsdevLabel->Location = System::Drawing::Point(22, 31);
			this->NomEsdevLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomEsdevLabel->Name = L"NomEsdevLabel";
			this->NomEsdevLabel->Size = System::Drawing::Size(0, 25);
			this->NomEsdevLabel->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(248, 86);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 16);
			this->label3->TabIndex = 40;
			this->label3->Text = L"EntradesDisponibles:";
			// 
			// EntradesDispLabel
			// 
			this->EntradesDispLabel->AutoSize = true;
			this->EntradesDispLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EntradesDispLabel->Location = System::Drawing::Point(306, 111);
			this->EntradesDispLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->EntradesDispLabel->Name = L"EntradesDispLabel";
			this->EntradesDispLabel->Size = System::Drawing::Size(0, 16);
			this->EntradesDispLabel->TabIndex = 41;
			// 
			// ComprarEntradaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 305);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ComprarEntradaForm";
			this->Text = L"ComprarEntradaForm";
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
	NomEsdevLabel->Text = ve[1];
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
};
}
