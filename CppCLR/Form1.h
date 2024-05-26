#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBoxC;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBoxStep;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxXMax;
	private: System::Windows::Forms::TextBox^ textBoxXMin;
	private: System::Windows::Forms::TextBox^ textBoxYMax;
	private: System::Windows::Forms::TextBox^ textBoxYMin;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ upbutton;
	private: System::Windows::Forms::Button^ downbutton;
	private: System::Windows::Forms::Button^ rightbutton;
	private: System::Windows::Forms::Button^ leftbutton;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ graphicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showAnaliticToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gridAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showMajorGridToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showMinorGridToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menu1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menu11ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menu12ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menu2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menu3ToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxStep = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxXMax = (gcnew System::Windows::Forms::TextBox());
			this->textBoxXMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYMax = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYMin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->upbutton = (gcnew System::Windows::Forms::Button());
			this->downbutton = (gcnew System::Windows::Forms::Button());
			this->rightbutton = (gcnew System::Windows::Forms::Button());
			this->leftbutton = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showAnaliticToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gridAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showMajorGridToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showMinorGridToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menu1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu11ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu12ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->Maximum = 20;
			chartArea1->AxisX->Minimum = -20;
			chartArea1->AxisY->Maximum = 2;
			chartArea1->AxisY->Minimum = -2;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ContextMenuStrip = this->contextMenuStrip1;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 40);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"asin(x)+b)/c";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"c/(atg(x)+b)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Purple;
			series3->Legend = L"Legend1";
			series3->Name = L"(a+b*ln(x))/c";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(339, 487);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(540, 261);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"asin(x)+b)/c";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckStateChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(540, 285);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 17);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"c/(atg(x)+b)";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(540, 309);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(84, 17);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"(a+b*ln(x))/c";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(541, 181);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(100, 20);
			this->textBoxA->TabIndex = 5;
			this->textBoxA->Text = L"2";
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(541, 208);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(100, 20);
			this->textBoxB->TabIndex = 6;
			this->textBoxB->Text = L"4";
			// 
			// textBoxC
			// 
			this->textBoxC->Location = System::Drawing::Point(541, 235);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(100, 20);
			this->textBoxC->TabIndex = 7;
			this->textBoxC->Text = L"6";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(648, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(647, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(647, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"c";
			// 
			// textBoxStep
			// 
			this->textBoxStep->Location = System::Drawing::Point(234, 487);
			this->textBoxStep->Name = L"textBoxStep";
			this->textBoxStep->Size = System::Drawing::Size(100, 20);
			this->textBoxStep->TabIndex = 13;
			this->textBoxStep->Text = L"0.2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(260, 510);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"крок";
			// 
			// textBoxXMax
			// 
			this->textBoxXMax->Location = System::Drawing::Point(460, 487);
			this->textBoxXMax->Name = L"textBoxXMax";
			this->textBoxXMax->Size = System::Drawing::Size(45, 20);
			this->textBoxXMax->TabIndex = 15;
			this->textBoxXMax->Text = L"15";
			// 
			// textBoxXMin
			// 
			this->textBoxXMin->Location = System::Drawing::Point(460, 513);
			this->textBoxXMin->Name = L"textBoxXMin";
			this->textBoxXMin->Size = System::Drawing::Size(45, 20);
			this->textBoxXMin->TabIndex = 16;
			this->textBoxXMin->Text = L"-15";
			// 
			// textBoxYMax
			// 
			this->textBoxYMax->Location = System::Drawing::Point(511, 487);
			this->textBoxYMax->Name = L"textBoxYMax";
			this->textBoxYMax->Size = System::Drawing::Size(45, 20);
			this->textBoxYMax->TabIndex = 17;
			this->textBoxYMax->Text = L"5";
			// 
			// textBoxYMin
			// 
			this->textBoxYMin->Location = System::Drawing::Point(511, 513);
			this->textBoxYMin->Name = L"textBoxYMin";
			this->textBoxYMin->Size = System::Drawing::Size(45, 20);
			this->textBoxYMin->TabIndex = 18;
			this->textBoxYMin->Text = L"-5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(425, 488);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"x max";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(428, 513);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"x min";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(562, 490);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"y max";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(562, 516);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"y min";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(540, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 32);
			this->button2->TabIndex = 23;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(541, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 32);
			this->button3->TabIndex = 24;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// upbutton
			// 
			this->upbutton->Location = System::Drawing::Point(651, 457);
			this->upbutton->Name = L"upbutton";
			this->upbutton->Size = System::Drawing::Size(31, 24);
			this->upbutton->TabIndex = 25;
			this->upbutton->Text = L"^";
			this->upbutton->UseVisualStyleBackColor = true;
			this->upbutton->Click += gcnew System::EventHandler(this, &Form1::upbutton_Click);
			// 
			// downbutton
			// 
			this->downbutton->Location = System::Drawing::Point(651, 483);
			this->downbutton->Name = L"downbutton";
			this->downbutton->Size = System::Drawing::Size(31, 24);
			this->downbutton->TabIndex = 26;
			this->downbutton->Text = L"v";
			this->downbutton->UseVisualStyleBackColor = true;
			this->downbutton->Click += gcnew System::EventHandler(this, &Form1::downbutton_Click);
			// 
			// rightbutton
			// 
			this->rightbutton->Location = System::Drawing::Point(688, 467);
			this->rightbutton->Name = L"rightbutton";
			this->rightbutton->Size = System::Drawing::Size(31, 24);
			this->rightbutton->TabIndex = 27;
			this->rightbutton->Text = L">";
			this->rightbutton->UseVisualStyleBackColor = true;
			this->rightbutton->Click += gcnew System::EventHandler(this, &Form1::rightbutton_Click);
			// 
			// leftbutton
			// 
			this->leftbutton->Location = System::Drawing::Point(614, 467);
			this->leftbutton->Name = L"leftbutton";
			this->leftbutton->Size = System::Drawing::Size(31, 24);
			this->leftbutton->TabIndex = 28;
			this->leftbutton->Text = L"<";
			this->leftbutton->UseVisualStyleBackColor = true;
			this->leftbutton->Click += gcnew System::EventHandler(this, &Form1::leftbutton_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 337);
			this->trackBar1->Maximum = 15;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(300, 45);
			this->trackBar1->TabIndex = 29;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(319, 41);
			this->trackBar2->Maximum = 15;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackBar2->Size = System::Drawing::Size(45, 299);
			this->trackBar2->TabIndex = 30;
			this->trackBar2->Value = 10;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(12, 365);
			this->hScrollBar1->Maximum = 15;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(300, 17);
			this->hScrollBar1->TabIndex = 31;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar1_Scroll);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(346, 51);
			this->vScrollBar1->Maximum = 15;
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(18, 279);
			this->vScrollBar1->TabIndex = 32;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Form1::vScrollBar1_Scroll);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->graphicToolStripMenuItem, this->gridAreaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(731, 24);
			this->menuStrip1->TabIndex = 33;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveAsToolStripMenuItem,
					this->saveToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As...";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save...";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// graphicToolStripMenuItem
			// 
			this->graphicToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->showAnaliticToolStripMenuItem });
			this->graphicToolStripMenuItem->Name = L"graphicToolStripMenuItem";
			this->graphicToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->graphicToolStripMenuItem->Text = L"Graphic";
			// 
			// showAnaliticToolStripMenuItem
			// 
			this->showAnaliticToolStripMenuItem->Name = L"showAnaliticToolStripMenuItem";
			this->showAnaliticToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->showAnaliticToolStripMenuItem->Text = L"ShowAnalytic";
			// 
			// gridAreaToolStripMenuItem
			// 
			this->gridAreaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->showMajorGridToolStripMenuItem,
					this->showMinorGridToolStripMenuItem
			});
			this->gridAreaToolStripMenuItem->Name = L"gridAreaToolStripMenuItem";
			this->gridAreaToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->gridAreaToolStripMenuItem->Text = L"GridArea";
			// 
			// showMajorGridToolStripMenuItem
			// 
			this->showMajorGridToolStripMenuItem->Checked = true;
			this->showMajorGridToolStripMenuItem->CheckOnClick = true;
			this->showMajorGridToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->showMajorGridToolStripMenuItem->Name = L"showMajorGridToolStripMenuItem";
			this->showMajorGridToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->showMajorGridToolStripMenuItem->Text = L"ShowMajorGrid";
			this->showMajorGridToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::showMajorGridToolStripMenuItem_Click);
			// 
			// showMinorGridToolStripMenuItem
			// 
			this->showMinorGridToolStripMenuItem->CheckOnClick = true;
			this->showMinorGridToolStripMenuItem->Name = L"showMinorGridToolStripMenuItem";
			this->showMinorGridToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->showMinorGridToolStripMenuItem->Text = L"ShowMinorGrid";
			this->showMinorGridToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::showMinorGridToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menu1ToolStripMenuItem,
					this->menu2ToolStripMenuItem, this->menu3ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(181, 92);
			// 
			// menu1ToolStripMenuItem
			// 
			this->menu1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menu11ToolStripMenuItem,
					this->menu12ToolStripMenuItem
			});
			this->menu1ToolStripMenuItem->Name = L"menu1ToolStripMenuItem";
			this->menu1ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->menu1ToolStripMenuItem->Text = L"Menu1";
			// 
			// menu11ToolStripMenuItem
			// 
			this->menu11ToolStripMenuItem->Name = L"menu11ToolStripMenuItem";
			this->menu11ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->menu11ToolStripMenuItem->Text = L"Menu11";
			this->menu11ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::menu11ToolStripMenuItem_Click);
			// 
			// menu12ToolStripMenuItem
			// 
			this->menu12ToolStripMenuItem->Name = L"menu12ToolStripMenuItem";
			this->menu12ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->menu12ToolStripMenuItem->Text = L"Menu12";
			// 
			// menu2ToolStripMenuItem
			// 
			this->menu2ToolStripMenuItem->Name = L"menu2ToolStripMenuItem";
			this->menu2ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->menu2ToolStripMenuItem->Text = L"Menu2";
			// 
			// menu3ToolStripMenuItem
			// 
			this->menu3ToolStripMenuItem->Name = L"menu3ToolStripMenuItem";
			this->menu3ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->menu3ToolStripMenuItem->Text = L"Menu3";
			this->menu3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::menu3ToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 546);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->leftbutton);
			this->Controls->Add(this->rightbutton);
			this->Controls->Add(this->downbutton);
			this->Controls->Add(this->upbutton);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxYMin);
			this->Controls->Add(this->textBoxYMax);
			this->Controls->Add(this->textBoxXMin);
			this->Controls->Add(this->textBoxXMax);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxStep);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxC);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void DrawChart()
		{
			double y;
			a = Convert::ToDouble(textBoxA->Text);
			b = Convert::ToDouble(textBoxB->Text);
			c = Convert::ToDouble(textBoxC->Text);
			chart1->ChartAreas[0]->AxisX->Maximum = Convert::ToDouble(textBoxXMax->Text);
			chart1->ChartAreas[0]->AxisX->Minimum = Convert::ToDouble(textBoxXMin->Text);
			chart1->ChartAreas[0]->AxisY->Maximum = Convert::ToDouble(textBoxYMax->Text);
			chart1->ChartAreas[0]->AxisY->Minimum = Convert::ToDouble(textBoxYMin->Text);



			for (int i = 0; i< chart1->Series->Count;i++)
			{
				if (i >= 3)
				{
					chart1->Series->RemoveAt(i);
					i--;
				}
				else
				{
					chart1->Series[i]->Points->Clear();
				}
			}

			if (checkBox1->Checked)
			{
				//if (chart1->Series[chart1->Series->Count - 1]->Name->Equals("Точка розриву"))
				//{
				//	chart1->Series->RemoveAt(chart1->Series->Count - 1);
				//}
				if (c != 0)
				{
					for (double i = Convert::ToDouble(textBoxXMin->Text); i < Convert::ToDouble(textBoxXMax->Text); i += Convert::ToDouble(textBoxStep->Text))
					{
						if (i != 0)
						{
							y = (a * Math::Sin(i) + b) / (c * i);
							chart1->Series[0]->Points->AddXY(i, y);
						}
						//double left_d = chart1->ChartAreas[0]->AxisX->Maximum;
						//double right_d = chart1->ChartAreas[0]->AxisX->Maximum;
						//double x_d = (Math::Abs(left_d) + Math::Abs(right_d))/100;
						//if(-x_d/2 <= i && i <= x_d/2)
						if(i <= 0 && i+Convert::ToDouble(textBoxStep->Text) > 0)
						//else
						{
							System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
							series13->ChartArea = L"ChartArea1";
							series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
							series13->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
							series13->Color = System::Drawing::Color::DarkGreen;
							series13->Legend = L"Legend1";
							series13->Name = L"Точка розриву";
							this->chart1->Series->Add(series13);
							
							chart1->Series[chart1->Series->Count - 1]->Points->AddXY(0, 0);
							chart1->Series[0]->Points->AddXY(0, 0);
							chart1->Series[0]->Points[chart1->Series[0]->Points->Count - 1]->IsEmpty = true;
						}
					}
				}
			}
			if (checkBox2->Checked)
			{
				for (double i = Convert::ToDouble(textBoxXMin->Text); i < Convert::ToDouble(textBoxXMax->Text); i += Convert::ToDouble(textBoxStep->Text))
				{
					y = c / (a * Math::Tan(i) + b);
					chart1->Series[1]->Points->AddXY(i, y);
				}
			}
			if (checkBox3->Checked)
			{
				for (double i = Convert::ToDouble(textBoxXMin->Text); i < Convert::ToDouble(textBoxXMax->Text); i += Convert::ToDouble(textBoxStep->Text))
				{
					y = (a * b * Math::Log(i)) / c;
					chart1->Series[2]->Points->AddXY(i, y);
				}
			}
		}

		double a, b, c;
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DrawChart();
	}
	private: System::Void checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	DrawChart();
	}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	DrawChart();
}

private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	DrawChart();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double centerp = (Convert::ToDouble(textBoxXMax->Text) + Convert::ToDouble(textBoxXMin->Text)) / 2;
	double distance = Math::Abs(Convert::ToDouble(textBoxXMax->Text)) + Math::Abs(Convert::ToDouble(textBoxXMin->Text));
	textBoxXMin->Text = Convert::ToString(centerp - distance/4);
	textBoxXMax->Text = Convert::ToString(centerp + distance/4);
	centerp = (Convert::ToDouble(textBoxYMax->Text) + Convert::ToDouble(textBoxYMin->Text)) / 2;
	distance = Math::Abs(Convert::ToDouble(textBoxYMax->Text)) + Math::Abs(Convert::ToDouble(textBoxYMin->Text));
	textBoxYMin->Text = Convert::ToString(centerp - distance/4);
	textBoxYMax->Text = Convert::ToString(centerp + distance/4);
	DrawChart();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double centerp = (Convert::ToDouble(textBoxXMax->Text) + Convert::ToDouble(textBoxXMin->Text)) / 2;
	double distance = Math::Abs(Convert::ToDouble(textBoxXMax->Text)) + Math::Abs(Convert::ToDouble(textBoxXMin->Text));
	textBoxXMin->Text = Convert::ToString(centerp - distance);
	textBoxXMax->Text = Convert::ToString(centerp + distance);
	centerp = (Convert::ToDouble(textBoxYMax->Text) + Convert::ToDouble(textBoxYMin->Text)) / 2;
	distance = Math::Abs(Convert::ToDouble(textBoxYMax->Text)) + Math::Abs(Convert::ToDouble(textBoxYMin->Text));
	textBoxYMin->Text = Convert::ToString(centerp - distance);
	textBoxYMax->Text = Convert::ToString(centerp + distance);
	DrawChart();
}
private: System::Void upbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double ymin = Convert::ToDouble(textBoxYMin->Text), ymax = Convert::ToDouble(textBoxYMax->Text);
	double distance = Math::Abs(ymax) + Math::Abs(ymin);
	textBoxYMin->Text = Convert::ToString(ymin + distance/10);
	textBoxYMax->Text = Convert::ToString(ymax + distance / 10);
	DrawChart();
}
private: System::Void rightbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double xmin = Convert::ToDouble(textBoxXMin->Text), xmax = Convert::ToDouble(textBoxXMax->Text);
	double distance = Math::Abs(xmax) + Math::Abs(xmin);
	textBoxXMin->Text = Convert::ToString(xmin + distance / 10);
	textBoxXMax->Text = Convert::ToString(xmax + distance / 10);
	DrawChart();
}
private: System::Void downbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double ymin = Convert::ToDouble(textBoxYMin->Text), ymax = Convert::ToDouble(textBoxYMax->Text);
	double distance = Math::Abs(ymax) + Math::Abs(ymin);
	textBoxYMin->Text = Convert::ToString(ymin - distance / 10);
	textBoxYMax->Text = Convert::ToString(ymax - distance / 10);
	DrawChart();
}
private: System::Void leftbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double xmin = Convert::ToDouble(textBoxXMin->Text), xmax = Convert::ToDouble(textBoxXMax->Text);
	double distance = Math::Abs(xmax) + Math::Abs(xmin);
	textBoxXMin->Text = Convert::ToString(xmin - distance / 10);
	textBoxXMax->Text = Convert::ToString(xmax - distance / 10);
	DrawChart();
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	double ymin = Convert::ToDouble(textBoxYMin->Text), ymax = Convert::ToDouble(textBoxYMax->Text);
	double distance = Math::Abs(ymax-ymin);
	double trackbar_max = trackBar2->Maximum;
	double trackbar_min = trackBar2->Minimum;
	double trackbar_distance = Math::Abs(trackbar_max-trackbar_min);
	chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = trackBar2->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisY->LabelStyle->Interval = trackBar2->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisY->LabelStyle->Format = "0.00";
	chart1->ChartAreas[0]->AxisY->LabelStyle->Font = gcnew System::Drawing::Font("Arial",6);
}
private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	chart1->ChartAreas[0]->AxisY->MinorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
	double distance = chart1->ChartAreas[0]->AxisY->MajorGrid->Interval;
	double trackbar_max = vScrollBar1->Maximum;
	double trackbar_min = vScrollBar1->Minimum;
	double trackbar_distance = Math::Abs(trackbar_max - trackbar_min);
	chart1->ChartAreas[0]->AxisY->MinorGrid->Interval = vScrollBar1->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisY->LabelStyle->Interval = vScrollBar1->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisY->LabelStyle->Format = "0.00";
	chart1->ChartAreas[0]->AxisY->LabelStyle->Font = gcnew System::Drawing::Font("Arial", 6);
}
private: System::Void showMajorGridToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->ChartAreas[0]->AxisY->MajorGrid->Enabled = showMajorGridToolStripMenuItem->Checked;
	chart1->ChartAreas[0]->AxisX->MajorGrid->Enabled = showMajorGridToolStripMenuItem->Checked;
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	double xmin = Convert::ToDouble(textBoxXMin->Text), xmax = Convert::ToDouble(textBoxXMax->Text);
	double distance = Math::Abs(xmax - xmin);
	double trackbar_max = trackBar1->Maximum;
	double trackbar_min = trackBar1->Minimum;
	double trackbar_distance = Math::Abs(trackbar_max - trackbar_min);
	chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = trackBar1->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisX->LabelStyle->Interval = trackBar1->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "0.00";
	chart1->ChartAreas[0]->AxisX->LabelStyle->Font = gcnew System::Drawing::Font("Arial", 6);
}
private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	chart1->ChartAreas[0]->AxisX->MinorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
	double distance = chart1->ChartAreas[0]->AxisX->MajorGrid->Interval;
	double trackbar_max = hScrollBar1->Maximum;
	double trackbar_min = hScrollBar1->Minimum;
	double trackbar_distance = Math::Abs(trackbar_max - trackbar_min);
	chart1->ChartAreas[0]->AxisX->MinorGrid->Interval = hScrollBar1->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisX->LabelStyle->Interval = hScrollBar1->Value * distance / trackbar_distance;
	chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "0.00";
	chart1->ChartAreas[0]->AxisX->LabelStyle->Font = gcnew System::Drawing::Font("Arial", 6);
}

	  private: bool IsEmptyChart()
	   {
		  if (chart1->Series->Count == 0)
		  {
			  return true;
		  }
		  for (int i = 0; i < chart1->Series->Count; i++)
		  {
			  if (chart1->Series[i]->Points->Count != 0)
			  {
				  return false;
			  }
		  }
		  return true;
	   }


private: System::Void showMinorGridToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->ChartAreas[0]->AxisY->MinorGrid->Enabled = showMinorGridToolStripMenuItem->Checked;
	chart1->ChartAreas[0]->AxisX->MinorGrid->Enabled = showMinorGridToolStripMenuItem->Checked;
}

bool FileSavedOnce = false;
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (IsEmptyChart())
		{
			if (MessageBox::Show("Chart is empty. Save chart?", "Empty chart", System::Windows::Forms::MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::Cancel)
			{
				return;
			}
		}
			saveFileDialog1->Filter = "Format1|*.jpg|Format2|*.jpeg|Format3|*.png|Format4|*.bmp";
			//saveFileDialog1->InitialDirectory = "C:\\Users\\korob\\OneDrive\\Робочий стіл";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				int filter_index = saveFileDialog1->FilterIndex;
				System::Drawing::Imaging::ImageFormat^ format_name;
				switch (filter_index)
				{
				case 1: format_name = System::Drawing::Imaging::ImageFormat::Jpeg; break;
				case 2: format_name = System::Drawing::Imaging::ImageFormat::Jpeg; break;
				case 3: format_name = System::Drawing::Imaging::ImageFormat::Png; break;
				case 4: format_name = System::Drawing::Imaging::ImageFormat::Bmp; break;
				default: format_name = System::Drawing::Imaging::ImageFormat::Icon; break;
				}
				chart1->SaveImage(saveFileDialog1->FileName, format_name);
				if (System::IO::File::Exists(saveFileDialog1->FileName))
				{
					MessageBox::Show("Saved");

					FileSavedOnce = true;
				}
				else
				{
					MessageBox::Show("Error to Save");
				}
			}
}

private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FileSavedOnce == true)
	{
		int filter_index = saveFileDialog1->FilterIndex;
		System::Drawing::Imaging::ImageFormat^ format_name;
		switch (filter_index)
		{
		case 1: format_name = System::Drawing::Imaging::ImageFormat::Jpeg; break;
		case 2: format_name = System::Drawing::Imaging::ImageFormat::Jpeg; break;
		case 3: format_name = System::Drawing::Imaging::ImageFormat::Png; break;
		case 4: format_name = System::Drawing::Imaging::ImageFormat::Bmp; break;
		default: format_name = System::Drawing::Imaging::ImageFormat::Icon; break;
		}
		chart1->SaveImage(saveFileDialog1->FileName, format_name);
		if (System::IO::File::Exists(saveFileDialog1->FileName))
		{
			MessageBox::Show("Saved");

			FileSavedOnce = true;
		}
		else
		{
			MessageBox::Show("Error to Save");
		}
	}
	else 
	{
		saveAsToolStripMenuItem_Click(sender, e);
	}
}


private: System::Void menu3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorchanger = gcnew ColorDialog();
	if (colorchanger->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Color colordialog = colorchanger->Color;
		chart1->BackColor = colordialog;
	}
}
private: System::Void menu11ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintDialog^ printer = gcnew PrintDialog();
	if (printer->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::Drawing::Printing::PrintDocument^ document;
		document = chart1->Printing->PrintDocument;
	}
}
};
// 
// Аналіз функцій. Відображати точки розриву, асимптоти, локальні максимуми і мінімум. Додати чек бокс режим аналізу функції
// 
}
