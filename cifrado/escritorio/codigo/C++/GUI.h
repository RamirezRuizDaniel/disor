#pragma once

namespace Cifrar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelTI;
	protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textoCifradoTI;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textoCifradoTIA;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericGrupoTIA;
	private: System::Windows::Forms::Panel^  panelTIA;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericDespCesar;
	private: System::Windows::Forms::Panel^  panelCesar;
	private: System::Windows::Forms::TextBox^  textoCifradoCesar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textoPlano;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelTI = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textoCifradoTI = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textoCifradoTIA = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericGrupoTIA = (gcnew System::Windows::Forms::NumericUpDown());
			this->panelTIA = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericDespCesar = (gcnew System::Windows::Forms::NumericUpDown());
			this->panelCesar = (gcnew System::Windows::Forms::Panel());
			this->textoCifradoCesar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textoPlano = (gcnew System::Windows::Forms::TextBox());
			this->panelTI->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericGrupoTIA))->BeginInit();
			this->panelTIA->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericDespCesar))->BeginInit();
			this->panelCesar->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelTI
			// 
			this->panelTI->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelTI->Controls->Add(this->label8);
			this->panelTI->Controls->Add(this->textoCifradoTI);
			this->panelTI->Controls->Add(this->label6);
			this->panelTI->Location = System::Drawing::Point(345, 189);
			this->panelTI->Margin = System::Windows::Forms::Padding(4);
			this->panelTI->Name = L"panelTI";
			this->panelTI->Size = System::Drawing::Size(321, 235);
			this->panelTI->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Transposicion Inversa";
			// 
			// textoCifradoTI
			// 
			this->textoCifradoTI->Location = System::Drawing::Point(19, 76);
			this->textoCifradoTI->Margin = System::Windows::Forms::Padding(4);
			this->textoCifradoTI->Multiline = true;
			this->textoCifradoTI->Name = L"textoCifradoTI";
			this->textoCifradoTI->Size = System::Drawing::Size(285, 132);
			this->textoCifradoTI->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 57);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Texto Cifrado";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Transposicion Inversa Agrupada";
			// 
			// textoCifradoTIA
			// 
			this->textoCifradoTIA->Location = System::Drawing::Point(17, 118);
			this->textoCifradoTIA->Margin = System::Windows::Forms::Padding(4);
			this->textoCifradoTIA->Multiline = true;
			this->textoCifradoTIA->Name = L"textoCifradoTIA";
			this->textoCifradoTIA->Size = System::Drawing::Size(285, 90);
			this->textoCifradoTIA->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 98);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Texto Cifrado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 44);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Grupo";
			// 
			// numericGrupoTIA
			// 
			this->numericGrupoTIA->Location = System::Drawing::Point(83, 42);
			this->numericGrupoTIA->Margin = System::Windows::Forms::Padding(4);
			this->numericGrupoTIA->Name = L"numericGrupoTIA";
			this->numericGrupoTIA->Size = System::Drawing::Size(104, 20);
			this->numericGrupoTIA->TabIndex = 4;
			// 
			// panelTIA
			// 
			this->panelTIA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelTIA->Controls->Add(this->label9);
			this->panelTIA->Controls->Add(this->textoCifradoTIA);
			this->panelTIA->Controls->Add(this->label4);
			this->panelTIA->Controls->Add(this->label5);
			this->panelTIA->Controls->Add(this->numericGrupoTIA);
			this->panelTIA->Location = System::Drawing::Point(679, 189);
			this->panelTIA->Margin = System::Windows::Forms::Padding(4);
			this->panelTIA->Name = L"panelTIA";
			this->panelTIA->Size = System::Drawing::Size(321, 235);
			this->panelTIA->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Cesar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 99);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Texto Cifrado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 46);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Desplazamiento";
			// 
			// numericDespCesar
			// 
			this->numericDespCesar->Location = System::Drawing::Point(148, 46);
			this->numericDespCesar->Margin = System::Windows::Forms::Padding(4);
			this->numericDespCesar->Name = L"numericDespCesar";
			this->numericDespCesar->Size = System::Drawing::Size(104, 20);
			this->numericDespCesar->TabIndex = 0;
			// 
			// panelCesar
			// 
			this->panelCesar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelCesar->Controls->Add(this->label7);
			this->panelCesar->Controls->Add(this->textoCifradoCesar);
			this->panelCesar->Controls->Add(this->label3);
			this->panelCesar->Controls->Add(this->label2);
			this->panelCesar->Controls->Add(this->numericDespCesar);
			this->panelCesar->Location = System::Drawing::Point(14, 189);
			this->panelCesar->Margin = System::Windows::Forms::Padding(4);
			this->panelCesar->Name = L"panelCesar";
			this->panelCesar->Size = System::Drawing::Size(321, 235);
			this->panelCesar->TabIndex = 9;
			// 
			// textoCifradoCesar
			// 
			this->textoCifradoCesar->Location = System::Drawing::Point(16, 119);
			this->textoCifradoCesar->Margin = System::Windows::Forms::Padding(4);
			this->textoCifradoCesar->Multiline = true;
			this->textoCifradoCesar->Name = L"textoCifradoCesar";
			this->textoCifradoCesar->Size = System::Drawing::Size(285, 90);
			this->textoCifradoCesar->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(215, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Texto Plano";
			// 
			// textoPlano
			// 
			this->textoPlano->Location = System::Drawing::Point(219, 37);
			this->textoPlano->Margin = System::Windows::Forms::Padding(4);
			this->textoPlano->Multiline = true;
			this->textoPlano->Name = L"textoPlano";
			this->textoPlano->Size = System::Drawing::Size(584, 117);
			this->textoPlano->TabIndex = 12;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1015, 443);
			this->Controls->Add(this->panelTI);
			this->Controls->Add(this->panelTIA);
			this->Controls->Add(this->panelCesar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textoPlano);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->panelTI->ResumeLayout(false);
			this->panelTI->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericGrupoTIA))->EndInit();
			this->panelTIA->ResumeLayout(false);
			this->panelTIA->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericDespCesar))->EndInit();
			this->panelCesar->ResumeLayout(false);
			this->panelCesar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
