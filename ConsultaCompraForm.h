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
		ConsultaCompraForm(void)
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
		~ConsultaCompraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EsdevenimentColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataIniciColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataFiColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PreuColumn;
	private: System::Windows::Forms::Label^ CompresLabel;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->EsdevenimentColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataIniciColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataFiColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PreuColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompresLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->EsdevenimentColumn,
					this->DataIniciColumn, this->DataFiColumn, this->PreuColumn
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 112);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(665, 508);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaCompraForm::dataGridView1_CellContentClick);
			// 
			// EsdevenimentColumn
			// 
			this->EsdevenimentColumn->HeaderText = L"Esdeveniment";
			this->EsdevenimentColumn->MinimumWidth = 8;
			this->EsdevenimentColumn->Name = L"EsdevenimentColumn";
			this->EsdevenimentColumn->Width = 150;
			// 
			// DataIniciColumn
			// 
			this->DataIniciColumn->HeaderText = L"Data Inici";
			this->DataIniciColumn->MinimumWidth = 8;
			this->DataIniciColumn->Name = L"DataIniciColumn";
			this->DataIniciColumn->Width = 150;
			// 
			// DataFiColumn
			// 
			this->DataFiColumn->HeaderText = L"Data Fi";
			this->DataFiColumn->MinimumWidth = 8;
			this->DataFiColumn->Name = L"DataFiColumn";
			this->DataFiColumn->Width = 150;
			// 
			// PreuColumn
			// 
			this->PreuColumn->HeaderText = L"Preu";
			this->PreuColumn->MinimumWidth = 8;
			this->PreuColumn->Name = L"PreuColumn";
			this->PreuColumn->Width = 150;
			// 
			// CompresLabel
			// 
			this->CompresLabel->AutoSize = true;
			this->CompresLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CompresLabel->Location = System::Drawing::Point(37, 35);
			this->CompresLabel->Name = L"CompresLabel";
			this->CompresLabel->Size = System::Drawing::Size(292, 46);
			this->CompresLabel->TabIndex = 1;
			this->CompresLabel->Text = L"Compres fetes";
			this->CompresLabel->Click += gcnew System::EventHandler(this, &ConsultaCompraForm::label1_Click);
			// 
			// ConsultaCompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 663);
			this->Controls->Add(this->CompresLabel);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ConsultaCompraForm";
			this->Text = L"ConsultaCompraForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ConsultarCompraForm_Load(System::Object^ sender, System::EventArgs^ e) {
	TxConsultaCompra txCompra(_correuEntitat);
	try {
		txEsdev.executar();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message);
	}
	List<List<System::String^>^>^ ve = txEsdev.obteResultat();
	for each (List<System::String^> ^ e in ve)
	{
		if (e[3] == "0") EsdevDataGrid->Rows->Add(e[0], e[1], e[2], "Gratuit");
		else EsdevDataGrid->Rows->Add(e[0], e[1], e[2], e[3]);
	}
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
		String^ cellText = dataGridView1->Rows[e->RowIndex]->Cells[4]->Value->ToString();
		application::ConsultaCompraForm^ Consulta_Compra = gcnew application::ConsultaCompraForm(cellText);
		Consulta_Compra->ShowDialog();
	}
}
};
}
