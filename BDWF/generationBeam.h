#pragma once

namespace BD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для generationBeam
	/// </summary>
	public ref class generationBeam : public System::Windows::Forms::Form
	{
	public:
		generationBeam(void)
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
		~generationBeam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_GenerateBeam;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;


	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage18;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TabControl^ tabControl5;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabControl^ tabControl6;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TabControl^ tabControl7;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TabPage^ tabPage14;

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
			this->button_GenerateBeam = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl7 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage18->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabControl7->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_GenerateBeam
			// 
			this->button_GenerateBeam->Location = System::Drawing::Point(1112, 975);
			this->button_GenerateBeam->Name = L"button_GenerateBeam";
			this->button_GenerateBeam->Size = System::Drawing::Size(134, 61);
			this->button_GenerateBeam->TabIndex = 0;
			this->button_GenerateBeam->Text = L"Создать пучок";
			this->button_GenerateBeam->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 984);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Показать / скрыть пучок";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(8, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1228, 957);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1220, 928);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Генерация пучка на основе стандартных шаблонов";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Location = System::Drawing::Point(6, 153);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1208, 363);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Виды функций плотности распределения";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Нормальное (гауссово)", L"Линейное (частный случай - равномерное)" });
			this->comboBox1->Location = System::Drawing::Point(654, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(289, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(388, 141);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Основные параметры пучка частиц";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(281, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"1e-7";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(267, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Полный электрический заряд пучка, Кл";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(281, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"9.1e-31";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Масса одной частицы, кг";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(281, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"100";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Количество частиц в сгустке";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(281, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество сгустков";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1220, 928);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Генерация пучка на основе данных из файла";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1220, 631);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Генерация пучка на основе вручную введенных данных для каждой частицы";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage18);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(0, 21);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1188, 320);
			this->tabControl2->TabIndex = 4;
			// 
			// tabPage18
			// 
			this->tabPage18->Controls->Add(this->tabControl4);
			this->tabPage18->Location = System::Drawing::Point(4, 25);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(1180, 291);
			this->tabPage18->TabIndex = 14;
			this->tabPage18->Text = L"По продольной координате (z)";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl3);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1180, 291);
			this->tabPage4->TabIndex = 15;
			this->tabPage4->Text = L"По поперечным координатам (x, y)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tabControl2);
			this->groupBox3->Location = System::Drawing::Point(10, 21);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1195, 381);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Для энергии";
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage5);
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Location = System::Drawing::Point(7, 7);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(1167, 281);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1159, 252);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Нормальное (гауссово)";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1159, 252);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Линейное (частный случай - равномерное)";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage7);
			this->tabControl4->Controls->Add(this->tabPage8);
			this->tabControl4->Location = System::Drawing::Point(7, 5);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(1167, 281);
			this->tabControl4->TabIndex = 1;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1159, 252);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Нормальное (гауссово)";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1159, 252);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Линейное (частный случай - равномерное)";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->tabControl5);
			this->groupBox4->Location = System::Drawing::Point(12, 522);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1188, 403);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Для электрического заряда";
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage9);
			this->tabControl5->Controls->Add(this->tabPage12);
			this->tabControl5->Location = System::Drawing::Point(0, 21);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(1188, 320);
			this->tabControl5->TabIndex = 4;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->tabControl6);
			this->tabPage9->Location = System::Drawing::Point(4, 25);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1180, 291);
			this->tabPage9->TabIndex = 14;
			this->tabPage9->Text = L"По продольной координате (z)";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabPage10);
			this->tabControl6->Controls->Add(this->tabPage11);
			this->tabControl6->Location = System::Drawing::Point(7, 5);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(1167, 281);
			this->tabControl6->TabIndex = 1;
			// 
			// tabPage10
			// 
			this->tabPage10->Location = System::Drawing::Point(4, 25);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1159, 252);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Нормальное (гауссово)";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 25);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1159, 252);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"Линейное (частный случай - равномерное)";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->tabControl7);
			this->tabPage12->Location = System::Drawing::Point(4, 25);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1180, 291);
			this->tabPage12->TabIndex = 15;
			this->tabPage12->Text = L"По поперечным координатам (x, y)";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// tabControl7
			// 
			this->tabControl7->Controls->Add(this->tabPage13);
			this->tabControl7->Controls->Add(this->tabPage14);
			this->tabControl7->Location = System::Drawing::Point(7, 7);
			this->tabControl7->Name = L"tabControl7";
			this->tabControl7->SelectedIndex = 0;
			this->tabControl7->Size = System::Drawing::Size(1167, 281);
			this->tabControl7->TabIndex = 0;
			// 
			// tabPage13
			// 
			this->tabPage13->Location = System::Drawing::Point(4, 25);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(1159, 252);
			this->tabPage13->TabIndex = 0;
			this->tabPage13->Text = L"Нормальное (гауссово)";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 25);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(1159, 252);
			this->tabPage14->TabIndex = 1;
			this->tabPage14->Text = L"Линейное (частный случай - равномерное)";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// generationBeam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1248, 1048);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_GenerateBeam);
			this->Name = L"generationBeam";
			this->Text = L"Генерация пучка частиц";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage18->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			this->tabControl7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
