#pragma once
#include "MyForm1.h"
#include "Marks.h"

namespace Students_module {

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
	
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  редактированиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  поискToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выводToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  всехToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  хорошихУчениковToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  плохихУчениковToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  отменаToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	public: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->редактированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поискToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выводToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всехToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->хорошихУчениковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->плохихУчениковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->редактированиеToolStripMenuItem,
					this->поискToolStripMenuItem, this->удалениеToolStripMenuItem, this->выводToolStripMenuItem, this->отменаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(479, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// редактированиеToolStripMenuItem
			// 
			this->редактированиеToolStripMenuItem->Name = L"редактированиеToolStripMenuItem";
			this->редактированиеToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->редактированиеToolStripMenuItem->Text = L"Редактирование";
			this->редактированиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::редактированиеToolStripMenuItem_Click);
			// 
			// поискToolStripMenuItem
			// 
			this->поискToolStripMenuItem->Name = L"поискToolStripMenuItem";
			this->поискToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->поискToolStripMenuItem->Text = L"Поиск";
			this->поискToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::поискToolStripMenuItem_Click);
			// 
			// удалениеToolStripMenuItem
			// 
			this->удалениеToolStripMenuItem->Name = L"удалениеToolStripMenuItem";
			this->удалениеToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->удалениеToolStripMenuItem->Text = L"Удаление";
			this->удалениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалениеToolStripMenuItem_Click);
			// 
			// выводToolStripMenuItem
			// 
			this->выводToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->всехToolStripMenuItem,
					this->хорошихУчениковToolStripMenuItem, this->плохихУчениковToolStripMenuItem
			});
			this->выводToolStripMenuItem->Name = L"выводToolStripMenuItem";
			this->выводToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выводToolStripMenuItem->Text = L"Вывод";
			this->выводToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выводToolStripMenuItem_Click);
			// 
			// всехToolStripMenuItem
			// 
			this->всехToolStripMenuItem->Name = L"всехToolStripMenuItem";
			this->всехToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->всехToolStripMenuItem->Text = L"Всех";
			this->всехToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::всехToolStripMenuItem_Click);
			// 
			// хорошихУчениковToolStripMenuItem
			// 
			this->хорошихУчениковToolStripMenuItem->Name = L"хорошихУчениковToolStripMenuItem";
			this->хорошихУчениковToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->хорошихУчениковToolStripMenuItem->Text = L"Хороших учеников";
			this->хорошихУчениковToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::хорошихУчениковToolStripMenuItem_Click);
			// 
			// плохихУчениковToolStripMenuItem
			// 
			this->плохихУчениковToolStripMenuItem->Name = L"плохихУчениковToolStripMenuItem";
			this->плохихУчениковToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->плохихУчениковToolStripMenuItem->Text = L"Плохих учеников";
			this->плохихУчениковToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::плохихУчениковToolStripMenuItem_Click);
			// 
			// отменаToolStripMenuItem
			// 
			this->отменаToolStripMenuItem->Name = L"отменаToolStripMenuItem";
			this->отменаToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->отменаToolStripMenuItem->Text = L"Отмена";
			this->отменаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отменаToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(225, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(238, 292);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Иван";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Иванов";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"Иванович";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(111, 129);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"пр. Науки, 89";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(111, 155);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"12.12.2003";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(111, 185);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->Text = L"8";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(111, 211);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"10";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(111, 237);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 10;
			this->textBox8->Text = L"11";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(111, 263);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 14;
			this->textBox9->Text = L"12";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(111, 289);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 15;
			this->textBox10->Text = L"9";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Адрес";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Дата Рождения";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 185);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Класс";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Литература";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"История";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Математика";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 292);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Физика";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(57, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Данные ученика";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(291, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Поле результатов";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 352);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(495, 390);
			this->MinimumSize = System::Drawing::Size(495, 390);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Students_module";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void выводToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void всехToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void редактированиеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void отменаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void поискToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void удалениеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);

		 public: void scr_out(std::vector <Marks>::iterator);
				 public: void insert();
private: System::Void хорошихУчениковToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void плохихУчениковToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
};
}
