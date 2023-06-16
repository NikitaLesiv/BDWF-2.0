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



	protected:

	protected:

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
			this->SuspendLayout();
			// 
			// button_GenerateBeam
			// 
			this->button_GenerateBeam->Location = System::Drawing::Point(1025, 657);
			this->button_GenerateBeam->Name = L"button_GenerateBeam";
			this->button_GenerateBeam->Size = System::Drawing::Size(134, 41);
			this->button_GenerateBeam->TabIndex = 0;
			this->button_GenerateBeam->Text = L"Создать пучок";
			this->button_GenerateBeam->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 657);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Показать / скрыть пучок";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// generationBeam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1211, 752);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_GenerateBeam);
			this->Name = L"generationBeam";
			this->Text = L"Генерация пучка частиц";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
