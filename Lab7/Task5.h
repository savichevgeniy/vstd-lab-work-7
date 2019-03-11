#pragma once
#include <string>

namespace Lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task5
	/// </summary>
	public ref class Task5 : public System::Windows::Forms::Form
	{
	public:
		Task5(void)
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
		~Task5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	protected:
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::MainMenu^  mainMenu1;
	private: System::Windows::Forms::MenuItem^  menuItem1;
	private: System::Windows::Forms::MenuItem^  menuItem3;
	private: System::Windows::Forms::MenuItem^  menuItem4;
	private: System::Windows::Forms::MenuItem^  menuItem2;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->mainMenu1 = (gcnew System::Windows::Forms::MainMenu(this->components));
			this->menuItem1 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem3 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem4 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem2 = (gcnew System::Windows::Forms::MenuItem());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"richTextFile|*.rtf. ";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"richTextFile|*.rtf. ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 1);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(325, 273);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// mainMenu1
			// 
			this->mainMenu1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(2) { this->menuItem1, this->menuItem2 });
			// 
			// menuItem1
			// 
			this->menuItem1->Index = 0;
			this->menuItem1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(2) { this->menuItem3, this->menuItem4 });
			this->menuItem1->Text = L"Файл";
			// 
			// menuItem3
			// 
			this->menuItem3->Index = 0;
			this->menuItem3->Text = L"Открыть";
			this->menuItem3->Click += gcnew System::EventHandler(this, &Task5::menuItem3_Click);
			// 
			// menuItem4
			// 
			this->menuItem4->Index = 1;
			this->menuItem4->Text = L"Сохранить";
			this->menuItem4->Click += gcnew System::EventHandler(this, &Task5::menuItem4_Click);
			// 
			// menuItem2
			// 
			this->menuItem2->Index = 1;
			this->menuItem2->Text = L"Текст";
			this->menuItem2->Click += gcnew System::EventHandler(this, &Task5::menuItem2_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(593, 1);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(325, 273);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(365, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Открыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task5::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(384, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Выберите операцию:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(365, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Task5::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(365, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Task5::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(365, 153);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 35);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Сортировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Task5::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(365, 239);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(189, 35);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Task5::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(365, 194);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 35);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Фильтр";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Task5::button6_Click);
			// 
			// Task5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 297);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Menu = this->mainMenu1;
			this->Name = L"Task5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Task5";
			this->Load += gcnew System::EventHandler(this, &Task5::Task5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->ShowDialog();
		richTextBox1->LoadFile(openFileDialog1->FileName);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->ShowDialog();
		richTextBox1->SaveFile(saveFileDialog1->FileName);
	}
	private: System::Void menuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		fontDialog1->ShowDialog();
		richTextBox1->Font = fontDialog1->Font;
		richTextBox2->Font = fontDialog1->Font;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Clear();
		richTextBox2->Clear();
	}
	private: System::Void menuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->ShowDialog();
		richTextBox1->LoadFile(openFileDialog1->FileName);
	}
	private: System::Void menuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->ShowDialog();
		richTextBox1->SaveFile(saveFileDialog1->FileName);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		array<System::String ^> ^s = gcnew array<System::String^>(100);
		String^ Text;
		int i, k, j;
		int n = richTextBox1->Lines->Length;
		for (i = 0; i < n; i++)
			s[i] = richTextBox1->Lines[i];
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (s[i]->Compare(s[i], s[j]) > 0)
				{
					s[99] = s[i];
					s[i] = s[j]; 
					s[j] = s[99]; 
				}
		for (i = 0; i < n; i++)
			Text += s[i] + "\n";
		richTextBox2->Text = Text;
	}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s;
	String^ soc;
	int mas[20][5];
	int n = richTextBox1->Lines->Length;
	for (int i = 0; i < n; i++)
	{
		int ns = richTextBox1->Lines[i]->Length;
		s = richTextBox1->Lines[i];
		s = s + " ";
		int k0 = s->IndexOf(" ");
		int k1 = s->IndexOf(" ", k0 + 1);
		int k2 = s->IndexOf(" ", k1 + 1);
		soc = s->Substring(k1 + 1, k2 - k1);
		mas[i][1] = Convert::ToInt32(soc);
		int k3 = s->IndexOf(" ", k2 + 1);
		soc = s->Substring(k2 + 1, k3 - k2);
		mas[i][2] = Int32::Parse(soc);
		int k4 = s->IndexOf(" ", k3 + 1);
		soc = s->Substring(k3 + 1, k4 - k3);
		mas[i][3] = Int32::Parse(soc);
		int k5 = s->IndexOf(" ", k4 + 1);
		soc = s->Substring(k4 + 1, k5 - k4);
		mas[i][4] = Int32::Parse(soc);
		int k6 = s->IndexOf(" ", k5 + 1);
		soc = s->Substring(k5 + 1, k6 - k5);
		mas[i][5] = Int32::Parse(soc);
	}
	richTextBox2->Clear();
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			if ((mas[i][j] == 2 && i != 1))
				richTextBox2->Text = richTextBox2->Text + "\n" + richTextBox1->Lines[i];
		}
	}
}
private: System::Void Task5_Load(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Filter = "RTF|*.rtf";
	saveFileDialog1->Filter = "RTF|*.rtf";
}
};
}
