#pragma once

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FormularioPrincipal
	/// </summary>
	public ref class FormularioPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormularioPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~FormularioPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbNumero1;
	private: System::Windows::Forms::TextBox^ tbNumero2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbOperacao;
	private: System::Windows::Forms::Button^ btCalcular;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbResultado;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbNumero1 = (gcnew System::Windows::Forms::TextBox());
			this->tbNumero2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbOperacao = (gcnew System::Windows::Forms::ComboBox());
			this->btCalcular = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbResultado = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero 2";
			// 
			// tbNumero1
			// 
			this->tbNumero1->Location = System::Drawing::Point(15, 25);
			this->tbNumero1->Name = L"tbNumero1";
			this->tbNumero1->Size = System::Drawing::Size(100, 20);
			this->tbNumero1->TabIndex = 2;
			// 
			// tbNumero2
			// 
			this->tbNumero2->Location = System::Drawing::Point(121, 25);
			this->tbNumero2->Name = L"tbNumero2";
			this->tbNumero2->Size = System::Drawing::Size(100, 20);
			this->tbNumero2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Operacao";
			// 
			// cbOperacao
			// 
			this->cbOperacao->FormattingEnabled = true;
			this->cbOperacao->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Adicao", L"Subtracao", L"Multplicacao", L"Divisao" });
			this->cbOperacao->Location = System::Drawing::Point(15, 64);
			this->cbOperacao->Name = L"cbOperacao";
			this->cbOperacao->Size = System::Drawing::Size(100, 21);
			this->cbOperacao->TabIndex = 5;
			// 
			// btCalcular
			// 
			this->btCalcular->Location = System::Drawing::Point(124, 64);
			this->btCalcular->Name = L"btCalcular";
			this->btCalcular->Size = System::Drawing::Size(97, 23);
			this->btCalcular->TabIndex = 6;
			this->btCalcular->Text = L"Calcular";
			this->btCalcular->UseVisualStyleBackColor = true;
			this->btCalcular->Click += gcnew System::EventHandler(this, &FormularioPrincipal::btCalcular_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Resultado";
			// 
			// tbResultado
			// 
			this->tbResultado->Location = System::Drawing::Point(15, 104);
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(100, 20);
			this->tbResultado->TabIndex = 8;
			// 
			// FormularioPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 141);
			this->Controls->Add(this->tbResultado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btCalcular);
			this->Controls->Add(this->cbOperacao);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbNumero2);
			this->Controls->Add(this->tbNumero1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormularioPrincipal";
			this->Text = L"Calculadora";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		// lendo entradas
		double numero1 = Convert::ToDouble(tbNumero1->Text);
		double numero2 = Convert::ToDouble(tbNumero2->Text);
		int opcao = cbOperacao->SelectedIndex;
		double resultado;
		// calculando saida
		switch (opcao)
		{
		case 0:
			resultado = numero1 + numero2;
			break;
		case 1:
			resultado = numero1 - numero2;
			break;
		case 2:
			resultado = numero1 * numero2;
			break;
		case 3:
			resultado = numero1 / numero2;
			break;
		default:
			break;
		}
		// exibindo saida
		tbResultado->Text = String::Format("{0:0.00}", resultado);
	}
};
}
