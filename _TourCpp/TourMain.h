#pragma once
#include "client.h"
#include "ticket.h"
#include "deal.h"
#include <msclr\marshal_cppstd.h>

namespace tour {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class TourApp : public System::Windows::Forms::Form
	{
	public:
		TourApp(void)
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
		~TourApp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxEPat;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxEName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxESurname;


	private: System::Windows::Forms::Button^ buttonEmpConfirm;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->buttonEmpConfirm = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxEPat = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxEName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxESurname = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(902, 503);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(894, 477);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Регистрация путевки";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(894, 477);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Клиент";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(894, 477);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Запрос";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->buttonEmpConfirm);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->textBoxEPat);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->textBoxEName);
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Controls->Add(this->textBoxESurname);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(894, 477);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Текущий сотрудник";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// buttonEmpConfirm
			// 
			this->buttonEmpConfirm->Location = System::Drawing::Point(728, 448);
			this->buttonEmpConfirm->Name = L"buttonEmpConfirm";
			this->buttonEmpConfirm->Size = System::Drawing::Size(160, 23);
			this->buttonEmpConfirm->TabIndex = 8;
			this->buttonEmpConfirm->Text = L"Применить";
			this->buttonEmpConfirm->UseVisualStyleBackColor = true;
			this->buttonEmpConfirm->Click += gcnew System::EventHandler(this, &TourApp::buttonEmpConfirm_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Отчество";
			// 
			// textBoxEPat
			// 
			this->textBoxEPat->Location = System::Drawing::Point(6, 101);
			this->textBoxEPat->Name = L"textBoxEPat";
			this->textBoxEPat->Size = System::Drawing::Size(155, 20);
			this->textBoxEPat->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Имя";
			// 
			// textBoxEName
			// 
			this->textBoxEName->Location = System::Drawing::Point(6, 62);
			this->textBoxEName->Name = L"textBoxEName";
			this->textBoxEName->Size = System::Drawing::Size(155, 20);
			this->textBoxEName->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Фамилия";
			// 
			// textBoxESurname
			// 
			this->textBoxESurname->Location = System::Drawing::Point(6, 22);
			this->textBoxESurname->Name = L"textBoxESurname";
			this->textBoxESurname->Size = System::Drawing::Size(155, 20);
			this->textBoxESurname->TabIndex = 1;
			// 
			// TourApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 527);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"TourApp";
			this->Text = L"Tour";
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		Employee * currentEmployee;

		Deal * deals;
		Client * clients;
		Ticket * tickets;
		
		void regEmployee() {
			currentEmployee = new Employee();
			currentEmployee->name = msclr::interop::marshal_as<std::string>(textBoxEName->Text);
			currentEmployee->surname = msclr::interop::marshal_as<std::string>(textBoxESurname->Text);
			currentEmployee->pat = msclr::interop::marshal_as<std::string>(textBoxEPat->Text);
		}

	private: 
		System::Void buttonEmpConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
			regEmployee();
			
	    }
};
}
