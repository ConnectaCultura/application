#pragma once

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CancelaEsdevenimentForm
	/// </summary>
	public ref class CancelaEsdevenimentForm : public System::Windows::Forms::Form
	{
	public:
		CancelaEsdevenimentForm(void)
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
		~CancelaEsdevenimentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ contrasenya_label;
	private: System::Windows::Forms::TextBox^ contrasenya_box;
	private: System::Windows::Forms::Button^ Accept_button;
	protected:

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
			this->contrasenya_label = (gcnew System::Windows::Forms::Label());
			this->contrasenya_box = (gcnew System::Windows::Forms::TextBox());
			this->Accept_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// contrasenya_label
			// 
			this->contrasenya_label->AutoSize = true;
			this->contrasenya_label->Location = System::Drawing::Point(26, 115);
			this->contrasenya_label->Name = L"contrasenya_label";
			this->contrasenya_label->Size = System::Drawing::Size(86, 16);
			this->contrasenya_label->TabIndex = 0;
			this->contrasenya_label->Text = L"Contrasenya:";
			// 
			// contrasenya_box
			// 
			this->contrasenya_box->Location = System::Drawing::Point(118, 109);
			this->contrasenya_box->Name = L"contrasenya_box";
			this->contrasenya_box->Size = System::Drawing::Size(100, 22);
			this->contrasenya_box->TabIndex = 1;
			// 
			// Accept_button
			// 
			this->Accept_button->Location = System::Drawing::Point(195, 218);
			this->Accept_button->Name = L"Accept_button";
			this->Accept_button->Size = System::Drawing::Size(75, 23);
			this->Accept_button->TabIndex = 2;
			this->Accept_button->Text = L"Acceptar";
			this->Accept_button->UseVisualStyleBackColor = true;
			// 
			// CancelaEsdevenimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->Accept_button);
			this->Controls->Add(this->contrasenya_box);
			this->Controls->Add(this->contrasenya_label);
			this->Name = L"CancelaEsdevenimentForm";
			this->Text = L"CancelaEsdevenimentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
