
#pragma once
#include "myVector.h"
#include "Plot.h"

namespace BD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();



		}



	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ main_menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_GenerateBeam;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox_beam;
	private: System::Windows::Forms::GroupBox^ groupBox_field;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;








	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->main_menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_GenerateBeam = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox_beam = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_field = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->main_menuStrip->SuspendLayout();
			this->groupBox_beam->SuspendLayout();
			this->groupBox_field->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_menuStrip
			// 
			this->main_menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->main_menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->ñïğàâêàToolStripMenuItem
			});
			this->main_menuStrip->Location = System::Drawing::Point(0, 0);
			this->main_menuStrip->Name = L"main_menuStrip";
			this->main_menuStrip->Size = System::Drawing::Size(777, 28);
			this->main_menuStrip->TabIndex = 0;
			this->main_menuStrip->Text = L"main_menuStrip";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->ñîõğàíèòüÂÔàéëToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ïğîåêò";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			// 
			// ñîõğàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõğàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõğàíèòü â ôàéë";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(578, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ÎÊ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(578, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"N";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(601, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(61, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"100";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_GenerateBeam
			// 
			this->button_GenerateBeam->Location = System::Drawing::Point(6, 21);
			this->button_GenerateBeam->Name = L"button_GenerateBeam";
			this->button_GenerateBeam->Size = System::Drawing::Size(261, 39);
			this->button_GenerateBeam->TabIndex = 4;
			this->button_GenerateBeam->Text = L"Ãåíåğàöèÿ ïó÷êà";
			this->button_GenerateBeam->UseVisualStyleBackColor = true;
			this->button_GenerateBeam->Click += gcnew System::EventHandler(this, &MainForm::button_GenerateBeam_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Ìàãíèòíàÿ ôîêóñèğóşùàÿ ñèñòåìà";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox_beam
			// 
			this->groupBox_beam->Controls->Add(this->button_GenerateBeam);
			this->groupBox_beam->Location = System::Drawing::Point(19, 42);
			this->groupBox_beam->Name = L"groupBox_beam";
			this->groupBox_beam->Size = System::Drawing::Size(273, 193);
			this->groupBox_beam->TabIndex = 6;
			this->groupBox_beam->TabStop = false;
			this->groupBox_beam->Text = L"Ïó÷îê çàğÿæåííûõ ÷àñòèö";
			// 
			// groupBox_field
			// 
			this->groupBox_field->Controls->Add(this->button5);
			this->groupBox_field->Controls->Add(this->button4);
			this->groupBox_field->Controls->Add(this->button3);
			this->groupBox_field->Controls->Add(this->button2);
			this->groupBox_field->Enabled = false;
			this->groupBox_field->Location = System::Drawing::Point(298, 42);
			this->groupBox_field->Name = L"groupBox_field";
			this->groupBox_field->Size = System::Drawing::Size(274, 193);
			this->groupBox_field->TabIndex = 7;
			this->groupBox_field->TabStop = false;
			this->groupBox_field->Text = L"Ìîäåëèğóåìàÿ çàäà÷à";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"×èêåéí";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(261, 31);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Äå÷èğïåğ";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(261, 43);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Êèëüâàòåğíàÿ äèıëåêòğè÷åñêàÿ ñòğóêòóğà";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 297);
			this->Controls->Add(this->groupBox_field);
			this->Controls->Add(this->groupBox_beam);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->main_menuStrip);
			this->MainMenuStrip = this->main_menuStrip;
			this->Name = L"MainForm";
			this->Text = L"Äèíàìèêà ÷àñòèö ";
			this->main_menuStrip->ResumeLayout(false);
			this->main_menuStrip->PerformLayout();
			this->groupBox_beam->ResumeLayout(false);
			this->groupBox_field->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Plot^ p1 = gcnew Plot();

			p1->N = Convert::ToInt64(textBox1->Text);
			
			p1->Show();
			p1->graphic();
		}
	private: System::Void button_GenerateBeam_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
};
}