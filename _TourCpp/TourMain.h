#pragma once
#include "localstorage.h"
#include <msclr\marshal_cppstd.h>

namespace tour {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class TourApp : public System::Windows::Forms::Form
	{
#pragma region misc
	public:
		TourApp(void)
		{
			InitializeComponent();
		}
		
	protected:
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
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFrom;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxTCountry;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerTo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxTAmount;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxTValue;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxTExtra;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxTCity;

	private: System::Windows::Forms::Button^ buttonAddTour;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBoxCDis;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBoxCPhone;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxCPass;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBoxCSerial;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBoxCPat;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBoxCName;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBoxCSurname;


	private: System::Windows::Forms::Button^ buttonClientAdd;

	private:
		System::ComponentModel::Container ^components;
#pragma endregion
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->buttonAddTour = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTAmount = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTValue = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTExtra = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTCity = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTCountry = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonClientAdd = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxCDis = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxCPhone = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxCPass = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxCSerial = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxCPat = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxCName = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxCSurname = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->buttonEmpConfirm = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxEPat = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxEName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxESurname = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
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
			this->tabPage1->Controls->Add(this->buttonAddTour);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->textBoxTAmount);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBoxTValue);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBoxTExtra);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBoxTCity);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBoxTCountry);
			this->tabPage1->Controls->Add(this->dateTimePickerTo);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->dateTimePickerFrom);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(894, 477);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Регистрация путевки";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonAddTour
			// 
			this->buttonAddTour->Location = System::Drawing::Point(728, 448);
			this->buttonAddTour->Name = L"buttonAddTour";
			this->buttonAddTour->Size = System::Drawing::Size(160, 23);
			this->buttonAddTour->TabIndex = 18;
			this->buttonAddTour->Text = L"Добавить";
			this->buttonAddTour->UseVisualStyleBackColor = true;
			this->buttonAddTour->Click += gcnew System::EventHandler(this, &TourApp::buttonAddTour_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Кол-во";
			// 
			// textBoxTAmount
			// 
			this->textBoxTAmount->Location = System::Drawing::Point(9, 253);
			this->textBoxTAmount->Name = L"textBoxTAmount";
			this->textBoxTAmount->Size = System::Drawing::Size(200, 20);
			this->textBoxTAmount->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 198);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Цена";
			// 
			// textBoxTValue
			// 
			this->textBoxTValue->Location = System::Drawing::Point(9, 214);
			this->textBoxTValue->Name = L"textBoxTValue";
			this->textBoxTValue->Size = System::Drawing::Size(200, 20);
			this->textBoxTValue->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Дополнительно";
			// 
			// textBoxTExtra
			// 
			this->textBoxTExtra->Location = System::Drawing::Point(9, 175);
			this->textBoxTExtra->Name = L"textBoxTExtra";
			this->textBoxTExtra->Size = System::Drawing::Size(200, 20);
			this->textBoxTExtra->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Город";
			// 
			// textBoxTCity
			// 
			this->textBoxTCity->Location = System::Drawing::Point(9, 136);
			this->textBoxTCity->Name = L"textBoxTCity";
			this->textBoxTCity->Size = System::Drawing::Size(200, 20);
			this->textBoxTCity->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Страна";
			// 
			// textBoxTCountry
			// 
			this->textBoxTCountry->Location = System::Drawing::Point(9, 97);
			this->textBoxTCountry->Name = L"textBoxTCountry";
			this->textBoxTCountry->Size = System::Drawing::Size(200, 20);
			this->textBoxTCountry->TabIndex = 8;
			// 
			// dateTimePickerTo
			// 
			this->dateTimePickerTo->Location = System::Drawing::Point(9, 58);
			this->dateTimePickerTo->Name = L"dateTimePickerTo";
			this->dateTimePickerTo->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerTo->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Дата прибытия";
			// 
			// dateTimePickerFrom
			// 
			this->dateTimePickerFrom->Location = System::Drawing::Point(9, 19);
			this->dateTimePickerFrom->Name = L"dateTimePickerFrom";
			this->dateTimePickerFrom->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerFrom->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Дата отправки";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonClientAdd);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->textBoxCDis);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->textBoxCPhone);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBoxCPass);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->textBoxCSerial);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->textBoxCPat);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->textBoxCName);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->textBoxCSurname);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(894, 477);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Клиент";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonClientAdd
			// 
			this->buttonClientAdd->Location = System::Drawing::Point(728, 448);
			this->buttonClientAdd->Name = L"buttonClientAdd";
			this->buttonClientAdd->Size = System::Drawing::Size(160, 23);
			this->buttonClientAdd->TabIndex = 32;
			this->buttonClientAdd->Text = L"Добавить";
			this->buttonClientAdd->UseVisualStyleBackColor = true;
			this->buttonClientAdd->Click += gcnew System::EventHandler(this, &TourApp::buttonClientAdd_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 243);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(308, 13);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Скидка на новинку. Соси не весь член, а только половинку";
			// 
			// textBoxCDis
			// 
			this->textBoxCDis->Location = System::Drawing::Point(6, 259);
			this->textBoxCDis->Name = L"textBoxCDis";
			this->textBoxCDis->Size = System::Drawing::Size(200, 20);
			this->textBoxCDis->TabIndex = 30;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 202);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Телефон";
			// 
			// textBoxCPhone
			// 
			this->textBoxCPhone->Location = System::Drawing::Point(6, 218);
			this->textBoxCPhone->Name = L"textBoxCPhone";
			this->textBoxCPhone->Size = System::Drawing::Size(200, 20);
			this->textBoxCPhone->TabIndex = 28;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Номер паспотра";
			// 
			// textBoxCPass
			// 
			this->textBoxCPass->Location = System::Drawing::Point(6, 177);
			this->textBoxCPass->Name = L"textBoxCPass";
			this->textBoxCPass->Size = System::Drawing::Size(200, 20);
			this->textBoxCPass->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Серия паспорта";
			// 
			// textBoxCSerial
			// 
			this->textBoxCSerial->Location = System::Drawing::Point(6, 138);
			this->textBoxCSerial->Name = L"textBoxCSerial";
			this->textBoxCSerial->Size = System::Drawing::Size(200, 20);
			this->textBoxCSerial->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Отчество";
			// 
			// textBoxCPat
			// 
			this->textBoxCPat->Location = System::Drawing::Point(6, 99);
			this->textBoxCPat->Name = L"textBoxCPat";
			this->textBoxCPat->Size = System::Drawing::Size(200, 20);
			this->textBoxCPat->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Имя";
			// 
			// textBoxCName
			// 
			this->textBoxCName->Location = System::Drawing::Point(6, 60);
			this->textBoxCName->Name = L"textBoxCName";
			this->textBoxCName->Size = System::Drawing::Size(200, 20);
			this->textBoxCName->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 5);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Фамилия";
			// 
			// textBoxCSurname
			// 
			this->textBoxCSurname->Location = System::Drawing::Point(6, 21);
			this->textBoxCSurname->Name = L"textBoxCSurname";
			this->textBoxCSurname->Size = System::Drawing::Size(200, 20);
			this->textBoxCSurname->TabIndex = 18;
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
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(894, 477);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Продажа";
			this->tabPage5->UseVisualStyleBackColor = true;
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
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		Employee * currentEmployee;
		
		void regEmployee() {
			currentEmployee = new Employee();
			currentEmployee->name = msclr::interop::marshal_as<std::string>(textBoxEName->Text);
			currentEmployee->surname = msclr::interop::marshal_as<std::string>(textBoxESurname->Text);
			currentEmployee->pat = msclr::interop::marshal_as<std::string>(textBoxEPat->Text);
		}

		void regTour() {
			Ticket * ticket = new Ticket();
			ticket->num = ticketNum;
			ticketNum++;
			ticket->sendDate = msclr::interop::marshal_as<std::string>(dateTimePickerFrom->Value.ToString());
			ticket->retDate = msclr::interop::marshal_as<std::string>(dateTimePickerTo->Value.ToString());
			ticket->country = msclr::interop::marshal_as<std::string>(textBoxTCountry->Text);
			ticket->city = msclr::interop::marshal_as<std::string>(textBoxTCity->Text);
			ticket->extraStuff = msclr::interop::marshal_as<std::string>(textBoxTExtra->Text);
			ticket->price = msclr::interop::marshal_as<std::string>(textBoxTValue->Text);
			ticket->amount = msclr::interop::marshal_as<std::string>(textBoxTAmount->Text);
			tickets.push_back(ticket);
		}

		void addClient() {
			Client * client = new Client();
			client->name = msclr::interop::marshal_as<std::string>(textBoxCName->Text);
			client->surname = msclr::interop::marshal_as<std::string>(textBoxCSurname->Text);
			client->pat = msclr::interop::marshal_as<std::string>(textBoxCPat->Text);
			client->serial = msclr::interop::marshal_as<std::string>(textBoxCSerial->Text);
			client->pnum = msclr::interop::marshal_as<std::string>(textBoxCPass->Text);
			client->number = msclr::interop::marshal_as<std::string>(textBoxCPhone->Text);
			client->discount = msclr::interop::marshal_as<std::string>(textBoxCDis->Text);
			clients.push_back(client);
		}

	private: 
		System::Void buttonEmpConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
			regEmployee();
	    }

        System::Void buttonAddTour_Click(System::Object^ sender, System::EventArgs^ e) {
			regTour();
        }

        System::Void buttonClientAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			addClient();
        }
};
}
