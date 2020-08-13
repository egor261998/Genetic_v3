#pragma once

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <string>

#define SizeX 45
#define SizeY 24
#define BotNumber 64
//#define FoodNumber 200
//#define FoodAlive 15
//#define VenovAlive 5
//#define VenomNumber 100
//#define AliveNumber 100
//#define MaxRepeat 10
//#define TimeInTheWorld 10
//#define Porog 6
//#define NumberMutant 2
//#define NumberChangeMutantSquare 2


void GenNewIt();
void DrawPoint(int, int ,int ,int );
void DrawHP(int , int, int, int);
void DrawSQ(int, int, int);
void PrintMat();
void StepBot(int);
void MoveBot(int, int);
void FoodBot(int, int);
void SeeBot(int, int);
void MoveBotAct(int, int, int);
void FoodBotAct(int, int, int);
void SeeBotAct(int, int, int);
void MainFun();

struct _bot
{
	int Square[64];
	int Num;
	int Alive;
	int Angle;
	int x;
	int y;
};

int FoodNumber = 200, FoodAlive = 15, VenovAlive = 5, VenomNumber = 100, AliveNumber = 99, MaxRepeat = 10, TimeInTheWorld = 10, Porog = 6, NumberChangeMutantSquare = 2, NumberMutant=1;
_bot BOT[BotNumber];
int mat[SizeX][SizeY];
int Food[1024][2];
int HowMuchFood = 0;
int Venom[1024][2];
int HowMuchVenom = 0;
int It = -1, St, MaxIt = 0;
int LastBOT[128][64];
int LastBOTAlive[8] = { 0, };
int LastBOTAliveNUM[8] = { 0, };
int LastAliveBOT[64] = { 0, };
bool SwitchShow = false;
int DrawG[100000]={1, };
int kx = 1, ky = 1;

namespace Genetic_v3 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenTK::Platform::Windows;
	using namespace OpenTK::Graphics::OpenGL;

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

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;


	private:
	private: System::Windows::Forms::TabPage^  tabPage2;
	public: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;


	private: OpenTK::GLControl^  glControl1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Button^  button16;


	public:

	protected:

	public:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->glControl1 = (gcnew OpenTK::GLControl());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1236, 653);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::tabControl1_MouseDown);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->panel8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->panel7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->glControl1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1228, 627);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вывод мира";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1138, 561);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 22;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Blue;
			this->panel8->Location = System::Drawing::Point(1138, 536);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(22, 22);
			this->panel8->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1138, 501);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 20;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Blue;
			this->panel7->Location = System::Drawing::Point(1138, 476);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(22, 22);
			this->panel7->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1138, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 18;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Blue;
			this->panel6->Location = System::Drawing::Point(1138, 416);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(22, 22);
			this->panel6->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1138, 381);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 16;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Blue;
			this->panel5->Location = System::Drawing::Point(1138, 356);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(22, 22);
			this->panel5->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1138, 321);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 14;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Blue;
			this->panel4->Location = System::Drawing::Point(1138, 296);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(22, 22);
			this->panel4->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1138, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Blue;
			this->panel3->Location = System::Drawing::Point(1138, 236);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(22, 22);
			this->panel3->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1138, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Blue;
			this->panel2->Location = System::Drawing::Point(1138, 176);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(22, 22);
			this->panel2->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Blue;
			this->panel1->Location = System::Drawing::Point(1138, 116);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(22, 22);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1138, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 7;
			// 
			// glControl1
			// 
			this->glControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->glControl1->BackColor = System::Drawing::Color::Black;
			this->glControl1->Location = System::Drawing::Point(97, 65);
			this->glControl1->Name = L"glControl1";
			this->glControl1->Size = System::Drawing::Size(1035, 552);
			this->glControl1->TabIndex = 6;
			this->glControl1->VSync = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(7, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Swich FALSE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(782, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(582, 9);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(382, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(182, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->trackBar2);
			this->tabPage2->Controls->Add(this->trackBar1);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1228, 627);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графики";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1110, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L" Обновить график";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(561, 6);
			this->trackBar2->Maximum = 100000;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(543, 45);
			this->trackBar2->TabIndex = 2;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 6);
			this->trackBar1->Maximum = 500;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(543, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1216, 589);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox30);
			this->tabPage3->Controls->Add(this->button16);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->textBox29);
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->textBox28);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->textBox27);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->textBox26);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->textBox25);
			this->tabPage3->Controls->Add(this->textBox24);
			this->tabPage3->Controls->Add(this->textBox23);
			this->tabPage3->Controls->Add(this->textBox22);
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->textBox20);
			this->tabPage3->Controls->Add(this->textBox19);
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Controls->Add(this->textBox17);
			this->tabPage3->Controls->Add(this->textBox16);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1228, 627);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Просмотр и замена генома";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(420, 335);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 20);
			this->textBox30->TabIndex = 39;
			this->textBox30->Text = L"1";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(527, 335);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(105, 23);
			this->button16->TabIndex = 38;
			this->button16->Text = L"Ко-во мутантов";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(754, 365);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(211, 20);
			this->button15->TabIndex = 37;
			this->button15->Text = L"Обновить все";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(861, 304);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(104, 23);
			this->button14->TabIndex = 36;
			this->button14->Text = L"Ко-во пр-ов ге-а";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(754, 304);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 35;
			this->textBox29->Text = L"10";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(861, 277);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(104, 23);
			this->button13->TabIndex = 34;
			this->button13->Text = L"Скорость(макс=0)";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(754, 277);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 33;
			this->textBox28->Text = L"10";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(861, 249);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(104, 23);
			this->button12->TabIndex = 32;
			this->button12->Text = L"Количество яда";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(754, 249);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 31;
			this->textBox27->Text = L"100";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(860, 223);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(105, 23);
			this->button11->TabIndex = 30;
			this->button11->Text = L"Количество еды";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(754, 223);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 29;
			this->textBox26->Text = L"200";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(527, 364);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(105, 23);
			this->button10->TabIndex = 28;
			this->button10->Text = L"Мутация генома";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(527, 306);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(105, 21);
			this->button9->TabIndex = 27;
			this->button9->Text = L"Минимум ботов на поле";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(527, 277);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"Убавка от яда";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(527, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 23);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Прибавка от еды";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(527, 223);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Макс Здоровье";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(420, 364);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 22;
			this->textBox25->Text = L"2";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(420, 304);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 21;
			this->textBox24->Text = L"8";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(420, 277);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 20;
			this->textBox23->Text = L"5";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(420, 250);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 19;
			this->textBox22->Text = L"15";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(420, 223);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 18;
			this->textBox21->Text = L"99";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(7, 572);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(1214, 20);
			this->textBox20->TabIndex = 17;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(7, 546);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(1214, 20);
			this->textBox19->TabIndex = 16;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(7, 520);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(1214, 20);
			this->textBox18->TabIndex = 15;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(7, 494);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(1214, 20);
			this->textBox17->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(7, 468);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(1214, 20);
			this->textBox16->TabIndex = 13;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(7, 442);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(1214, 20);
			this->textBox15->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(7, 416);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(1214, 20);
			this->textBox14->TabIndex = 11;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(7, 393);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(1215, 20);
			this->textBox13->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 598);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(310, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Загрузить генотип";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(310, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Выгрузить гентотип";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(6, 194);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(1216, 20);
			this->textBox12->TabIndex = 7;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(7, 167);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(1215, 20);
			this->textBox11->TabIndex = 6;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(7, 140);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(1215, 20);
			this->textBox10->TabIndex = 5;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(7, 113);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(1215, 20);
			this->textBox9->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(7, 86);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(1215, 20);
			this->textBox8->TabIndex = 3;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 59);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1215, 20);
			this->textBox7->TabIndex = 2;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 32);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(1216, 20);
			this->textBox6->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 6);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(1216, 20);
			this->textBox5->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1260, 677);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"Генетический Алгоритм";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void MainFun()
		{
			
			while (It>=-1)
			{
				
				//Начало создания новой итерации
				It++;
				GenNewIt();
				int LastAlive = BotNumber;
				bool entry = false;
				//Конец создания новой итерации
				while (LastAlive>0)
				{
					St++;
					//Начало проверяем количество живых ботов
					LastAlive = 0;
					for (int i = 0; i<BotNumber; i++) if (BOT[i].Alive>0)
					{
						LastAliveBOT[i] = St;
						LastAlive++;
					}
					if (LastAlive <= Porog) LastAlive = 0;
					//Конец проверяем количество живых ботов

					//Начало выводим матрицу
					PrintMat();
					//Конец выводим матрицу

					//Начало выполнения ходов бота
					for (int i = 0; i<BotNumber; i++) if (BOT[i].Alive>0) StepBot(i);
					//Конец выполнения ходов бота
					if (SwitchShow)Sleep(TimeInTheWorld);
					Application::DoEvents();
				}
			}
		}

		void GenNewIt()
		{
			HowMuchFood = 0;
			HowMuchVenom = 0;
			//printf_s("%d ",It);
			
			if (MaxIt < St)
			{
				MaxIt = St;
				textBox4->Text = "MaxIt #" + MaxIt;
			}
			DrawG[It] = St;
			if ((It > 0) && SwitchShow)
			{
				//this->pictureBox1->Refresh();
				Graphics ^graf;
				graf = pictureBox1->CreateGraphics();
				Pen^ black = gcnew Pen(Color::Black, 1.0f);	
				bool k = false;
				while (MyForm::pictureBox1->Size.Height - DrawG[It] / ky<0)
				{
					k = true;
					ky = ky + 1;
					MyForm::trackBar2->Value = ky;
					this->pictureBox1->Refresh();
				}
				while (MyForm::pictureBox1->Size.Width - It / kx<0)
				{
					k = true;
					kx = kx + 1;
					MyForm::trackBar1->Value = kx;
					this->pictureBox1->Refresh();
				}
				if (k == true) for (int i = 0; i < It; i++)
				{					
					graf->DrawLine(black, i / kx, MyForm::pictureBox1->Size.Height, i / kx, MyForm::pictureBox1->Size.Height - DrawG[i] / ky);
				}
				graf->DrawLine(black, It / kx, MyForm::pictureBox1->Size.Height, It / kx, MyForm::pictureBox1->Size.Height - DrawG[It] / ky);
			}
			St = 0;
			srand(time(NULL));
			for (int i = 0; i<SizeX; i++) for (int j = 0; j<SizeY; j++)
			{
				mat[i][j] = 0;
				if (i == 0 || j == 0 || i == SizeX - 1 || j == SizeY - 1) mat[i][j] = 4;
			}
			if (It == 0)
			{
				for (int i = 0; i<BotNumber; i++)
				{
					BOT[i].x = 0;
					BOT[i].y = 0;
				}
				for (int i = 0; i<BotNumber; i++)
				{
					BOT[i].Alive = AliveNumber;
					BOT[i].Num = 0;
					while (mat[BOT[i].x][BOT[i].y] != 0)
					{
						BOT[i].x = rand() % SizeX;
						BOT[i].y = rand() % SizeY;
					}
					BOT[i].Angle = 0;
					for (int j = 0; j<64; j++)
					{
						BOT[i].Square[j] = rand() % 64;
						LastBOT[i][j] = rand() % 64;
					}
				}
			}
			else
			{
				
				for (int k = 0; k<8; k++) 
				{
					int Max = 0, Maxi = 0;
					for (int i = 0; i < BotNumber; i++)
					{
						if (LastAliveBOT[i] >= Max)
						{
							Max = LastAliveBOT[i];
							Maxi = i;
						}
					}
					LastAliveBOT[Maxi] = 0;
					for (int j = 0; j < 64; j++)LastBOT[k][j] = BOT[Maxi].Square[j];
				}

				int mass[8] = { 0, };
				for (int k = 0; k < 8; k++)
				{
					for (int i = 0; i < 8; i++)
					{
						int NUM = 0;
						for (int j = 0; j < 64; j++) NUM = NUM*j + LastBOT[i][j];
						if (LastBOTAliveNUM[k] == NUM)
						{
							
							mass[k] = 1;	
						}					
					}
				}
				for (int k = 0; k < 8; k++) if (mass[k] == 1) LastBOTAlive[k]++;
				for (int k = 0; k < 8; k++) if (mass[k] == 0) LastBOTAliveNUM[k] = 0;
				for (int k = 0; k < 8; k++)
				{
					if (mass[k] == 0)
					{
						LastBOTAlive[k] = 0;
						for (int i = 0; i < 8; i++)
						{
							int NUM = 0;
							for (int j = 0; j < 64; j++) NUM = NUM*j + LastBOT[i][j];
							if (LastBOTAliveNUM[0] != NUM && 
								LastBOTAliveNUM[1] != NUM && 
								LastBOTAliveNUM[2] != NUM && 
								LastBOTAliveNUM[3] != NUM &&
								LastBOTAliveNUM[4] != NUM &&
								LastBOTAliveNUM[5] != NUM &&
								LastBOTAliveNUM[6] != NUM &&
								LastBOTAliveNUM[7] != NUM)
							{
								mass[k] = 1;
								LastBOTAliveNUM[k]= NUM;
								
							}
						}
					}
				}

				for (int i = 0; i<BotNumber; i++)
				{
					BOT[i].x = 0;
					BOT[i].y = 0;
				}
				int k = 0,_k = 0;
				for (int i = 0; i<BotNumber; i++)
				{
					BOT[i].Alive = AliveNumber;
					BOT[i].Num = 0;

					while (mat[BOT[i].x][BOT[i].y] != 0)
					{
						BOT[i].x = rand() % SizeX;
						BOT[i].y = rand() % SizeY;
					}
					BOT[i].Angle = 0;
					for (int j = 0; j<64; j++) BOT[i].Square[j] = LastBOT[k][j];
					_k++;
					if (_k<=NumberMutant) for (int j = 0; j<NumberChangeMutantSquare; j++)	BOT[i].Square[rand() % 64] = rand() % 64;
					if ((i % 7) == 0)
					{
						_k = 0;
						k++;
					}
				}
			}
			for (int i = 0; i<FoodNumber; i++)
			{
				Food[i][0] = -1;
				Food[i][1] = -1;
			}
			for (int i = 0; i<VenomNumber; i++)
			{
				Venom[i][0] = -1;
				Venom[i][1] = -1;
			}
			MyForm::label1->Text = "" + LastBOTAlive[0];
			MyForm::label2->Text = "" + LastBOTAlive[1];
			MyForm::label3->Text = "" + LastBOTAlive[2];
			MyForm::label4->Text = "" + LastBOTAlive[3];
			MyForm::label5->Text = "" + LastBOTAlive[4];
			MyForm::label6->Text = "" + LastBOTAlive[5];
			MyForm::label7->Text = "" + LastBOTAlive[6];
			MyForm::label8->Text = "" + LastBOTAlive[7];
		}
		
		void DrawPoint(int i, int j,int _i ,int _j)
		{
			_i = _i * 2;
			_j = _j * 2;
			GL::Color3(Color::DarkGray);
			GL::Vertex2((i)* 23 + _i, (j)* 23 + _j);
			GL::Vertex2((i)* 23 + _i, (j)* 23 + 2 + _j);
			GL::Vertex2((i)* 23 + 2 + _i, (j)* 23 + 2 + _j);
			GL::Vertex2((i)* 23 + 2 + _i, (j)* 23 + _j);

		}

		void DrawHP(int OneChar, int Two, int i, int j)
		{
			//поле 22*22 значит на 1 число смещение от (2 до 9) по X и (2 до 20) по Y
			//поле 22*22 значит на 2 число смещение от (13 до 20) по X и (2 до 20) по Y
			//при постановки точки следущая на +2 по растоянию
			if (OneChar == 0)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 0, 1);
				DrawPoint(i, j, Two + 0, 2);
				DrawPoint(i, j, Two + 0, 3);
				DrawPoint(i, j, Two + 0, 4);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 0, 6);
				DrawPoint(i, j, Two + 0, 7);
				DrawPoint(i, j, Two + 0, 8);
				DrawPoint(i, j, Two + 0, 9);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
			}
			if (OneChar == 1)
			{		
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 3, 9);
				DrawPoint(i, j, Two + 2, 8);
				DrawPoint(i, j, Two + 1, 7);
			}
			if (OneChar == 2)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 0, 1);
				DrawPoint(i, j, Two + 0, 2);
				DrawPoint(i, j, Two + 0, 3);
				DrawPoint(i, j, Two + 0, 4);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
			}
			if (OneChar == 3)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
			}
			if (OneChar == 4)
			{
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 0, 6);
				DrawPoint(i, j, Two + 0, 7);
				DrawPoint(i, j, Two + 0, 8);
				DrawPoint(i, j, Two + 0, 9);
				DrawPoint(i, j, Two + 0, 10);
			}
			if (OneChar == 5)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 0, 7);
				DrawPoint(i, j, Two + 0, 8);
				DrawPoint(i, j, Two + 0, 9);
				DrawPoint(i, j, Two + 0, 6);
			}
			if (OneChar == 6)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 0, 1);
				DrawPoint(i, j, Two + 0, 2);
				DrawPoint(i, j, Two + 0, 3);
				DrawPoint(i, j, Two + 0, 4);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 0, 6);
				DrawPoint(i, j, Two + 0, 7);
				DrawPoint(i, j, Two + 0, 8);
				DrawPoint(i, j, Two + 0, 9);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
			}
			if (OneChar == 7)
			{	
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
			}
			if (OneChar == 8)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 0, 1);
				DrawPoint(i, j, Two + 0, 2);
				DrawPoint(i, j, Two + 0, 3);
				DrawPoint(i, j, Two + 0, 4);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 0, 6);
				DrawPoint(i, j, Two + 0, 7);
				DrawPoint(i, j, Two + 0, 8);
				DrawPoint(i, j, Two + 0, 9);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
			}
			if (OneChar == 9)
			{
				DrawPoint(i, j, Two + 0, 0);
				DrawPoint(i, j, Two + 0, 5);
				DrawPoint(i, j, Two + 0, 6);
				DrawPoint(i, j, Two + 0, 7);
				DrawPoint(i, j, Two + 0, 8);
				DrawPoint(i, j, Two + 0, 9);
				DrawPoint(i, j, Two + 0, 10);
				DrawPoint(i, j, Two + 4, 0);
				DrawPoint(i, j, Two + 4, 1);
				DrawPoint(i, j, Two + 4, 2);
				DrawPoint(i, j, Two + 4, 3);
				DrawPoint(i, j, Two + 4, 4);
				DrawPoint(i, j, Two + 4, 5);
				DrawPoint(i, j, Two + 4, 6);
				DrawPoint(i, j, Two + 4, 7);
				DrawPoint(i, j, Two + 4, 8);
				DrawPoint(i, j, Two + 4, 9);
				DrawPoint(i, j, Two + 4, 10);
				DrawPoint(i, j, Two + 1, 0);
				DrawPoint(i, j, Two + 2, 0);
				DrawPoint(i, j, Two + 3, 0);
				DrawPoint(i, j, Two + 1, 10);
				DrawPoint(i, j, Two + 2, 10);
				DrawPoint(i, j, Two + 3, 10);
				DrawPoint(i, j, Two + 1, 5);
				DrawPoint(i, j, Two + 2, 5);
				DrawPoint(i, j, Two + 3, 5);
			}
			
		}

		void DrawSQ(int c,int i,int j)
		{
			if (mat[j][i] == 1) GL::Color3(Color::Blue);
			if (mat[j][i] == 2) GL::Color3(Color::Green);
			if (mat[j][i] == 3) GL::Color3(Color::Red);
			if (mat[j][i] == 4) GL::Color3(Color::Gray);

			GL::Vertex2((j)* 23, (i)* 23);
			GL::Vertex2((j)* 23, (i)* 23 + 22);
			GL::Vertex2((j)* 23 + 22, (i)* 23 + 22);
			GL::Vertex2((j)* 23 + 22, (i)* 23);
			
			for (int k = 0; k < BotNumber; k++)	if (BOT[k].x == j && BOT[k].y == i && BOT[k].Alive>0)
			{
				DrawHP(BOT[k].Alive / 10, 0, j, i);
				DrawHP(BOT[k].Alive % 10, 6, j, i);
			}
		}

		void PrintMat()
		{
			if (SwitchShow)
			{
				button1->Text = "Итерация №" + It;
				textBox1->Text = "Step #" + St;
				textBox2->Text = "Food #" + HowMuchFood;
				textBox3->Text = "Venom #" + HowMuchVenom;
				textBox4->Text = "MaxIt #" + MaxIt;
			}
			
			for (int i = 0; i<SizeX; i++) for (int j = 0; j<SizeY; j++)
			{
				mat[i][j] = 0;
				if (i == 0 || j == 0 || i == SizeX - 1 || j == SizeY - 1) mat[i][j] = 4;
			}
			for (int j = 16; j<16+7; j++) mat[9][j] = 4;
			for (int j = 9; j<9+7; j++) mat[21][j] = 4;
			for (int i = 0; i<BotNumber; i++) if (BOT[i].Alive>0) mat[BOT[i].x][BOT[i].y] = 1;
			for (int i = 0; i<FoodNumber; i++)
			{
				if (Food[i][0] == -1 && Food[i][1] == -1) do
				{
					Food[i][0] = rand() % SizeX;
					Food[i][1] = rand() % SizeY;
				} while (mat[Food[i][0]][Food[i][1]] != 0);
			}
			for (int i = 0; i<VenomNumber; i++)
			{
				if (Venom[i][0] == -1 && Venom[i][1] == -1) do
				{
					Venom[i][0] = rand() % SizeX;
					Venom[i][1] = rand() % SizeY;
				} while (mat[Venom[i][0]][Venom[i][1]] != 0);
			}
			for (int i = 0; i<FoodNumber; i++) mat[Food[i][0]][Food[i][1]] = 2;
			for (int i = 0; i<VenomNumber; i++) mat[Venom[i][0]][Venom[i][1]] = 3;
			
			if (SwitchShow)
			{
				GL::ClearColor(Color::Yellow);
				int w = glControl1->Width;
				int h = glControl1->Height;
				GL::MatrixMode(MatrixMode::Projection);
				GL::LoadIdentity();
				GL::Ortho(0, w, 0, h, -1, 1); // Верхний левый угол имеет кооординаты(0, 0)
				GL::Viewport(0, 0, w, h); // Использовать всю поверхность GLControl под рисование

				GL::Clear(ClearBufferMask::ColorBufferBit | ClearBufferMask::DepthBufferBit);

				GL::MatrixMode(MatrixMode::Modelview);
				GL::LoadIdentity();
				GL::Begin(BeginMode::Quads);
				
				for (int i = 0; i < SizeY; i++)
				{
					//printf_s("\n");
					//for(int j=0;j<SizeX;j++) printf_s("%d",mat[j][i]);
					for (int j = 0; j < SizeX; j++)	if (mat[j][i]>0 && mat[j][i]<5)DrawSQ(mat[j][i], i, j);
				}
				GL::End();
				glControl1->SwapBuffers();
				//printf_s("\n");
				//for(int i=0;i<BotNumber;i++) if(BOT[i].Alive>0)printf_s("#%d( #%d %d ) ",BOT[i].Alive,BOT[i].Num,BOT[i].Square[BOT[i].Num]);
			}
		}

		void MoveBotAct(int NumBot, int _x, int _y)
		{
			if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] != 4)
			{
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 0)
				{
					mat[BOT[NumBot].x][BOT[NumBot].y] = 0;
					mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] = 1;
					BOT[NumBot].x = BOT[NumBot].x + _x;
					BOT[NumBot].y = BOT[NumBot].y + _y;
					BOT[NumBot].Num = (BOT[NumBot].Num + 5) % 64;
				}
				if(mat[BOT[NumBot].x+_x][BOT[NumBot].y+_y]==1)
				{
					BOT[NumBot].Num=(BOT[NumBot].Num+3) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 3)
				{
					BOT[NumBot].Alive = BOT[NumBot].Alive - VenovAlive;
					BOT[NumBot].Num=(BOT[NumBot].Num+1) % 64;
				}
				if(mat[BOT[NumBot].x+_x][BOT[NumBot].y+_y]==2)
				{
					
					mat[BOT[NumBot].x][BOT[NumBot].y]=0;
					mat[BOT[NumBot].x+_x][BOT[NumBot].y+_y]=1;
					BOT[NumBot].x=BOT[NumBot].x+_x;
					BOT[NumBot].y=BOT[NumBot].y+_y;
					for(int i=0;i<FoodNumber;i++) if(Food[i][0]==BOT[NumBot].x && Food[i][1]==BOT[NumBot].y)
					{
						Food[i][0]=-1;
						Food[i][1]=-1;
						HowMuchFood++;
						if(BOT[NumBot].Alive<=100) BOT[NumBot].Alive=BOT[NumBot].Alive+FoodAlive;
						if (BOT[NumBot].Alive > 99) BOT[NumBot].Alive = 99;
					}
					BOT[NumBot].Num=(BOT[NumBot].Num+4) % 64;
				}
			}
			else BOT[NumBot].Num=(BOT[NumBot].Num+2) % 64;
		}

		void MoveBot(int NumBot, int Ang)
		{
			switch ((BOT[NumBot].Square[BOT[NumBot].Num] + Ang + BOT[NumBot].Angle) % 8)
			{
			case 0:
				MoveBotAct(NumBot, -1, -1);
				break;
			case 1:
				MoveBotAct(NumBot, 0, -1);
				break;
			case 2:
				MoveBotAct(NumBot, 1, -1);
				break;
			case 3:
				MoveBotAct(NumBot, 1, 0);
				break;
			case 4:
				MoveBotAct(NumBot, 1, 1);
				break;
			case 5:
				MoveBotAct(NumBot, 0, 1);
				break;
			case 6:
				MoveBotAct(NumBot, -1, 1);
				break;
			case 7:
				MoveBotAct(NumBot, -1, 0);
				break;
			default:
				break;
			}
		}

		void FoodBotAct(int NumBot, int _x, int _y)
		{
			if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] != 4)
			{
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 0)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + 5) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 1)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + 3) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 3)
				{
					for (int i = 0; i<VenomNumber; i++) if (Venom[i][0] == BOT[NumBot].x + _x && Venom[i][1] == BOT[NumBot].y + _y)
					{
						mat[BOT[NumBot].x][BOT[NumBot].y - 1] = 2;
						Venom[i][0] = -1;
						Venom[i][1] = -1;
						Food[0][0] = BOT[NumBot].x + _x;
						Food[0][1] = BOT[NumBot].y + _y;
						HowMuchVenom++;
					}
					BOT[NumBot].Num = (BOT[NumBot].Num + 1) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 2)
				{
					mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] = 0;
					for (int i = 0; i<FoodNumber; i++) if (Food[i][0] == BOT[NumBot].x + _x && Food[i][1] == BOT[NumBot].y + _y)
					{
						Food[i][0] = -1;
						Food[i][1] = -1;
						HowMuchFood++;
						if (BOT[NumBot].Alive<100) BOT[NumBot].Alive = BOT[NumBot].Alive + FoodAlive;
						if (BOT[NumBot].Alive > 99) BOT[NumBot].Alive = 99;
					}
					BOT[NumBot].Num = (BOT[NumBot].Num + 4) % 64;
				}
			}
			else BOT[NumBot].Num = (BOT[NumBot].Num + 2) % 64;
		}

		void FoodBot(int NumBot, int Ang)
		{
			switch (((BOT[NumBot].Square[BOT[NumBot].Num] + Ang + BOT[NumBot].Angle) % 8))
			{
			case 0:
				FoodBotAct(NumBot, -1, -1);
				break;
			case 1:
				FoodBotAct(NumBot, 0, -1);
				break;
			case 2:
				FoodBotAct(NumBot, 1, -1);
				break;
			case 3:
				FoodBotAct(NumBot, 1, 0);
				break;
			case 4:
				FoodBotAct(NumBot, 1, 1);
				break;
			case 5:
				FoodBotAct(NumBot, 0, 1);
				break;
			case 6:
				FoodBotAct(NumBot, -1, 1);
				break;
			case 7:
				FoodBotAct(NumBot, -1, 0);
				break;
			default:
				break;
			}
		}

		void SeeBotAct(int NumBot, int _x, int _y)
		{
			if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] != 4)
			{
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 0)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + 5) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 1)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + 3) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 3)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + 1) % 64;
				}
				if (mat[BOT[NumBot].x + _x][BOT[NumBot].y + _y] == 2)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + 4) % 64;
				}
			}
			else BOT[NumBot].Num = (BOT[NumBot].Num + 2) % 64;
		}

		void SeeBot(int NumBot, int Ang)
		{
			switch (((BOT[NumBot].Square[BOT[NumBot].Num] + Ang + BOT[NumBot].Angle) % 8))
			{
			case 0:
				SeeBotAct(NumBot, -1, -1);
				break;
			case 1:
				SeeBotAct(NumBot, 0, -1);
				break;
			case 2:
				SeeBotAct(NumBot, 1, -1);
				break;
			case 3:
				SeeBotAct(NumBot, 1, 0);
				break;
			case 4:
				SeeBotAct(NumBot, 1, 1);
				break;
			case 5:
				SeeBotAct(NumBot, 0, 1);
				break;
			case 6:
				SeeBotAct(NumBot, -1, 1);
				break;
			case 7:
				SeeBotAct(NumBot, -1, 0);
				break;
			default:
				break;
			}
		}

		void StepBot(int NumBot)
		{
			int SquareRepeat = 0;
			while (SquareRepeat<MaxRepeat)
			{
				//Начало действия 0..7
				if (0 <= BOT[NumBot].Square[BOT[NumBot].Num] && BOT[NumBot].Square[BOT[NumBot].Num]<8)
				{
					MoveBot(NumBot, 0);
					SquareRepeat = MaxRepeat;
				}
				//Конец действия 0..7

				//Начало действия 8..15
				if (8 <= BOT[NumBot].Square[BOT[NumBot].Num] && BOT[NumBot].Square[BOT[NumBot].Num]<16)
				{
					FoodBot(NumBot, -8);
					SquareRepeat = MaxRepeat;
				}
				//Конец действия 8..15

				//Начало действия 16..23
				if (16 <= BOT[NumBot].Square[BOT[NumBot].Num] && BOT[NumBot].Square[BOT[NumBot].Num]<24)
				{
					SeeBot(NumBot, -16);
				}
				//Конец действия 16..23

				//Начало действия 24..31
				if (24 <= BOT[NumBot].Square[BOT[NumBot].Num] && BOT[NumBot].Square[BOT[NumBot].Num]<32)
				{
					BOT[NumBot].Angle = (BOT[NumBot].Angle + BOT[NumBot].Square[BOT[NumBot].Num] - 24) % 8;
					BOT[NumBot].Num = (BOT[NumBot].Num + 1) % 64;
				}
				//Конец действия 24..31

				//Начало действия 32..63
				if ((BOT[NumBot].Square[BOT[NumBot].Num]<64) && BOT[NumBot].Square[BOT[NumBot].Num]>=32)
				{
					BOT[NumBot].Num = (BOT[NumBot].Num + BOT[NumBot].Square[BOT[NumBot].Num]) % 64;
				}
				//Конец действия 32..63
				SquareRepeat++;

			}
			if (BOT[NumBot].Alive == 0) SquareRepeat = MaxRepeat;
			BOT[NumBot].Alive--;
		}

		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
		{

		}	

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			button1->Enabled = false;
			MainFun();
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (SwitchShow == true)
			{
				SwitchShow = false;
				this->MyForm::button2->Text = "Swich FALSE";
			}
			else
			{
				SwitchShow = true;
				button2->Text = "Swich";
			}
		}

		private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) 
		{
			kx = 1 + MyForm::trackBar1->Value;
			MyForm::pictureBox1->Refresh();
			Graphics ^graf;
			graf = pictureBox1->CreateGraphics();
			Pen^ black = gcnew Pen(Color::Black, 1.0f);
			Pen^ red = gcnew Pen(Color::Red, 1.0f);
			Point p1, p2;
			for (int i = 0; i < It; i++)while (MyForm::pictureBox1->Size.Height - DrawG[i] / ky<0)
			{
				
				ky = ky + 1;
				MyForm::trackBar2->Value = ky;
				this->pictureBox1->Refresh();
			}
			for (int i = 0; i < It; i++)while (MyForm::pictureBox1->Size.Width - i / kx<0)
			{
				
				kx = kx + 1;
				MyForm::trackBar1->Value = kx;
				this->pictureBox1->Refresh();
			}
			for (int i = 0; i < It; i++)graf->DrawLine(black, i / kx, MyForm::pictureBox1->Size.Height, i / kx, MyForm::pictureBox1->Size.Height - DrawG[i] / ky);
		}

		private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) 
		{
			ky = 1 + MyForm::trackBar2->Value;
			MyForm::pictureBox1->Refresh();
			Graphics ^graf;
			graf = pictureBox1->CreateGraphics();
			Pen^ black = gcnew Pen(Color::Black, 1.0f);
			Pen^ red = gcnew Pen(Color::Red, 1.0f);
			Point p1, p2;
			for (int i = 0; i < It; i++)while (MyForm::pictureBox1->Size.Height - DrawG[i] / ky<0)
			{

				ky = ky + 1;
				MyForm::trackBar2->Value = ky;
				this->pictureBox1->Refresh();
			}
			for (int i = 0; i < It; i++)while (MyForm::pictureBox1->Size.Width - i / kx<0)
			{

				kx = kx + 1;
				MyForm::trackBar1->Value = kx;
				this->pictureBox1->Refresh();
			}
			for (int i = 0; i < It; i++)graf->DrawLine(black, i / kx, MyForm::pictureBox1->Size.Height, i / kx, MyForm::pictureBox1->Size.Height - DrawG[i] / ky);
		}

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			MyForm::pictureBox1->Refresh();
			Graphics ^graf;
			graf = pictureBox1->CreateGraphics();
			Pen^ black = gcnew Pen(Color::Black, 1.0f);
			Pen^ red = gcnew Pen(Color::Red, 1.0f);
			Point p1, p2;
			for (int i = 0; i < It; i++)while (MyForm::pictureBox1->Size.Height - DrawG[i] / ky<0)
			{

				ky = ky + 1;
				MyForm::trackBar2->Value = ky;
				this->pictureBox1->Refresh();
			}
			for (int i = 0; i < It; i++)while (MyForm::pictureBox1->Size.Width - i / kx<0)
			{

				kx = kx + 1;
				MyForm::trackBar1->Value = kx;
				this->pictureBox1->Refresh();
			}
			for (int i = 0; i < It; i++)graf->DrawLine(black, i / kx, MyForm::pictureBox1->Size.Height, i / kx, MyForm::pictureBox1->Size.Height - DrawG[i] / ky);
		}

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			MyForm::textBox5->Text = "";
			MyForm::textBox6->Text = "";
			MyForm::textBox7->Text = "";
			MyForm::textBox8->Text = "";
			MyForm::textBox9->Text = "";
			MyForm::textBox10->Text = "";
			MyForm::textBox11->Text = "";
			MyForm::textBox12->Text = "";

			for (int i = 0; i < 64; i++)
			{
				MyForm::textBox5->Text = MyForm::textBox5->Text + LastBOT[0][i] + " ";
				MyForm::textBox6->Text = MyForm::textBox6->Text + LastBOT[1][i] + " ";
				MyForm::textBox7->Text = MyForm::textBox7->Text + LastBOT[2][i] + " ";
				MyForm::textBox8->Text = MyForm::textBox8->Text + LastBOT[3][i] + " ";
				MyForm::textBox9->Text = MyForm::textBox9->Text + LastBOT[4][i] + " ";
				MyForm::textBox10->Text = MyForm::textBox10->Text + LastBOT[5][i] + " ";
				MyForm::textBox11->Text = MyForm::textBox11->Text + LastBOT[6][i] + " ";
				MyForm::textBox12->Text = MyForm::textBox12->Text + LastBOT[7][i] + " ";
			}
		}

		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			for (int i = 0; i < 64; i++) BOT[i].Alive = -1;
			for (int i = 0; i < 8; i++)
			{
				LastAliveBOT[i] = 1000000000;
				for (int j = 0; j < 64; j++) BOT[i].Square[j] = 0;
			}

			char str[512]="";

			int k, _i;
			
			//0
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox13->TextLength>_i))
				{
					str[_i] = MyForm::textBox13->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[0].Square[k] = ((int)BOT[0].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//0

			//1
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox14->TextLength>_i))
				{
					str[_i] = MyForm::textBox14->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[1].Square[k] = ((int)BOT[1].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//1

			//2
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox15->TextLength>_i))
				{
					str[_i] = MyForm::textBox15->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[2].Square[k] = ((int)BOT[2].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//2

			//3
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox16->TextLength>_i))
				{
					str[_i] = MyForm::textBox16->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[3].Square[k] = ((int)BOT[3].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//3

			//4
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox17->TextLength>_i))
				{
					str[_i] = MyForm::textBox17->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[4].Square[k] = ((int)BOT[4].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//4

			//5
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox18->TextLength>_i))
				{
					str[_i] = MyForm::textBox18->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[5].Square[k] = ((int)BOT[5].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//5

			//6
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox19->TextLength>_i))
				{
					str[_i] = MyForm::textBox19->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[6].Square[k] = ((int)BOT[6].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//6

			//7
			
				_i = 0;
				k = 0;
				while ((k < 64) && (MyForm::textBox20->TextLength>_i))
				{
					str[_i] = MyForm::textBox20->Text[_i];
					_i++;
					if (str[_i - 1] == ' ') k++;
				}
				k = 0;
				for (int i = 0; i < _i + 1; i++)
				{
					if (str[i] == ' ')k++;
					else if (k < 64)BOT[7].Square[k] = ((int)BOT[7].Square[k]) * 10 + (int)str[i] - (int)'0';
				}
			
			//7

		}

		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			AliveNumber = 0;
			for (int i = 0; i < textBox21->TextLength; i++) AliveNumber = AliveNumber * 10 + (int(textBox21->Text[i]) - (int)'0');
		}

		private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
		{
			FoodAlive = 0;
			for (int i = 0; i < textBox22->TextLength; i++) FoodAlive = FoodAlive * 10 + (int(textBox22->Text[i]) - (int)'0');
		}

		private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			VenovAlive = 0;
			for (int i = 0; i < textBox23->TextLength; i++) VenovAlive = VenovAlive * 10 + (int(textBox23->Text[i]) - (int)'0');
		}

		private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Porog = 0;
			for (int i = 0; i < textBox24->TextLength; i++) Porog = Porog * 10 + (int(textBox24->Text[i]) - (int)'0');
		}

		private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			NumberChangeMutantSquare = 0;
			for (int i = 0; i < textBox25->TextLength; i++) NumberChangeMutantSquare = NumberChangeMutantSquare * 10 + (int(textBox25->Text[i]) - (int)'0');
		}

		private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
		{		
			FoodNumber = 0;
			for (int i = 0; i < textBox26->TextLength; i++) FoodNumber = FoodNumber*10 +(int(textBox26->Text[i]) - (int)'0');	
		}

		private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			VenomNumber = 0;
			for (int i = 0; i < textBox27->TextLength; i++) VenomNumber = VenomNumber * 10 + (int(textBox27->Text[i]) - (int)'0');
		}

		private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			TimeInTheWorld = 0;
			for (int i = 0; i < textBox28->TextLength; i++) TimeInTheWorld = TimeInTheWorld * 10 + (int(textBox28->Text[i]) - (int)'0');
		}

		private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MaxRepeat = 0;
			for (int i = 0; i < textBox29->TextLength; i++) MaxRepeat = MaxRepeat * 10 + (int(textBox29->Text[i]) - (int)'0');
		}
		
		private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			MyForm::button6->PerformClick();
			MyForm::button7->PerformClick();
			MyForm::button8->PerformClick();
			MyForm::button9->PerformClick();
			MyForm::button10->PerformClick();
			MyForm::button11->PerformClick();
			MyForm::button12->PerformClick();
			MyForm::button13->PerformClick();
			MyForm::button14->PerformClick();
			MyForm::button16->PerformClick();
		}

		private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		{
			It = -10;
		}

		private: System::Void tabControl1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		{
			GL::ClearColor(Color::Yellow);
			int w = glControl1->Width;
			int h = glControl1->Height;
			GL::MatrixMode(MatrixMode::Projection);
			GL::LoadIdentity();
			GL::Ortho(0, w, 0, h, -1, 1); // Верхний левый угол имеет кооординаты(0, 0)
			GL::Viewport(0, 0, w, h); // Использовать всю поверхность GLControl под рисование

			GL::Clear(ClearBufferMask::ColorBufferBit | ClearBufferMask::DepthBufferBit);

			GL::MatrixMode(MatrixMode::Modelview);
			GL::LoadIdentity();
			GL::Begin(BeginMode::Quads);

			for (int i = 0; i < SizeY; i++)
			{
				//printf_s("\n");
				//for(int j=0;j<SizeX;j++) printf_s("%d",mat[j][i]);
				for (int j = 0; j < SizeX; j++)	if (mat[j][i]>0 && mat[j][i]<5)DrawSQ(mat[j][i], i, j);
			}
			GL::End();
			glControl1->SwapBuffers();
		}

		private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			NumberMutant = 0;
			for (int i = 0; i < textBox30->TextLength; i++) NumberMutant = NumberMutant * 10 + (int(textBox30->Text[i]) - (int)'0');
		}
};
}
