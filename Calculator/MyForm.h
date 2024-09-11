#pragma once

namespace Calculator {

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
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ CalcPanel;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ mult;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ degree;
	private: System::Windows::Forms::Button^ PlusMinus;


	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ constE;


	private: System::Windows::Forms::Button^ constP;
	private: System::Windows::Forms::Button^ factorial;


	private: System::Windows::Forms::Button^ percent;

	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ dot;


	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ del;


	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	
	private: float first_num;
	private: char user_action{ ' ' };
	private: bool is_equal{ false };
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->CalcPanel = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->degree = (gcnew System::Windows::Forms::Button());
			this->PlusMinus = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->constE = (gcnew System::Windows::Forms::Button());
			this->constP = (gcnew System::Windows::Forms::Button());
			this->factorial = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Location = System::Drawing::Point(-2, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(304, 326);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(270, 59);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// CalcPanel
			// 
			this->CalcPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CalcPanel->Font = (gcnew System::Drawing::Font(L"Calibri", 35, System::Drawing::FontStyle::Bold));
			this->CalcPanel->ForeColor = System::Drawing::Color::Black;
			this->CalcPanel->Location = System::Drawing::Point(12, 12);
			this->CalcPanel->Name = L"CalcPanel";
			this->CalcPanel->Size = System::Drawing::Size(270, 59);
			this->CalcPanel->TabIndex = 26;
			this->CalcPanel->Text = L"0";
			this->CalcPanel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::DimGray;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(221, 293);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(72, 51);
			this->plus->TabIndex = 27;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::DimGray;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(221, 241);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(72, 51);
			this->minus->TabIndex = 28;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// mult
			// 
			this->mult->BackColor = System::Drawing::Color::DimGray;
			this->mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mult->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mult->Location = System::Drawing::Point(221, 189);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(72, 51);
			this->mult->TabIndex = 29;
			this->mult->Text = L"x";
			this->mult->UseVisualStyleBackColor = false;
			this->mult->Click += gcnew System::EventHandler(this, &MyForm::mult_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::DimGray;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide->Location = System::Drawing::Point(221, 137);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(72, 51);
			this->divide->TabIndex = 30;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// degree
			// 
			this->degree->BackColor = System::Drawing::Color::DimGray;
			this->degree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->degree->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->degree->Location = System::Drawing::Point(148, 137);
			this->degree->Name = L"degree";
			this->degree->Size = System::Drawing::Size(72, 51);
			this->degree->TabIndex = 31;
			this->degree->Text = L"^";
			this->degree->UseVisualStyleBackColor = false;
			// 
			// PlusMinus
			// 
			this->PlusMinus->BackColor = System::Drawing::Color::DimGray;
			this->PlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PlusMinus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold));
			this->PlusMinus->Location = System::Drawing::Point(75, 137);
			this->PlusMinus->Name = L"PlusMinus";
			this->PlusMinus->Size = System::Drawing::Size(72, 51);
			this->PlusMinus->TabIndex = 32;
			this->PlusMinus->Text = L"+/-";
			this->PlusMinus->UseVisualStyleBackColor = false;
			this->PlusMinus->Click += gcnew System::EventHandler(this, &MyForm::PlusMinus_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::DimGray;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->Location = System::Drawing::Point(2, 137);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(72, 51);
			this->clear->TabIndex = 33;
			this->clear->Text = L"AC";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// constE
			// 
			this->constE->BackColor = System::Drawing::Color::DimGray;
			this->constE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->constE->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->constE->Location = System::Drawing::Point(2, 85);
			this->constE->Name = L"constE";
			this->constE->Size = System::Drawing::Size(72, 51);
			this->constE->TabIndex = 34;
			this->constE->Text = L"e";
			this->constE->UseVisualStyleBackColor = false;
			// 
			// constP
			// 
			this->constP->BackColor = System::Drawing::Color::DimGray;
			this->constP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->constP->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->constP->Location = System::Drawing::Point(75, 85);
			this->constP->Name = L"constP";
			this->constP->Size = System::Drawing::Size(72, 51);
			this->constP->TabIndex = 35;
			this->constP->Text = L"π";
			this->constP->UseVisualStyleBackColor = false;
			// 
			// factorial
			// 
			this->factorial->BackColor = System::Drawing::Color::DimGray;
			this->factorial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->factorial->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->factorial->Location = System::Drawing::Point(148, 85);
			this->factorial->Name = L"factorial";
			this->factorial->Size = System::Drawing::Size(72, 51);
			this->factorial->TabIndex = 36;
			this->factorial->Text = L"!";
			this->factorial->UseVisualStyleBackColor = false;
			// 
			// percent
			// 
			this->percent->BackColor = System::Drawing::Color::DimGray;
			this->percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->percent->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percent->Location = System::Drawing::Point(221, 85);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(72, 51);
			this->percent->TabIndex = 37;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = false;
			this->percent->Click += gcnew System::EventHandler(this, &MyForm::percent_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::YellowGreen;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equal->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->Location = System::Drawing::Point(221, 345);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(72, 51);
			this->equal->TabIndex = 38;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::Color::Gray;
			this->dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dot->Location = System::Drawing::Point(2, 345);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(72, 51);
			this->dot->TabIndex = 39;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = false;
			this->dot->Click += gcnew System::EventHandler(this, &MyForm::dot_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::Silver;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Location = System::Drawing::Point(75, 345);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(72, 51);
			this->zero->TabIndex = 40;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::Color::Gray;
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del->Location = System::Drawing::Point(148, 345);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(72, 51);
			this->del->TabIndex = 41;
			this->del->Text = L"←";
			this->del->UseVisualStyleBackColor = false;
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Silver;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one->Location = System::Drawing::Point(2, 293);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(72, 51);
			this->one->TabIndex = 42;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Silver;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two->Location = System::Drawing::Point(75, 293);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(72, 51);
			this->two->TabIndex = 43;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::Silver;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->three->Location = System::Drawing::Point(148, 293);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(72, 51);
			this->three->TabIndex = 44;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::Silver;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->four->Location = System::Drawing::Point(2, 241);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(72, 51);
			this->four->TabIndex = 45;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::Silver;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five->Location = System::Drawing::Point(75, 241);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(72, 51);
			this->five->TabIndex = 46;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::Silver;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six->Location = System::Drawing::Point(148, 241);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(72, 51);
			this->six->TabIndex = 47;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::Silver;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven->Location = System::Drawing::Point(2, 189);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(72, 51);
			this->seven->TabIndex = 48;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::Silver;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eight->Location = System::Drawing::Point(75, 189);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(72, 51);
			this->eight->TabIndex = 49;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::Silver;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->Location = System::Drawing::Point(148, 189);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(72, 51);
			this->nine->TabIndex = 50;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(75, 345);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 51);
			this->button6->TabIndex = 40;
			this->button6->Text = L"0";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(2, 293);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 51);
			this->button9->TabIndex = 42;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Silver;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(75, 293);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 51);
			this->button10->TabIndex = 43;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(148, 293);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(72, 51);
			this->button11->TabIndex = 44;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Silver;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(2, 241);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(72, 51);
			this->button13->TabIndex = 45;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Silver;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(75, 241);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(72, 51);
			this->button14->TabIndex = 46;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Silver;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(148, 241);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 51);
			this->button15->TabIndex = 47;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Silver;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(2, 189);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(72, 51);
			this->button22->TabIndex = 48;
			this->button22->Text = L"7";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Silver;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(75, 189);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 51);
			this->button23->TabIndex = 49;
			this->button23->Text = L"8";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(294, 397);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->six);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->five);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->four);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->three);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->two);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->one);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->del);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->factorial);
			this->Controls->Add(this->constP);
			this->Controls->Add(this->constE);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->PlusMinus);
			this->Controls->Add(this->degree);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->CalcPanel);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void BtnNum_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->CalcPanel->ForeColor = Color::Black;
	Button^ button = safe_cast<Button^>(sender);
	if (this->CalcPanel->Text == "0" || this->CalcPanel->Text == "ERROR" || is_equal == true)
	{
		this->CalcPanel->Text = button->Text;
		is_equal = false;
	}
	else
		this->CalcPanel->Text += button->Text;
}



private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('+');
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('-');
}
private: System::Void mult_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('*');
}
private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('/');
}
private: System::Void math_action(char action)
{
	this->first_num = System::Convert::ToDouble(this->CalcPanel->Text);
	this->user_action = action;
	this->CalcPanel->Text = "0";
}
private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (user_action == ' ')
		return;
	double second_num{ System::Convert::ToDouble(this->CalcPanel->Text) };
	float  res{ this->first_num };
	switch (this->user_action)
	{
	case '%': res = res * second_num / 100; break;
	case '+': res += second_num; break;
	case '-': res -= second_num; break;
	case '*': res *= second_num; break;
	case '/': 
		if (second_num == 0)
		{
			this->CalcPanel->ForeColor = Color::Red;
			this->CalcPanel->Text = "ERROR"; break;
		}
		else
			res /= second_num; break;
	}
	is_equal = true;
	if(this->CalcPanel->Text != "ERROR")
		this->CalcPanel->Text = System::Convert::ToString(res);
}
	private: System::Void PlusMinus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->CalcPanel->Text = System::Convert::ToString(System::Convert::ToDouble(this->CalcPanel->Text) * -1);
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->CalcPanel->Text = "0";
		is_equal = false;
	}
	private: System::Void percent_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('%');
	}
	private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!this->CalcPanel->Text->Contains(","))
			this->CalcPanel->Text +=  ",";
	}
};
	
}
