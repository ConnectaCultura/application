#pragma once
#include "ConsultaCompraForm.h"
#include "TxConsultaCompres.h"

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaCompresForm
	/// </summary>
	public ref class ConsultaCompresForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaCompresForm(System::String^ ciutada)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			_correuCiu = ciutada;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultaCompresForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EsdevenimentColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataIniciColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataFiColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PreuColumn;
	private: System::String^ _correuCiu;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->EsdevenimentColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataIniciColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataFiColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PreuColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Milky Matcha Personal Use", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(60, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Les meves compres";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->EsdevenimentColumn,
					this->DataIniciColumn, this->DataFiColumn, this->PreuColumn
			});
			this->dataGridView1->Location = System::Drawing::Point(68, 148);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(662, 420);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultaCompresForm::dataGridView1_CellContentClick);
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
			// ConsultaCompresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 636);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultaCompresForm";
			this->Text = L"ConsultaCompresForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultarCompresForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaCompres txCompres(_correuCiu);
		try {
			txCompres.executar();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->Message);
		}
		List<List<System::String^>^>^ ve = txCompres.obteResultat();
		for each (List<System::String^> ^ e in ve)
		{
			dataGridView1->Rows->Add(e[0], e[1], e[2], e[3]);
		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			String^ nom = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			String^ inici = dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			String^ fi = dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			String^ preu = dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString();

			application::ConsultaCompraForm^ Consulta_Compra = gcnew application::ConsultaCompraForm(nom, inici, fi, preu);
			Consulta_Compra->ShowDialog();
		}
	}
};
}
