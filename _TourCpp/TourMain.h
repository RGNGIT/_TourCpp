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
	using namespace System::IO;
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
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerSell;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ buttonSell;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::ComboBox^ comboBoxClient;
	private: System::Windows::Forms::DataGridView^ dataGridViewR1;

	private: System::Windows::Forms::Button^ buttonRClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::ComboBox^ comboBoxREmp;
private: System::Windows::Forms::DataGridView^ dataGridViewR2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::Button^ buttonREmp;
private: System::Windows::Forms::DataGridView^ dataGridViewR3;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::Button^ buttonRCity;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::ComboBox^ comboBoxRCity;
private: System::Windows::Forms::Button^ buttonSaveR3;
private: System::Windows::Forms::Button^ buttonSaveR1;
private: System::Windows::Forms::Button^ buttonSaveR2;








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
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSell = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerSell = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->buttonEmpConfirm = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxEPat = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxEName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxESurname = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewR1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonRClient = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBoxClient = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->buttonREmp = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBoxREmp = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewR2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->buttonRCity = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBoxRCity = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewR3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonSaveR3 = (gcnew System::Windows::Forms::Button());
			this->buttonSaveR2 = (gcnew System::Windows::Forms::Button());
			this->buttonSaveR1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewR1))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewR2))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewR3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(902, 503);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &TourApp::tabControl1_SelectedIndexChanged);
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
			this->label17->Size = System::Drawing::Size(44, 13);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Скидка";
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
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->buttonSell);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->dateTimePickerSell);
			this->tabPage5->Controls->Add(this->comboBox3);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->comboBox2);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->comboBox1);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(894, 477);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Продажа";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// buttonSell
			// 
			this->buttonSell->Location = System::Drawing::Point(728, 448);
			this->buttonSell->Name = L"buttonSell";
			this->buttonSell->Size = System::Drawing::Size(160, 23);
			this->buttonSell->TabIndex = 33;
			this->buttonSell->Text = L"Добавить";
			this->buttonSell->UseVisualStyleBackColor = true;
			this->buttonSell->Click += gcnew System::EventHandler(this, &TourApp::buttonSell_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 127);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(80, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Дата продажи";
			// 
			// dateTimePickerSell
			// 
			this->dateTimePickerSell->Location = System::Drawing::Point(9, 143);
			this->dateTimePickerSell->Name = L"dateTimePickerSell";
			this->dateTimePickerSell->Size = System::Drawing::Size(309, 20);
			this->dateTimePickerSell->TabIndex = 6;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(9, 103);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(309, 21);
			this->comboBox3->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 87);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Путевка";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(9, 62);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(309, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 46);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(43, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Клиент";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(9, 23);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(309, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 7);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Сотрудник";
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
			this->tabPage4->Text = L"Сотрудник";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// buttonEmpConfirm
			// 
			this->buttonEmpConfirm->Location = System::Drawing::Point(728, 448);
			this->buttonEmpConfirm->Name = L"buttonEmpConfirm";
			this->buttonEmpConfirm->Size = System::Drawing::Size(160, 23);
			this->buttonEmpConfirm->TabIndex = 8;
			this->buttonEmpConfirm->Text = L"Добавить";
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(894, 477);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Запрос";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Location = System::Drawing::Point(6, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(882, 465);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->buttonSaveR1);
			this->tabPage6->Controls->Add(this->dataGridViewR1);
			this->tabPage6->Controls->Add(this->buttonRClient);
			this->tabPage6->Controls->Add(this->label22);
			this->tabPage6->Controls->Add(this->comboBoxClient);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(874, 439);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Путевка определённого клиента";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridViewR1
			// 
			this->dataGridViewR1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewR1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridViewR1->Location = System::Drawing::Point(234, 6);
			this->dataGridViewR1->Name = L"dataGridViewR1";
			this->dataGridViewR1->Size = System::Drawing::Size(634, 427);
			this->dataGridViewR1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Номер";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Дата отправления";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Дата возврата";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Страна, город";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Дополнительно";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Цена";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Дата продажи";
			this->Column7->Name = L"Column7";
			// 
			// buttonRClient
			// 
			this->buttonRClient->Location = System::Drawing::Point(6, 381);
			this->buttonRClient->Name = L"buttonRClient";
			this->buttonRClient->Size = System::Drawing::Size(222, 23);
			this->buttonRClient->TabIndex = 6;
			this->buttonRClient->Text = L"Найти";
			this->buttonRClient->UseVisualStyleBackColor = true;
			this->buttonRClient->Click += gcnew System::EventHandler(this, &TourApp::buttonRClient_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(43, 13);
			this->label22->TabIndex = 5;
			this->label22->Text = L"Клиент";
			// 
			// comboBoxClient
			// 
			this->comboBoxClient->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxClient->FormattingEnabled = true;
			this->comboBoxClient->Location = System::Drawing::Point(6, 19);
			this->comboBoxClient->Name = L"comboBoxClient";
			this->comboBoxClient->Size = System::Drawing::Size(222, 21);
			this->comboBoxClient->TabIndex = 4;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->buttonSaveR2);
			this->tabPage7->Controls->Add(this->buttonREmp);
			this->tabPage7->Controls->Add(this->label23);
			this->tabPage7->Controls->Add(this->comboBoxREmp);
			this->tabPage7->Controls->Add(this->dataGridViewR2);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(874, 439);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Список городов, в которые оформлял путевки заданный сотрудник";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// buttonREmp
			// 
			this->buttonREmp->Location = System::Drawing::Point(6, 381);
			this->buttonREmp->Name = L"buttonREmp";
			this->buttonREmp->Size = System::Drawing::Size(222, 23);
			this->buttonREmp->TabIndex = 11;
			this->buttonREmp->Text = L"Найти";
			this->buttonREmp->UseVisualStyleBackColor = true;
			this->buttonREmp->Click += gcnew System::EventHandler(this, &TourApp::buttonREmp_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 6);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(60, 13);
			this->label23->TabIndex = 10;
			this->label23->Text = L"Сотрудник";
			// 
			// comboBoxREmp
			// 
			this->comboBoxREmp->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxREmp->FormattingEnabled = true;
			this->comboBoxREmp->Location = System::Drawing::Point(6, 22);
			this->comboBoxREmp->Name = L"comboBoxREmp";
			this->comboBoxREmp->Size = System::Drawing::Size(222, 21);
			this->comboBoxREmp->TabIndex = 9;
			// 
			// dataGridViewR2
			// 
			this->dataGridViewR2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewR2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dataGridViewR2->Location = System::Drawing::Point(234, 6);
			this->dataGridViewR2->Name = L"dataGridViewR2";
			this->dataGridViewR2->Size = System::Drawing::Size(634, 427);
			this->dataGridViewR2->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Город";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->buttonSaveR3);
			this->tabPage8->Controls->Add(this->buttonRCity);
			this->tabPage8->Controls->Add(this->label24);
			this->tabPage8->Controls->Add(this->comboBoxRCity);
			this->tabPage8->Controls->Add(this->dataGridViewR3);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(874, 439);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"Перечень путевок в определенную страну и город";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// buttonRCity
			// 
			this->buttonRCity->Location = System::Drawing::Point(9, 381);
			this->buttonRCity->Name = L"buttonRCity";
			this->buttonRCity->Size = System::Drawing::Size(222, 23);
			this->buttonRCity->TabIndex = 13;
			this->buttonRCity->Text = L"Найти";
			this->buttonRCity->UseVisualStyleBackColor = true;
			this->buttonRCity->Click += gcnew System::EventHandler(this, &TourApp::buttonRCity_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 6);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(37, 13);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Город";
			// 
			// comboBoxRCity
			// 
			this->comboBoxRCity->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxRCity->FormattingEnabled = true;
			this->comboBoxRCity->Location = System::Drawing::Point(9, 22);
			this->comboBoxRCity->Name = L"comboBoxRCity";
			this->comboBoxRCity->Size = System::Drawing::Size(222, 21);
			this->comboBoxRCity->TabIndex = 11;
			// 
			// dataGridViewR3
			// 
			this->dataGridViewR3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewR3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->Column8
			});
			this->dataGridViewR3->Location = System::Drawing::Point(234, 6);
			this->dataGridViewR3->Name = L"dataGridViewR3";
			this->dataGridViewR3->Size = System::Drawing::Size(634, 427);
			this->dataGridViewR3->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Номер";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Дата отправления";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Дата возврата";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Страна, город";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Дополнительно";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Цена";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Кол-во";
			this->Column8->Name = L"Column8";
			// 
			// buttonSaveR3
			// 
			this->buttonSaveR3->Location = System::Drawing::Point(9, 410);
			this->buttonSaveR3->Name = L"buttonSaveR3";
			this->buttonSaveR3->Size = System::Drawing::Size(222, 23);
			this->buttonSaveR3->TabIndex = 14;
			this->buttonSaveR3->Text = L"Сохранить в файл";
			this->buttonSaveR3->UseVisualStyleBackColor = true;
			this->buttonSaveR3->Click += gcnew System::EventHandler(this, &TourApp::buttonSaveR3_Click);
			// 
			// buttonSaveR2
			// 
			this->buttonSaveR2->Location = System::Drawing::Point(6, 410);
			this->buttonSaveR2->Name = L"buttonSaveR2";
			this->buttonSaveR2->Size = System::Drawing::Size(222, 23);
			this->buttonSaveR2->TabIndex = 15;
			this->buttonSaveR2->Text = L"Сохранить в файл";
			this->buttonSaveR2->UseVisualStyleBackColor = true;
			this->buttonSaveR2->Click += gcnew System::EventHandler(this, &TourApp::buttonSaveR2_Click);
			// 
			// buttonSaveR1
			// 
			this->buttonSaveR1->Location = System::Drawing::Point(6, 410);
			this->buttonSaveR1->Name = L"buttonSaveR1";
			this->buttonSaveR1->Size = System::Drawing::Size(222, 23);
			this->buttonSaveR1->TabIndex = 15;
			this->buttonSaveR1->Text = L"Сохранить в файл";
			this->buttonSaveR1->UseVisualStyleBackColor = true;
			this->buttonSaveR1->Click += gcnew System::EventHandler(this, &TourApp::buttonSaveR1_Click);
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
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewR1))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewR2))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewR3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		void regEmployee() {
			Employee * currentEmployee = new Employee();
			currentEmployee->name = msclr::interop::marshal_as<std::string>(textBoxEName->Text);
			currentEmployee->surname = msclr::interop::marshal_as<std::string>(textBoxESurname->Text);
			currentEmployee->pat = msclr::interop::marshal_as<std::string>(textBoxEPat->Text);
			employees.push_back(currentEmployee);
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

		void addDeal() {
			Deal * deal = new Deal();
			uint16_t temp = stoi(tickets[comboBox3->SelectedIndex]->amount);
			if (temp > 0) {
				deal->employee = employees[comboBox1->SelectedIndex];
				deal->client = clients[comboBox2->SelectedIndex];
				deal->ticket = tickets[comboBox3->SelectedIndex];
				deal->sellDate = msclr::interop::marshal_as<std::string>(dateTimePickerSell->Value.ToString());
				temp--;
				tickets[comboBox3->SelectedIndex]->amount = to_string(temp);
				deals.push_back(deal);
			}
			else {
				MessageBox::Show("Путевки закончились!", "Ойой!");
			}
			clearCombo();
			updateCombo();
		}

		void clearCombo() {
			comboBox1->Items->Clear();
			comboBox2->Items->Clear();
			comboBox3->Items->Clear();
			comboBoxClient->Items->Clear();
			comboBoxREmp->Items->Clear();
			comboBoxRCity->Items->Clear();
		}

		void clearGrid() {
			dataGridViewR1->Rows->Clear();
			dataGridViewR2->Rows->Clear();
			dataGridViewR3->Rows->Clear();
		}

		void updateCombo() {
			for (uint16_t i = 0; i < employees.size(); i++) {
				String^ string = 
					gcnew String(employees[i]->surname.c_str()) + " " +
					gcnew String(employees[i]->name.c_str()) + " " +
					gcnew String(employees[i]->pat.c_str());
				comboBox1->Items->Add(string);
				comboBoxREmp->Items->Add(string);
			}
			for (uint16_t i = 0; i < clients.size(); i++) {
				String^ string = (
					gcnew String(clients[i]->surname.c_str()) + " " +
					gcnew String(clients[i]->name.c_str()) + " " +
					gcnew String(clients[i]->pat.c_str()));
				comboBox2->Items->Add(string);
				comboBoxClient->Items->Add(string);
			}
			for (uint16_t i = 0; i < tickets.size(); i++) {
				comboBox3->Items->Add(
					"Путевка в " + gcnew String(tickets[i]->country.c_str()) + ", " +
					gcnew String(tickets[i]->city.c_str()) + ". Осталось: " +
					gcnew String(tickets[i]->amount.c_str())
				);
			}
			std::vector<string> * ex = new vector<string>;
			for (uint16_t i = 0; i < tickets.size(); i++) {
				if (!vContains(ex, tickets[i]->city)) {
					comboBoxRCity->Items->Add(gcnew String(tickets[i]->city.c_str()));
					ex->push_back(tickets[i]->city);
				}
			}
			free(ex);
		}

		bool vContains(std::vector<std::string> * v, std::string x) {
			if (std::find(v->begin(), v->end(), x) != v->end()) {
				return true;
			}
			else {
				return false;
			}
		}

		void findClientDeals() {
			for (uint16_t i = 0; i < deals.size(); i++) {
				if (deals[i]->client == clients[comboBoxClient->SelectedIndex]) {
					dataGridViewR1->Rows->Add(
						gcnew String(to_string(deals[i]->ticket->num).c_str()),
						gcnew String(deals[i]->ticket->sendDate.c_str()),
						gcnew String(deals[i]->ticket->retDate.c_str()),
						gcnew String((deals[i]->ticket->country + ", " + deals[i]->ticket->city).c_str()),
						gcnew String(deals[i]->ticket->extraStuff.c_str()),
						gcnew String(deals[i]->ticket->price.c_str()),
						gcnew String(deals[i]->sellDate.c_str()) 
					);
				}
			}
		}

		void findEmpDeals() {
			for (uint16_t i = 0; i < deals.size(); i++) {
				if (deals[i]->employee == employees[comboBoxREmp->SelectedIndex]) {
					dataGridViewR2->Rows->Add(
						gcnew String(deals[i]->ticket->city.c_str())
					);
				}
			}
		}

		void findCityTickets() {
			for (uint16_t i = 0; i < tickets.size(); i++) {
				if(gcnew String(tickets[i]->city.c_str()) == comboBoxRCity->Text) {
					dataGridViewR3->Rows->Add(
						gcnew String(to_string(tickets[i]->num).c_str()),
						gcnew String(tickets[i]->sendDate.c_str()),
						gcnew String(tickets[i]->retDate.c_str()),
						gcnew String((tickets[i]->country + ", " + tickets[i]->city).c_str()),
						gcnew String(tickets[i]->extraStuff.c_str()),
						gcnew String(tickets[i]->price.c_str()),
						gcnew String(tickets[i]->amount.c_str())
					);
				}
			}
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

        System::Void buttonSell_Click(System::Object^ sender, System::EventArgs^ e) {
			addDeal();
        }

        System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			clearCombo();
			updateCombo();
        }

        System::Void buttonRClient_Click(System::Object^ sender, System::EventArgs^ e) {
			clearGrid();
			findClientDeals();
		}

		System::Void buttonREmp_Click(System::Object^ sender, System::EventArgs^ e) {
			clearGrid();
			findEmpDeals();
        }

		System::Void buttonRCity_Click(System::Object^ sender, System::EventArgs^ e) {
			clearGrid();
			findCityTickets();
		}

        System::Void buttonSaveR1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ fileName = "Путевки клиента " + comboBoxClient->Text + ".txt";
			StreamWriter^ sw = gcnew StreamWriter(fileName);
			for (uint16_t i = 0; i < dataGridViewR1->Rows->Count; i++) {
				sw->WriteLineAsync(
					dataGridViewR1->Rows[i]->Cells[0]->Value + " " +
					dataGridViewR1->Rows[i]->Cells[1]->Value + " " +
					dataGridViewR1->Rows[i]->Cells[2]->Value + " " +
					dataGridViewR1->Rows[i]->Cells[3]->Value + " " +
					dataGridViewR1->Rows[i]->Cells[4]->Value + " " +
					dataGridViewR1->Rows[i]->Cells[5]->Value + " " +
					dataGridViewR1->Rows[i]->Cells[6]->Value
				);
			}
			sw->Close();
        }

        System::Void buttonSaveR2_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ fileName = "Города сотрудника " + comboBoxREmp->Text + ".txt";
			StreamWriter^ sw = gcnew StreamWriter(fileName);
			for (uint16_t i = 0; i < dataGridViewR2->Rows->Count; i++) {
				sw->WriteLineAsync(
					dataGridViewR2->Rows[i]->Cells[0]->Value + " "
				);
			}
			sw->Close();
        }

        System::Void buttonSaveR3_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ fileName = "Перечень путевок в " + comboBoxRCity->Text + ".txt";
			StreamWriter^ sw = gcnew StreamWriter(fileName);
			for (uint16_t i = 0; i < dataGridViewR3->Rows->Count; i++) {
				sw->WriteLineAsync(
					dataGridViewR3->Rows[i]->Cells[0]->Value + " " +
					dataGridViewR3->Rows[i]->Cells[1]->Value + " " +
					dataGridViewR3->Rows[i]->Cells[2]->Value + " " +
					dataGridViewR3->Rows[i]->Cells[3]->Value + " " +
					dataGridViewR3->Rows[i]->Cells[4]->Value + " " +
					dataGridViewR3->Rows[i]->Cells[5]->Value + " " +
					dataGridViewR3->Rows[i]->Cells[6]->Value
				);
			}
			sw->Close();
        }
};
}
