#pragma once

namespace CppStudent {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;






    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
        MySqlConnection^ sqlConn = gcnew MySqlConnection();
        MySqlCommand^ sqlCmd = gcnew MySqlCommand();
        DataTable^ sqlDt = gcnew DataTable();
        MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
        MySqlDataReader^ sqlRd;
        DataSet^ DS = gcnew DataSet();


        String^ sqlQuery;

        String^ server = "localhost";
        String^ username = "root";
        String^ password = "1234";
        String^ port = "3306";
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::Button^ btnSearch;



    private: System::Windows::Forms::TextBox^ txtSearch;





    private: System::Windows::Forms::Button^ btnDelete;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Button^ btnUpdate;

    private: System::Windows::Forms::Button^ btnShow;



           String^ database = "cppguiprojects";



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
    private: System::Windows::Forms::TabControl^ tabControl1;
    protected:
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Panel^ panel11;
    private: System::Windows::Forms::Label^ lblRanking;
    private: System::Windows::Forms::Label^ lblDate;
    private: System::Windows::Forms::Label^ lblTotal;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::ComboBox^ cboModule8;
    private: System::Windows::Forms::TextBox^ txtScore8;
    private: System::Windows::Forms::ComboBox^ cboModule7;
    private: System::Windows::Forms::TextBox^ txtScore7;
    private: System::Windows::Forms::ComboBox^ cboModule6;
    private: System::Windows::Forms::TextBox^ txtScore6;
    private: System::Windows::Forms::ComboBox^ cboModule5;
    private: System::Windows::Forms::TextBox^ txtScore5;
    private: System::Windows::Forms::ComboBox^ cboModule4;
    private: System::Windows::Forms::TextBox^ txtScore4;
    private: System::Windows::Forms::ComboBox^ cboModule3;
    private: System::Windows::Forms::TextBox^ txtScore3;
    private: System::Windows::Forms::ComboBox^ cboModule2;
    private: System::Windows::Forms::TextBox^ txtScore2;
    private: System::Windows::Forms::ComboBox^ cboModule1;
    private: System::Windows::Forms::TextBox^ txtScore1;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Panel^ panel12;
    private: System::Windows::Forms::Panel^ panel13;
    private: System::Windows::Forms::MonthCalendar^ monthCalendar2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::NumericUpDown^ nudPhD;

    private: System::Windows::Forms::NumericUpDown^ nudMSc;

    private: System::Windows::Forms::NumericUpDown^ nudMA;

    private: System::Windows::Forms::NumericUpDown^ nudBSc;

    private: System::Windows::Forms::NumericUpDown^ nudBA;

    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label29;

    private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::ComboBox^ cboExchange;

private: System::Windows::Forms::ComboBox^ cboAccommodation;

private: System::Windows::Forms::ComboBox^ cboOverseaStudent;


private: System::Windows::Forms::ComboBox^ cboHomeStudent;

    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label23;

    private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtCourseTutor;

private: System::Windows::Forms::TextBox^ txtDean;
private: System::Windows::Forms::TextBox^ txtProgramLeader;


private: System::Windows::Forms::TextBox^ txtCourseCode;

private: System::Windows::Forms::ComboBox^ cboCourse;

    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ txtStudentID;
private: System::Windows::Forms::TextBox^ txtSurname;
private: System::Windows::Forms::TextBox^ txtAddress;



private: System::Windows::Forms::TextBox^ txtFirstname;
private: System::Windows::Forms::ComboBox^ cboGender;


    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ btnResult;
    private: System::Windows::Forms::Button^ btnReset;
    private: System::Windows::Forms::Button^ btnAddNew;
private: System::Windows::Forms::ComboBox^ cboScholarship;
private: System::Windows::Forms::TextBox^ txtgEmail;


private: System::Windows::Forms::TextBox^ txtgMobile;

    private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ txtgSurname;

    private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ txtgAddress;

    private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ txtgFirstname;

    private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::ComboBox^ cboGuidance;

    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ txtFaculty;

private: System::Windows::Forms::TextBox^ txtDOB;
private: System::Windows::Forms::TextBox^ txtMobile;


    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label51;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->lblRanking = (gcnew System::Windows::Forms::Label());
            this->lblDate = (gcnew System::Windows::Forms::Label());
            this->lblTotal = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->cboModule8 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore8 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule7 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore7 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule6 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore6 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule5 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore5 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule4 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore4 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule3 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore3 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule2 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore2 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule1 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore1 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->nudPhD = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudMSc = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudMA = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudBSc = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudBA = (gcnew System::Windows::Forms::NumericUpDown());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnResult = (gcnew System::Windows::Forms::Button());
            this->btnReset = (gcnew System::Windows::Forms::Button());
            this->btnAddNew = (gcnew System::Windows::Forms::Button());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->cboScholarship = (gcnew System::Windows::Forms::ComboBox());
            this->cboExchange = (gcnew System::Windows::Forms::ComboBox());
            this->cboAccommodation = (gcnew System::Windows::Forms::ComboBox());
            this->cboOverseaStudent = (gcnew System::Windows::Forms::ComboBox());
            this->cboHomeStudent = (gcnew System::Windows::Forms::ComboBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->txtgEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtgMobile = (gcnew System::Windows::Forms::TextBox());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->txtgSurname = (gcnew System::Windows::Forms::TextBox());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->txtgAddress = (gcnew System::Windows::Forms::TextBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->txtgFirstname = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->cboGuidance = (gcnew System::Windows::Forms::ComboBox());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->txtFaculty = (gcnew System::Windows::Forms::TextBox());
            this->txtCourseTutor = (gcnew System::Windows::Forms::TextBox());
            this->txtDean = (gcnew System::Windows::Forms::TextBox());
            this->txtProgramLeader = (gcnew System::Windows::Forms::TextBox());
            this->txtCourseCode = (gcnew System::Windows::Forms::TextBox());
            this->cboCourse = (gcnew System::Windows::Forms::ComboBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtDOB = (gcnew System::Windows::Forms::TextBox());
            this->txtMobile = (gcnew System::Windows::Forms::TextBox());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
            this->txtSurname = (gcnew System::Windows::Forms::TextBox());
            this->txtAddress = (gcnew System::Windows::Forms::TextBox());
            this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
            this->cboGender = (gcnew System::Windows::Forms::ComboBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->btnUpdate = (gcnew System::Windows::Forms::Button());
            this->btnShow = (gcnew System::Windows::Forms::Button());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->btnDelete = (gcnew System::Windows::Forms::Button());
            this->txtSearch = (gcnew System::Windows::Forms::TextBox());
            this->btnSearch = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel11->SuspendLayout();
            this->panel12->SuspendLayout();
            this->panel13->SuspendLayout();
            this->panel9->SuspendLayout();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPhD))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMSc))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMA))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBSc))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBA))->BeginInit();
            this->panel5->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(21, 27);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1891, 1011);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::Color::Black;
            this->tabPage1->Controls->Add(this->panel8);
            this->tabPage1->Controls->Add(this->panel7);
            this->tabPage1->Controls->Add(this->panel6);
            this->tabPage1->Controls->Add(this->panel5);
            this->tabPage1->Controls->Add(this->panel4);
            this->tabPage1->Controls->Add(this->panel3);
            this->tabPage1->Controls->Add(this->panel2);
            this->tabPage1->Controls->Add(this->panel1);
            this->tabPage1->Location = System::Drawing::Point(4, 29);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1883, 978);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"University System";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::DarkTurquoise;
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Controls->Add(this->label51);
            this->panel8->Location = System::Drawing::Point(27, 8);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(1825, 114);
            this->panel8->TabIndex = 6;
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->BackColor = System::Drawing::Color::DarkTurquoise;
            this->label51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(93, -11);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(1646, 109);
            this->label51->TabIndex = 46;
            this->label51->Text = L"Student Database Management System";
            this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::SystemColors::Control;
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->panel11);
            this->panel7->Controls->Add(this->label2);
            this->panel7->Controls->Add(this->label1);
            this->panel7->Controls->Add(this->panel10);
            this->panel7->Controls->Add(this->panel9);
            this->panel7->Location = System::Drawing::Point(1278, 139);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(573, 761);
            this->panel7->TabIndex = 5;
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::LightCoral;
            this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel11->Controls->Add(this->lblRanking);
            this->panel11->Controls->Add(this->lblDate);
            this->panel11->Controls->Add(this->lblTotal);
            this->panel11->Controls->Add(this->label13);
            this->panel11->Controls->Add(this->label12);
            this->panel11->Controls->Add(this->label11);
            this->panel11->Controls->Add(this->cboModule8);
            this->panel11->Controls->Add(this->txtScore8);
            this->panel11->Controls->Add(this->cboModule7);
            this->panel11->Controls->Add(this->txtScore7);
            this->panel11->Controls->Add(this->cboModule6);
            this->panel11->Controls->Add(this->txtScore6);
            this->panel11->Controls->Add(this->cboModule5);
            this->panel11->Controls->Add(this->txtScore5);
            this->panel11->Controls->Add(this->cboModule4);
            this->panel11->Controls->Add(this->txtScore4);
            this->panel11->Controls->Add(this->cboModule3);
            this->panel11->Controls->Add(this->txtScore3);
            this->panel11->Controls->Add(this->cboModule2);
            this->panel11->Controls->Add(this->txtScore2);
            this->panel11->Controls->Add(this->cboModule1);
            this->panel11->Controls->Add(this->txtScore1);
            this->panel11->Controls->Add(this->label9);
            this->panel11->Controls->Add(this->label10);
            this->panel11->Controls->Add(this->label7);
            this->panel11->Controls->Add(this->label8);
            this->panel11->Controls->Add(this->label5);
            this->panel11->Controls->Add(this->label6);
            this->panel11->Controls->Add(this->label3);
            this->panel11->Controls->Add(this->label4);
            this->panel11->Controls->Add(this->panel12);
            this->panel11->Controls->Add(this->panel13);
            this->panel11->Location = System::Drawing::Point(-1, -12);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(573, 772);
            this->panel11->TabIndex = 10;
            // 
            // lblRanking
            // 
            this->lblRanking->BackColor = System::Drawing::SystemColors::Window;
            this->lblRanking->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblRanking->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblRanking->Location = System::Drawing::Point(376, 727);
            this->lblRanking->Name = L"lblRanking";
            this->lblRanking->Size = System::Drawing::Size(184, 35);
            this->lblRanking->TabIndex = 37;
            // 
            // lblDate
            // 
            this->lblDate->BackColor = System::Drawing::SystemColors::Window;
            this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblDate->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblDate->Location = System::Drawing::Point(120, 728);
            this->lblDate->Name = L"lblDate";
            this->lblDate->Size = System::Drawing::Size(227, 35);
            this->lblDate->TabIndex = 36;
            // 
            // lblTotal
            // 
            this->lblTotal->BackColor = System::Drawing::SystemColors::Window;
            this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblTotal->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblTotal->Location = System::Drawing::Point(120, 684);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(227, 35);
            this->lblTotal->TabIndex = 35;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(397, 675);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(125, 48);
            this->label13->TabIndex = 34;
            this->label13->Text = L"Result";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(-2, 720);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(100, 48);
            this->label12->TabIndex = 33;
            this->label12->Text = L"Date";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(-5, 674);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(103, 48);
            this->label11->TabIndex = 32;
            this->label11->Text = L"Total";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cboModule8
            // 
            this->cboModule8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule8->FormattingEnabled = true;
            this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule8->Location = System::Drawing::Point(89, 639);
            this->cboModule8->Name = L"cboModule8";
            this->cboModule8->Size = System::Drawing::Size(283, 35);
            this->cboModule8->TabIndex = 31;
            this->cboModule8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule8_SelectedIndexChanged);
            // 
            // txtScore8
            // 
            this->txtScore8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore8->Enabled = false;
            this->txtScore8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore8->Location = System::Drawing::Point(401, 638);
            this->txtScore8->Name = L"txtScore8";
            this->txtScore8->Size = System::Drawing::Size(161, 37);
            this->txtScore8->TabIndex = 30;
            this->txtScore8->Text = L"0";
            this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore8->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule7
            // 
            this->cboModule7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule7->FormattingEnabled = true;
            this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule7->Location = System::Drawing::Point(88, 593);
            this->cboModule7->Name = L"cboModule7";
            this->cboModule7->Size = System::Drawing::Size(283, 35);
            this->cboModule7->TabIndex = 29;
            this->cboModule7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule7_SelectedIndexChanged);
            // 
            // txtScore7
            // 
            this->txtScore7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore7->Enabled = false;
            this->txtScore7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore7->Location = System::Drawing::Point(400, 591);
            this->txtScore7->Name = L"txtScore7";
            this->txtScore7->Size = System::Drawing::Size(161, 37);
            this->txtScore7->TabIndex = 28;
            this->txtScore7->Text = L"0";
            this->txtScore7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore7->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule6
            // 
            this->cboModule6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule6->FormattingEnabled = true;
            this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(45) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python ", L""
            });
            this->cboModule6->Location = System::Drawing::Point(86, 547);
            this->cboModule6->Name = L"cboModule6";
            this->cboModule6->Size = System::Drawing::Size(283, 35);
            this->cboModule6->TabIndex = 27;
            this->cboModule6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule6_SelectedIndexChanged);
            // 
            // txtScore6
            // 
            this->txtScore6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore6->Enabled = false;
            this->txtScore6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore6->Location = System::Drawing::Point(398, 542);
            this->txtScore6->Name = L"txtScore6";
            this->txtScore6->Size = System::Drawing::Size(161, 37);
            this->txtScore6->TabIndex = 26;
            this->txtScore6->Text = L"0";
            this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore6->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule5
            // 
            this->cboModule5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule5->FormattingEnabled = true;
            this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule5->Location = System::Drawing::Point(85, 498);
            this->cboModule5->Name = L"cboModule5";
            this->cboModule5->Size = System::Drawing::Size(283, 35);
            this->cboModule5->TabIndex = 25;
            this->cboModule5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule5_SelectedIndexChanged);
            // 
            // txtScore5
            // 
            this->txtScore5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore5->Enabled = false;
            this->txtScore5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore5->Location = System::Drawing::Point(397, 494);
            this->txtScore5->Name = L"txtScore5";
            this->txtScore5->Size = System::Drawing::Size(161, 37);
            this->txtScore5->TabIndex = 24;
            this->txtScore5->Text = L"0";
            this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore5->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule4
            // 
            this->cboModule4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule4->FormattingEnabled = true;
            this->cboModule4->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule4->Location = System::Drawing::Point(85, 448);
            this->cboModule4->Name = L"cboModule4";
            this->cboModule4->Size = System::Drawing::Size(283, 35);
            this->cboModule4->TabIndex = 23;
            this->cboModule4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule4_SelectedIndexChanged);
            // 
            // txtScore4
            // 
            this->txtScore4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore4->Enabled = false;
            this->txtScore4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore4->Location = System::Drawing::Point(397, 445);
            this->txtScore4->Name = L"txtScore4";
            this->txtScore4->Size = System::Drawing::Size(161, 37);
            this->txtScore4->TabIndex = 22;
            this->txtScore4->Text = L"0";
            this->txtScore4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore4->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule3
            // 
            this->cboModule3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule3->FormattingEnabled = true;
            this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule3->Location = System::Drawing::Point(84, 398);
            this->cboModule3->Name = L"cboModule3";
            this->cboModule3->Size = System::Drawing::Size(283, 35);
            this->cboModule3->TabIndex = 21;
            this->cboModule3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule3_SelectedIndexChanged);
            // 
            // txtScore3
            // 
            this->txtScore3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore3->Enabled = false;
            this->txtScore3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore3->Location = System::Drawing::Point(396, 396);
            this->txtScore3->Name = L"txtScore3";
            this->txtScore3->Size = System::Drawing::Size(161, 37);
            this->txtScore3->TabIndex = 20;
            this->txtScore3->Text = L"0";
            this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore3->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule2
            // 
            this->cboModule2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule2->FormattingEnabled = true;
            this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule2->Location = System::Drawing::Point(82, 351);
            this->cboModule2->Name = L"cboModule2";
            this->cboModule2->Size = System::Drawing::Size(283, 35);
            this->cboModule2->TabIndex = 19;
            this->cboModule2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule2_SelectedIndexChanged);
            // 
            // txtScore2
            // 
            this->txtScore2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore2->Enabled = false;
            this->txtScore2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore2->Location = System::Drawing::Point(394, 346);
            this->txtScore2->Name = L"txtScore2";
            this->txtScore2->Size = System::Drawing::Size(161, 37);
            this->txtScore2->TabIndex = 18;
            this->txtScore2->Text = L"0";
            this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore2->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule1
            // 
            this->cboModule1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboModule1->FormattingEnabled = true;
            this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
                L"", L"Computer Fundamentals", L"Wiindows and PC Software",
                    L"Mathematical Foundation - 1", L"Logical Organization of Computer - 1", L"Communicative English", L"Programming in C", L"Advanced Programming  in C ",
                    L"Logical Organization of Computer -2", L"Mathematical Foundation -2", L"Office Automation Tools ", L"Structured System Analysis and Design ",
                    L"personality Development ", L"OOPS using C++", L"Data Structure ", L"Computer Architecture", L"Software Engineering ", L"Fundamental of Database System ",
                    L"Computer Oriented Numerical Methods", L"Advanced Data Structure ", L"Adanced Programming using C++", L"E-Commerce", L"Relational Database Management System ",
                    L"Computer Oriented Statical Methods ", L"Management Information System ", L"LAB-1", L"LAB-2 ", L"LAB-3", L"LAB-4", L"LAB-5",
                    L"LAB-6", L"Web Designing Fundamental ", L"Operating System -1", L"Artifical Intelligence ", L"Computer Networks ", L"Programming using Visual Basic ",
                    L"Multimedia Tools ", L"Web Designing using Advance tools ", L"Operating System -2", L"Computer Graphics ", L"Internet Technologies ",
                    L"Advanced Programming with Visual Basic ", L"Programming in core Java ", L"Programming in Python "
            });
            this->cboModule1->Location = System::Drawing::Point(81, 303);
            this->cboModule1->Name = L"cboModule1";
            this->cboModule1->Size = System::Drawing::Size(283, 35);
            this->cboModule1->TabIndex = 17;
            this->cboModule1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
            // 
            // txtScore1
            // 
            this->txtScore1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore1->Enabled = false;
            this->txtScore1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtScore1->Location = System::Drawing::Point(393, 300);
            this->txtScore1->Name = L"txtScore1";
            this->txtScore1->Size = System::Drawing::Size(161, 37);
            this->txtScore1->TabIndex = 16;
            this->txtScore1->Text = L"0";
            this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(16, 638);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(35, 39);
            this->label9->TabIndex = 15;
            this->label9->Text = L"8";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(15, 592);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(35, 39);
            this->label10->TabIndex = 14;
            this->label10->Text = L"7";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(15, 546);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(35, 39);
            this->label7->TabIndex = 13;
            this->label7->Text = L"6";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(15, 497);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(35, 39);
            this->label8->TabIndex = 12;
            this->label8->Text = L"5";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(15, 444);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(35, 39);
            this->label5->TabIndex = 11;
            this->label5->Text = L"4";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(15, 396);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(35, 39);
            this->label6->TabIndex = 10;
            this->label6->Text = L"3";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(15, 350);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(35, 39);
            this->label3->TabIndex = 9;
            this->label3->Text = L"2";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(15, 302);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(31, 39);
            this->label4->TabIndex = 8;
            this->label4->Text = L"1";
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::Black;
            this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel12->Controls->Add(this->label50);
            this->panel12->Controls->Add(this->label49);
            this->panel12->Controls->Add(this->label48);
            this->panel12->Controls->Add(this->label47);
            this->panel12->Controls->Add(this->label46);
            this->panel12->Controls->Add(this->label31);
            this->panel12->Controls->Add(this->label25);
            this->panel12->Location = System::Drawing::Point(417, 14);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(139, 274);
            this->panel12->TabIndex = 1;
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->BackColor = System::Drawing::Color::Yellow;
            this->label50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label50->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(42, 111);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(42, 42);
            this->label50->TabIndex = 17;
            this->label50->Text = L"d";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->BackColor = System::Drawing::Color::Aqua;
            this->label49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label49->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(16, 37);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(41, 42);
            this->label49->TabIndex = 16;
            this->label49->Text = L"t";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->BackColor = System::Drawing::Color::HotPink;
            this->label48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label48->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(69, 184);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(42, 42);
            this->label48->TabIndex = 15;
            this->label48->Text = L"n";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->BackColor = System::Drawing::Color::DarkTurquoise;
            this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label47->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(54, 147);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(42, 42);
            this->label47->TabIndex = 14;
            this->label47->Text = L"e";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->BackColor = System::Drawing::Color::RoyalBlue;
            this->label46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label46->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(84, 221);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(41, 42);
            this->label46->TabIndex = 13;
            this->label46->Text = L"t";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::Purple;
            this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label31->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(30, 74);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(42, 42);
            this->label31->TabIndex = 12;
            this->label31->Text = L"u";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->BackColor = System::Drawing::Color::LightCoral;
            this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label25->Font = (gcnew System::Drawing::Font(L"Algerian", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(0, 0);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(40, 42);
            this->label25->TabIndex = 11;
            this->label25->Text = L"s";
            // 
            // panel13
            // 
            this->panel13->BackColor = System::Drawing::Color::Black;
            this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel13->Controls->Add(this->monthCalendar2);
            this->panel13->Location = System::Drawing::Point(11, 14);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(391, 276);
            this->panel13->TabIndex = 7;
            // 
            // monthCalendar2
            // 
            this->monthCalendar2->BackColor = System::Drawing::SystemColors::Window;
            this->monthCalendar2->Location = System::Drawing::Point(9, 9);
            this->monthCalendar2->Name = L"monthCalendar2";
            this->monthCalendar2->ShowWeekNumbers = true;
            this->monthCalendar2->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(15, 369);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(47, 47);
            this->label2->TabIndex = 9;
            this->label2->Text = L"1";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(15, 310);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(47, 47);
            this->label1->TabIndex = 8;
            this->label1->Text = L"1";
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::SystemColors::Control;
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Location = System::Drawing::Point(390, 16);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(164, 276);
            this->panel10->TabIndex = 1;
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::CadetBlue;
            this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel9->Controls->Add(this->monthCalendar1);
            this->panel9->Location = System::Drawing::Point(15, 16);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(359, 276);
            this->panel9->TabIndex = 7;
            // 
            // monthCalendar1
            // 
            this->monthCalendar1->Location = System::Drawing::Point(6, 9);
            this->monthCalendar1->Name = L"monthCalendar1";
            this->monthCalendar1->ShowWeekNumbers = true;
            this->monthCalendar1->TabIndex = 0;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::Yellow;
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->nudPhD);
            this->panel6->Controls->Add(this->nudMSc);
            this->panel6->Controls->Add(this->nudMA);
            this->panel6->Controls->Add(this->nudBSc);
            this->panel6->Controls->Add(this->nudBA);
            this->panel6->Controls->Add(this->label27);
            this->panel6->Controls->Add(this->label28);
            this->panel6->Controls->Add(this->label32);
            this->panel6->Controls->Add(this->label29);
            this->panel6->Controls->Add(this->label30);
            this->panel6->Location = System::Drawing::Point(1035, 465);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(227, 342);
            this->panel6->TabIndex = 1;
            // 
            // nudPhD
            // 
            this->nudPhD->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->nudPhD->Location = System::Drawing::Point(85, 278);
            this->nudPhD->Name = L"nudPhD";
            this->nudPhD->Size = System::Drawing::Size(130, 45);
            this->nudPhD->TabIndex = 56;
            this->nudPhD->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudMSc
            // 
            this->nudMSc->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->nudMSc->Location = System::Drawing::Point(86, 210);
            this->nudMSc->Name = L"nudMSc";
            this->nudMSc->Size = System::Drawing::Size(130, 45);
            this->nudMSc->TabIndex = 55;
            this->nudMSc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudMA
            // 
            this->nudMA->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->nudMA->Location = System::Drawing::Point(87, 147);
            this->nudMA->Name = L"nudMA";
            this->nudMA->Size = System::Drawing::Size(130, 45);
            this->nudMA->TabIndex = 54;
            this->nudMA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudBSc
            // 
            this->nudBSc->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->nudBSc->Location = System::Drawing::Point(87, 80);
            this->nudBSc->Name = L"nudBSc";
            this->nudBSc->Size = System::Drawing::Size(130, 45);
            this->nudBSc->TabIndex = 53;
            this->nudBSc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudBA
            // 
            this->nudBA->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->nudBA->Location = System::Drawing::Point(88, 14);
            this->nudBA->Name = L"nudBA";
            this->nudBA->Size = System::Drawing::Size(130, 45);
            this->nudBA->TabIndex = 52;
            this->nudBA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(-1, 77);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(75, 43);
            this->label27->TabIndex = 51;
            this->label27->Text = L"BSc";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(-3, 140);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(94, 43);
            this->label28->TabIndex = 50;
            this->label28->Text = L"MCA";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(2, 14);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(84, 43);
            this->label32->TabIndex = 46;
            this->label32->Text = L"BCA";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(1, 209);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(81, 43);
            this->label29->TabIndex = 49;
            this->label29->Text = L"BBA";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(-6, 273);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(105, 43);
            this->label30->TabIndex = 48;
            this->label30->Text = L"Btech";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Crimson;
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Controls->Add(this->btnExit);
            this->panel5->Controls->Add(this->btnResult);
            this->panel5->Controls->Add(this->btnReset);
            this->panel5->Controls->Add(this->btnAddNew);
            this->panel5->Location = System::Drawing::Point(598, 818);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(665, 81);
            this->panel5->TabIndex = 4;
            // 
            // btnExit
            // 
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnExit->Location = System::Drawing::Point(495, 6);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(154, 57);
            this->btnExit->TabIndex = 3;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = true;
            this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
            // 
            // btnResult
            // 
            this->btnResult->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnResult->Location = System::Drawing::Point(329, 8);
            this->btnResult->Name = L"btnResult";
            this->btnResult->Size = System::Drawing::Size(141, 55);
            this->btnResult->TabIndex = 2;
            this->btnResult->Text = L"Result";
            this->btnResult->UseVisualStyleBackColor = true;
            this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
            // 
            // btnReset
            // 
            this->btnReset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnReset->Location = System::Drawing::Point(155, 9);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(147, 57);
            this->btnReset->TabIndex = 1;
            this->btnReset->Text = L"Reset";
            this->btnReset->UseVisualStyleBackColor = true;
            this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
            // 
            // btnAddNew
            // 
            this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnAddNew->Location = System::Drawing::Point(11, 11);
            this->btnAddNew->Name = L"btnAddNew";
            this->btnAddNew->Size = System::Drawing::Size(126, 55);
            this->btnAddNew->TabIndex = 0;
            this->btnAddNew->Text = L"Add ";
            this->btnAddNew->UseVisualStyleBackColor = true;
            this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Teal;
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->cboScholarship);
            this->panel4->Controls->Add(this->cboExchange);
            this->panel4->Controls->Add(this->cboAccommodation);
            this->panel4->Controls->Add(this->cboOverseaStudent);
            this->panel4->Controls->Add(this->cboHomeStudent);
            this->panel4->Controls->Add(this->label21);
            this->panel4->Controls->Add(this->label22);
            this->panel4->Controls->Add(this->label26);
            this->panel4->Controls->Add(this->label23);
            this->panel4->Controls->Add(this->label24);
            this->panel4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->panel4->Location = System::Drawing::Point(598, 465);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(431, 342);
            this->panel4->TabIndex = 3;
            // 
            // cboScholarship
            // 
            this->cboScholarship->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboScholarship->FormattingEnabled = true;
            this->cboScholarship->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->cboScholarship->Location = System::Drawing::Point(319, 279);
            this->cboScholarship->Name = L"cboScholarship";
            this->cboScholarship->Size = System::Drawing::Size(106, 51);
            this->cboScholarship->TabIndex = 50;
            this->cboScholarship->Text = L"No";
            // 
            // cboExchange
            // 
            this->cboExchange->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboExchange->FormattingEnabled = true;
            this->cboExchange->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->cboExchange->Location = System::Drawing::Point(319, 214);
            this->cboExchange->Name = L"cboExchange";
            this->cboExchange->Size = System::Drawing::Size(106, 51);
            this->cboExchange->TabIndex = 49;
            this->cboExchange->Text = L"No";
            // 
            // cboAccommodation
            // 
            this->cboAccommodation->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboAccommodation->FormattingEnabled = true;
            this->cboAccommodation->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->cboAccommodation->Location = System::Drawing::Point(319, 149);
            this->cboAccommodation->Name = L"cboAccommodation";
            this->cboAccommodation->Size = System::Drawing::Size(106, 51);
            this->cboAccommodation->TabIndex = 48;
            this->cboAccommodation->Text = L"No";
            // 
            // cboOverseaStudent
            // 
            this->cboOverseaStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboOverseaStudent->FormattingEnabled = true;
            this->cboOverseaStudent->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->cboOverseaStudent->Location = System::Drawing::Point(319, 81);
            this->cboOverseaStudent->Name = L"cboOverseaStudent";
            this->cboOverseaStudent->Size = System::Drawing::Size(106, 51);
            this->cboOverseaStudent->TabIndex = 47;
            this->cboOverseaStudent->Text = L"No";
            // 
            // cboHomeStudent
            // 
            this->cboHomeStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboHomeStudent->FormattingEnabled = true;
            this->cboHomeStudent->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->cboHomeStudent->Location = System::Drawing::Point(319, 12);
            this->cboHomeStudent->Name = L"cboHomeStudent";
            this->cboHomeStudent->Size = System::Drawing::Size(106, 51);
            this->cboHomeStudent->TabIndex = 46;
            this->cboHomeStudent->Text = L"No";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(-4, 82);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(184, 48);
            this->label21->TabIndex = 45;
            this->label21->Text = L"Transport";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(-2, 147);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(302, 48);
            this->label22->TabIndex = 44;
            this->label22->Text = L"Accommodation";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(-2, 18);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(265, 48);
            this->label26->TabIndex = 40;
            this->label26->Text = L"Home Student";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(0, 211);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(203, 48);
            this->label23->TabIndex = 43;
            this->label23->Text = L"Book-Bank";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(1, 272);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(218, 48);
            this->label24->TabIndex = 42;
            this->label24->Text = L"Scholarship";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Aqua;
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->txtgEmail);
            this->panel3->Controls->Add(this->txtgMobile);
            this->panel3->Controls->Add(this->label39);
            this->panel3->Controls->Add(this->txtgSurname);
            this->panel3->Controls->Add(this->label43);
            this->panel3->Controls->Add(this->txtgAddress);
            this->panel3->Controls->Add(this->label42);
            this->panel3->Controls->Add(this->txtgFirstname);
            this->panel3->Controls->Add(this->label41);
            this->panel3->Controls->Add(this->cboGuidance);
            this->panel3->Controls->Add(this->label40);
            this->panel3->Controls->Add(this->label38);
            this->panel3->Location = System::Drawing::Point(27, 509);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(560, 391);
            this->panel3->TabIndex = 2;
            // 
            // txtgEmail
            // 
            this->txtgEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtgEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtgEmail->Location = System::Drawing::Point(252, 322);
            this->txtgEmail->Name = L"txtgEmail";
            this->txtgEmail->Size = System::Drawing::Size(286, 45);
            this->txtgEmail->TabIndex = 67;
            // 
            // txtgMobile
            // 
            this->txtgMobile->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtgMobile->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtgMobile->Location = System::Drawing::Point(251, 261);
            this->txtgMobile->Name = L"txtgMobile";
            this->txtgMobile->Size = System::Drawing::Size(286, 45);
            this->txtgMobile->TabIndex = 66;
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(0, 129);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(191, 53);
            this->label39->TabIndex = 60;
            this->label39->Text = L"Surname";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtgSurname
            // 
            this->txtgSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtgSurname->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtgSurname->Location = System::Drawing::Point(251, 135);
            this->txtgSurname->Name = L"txtgSurname";
            this->txtgSurname->Size = System::Drawing::Size(286, 45);
            this->txtgSurname->TabIndex = 65;
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(-2, 9);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(200, 53);
            this->label43->TabIndex = 56;
            this->label43->Text = L"Guidance";
            this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtgAddress
            // 
            this->txtgAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtgAddress->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtgAddress->Location = System::Drawing::Point(251, 196);
            this->txtgAddress->Name = L"txtgAddress";
            this->txtgAddress->Size = System::Drawing::Size(286, 45);
            this->txtgAddress->TabIndex = 64;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(5, 314);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(139, 53);
            this->label42->TabIndex = 57;
            this->label42->Text = L"E-mail";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtgFirstname
            // 
            this->txtgFirstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtgFirstname->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtgFirstname->Location = System::Drawing::Point(251, 74);
            this->txtgFirstname->Name = L"txtgFirstname";
            this->txtgFirstname->Size = System::Drawing::Size(287, 45);
            this->txtgFirstname->TabIndex = 63;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(3, 254);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(154, 53);
            this->label41->TabIndex = 58;
            this->label41->Text = L"Mobile";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cboGuidance
            // 
            this->cboGuidance->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboGuidance->FormattingEnabled = true;
            this->cboGuidance->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Father", L"Mother", L"Brother", L"Sister",
                    L"Other Relation"
            });
            this->cboGuidance->Location = System::Drawing::Point(251, 15);
            this->cboGuidance->Name = L"cboGuidance";
            this->cboGuidance->Size = System::Drawing::Size(287, 45);
            this->cboGuidance->TabIndex = 62;
            this->cboGuidance->Text = L"Select Guidance";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(2, 188);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(178, 53);
            this->label40->TabIndex = 59;
            this->label40->Text = L"Address";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(-2, 68);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(209, 53);
            this->label38->TabIndex = 61;
            this->label38->Text = L"Firstname";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Purple;
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->txtFaculty);
            this->panel2->Controls->Add(this->txtCourseTutor);
            this->panel2->Controls->Add(this->txtDean);
            this->panel2->Controls->Add(this->txtProgramLeader);
            this->panel2->Controls->Add(this->txtCourseCode);
            this->panel2->Controls->Add(this->cboCourse);
            this->panel2->Controls->Add(this->label20);
            this->panel2->Controls->Add(this->label19);
            this->panel2->Controls->Add(this->label18);
            this->panel2->Controls->Add(this->label17);
            this->panel2->Controls->Add(this->label16);
            this->panel2->Controls->Add(this->label14);
            this->panel2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->panel2->Location = System::Drawing::Point(602, 141);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(661, 314);
            this->panel2->TabIndex = 1;
            // 
            // txtFaculty
            // 
            this->txtFaculty->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtFaculty->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtFaculty->Location = System::Drawing::Point(328, 111);
            this->txtFaculty->Name = L"txtFaculty";
            this->txtFaculty->Size = System::Drawing::Size(317, 39);
            this->txtFaculty->TabIndex = 45;
            // 
            // txtCourseTutor
            // 
            this->txtCourseTutor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtCourseTutor->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCourseTutor->Location = System::Drawing::Point(326, 264);
            this->txtCourseTutor->Name = L"txtCourseTutor";
            this->txtCourseTutor->Size = System::Drawing::Size(319, 39);
            this->txtCourseTutor->TabIndex = 44;
            // 
            // txtDean
            // 
            this->txtDean->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtDean->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtDean->Location = System::Drawing::Point(328, 163);
            this->txtDean->Name = L"txtDean";
            this->txtDean->Size = System::Drawing::Size(317, 39);
            this->txtDean->TabIndex = 43;
            // 
            // txtProgramLeader
            // 
            this->txtProgramLeader->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtProgramLeader->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtProgramLeader->Location = System::Drawing::Point(327, 213);
            this->txtProgramLeader->Name = L"txtProgramLeader";
            this->txtProgramLeader->Size = System::Drawing::Size(318, 39);
            this->txtProgramLeader->TabIndex = 42;
            // 
            // txtCourseCode
            // 
            this->txtCourseCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtCourseCode->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCourseCode->Location = System::Drawing::Point(327, 58);
            this->txtCourseCode->Name = L"txtCourseCode";
            this->txtCourseCode->Size = System::Drawing::Size(318, 39);
            this->txtCourseCode->TabIndex = 41;
            // 
            // cboCourse
            // 
            this->cboCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboCourse->FormattingEnabled = true;
            this->cboCourse->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
                L"", L"BA", L"BCA", L"BBA", L"B.Tech", L"B.Sc",
                    L"B.COM", L"MA", L"MCA", L"MBA", L"M.Tech", L"M.Sc", L"M.COM"
            });
            this->cboCourse->Location = System::Drawing::Point(326, 5);
            this->cboCourse->Name = L"cboCourse";
            this->cboCourse->Size = System::Drawing::Size(319, 40);
            this->cboCourse->TabIndex = 40;
            this->cboCourse->Text = L"Select a Course";
            this->cboCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboCourse_SelectedIndexChanged);
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(-5, 47);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(201, 53);
            this->label20->TabIndex = 39;
            this->label20->Text = L"Semester";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(-12, 100);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(295, 53);
            this->label19->TabIndex = 38;
            this->label19->Text = L" College Name";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(-6, 153);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(217, 53);
            this->label18->TabIndex = 37;
            this->label18->Text = L"University";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(-6, 204);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(164, 53);
            this->label17->TabIndex = 36;
            this->label17->Text = L"Mentor";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(-6, 257);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(106, 53);
            this->label16->TabIndex = 35;
            this->label16->Text = L"Fees";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(-4, -3);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(158, 53);
            this->label14->TabIndex = 33;
            this->label14->Text = L"Course";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::LightCoral;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->txtEmail);
            this->panel1->Controls->Add(this->txtDOB);
            this->panel1->Controls->Add(this->txtMobile);
            this->panel1->Controls->Add(this->label44);
            this->panel1->Controls->Add(this->label45);
            this->panel1->Controls->Add(this->txtStudentID);
            this->panel1->Controls->Add(this->txtSurname);
            this->panel1->Controls->Add(this->txtAddress);
            this->panel1->Controls->Add(this->txtFirstname);
            this->panel1->Controls->Add(this->cboGender);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->label33);
            this->panel1->Controls->Add(this->label34);
            this->panel1->Controls->Add(this->label35);
            this->panel1->Controls->Add(this->label36);
            this->panel1->Controls->Add(this->label37);
            this->panel1->Location = System::Drawing::Point(27, 140);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(560, 358);
            this->panel1->TabIndex = 0;
            // 
            // txtEmail
            // 
            this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtEmail->Location = System::Drawing::Point(253, 314);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(282, 34);
            this->txtEmail->TabIndex = 61;
            // 
            // txtDOB
            // 
            this->txtDOB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtDOB->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtDOB->Location = System::Drawing::Point(253, 228);
            this->txtDOB->Name = L"txtDOB";
            this->txtDOB->Size = System::Drawing::Size(282, 34);
            this->txtDOB->TabIndex = 60;
            // 
            // txtMobile
            // 
            this->txtMobile->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtMobile->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtMobile->Location = System::Drawing::Point(253, 272);
            this->txtMobile->Name = L"txtMobile";
            this->txtMobile->Size = System::Drawing::Size(282, 34);
            this->txtMobile->TabIndex = 59;
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(-2, 257);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(138, 48);
            this->label44->TabIndex = 58;
            this->label44->Text = L"Mobile";
            this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(1, 300);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(125, 48);
            this->label45->TabIndex = 57;
            this->label45->Text = L"E-mail";
            this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // txtStudentID
            // 
            this->txtStudentID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtStudentID->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtStudentID->Location = System::Drawing::Point(255, 6);
            this->txtStudentID->Name = L"txtStudentID";
            this->txtStudentID->Size = System::Drawing::Size(282, 34);
            this->txtStudentID->TabIndex = 55;
            this->txtStudentID->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // txtSurname
            // 
            this->txtSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtSurname->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtSurname->Location = System::Drawing::Point(255, 94);
            this->txtSurname->Name = L"txtSurname";
            this->txtSurname->Size = System::Drawing::Size(282, 34);
            this->txtSurname->TabIndex = 54;
            this->txtSurname->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
            // 
            // txtAddress
            // 
            this->txtAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtAddress->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtAddress->Location = System::Drawing::Point(255, 139);
            this->txtAddress->Name = L"txtAddress";
            this->txtAddress->Size = System::Drawing::Size(282, 34);
            this->txtAddress->TabIndex = 53;
            this->txtAddress->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
            // 
            // txtFirstname
            // 
            this->txtFirstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtFirstname->Location = System::Drawing::Point(255, 50);
            this->txtFirstname->Name = L"txtFirstname";
            this->txtFirstname->Size = System::Drawing::Size(282, 34);
            this->txtFirstname->TabIndex = 52;
            this->txtFirstname->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
            // 
            // cboGender
            // 
            this->cboGender->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cboGender->FormattingEnabled = true;
            this->cboGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Female", L"Male", L"Costom" });
            this->cboGender->Location = System::Drawing::Point(253, 184);
            this->cboGender->Name = L"cboGender";
            this->cboGender->Size = System::Drawing::Size(283, 35);
            this->cboGender->TabIndex = 51;
            this->cboGender->Text = L"Select Gender";
            this->cboGender->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(-3, 43);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(188, 48);
            this->label15->TabIndex = 50;
            this->label15->Text = L"Firstname";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(-4, 87);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(171, 48);
            this->label33->TabIndex = 49;
            this->label33->Text = L"Surname";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label33->Click += gcnew System::EventHandler(this, &MyForm::label33_Click);
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(-1, 130);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(158, 48);
            this->label34->TabIndex = 48;
            this->label34->Text = L"Address";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label34->Click += gcnew System::EventHandler(this, &MyForm::label34_Click);
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(-3, 174);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(143, 48);
            this->label35->TabIndex = 47;
            this->label35->Text = L"Gender";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(1, 217);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(116, 48);
            this->label36->TabIndex = 46;
            this->label36->Text = L"D.O.B";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label36->Click += gcnew System::EventHandler(this, &MyForm::label36_Click);
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(-3, -2);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(200, 48);
            this->label37->TabIndex = 45;
            this->label37->Text = L"Student ID";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label37->Click += gcnew System::EventHandler(this, &MyForm::label37_Click);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->btnUpdate);
            this->tabPage2->Controls->Add(this->btnShow);
            this->tabPage2->Controls->Add(this->label52);
            this->tabPage2->Controls->Add(this->btnDelete);
            this->tabPage2->Controls->Add(this->txtSearch);
            this->tabPage2->Controls->Add(this->btnSearch);
            this->tabPage2->Controls->Add(this->dataGridView1);
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1883, 978);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student Database";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // btnUpdate
            // 
            this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnUpdate->Location = System::Drawing::Point(17, 15);
            this->btnUpdate->Name = L"btnUpdate";
            this->btnUpdate->Size = System::Drawing::Size(220, 57);
            this->btnUpdate->TabIndex = 8;
            this->btnUpdate->Text = L"Update";
            this->btnUpdate->UseVisualStyleBackColor = true;
            // 
            // btnShow
            // 
            this->btnShow->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnShow->Location = System::Drawing::Point(1131, 15);
            this->btnShow->Name = L"btnShow";
            this->btnShow->Size = System::Drawing::Size(220, 57);
            this->btnShow->TabIndex = 7;
            this->btnShow->Text = L"Show All";
            this->btnShow->UseVisualStyleBackColor = true;
            this->btnShow->Click += gcnew System::EventHandler(this, &MyForm::btnShow_Click);
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->BackColor = System::Drawing::Color::Orange;
            this->label52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label52->Location = System::Drawing::Point(517, 0);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(597, 81);
            this->label52->TabIndex = 6;
            this->label52->Text = L"Student Data List ";
            // 
            // btnDelete
            // 
            this->btnDelete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnDelete->Location = System::Drawing::Point(270, 15);
            this->btnDelete->Name = L"btnDelete";
            this->btnDelete->Size = System::Drawing::Size(220, 57);
            this->btnDelete->TabIndex = 5;
            this->btnDelete->Text = L"Delete";
            this->btnDelete->UseVisualStyleBackColor = true;
            this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
            // 
            // txtSearch
            // 
            this->txtSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtSearch->Location = System::Drawing::Point(1375, 25);
            this->txtSearch->Name = L"txtSearch";
            this->txtSearch->Size = System::Drawing::Size(193, 40);
            this->txtSearch->TabIndex = 2;
            this->txtSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtSearch_KeyPress);
            // 
            // btnSearch
            // 
            this->btnSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnSearch->Location = System::Drawing::Point(1603, 15);
            this->btnSearch->Name = L"btnSearch";
            this->btnSearch->Size = System::Drawing::Size(220, 57);
            this->btnSearch->TabIndex = 1;
            this->btnSearch->Text = L"Search";
            this->btnSearch->UseVisualStyleBackColor = true;
            this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(17, 86);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(1835, 812);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1889, 966);
            this->Controls->Add(this->tabControl1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            this->panel13->ResumeLayout(false);
            this->panel9->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPhD))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMSc))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMA))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBSc))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBA))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion


        private: System::Void studentupload() {

            sqlConn->ConnectionString = "server=localhost; username=root; password=1234; database=cppguiprojects;port=3306";

            sqlConn->Open();
            sqlCmd->Connection = sqlConn;
            sqlCmd->CommandText = "Select * from new_students_pro";

            sqlRd = sqlCmd->ExecuteReader();
            sqlDt->Load(sqlRd);
            sqlRd->Close();
            sqlConn->Close();
            dataGridView1->DataSource = sqlDt;
        }








    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

        studentupload();


    }
    private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnAddNew_Click(System::Object^ sender, System::EventArgs^ e) {
        sqlConn->ConnectionString = "server=localhost; username=root; password=1234; database=cppguiprojects;port=3306";

        try
        {
            sqlConn->Open();
            sqlQuery = "insert into new_students_pro (StudentID, FirstName, Surname, Address, Gender, DOB, Mobile, Email," +
                "Course, Semester , HomeStudent, Transport , Accommodation, BookBank, Scholarship, BCA, BSc," +
                "MCA,BBA,BTECH, Module1, Module2, Module3, Module4, Module5, Module6, Module7, Module8," +
                "Score1, Score2, Score3, Score4, Score5, Score6, Score7, Score8, Total, Ranking, Date)" +
                "values('" + txtStudentID->Text + "','" + txtFirstname->Text + "','" + txtSurname->Text + "','" +
                txtAddress->Text + "','" + cboGender->Text + "','" + txtDOB->Text + "','" + txtMobile->Text + "','" +
                txtEmail->Text + "','" + cboCourse->Text + "','" + txtCourseCode->Text + "','" +
                cboHomeStudent->Text + "','" + cboOverseaStudent->Text + "','" + cboAccommodation->Text + "','" +
                cboExchange->Text + "','" + cboScholarship->Text + "','" +
                nudBA->Text + "','" + nudBSc->Text + "','" + nudMA->Text + "','" + nudMSc->Text + "','" +
                nudPhD->Text + "','" + cboModule1->Text + "','" + cboModule2->Text + "','" +
                cboModule3->Text + "','" + cboModule4->Text + "','" + cboModule5->Text + "','" +
                cboModule6->Text + "','" + cboModule7->Text + "','" + cboModule8->Text + "','" +
                txtScore1->Text + "','" + txtScore2->Text + "','" + txtScore3->Text + "','" +
                txtScore4->Text + "','" + txtScore5->Text + "','" + txtScore6->Text + "','" +
                txtScore7->Text + "','" + txtScore8->Text + "','" +
                lblTotal->Text + "','" + lblRanking->Text + "','" + lblDate->Text + "')";

            sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
            sqlRd = sqlCmd->ExecuteReader();
            sqlConn->Close();

        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
        finally
        {
            sqlConn->Close();
        }
        MessageBox::Show("Student Management System Updated");
        studentupload();
    
    }
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

    System::Windows::Forms::DialogResult iExit;

    iExit = MessageBox::Show("Confirm if you want to exit", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

    if (iExit == System::Windows::Forms::DialogResult::Yes)
    {
        Application::Exit();
    }
}
private: System::Void cboCourse_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboCourse->Text == "Select a Course")
    {
        txtCourseCode->Text = "";
        txtFaculty->Text = "";
        txtDean->Text = "";
        txtProgramLeader->Text = "";
        txtCourseTutor->Text = "";
    }
    
}
private: System::Void cboModule1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule1->Text == "")
    {
        txtScore1->Text = "0";
        txtScore1->Enabled = false;
    }
    else
    {
        txtScore1->Enabled = true;
        txtScore1->Text = "";
        txtScore1->Focus();
    }
}
private: System::Void cboModule2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule2->Text == "")
    {
        txtScore2->Text = "0";
        txtScore2->Enabled = false;
    }
    else
    {
        txtScore2->Enabled = true;
        txtScore2->Text = "";
        txtScore2->Focus();
    }
}
private: System::Void cboModule3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule3->Text == "")
    {
        txtScore3->Text = "0";
        txtScore3->Enabled = false;
    }
    else
    {
        txtScore3->Enabled = true;
        txtScore3->Text = "";
        txtScore3->Focus();
    }
}
private: System::Void cboModule4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule4->Text == "")
    {
        txtScore4->Text = "0";
        txtScore4->Enabled = false;
    }
    else
    {
        txtScore4->Enabled = true;
        txtScore4->Text = "";
        txtScore4->Focus();
    }
}
private: System::Void cboModule5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule5->Text == "")
    {
        txtScore5->Text = "0";
        txtScore5->Enabled = false;
    }
    else
    {
        txtScore5->Enabled = true;
        txtScore5->Text = "";
        txtScore5->Focus();
    }
}
private: System::Void cboModule6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule6->Text == "")
    {
        txtScore6->Text = "0";
        txtScore6->Enabled = false;
    }
    else
    {
        txtScore6->Enabled = true;
        txtScore6->Text = "";
        txtScore6->Focus();
    }
}
private: System::Void cboModule7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule7->Text == "")
    {
        txtScore7->Text = "0";
        txtScore7->Enabled = false;
    }
    else
    {
        txtScore7->Enabled = true;
        txtScore7->Text = "";
        txtScore7->Focus();
    }
}
private: System::Void cboModule8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (cboModule8->Text == "")
    {
        txtScore8->Text = "0";
        txtScore8->Enabled = false;
    }
    else
    {
        txtScore8->Enabled = true;
        txtScore8->Text = "";
        txtScore8->Focus();
    }
}
private: System::Void MLeaves(System::Object^ sender, System::EventArgs^ e) {

    TextBox^ c = safe_cast<TextBox^>(sender);

    if (c->Text == "")
    {
        c->Text = "0";
    }
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

    txtStudentID->Text = String::Empty;
    txtFirstname->Text = "";
    txtSurname->Text = String::Empty;
    txtAddress->Text = "";
    txtDOB->Text = "";
    txtMobile->Text = "";
    txtEmail->Text = "";
    txtgFirstname->Text = "";
    txtgSurname->Text = String::Empty;
    txtgAddress->Text = "";
    txtgMobile->Text = "";
    txtgEmail->Text = "";
    cboCourse->Text = "Select a Course";
    txtCourseCode->Text = "";
    txtFaculty->Text = "";
    txtDean->Text = "";
    txtProgramLeader->Text = "";
    txtCourseTutor->Text = "";
    cboModule1->Text = "";
    cboModule2->Text = "";
    cboModule3->Text = "";
    cboModule4->Text = "";
    cboModule5->Text = "";
    cboModule6->Text = "";
    cboModule7->Text = "";
    cboModule8->Text = "";


    cboHomeStudent->Text = "No";
    cboOverseaStudent->Text = "No";
    cboAccommodation->Text = "No";
    cboExchange->Text = "No";
    cboScholarship->Text = "No";


    txtScore1->Text = "";
    txtScore2->Text = "";
    txtScore3->Text = "";
    txtScore4->Text = "";
    txtScore5->Text = "";
    txtScore6->Text = "";
    txtScore7->Text = "";
    txtScore8->Text = "";


    nudBA->Text = "0";
    nudBSc->Text = "0";
    nudMA->Text = "0";
    nudMSc->Text = "0";
    nudPhD->Text = "0";


    lblTotal->Text = "";
    lblRanking->Text = "";
    lblDate->Text = "";


}
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {

    int Unit[9];

    try
    {
        Unit[0] = Convert::ToInt32(txtScore1->Text);
        Unit[1] = Convert::ToInt32(txtScore2->Text);
        Unit[2] = Convert::ToInt32(txtScore3->Text);
        Unit[3] = Convert::ToInt32(txtScore4->Text);
        Unit[4] = Convert::ToInt32(txtScore5->Text);
        Unit[5] = Convert::ToInt32(txtScore6->Text);
        Unit[6] = Convert::ToInt32(txtScore7->Text);
        Unit[7] = Convert::ToInt32(txtScore8->Text);
              
        if (Unit[0] > 100)
        {
            txtScore1->Text = ("0");
        }

        if (Unit[1] > 100)
        {
            txtScore2->Text = ("0");
        }

        if (Unit[2] > 100)
        {
            txtScore3->Text = ("0");
        }


        if (Unit[3] > 100)
        {
            txtScore4->Text = ("0");
        }

        if (Unit[4] > 100)
        {
            txtScore5->Text = ("0");
        }

        if (Unit[5] > 100)
        {
            txtScore6->Text = ("0");
        }

        if (Unit[6] > 100)
        {
            txtScore7->Text = ("0");
        }

        if (Unit[7] > 100)
        {
            txtScore8->Text = ("0");
        }

        
        Unit[8] = (Unit[0] + Unit[1] + Unit[2] + Unit[3] + Unit[4] + Unit[5] + Unit[6] + Unit[7] );
        

        if (Unit[8] >= 400)
        {
            lblRanking->Text = "Pass";
        }

        else if (Unit[8] < 400)
        {
            lblRanking->Text = "Fail";
        }

        


        lblDate->Text = monthCalendar1->SelectionStart.ToLongDateString();
        lblTotal->Text = Convert::ToString(Unit[8]);
    }
    catch(Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    
    try
    {
        txtStudentID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
        txtFirstname->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
        txtgSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
        txtAddress->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
        cboGender->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
        txtDOB->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
        txtMobile->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
        txtEmail->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();

        cboCourse->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
        txtCourseCode->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();

        cboHomeStudent->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
        cboOverseaStudent->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
        cboAccommodation->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
        cboExchange->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();
        cboScholarship->Text = dataGridView1->SelectedRows[0]->Cells[14]->Value->ToString();


        nudBA->Text = dataGridView1->SelectedRows[0]->Cells[15]->Value->ToString();
        nudBSc->Text = dataGridView1->SelectedRows[0]->Cells[16]->Value->ToString();
        nudMA->Text = dataGridView1->SelectedRows[0]->Cells[17]->Value->ToString();
        nudMSc->Text = dataGridView1->SelectedRows[0]->Cells[18]->Value->ToString();
        nudPhD->Text = dataGridView1->SelectedRows[0]->Cells[19]->Value->ToString();

        cboModule1->Text = dataGridView1->SelectedRows[0]->Cells[20]->Value->ToString();
        cboModule2->Text = dataGridView1->SelectedRows[0]->Cells[21]->Value->ToString();
        cboModule3->Text = dataGridView1->SelectedRows[0]->Cells[22]->Value->ToString();
        cboModule4->Text = dataGridView1->SelectedRows[0]->Cells[23]->Value->ToString();
        cboModule5->Text = dataGridView1->SelectedRows[0]->Cells[24]->Value->ToString();
        cboModule6->Text = dataGridView1->SelectedRows[0]->Cells[25]->Value->ToString();
        cboModule7->Text = dataGridView1->SelectedRows[0]->Cells[26]->Value->ToString();
        cboModule8->Text = dataGridView1->SelectedRows[0]->Cells[27]->Value->ToString();


        txtScore1->Text = dataGridView1->SelectedRows[0]->Cells[28]->Value->ToString();
        txtScore2->Text = dataGridView1->SelectedRows[0]->Cells[29]->Value->ToString();
        txtScore3->Text = dataGridView1->SelectedRows[0]->Cells[30]->Value->ToString();
        txtScore4->Text = dataGridView1->SelectedRows[0]->Cells[31]->Value->ToString();
        txtScore5->Text = dataGridView1->SelectedRows[0]->Cells[32]->Value->ToString();
        txtScore6->Text = dataGridView1->SelectedRows[0]->Cells[33]->Value->ToString();
        txtScore7->Text = dataGridView1->SelectedRows[0]->Cells[34]->Value->ToString();
        txtScore8->Text = dataGridView1->SelectedRows[0]->Cells[35]->Value->ToString();


        lblTotal->Text = dataGridView1->SelectedRows[0]->Cells[36]->Value->ToString();
        lblRanking->Text = dataGridView1->SelectedRows[0]->Cells[37]->Value->ToString();
        lblDate->Text = dataGridView1->SelectedRows[0]->Cells[38]->Value->ToString();
        


    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

    try
    {
        sqlConn->ConnectionString = "server=localhost; username=root; password=1234; database=cppguiprojects;port=3306";
        sqlCmd->Connection = sqlConn;
        String^ StudentID = txtStudentID->Text;
        MySqlCommand^ cmd = gcnew MySqlCommand("delete from  new_students_pro WHERE StudentID = " + StudentID + "", sqlConn);
        sqlConn->Open();

        sqlRd = sqlCmd->ExecuteReader();
        MessageBox::Show("Are you sure to delete the Record ", "Student Database", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
        sqlConn->Close();
          
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message, "Student Database", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
    }
    studentupload();
}
private: System::Void txtSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

    try
    {
        if (e->KeyChar == (Char)13)
        {
            DataView^ dv = sqlDt->DefaultView;
            dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
            dataGridView1->DataSource = dv->ToTable();

        }
       
        
        
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message, "Student Database", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
    }
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
    try
    {
        
            DataView^ dv = sqlDt->DefaultView;
            dv->RowFilter = String::Format("StudentID like '%{0}%'", txtSearch->Text);
            
            dataGridView1->DataSource = dv->ToTable();

        
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message, "Student Database", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
    }
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

    try
    {
        sqlConn->ConnectionString = "server=localhost; username=root; password=1234; database=cppguiprojects;port=3306";
        sqlCmd->Connection = sqlConn;

        MessageBox::Show("Are you sure to Update the Record ", "Student Database", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
        MessageBox::Show("Record has been Updated ", "Student Database", MessageBoxButtons::OK, MessageBoxIcon::Information);

        String^ StudentID = txtStudentID->Text;
        String^ FirstName = txtFirstname->Text;
        String^ Surname = txtSurname->Text;
        String^ Address = txtAddress->Text;
        String^ Gender = cboGender->Text;
        String^ DOB = txtDOB->Text;
        String^ Mobile = txtMobile->Text;
        String^ Email = txtEmail->Text;
        String^ Guidance = cboGuidance->Text;
        String^ Course = cboCourse->Text;
        String^ Module1 = cboModule1->Text;
        String^ Module2 = cboModule2->Text;
        String^ Module3 = cboModule3->Text;
        String^ Module4 = cboModule4->Text;
        String^ Module5 = cboModule5->Text;
        String^ Module6 = cboModule6->Text;
        String^ Module7 = cboModule7->Text;
        String^ Module8 = cboModule8->Text;

        String^ HomeStudent = cboHomeStudent->Text;
        String^ Transport = cboOverseaStudent->Text;
        String^ Accommodation = cboAccommodation->Text;
        String^ BookBank = cboExchange->Text;
        String^ Scholarship = cboScholarship->Text;


        String^ Score1 = txtScore1->Text;
        String^ Score2 = txtScore2->Text;
        String^ Score3 = txtScore3->Text;
        String^ Score4 = txtScore4->Text;
        String^ Score5 = txtScore5->Text;
        String^ Score6 = txtScore6->Text;
        String^ Score7 = txtScore7->Text;
        String^ Score8 = txtScore8->Text;
        

        String^ BCA = nudBA->Text;
        String^ BSc = nudBSc->Text;
        String^ MCA = nudMA->Text;
        String^ BBA = nudMSc->Text;
        String^ BTECH = nudPhD->Text;


        String^ Total = lblTotal->Text;
        String^ Ranking = lblRanking->Text;
        String^ Date = lblDate->Text;



        MySqlCommand^ cmd = gcnew MySqlCommand("update new_students_pro set StudentID = '" + StudentID + 
                                                                                                           "', FirstName = '" + FirstName +
                                                                                                           "', Surname = '" + Surname + 
                                                                                                           "', Address = '" + Address + 
                                                                                                           "', Gender = '" + Gender + 
                                                                                                           "', DOB = '" + DOB +
                                                                                                           "', Mobile = '" + Mobile + 
                                                                                                           "', Email = '" + Email +
                                                                                                           "', Course = '" + Course +
                                                                                                           "', HomeStudent = '" + HomeStudent +
                                                                                                           "', Transport = '" + Transport +
                                                                                                           "', Accommodation = '" + Accommodation +
                                                                                                           "', BookBank = '" + BookBank +
                                                                                                           "', Scholarship = '" + Scholarship + 
                                                                                                           "', BCA = '" + BCA +
                                                                                                           "', BSc = '" + BSc +
                                                                                                           "', MCA = '" + MCA +
                                                                                                           "', BBA = '" + BBA +
                                                                                                           "', BTECH = '" + BTECH +
                                                                                                           "', Module1 = '" + Module1 +
                                                                                                           "', Module2 = '" + Module2 +
                                                                                                           "', Module3 = '" + Module3 + 
                                                                                                           "', Module4 = '" + Module4 +
                                                                                                           "', Module5 = '" + Module5 +
                                                                                                           "', Module6 = '" + Module6 + 
                                                                                                           "', Module7 = '" + Module7 +
                                                                                                           "', Module8 = '" + Module8 +
                                                                                                           "', Score1 = '" + Score1 +
                                                                                                           "', Score2 = '" + Score2 +
                                                                                                           "', Score3 = '" + Score3 +
                                                                                                           "', Score4 = '" + Score4 +
                                                                                                           "', Score5 = '" + Score5 +
                                                                                                           "', Score6 = '" + Score6 + 
                                                                                                           "', Score7 = '" + Score7 +
                                                                                                           "', Score8 = '" + Score8 + 
                                                                                                           "', Total = '" + Total +
                                                                                                           "', Ranking = '" + Ranking + 
                                                                                                           "', Date = '" + Date + "' WHERE StudentID =" + StudentID + "'", sqlConn);
        sqlConn->Open();
        MySqlDataReader^ dr = cmd->ExecuteReader();
      

        sqlConn->Close();
        studentupload();
        
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message, "Student Database", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
    }
}

private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) {

    DataView^ dv = sqlDt->DefaultView;
    dv->RowFilter = String::Format("", txtSearch->Text);
    dataGridView1->DataSource = dv->ToTable();
    txtSearch->Text = "";
}
};
}
