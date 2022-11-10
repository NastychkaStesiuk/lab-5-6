#pragma once
#include<cmath>

namespace lab56 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Умова;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Умова = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Умова->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Умова
			// 
			this->Умова->Controls->Add(this->tabPage1);
			this->Умова->Controls->Add(this->tabPage2);
			this->Умова->Controls->Add(this->tabPage3);
			this->Умова->Location = System::Drawing::Point(0, 0);
			this->Умова->Name = L"Умова";
			this->Умова->SelectedIndex = 0;
			this->Умова->Size = System::Drawing::Size(444, 362);
			this->Умова->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(436, 336);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Умова";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(65, 50);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(213, 91);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Створіть проект «Трикутник» . Дано сторони трикутника – a, b, c. Знайти\nзначення "
				L"площі трикутника.";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(436, 336);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Алгоритм";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->panel1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(436, 336);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Розвязання";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(285, 113);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(204, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Результат S=";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 235);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(26, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(163, 126);
			this->panel1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"a=";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(43, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"b=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(43, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"c=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 359);
			this->Controls->Add(this->Умова);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Умова->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float a, b, c, s, p;
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		c = Convert::ToDouble(textBox3->Text);
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		textBox4->Text = Convert::ToString(s);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
}
};
}
