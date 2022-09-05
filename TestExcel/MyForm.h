#pragma once

#include "Converter.h"
#include "DataСollectionFile.h"
#include "Transfer.h"
#include "CSVFileGen.h"

namespace TestExcel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;












	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ запросыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ включитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отключитьToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->запросыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->включитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отключитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Укажите путь к Excel(.csv) файлу:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Загрузить в БД";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(413, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Слияние файлов в csv";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(413, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(410, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Укажите путь к файлу:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(710, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 20);
			this->button4->TabIndex = 5;
			this->button4->Text = L"...";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(413, 85);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(291, 20);
			this->textBox7->TabIndex = 28;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(410, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Укажите путь к выходному файлу:";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(710, 85);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 20);
			this->button9->TabIndex = 26;
			this->button9->Text = L"...";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog1";
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(12, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 314);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Загрузка данных в MySQL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите запрос:";
			this->label2->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 153);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(320, 155);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(403, 36);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(332, 314);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Генерация .csv файла:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(759, 24);
			this->menuStrip1->TabIndex = 31;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->запросыToolStripMenuItem });
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// запросыToolStripMenuItem
			// 
			this->запросыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->включитьToolStripMenuItem,
					this->отключитьToolStripMenuItem
			});
			this->запросыToolStripMenuItem->Name = L"запросыToolStripMenuItem";
			this->запросыToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->запросыToolStripMenuItem->Text = L"Запросы";
			// 
			// включитьToolStripMenuItem
			// 
			this->включитьToolStripMenuItem->Name = L"включитьToolStripMenuItem";
			this->включитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->включитьToolStripMenuItem->Text = L"Включить";
			this->включитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::включитьToolStripMenuItem_Click);
			// 
			// отключитьToolStripMenuItem
			// 
			this->отключитьToolStripMenuItem->Name = L"отключитьToolStripMenuItem";
			this->отключитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->отключитьToolStripMenuItem->Text = L"Отключить";
			this->отключитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отключитьToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 393);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Converter Power BI";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Конвертирование строки из String^ в std::string
		std::string ConverterCtringToString(String^ text_box, std::string& text) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(text_box)).ToPointer();
			text = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return text;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ OpenFileDialog1 = gcnew OpenFileDialog();
		if (OpenFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			textBox1->Text = OpenFileDialog1->FileName;
		};
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string path;
			ConverterCtringToString(textBox1->Text, path);
		 
			DataСollection data;
			data.OpenFile(path);

			TransferInDataBase transit;
			transit.Transfer(data.GetData());

			std::string request_str;
            String^ request;

			MySqlConnection^ conDataBase = gcnew MySqlConnection("datasource=localhost;port=3306;username=root;password=12345;database=databaseanalytics");
			MySqlCommand^ cmdDataBase;
			MySqlDataReader^ myReader;

			try {
				conDataBase->Open();
				for (int i = 0; i < transit.GetRequest().size(); i++) {
					request_str = transit.GetRequest()[i];
					request = gcnew String(request_str.c_str());
					cmdDataBase = gcnew MySqlCommand(request, conDataBase);
					myReader = cmdDataBase->ExecuteReader();
					myReader->Close();
				}

				/*while (myReader->Read()) {
					dataGridView1->Rows->Add(myReader["id"], myReader["Name"], myReader["SecondName"],
						myReader["SurName"], myReader["Gender"], myReader["DataBrith"], myReader["PlaceResidece"],
						myReader["PhoneNumber"], myReader["DateInsurance"], myReader["insuranceEndDate"]);
				}*/
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string path;
		std::string path_txt;
		ConverterCtringToString(textBox7->Text, path);
		ConverterCtringToString(textBox2->Text, path_txt);

		FileGeneration File;
		File.CreateOutFile(path);
		File.CopyDataInFile(path_txt);
		File.AddDataInFile();
		File.GetOutFile();
	}


private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		textBox7->Text = folderBrowserDialog1->SelectedPath;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	   OpenFileDialog^ OpenFileDialog3 = gcnew OpenFileDialog();
	   if (OpenFileDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		   textBox2->Text = OpenFileDialog3->FileName;
	   }
	   }
private: System::Void включитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Visible == false)
		label2->Visible = true;
	    richTextBox1->Visible = true;
}
private: System::Void отключитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Visible == true)
		richTextBox1->Visible = false;
	    label2->Visible = false;
}
};
}
