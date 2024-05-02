#pragma once
#include "TxConsultaEsdeveniment.h"
namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaEsdevenimentForm
	/// </summary>
	public ref class ConsultaEsdevenimentForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaEsdevenimentForm(String^nom, String^inici, String^fi)
		{
			InitializeComponent();
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
		~ConsultaEsdevenimentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ correu;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ data;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lable7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ modalitat;
	private: System::Windows::Forms::Label^ preu;
	private: System::Windows::Forms::Label^ afMax;
	private: System::Windows::Forms::Label^ eDisp;

	protected:


	private:
		String^ _nom;
		String^ _inici;
		String^ _fi;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ descripcio;
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
			this->nom = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->correu = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lable7 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->modalitat = (gcnew System::Windows::Forms::Label());
			this->preu = (gcnew System::Windows::Forms::Label());
			this->afMax = (gcnew System::Windows::Forms::Label());
			this->eDisp = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->descripcio = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(249, 51);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(51, 20);
			this->nom->TabIndex = 1;
			this->nom->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Entitat organizadora";
			// 
			// correu
			// 
			this->correu->AutoSize = true;
			this->correu->Location = System::Drawing::Point(249, 204);
			this->correu->Name = L"correu";
			this->correu->Size = System::Drawing::Size(51, 20);
			this->correu->TabIndex = 4;
			this->correu->Text = L"label4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Data";
			// 
			// data
			// 
			this->data->AutoSize = true;
			this->data->Location = System::Drawing::Point(249, 247);
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(51, 20);
			this->data->TabIndex = 6;
			this->data->Text = L"label5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 368);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Aforament maxim";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 410);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Entrades disponibles";
			// 
			// lable7
			// 
			this->lable7->AutoSize = true;
			this->lable7->Location = System::Drawing::Point(50, 334);
			this->lable7->Name = L"lable7";
			this->lable7->Size = System::Drawing::Size(42, 20);
			this->lable7->TabIndex = 9;
			this->lable7->Text = L"Preu";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 292);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Modalitat";
			// 
			// modalitat
			// 
			this->modalitat->AutoSize = true;
			this->modalitat->Location = System::Drawing::Point(249, 292);
			this->modalitat->Name = L"modalitat";
			this->modalitat->Size = System::Drawing::Size(51, 20);
			this->modalitat->TabIndex = 11;
			this->modalitat->Text = L"label8";
			// 
			// preu
			// 
			this->preu->AutoSize = true;
			this->preu->Location = System::Drawing::Point(249, 334);
			this->preu->Name = L"preu";
			this->preu->Size = System::Drawing::Size(51, 20);
			this->preu->TabIndex = 12;
			this->preu->Text = L"label8";
			// 
			// afMax
			// 
			this->afMax->AutoSize = true;
			this->afMax->Location = System::Drawing::Point(249, 368);
			this->afMax->Name = L"afMax";
			this->afMax->Size = System::Drawing::Size(51, 20);
			this->afMax->TabIndex = 13;
			this->afMax->Text = L"label8";
			// 
			// eDisp
			// 
			this->eDisp->AutoSize = true;
			this->eDisp->Location = System::Drawing::Point(249, 410);
			this->eDisp->Name = L"eDisp";
			this->eDisp->Size = System::Drawing::Size(51, 20);
			this->eDisp->TabIndex = 14;
			this->eDisp->Text = L"label8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(54, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Descripció";
			// 
			// descripcio
			// 
			this->descripcio->AutoSize = true;
			this->descripcio->Location = System::Drawing::Point(253, 96);
			this->descripcio->Name = L"descripcio";
			this->descripcio->Size = System::Drawing::Size(51, 20);
			this->descripcio->TabIndex = 16;
			this->descripcio->Text = L"label9";
			// 
			// ConsultaEsdevenimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 488);
			this->Controls->Add(this->descripcio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->eDisp);
			this->Controls->Add(this->afMax);
			this->Controls->Add(this->preu);
			this->Controls->Add(this->modalitat);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lable7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->data);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->correu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaEsdevenimentForm";
			this->Text = L"ConsultaEsdevenimentForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaEsdevenimentForm::ConsultaEsdevenimentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultaEsdevenimentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->nom->Text = _nom;
		this->data->Text = _inici + "  " + _fi;
		//MessageBox::Show(iniciMySQL);
		TxConsultaEsdeveniment txCE(_nom, _inici, _fi);
		txCE.executar();
		List<System::String^>^ ve = txCE.obteResultat();
		this->descripcio->Text = ve[0];
		this->modalitat->Text = ve[1];
		if (ve[2] != "0") this->preu->Text = ve[2];
		else this->preu->Text = "Gratuit";
		if (ve[3] == "-1") {
			label5->Visible = false;
			afMax->Visible = false;
			label6->Visible = false;
			eDisp->Visible = false;
		}
		else {
			afMax->Text = ve[3];
			//eDisp->Text = ve[4];

		}
	
	
	
	}
};
}
