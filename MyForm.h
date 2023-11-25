#pragma once

namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ division;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ entry1;
	private: System::Windows::Forms::TextBox^ entry2;
	private: System::Windows::Forms::Label^ results;
	private: System::Windows::Forms::Label^ title;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->entry1 = (gcnew System::Windows::Forms::TextBox());
			this->entry2 = (gcnew System::Windows::Forms::TextBox());
			this->results = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(358, 74);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 43);
			this->plus->TabIndex = 0;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(277, 123);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 43);
			this->minus->TabIndex = 1;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// multiply
			// 
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->Location = System::Drawing::Point(358, 123);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(75, 43);
			this->multiply->TabIndex = 2;
			this->multiply->Text = L"*";
			this->multiply->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// division
			// 
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->division->Location = System::Drawing::Point(277, 74);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(75, 43);
			this->division->TabIndex = 3;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// entry1
			// 
			this->entry1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entry1->Location = System::Drawing::Point(49, 74);
			this->entry1->Multiline = true;
			this->entry1->Name = L"entry1";
			this->entry1->Size = System::Drawing::Size(181, 43);
			this->entry1->TabIndex = 4;
			this->entry1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->entry1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// entry2
			// 
			this->entry2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entry2->Location = System::Drawing::Point(49, 126);
			this->entry2->Multiline = true;
			this->entry2->Name = L"entry2";
			this->entry2->Size = System::Drawing::Size(181, 40);
			this->entry2->TabIndex = 5;
			this->entry2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->entry2->TextChanged += gcnew System::EventHandler(this, &MyForm::entry2_TextChanged);
			// 
			// results
			// 
			this->results->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->results->Location = System::Drawing::Point(176, 187);
			this->results->Name = L"results";
			this->results->Size = System::Drawing::Size(138, 38);
			this->results->TabIndex = 6;
			this->results->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->results->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// title
			// 
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(134, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(227, 23);
			this->title->TabIndex = 7;
			this->title->Text = L"Simple Calculator";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 263);
			this->Controls->Add(this->title);
			this->Controls->Add(this->results);
			this->Controls->Add(this->entry2);
			this->Controls->Add(this->entry1);
			this->Controls->Add(this->division);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void entry2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		results->Text = "= " + System::Convert::ToString(System::Convert::ToInt16(entry1->Text) + System::Convert::ToInt16(entry2->Text));
	}
	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		results->Text = "= " + System::Convert::ToString(System::Convert::ToInt16(entry1->Text) * System::Convert::ToInt16(entry2->Text));
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		results->Text = "= " + System::Convert::ToString(System::Convert::ToInt16(entry1->Text) - System::Convert::ToInt16(entry2->Text));
	}
	private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
		results->Text = "= " + System::Convert::ToString(System::Convert::ToInt16(entry1->Text) / System::Convert::ToInt16(entry2->Text));
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
