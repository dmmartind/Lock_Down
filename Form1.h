#pragma once
 
#include <stdlib.h>
#include "current_user.h"
#include "local_machine.h"

namespace lock_down {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Win32;
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  submit_button;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button_submit;
	private: System::Windows::Forms::CheckBox^  all_box;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button_submit = (gcnew System::Windows::Forms::Button());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->all_box = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
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
			this->tabControl1->Size = System::Drawing::Size(316, 242);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tab_select);
			// 
			// tabPage1
			// 
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->all_box);
			this->tabPage1->Controls->Add(this->button_submit);
			this->tabPage1->Controls->Add(this->submit_button);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(308, 216);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"General";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button_submit
			// 
			this->button_submit->Location = System::Drawing::Point(134, 183);
			this->button_submit->Name = L"button_submit";
			this->button_submit->Size = System::Drawing::Size(75, 23);
			this->button_submit->TabIndex = 4;
			this->button_submit->Text = L"Reboot";
			this->button_submit->UseVisualStyleBackColor = true;
			this->button_submit->Click += gcnew System::EventHandler(this, &Form1::button_submit_Click);
			// 
			// submit_button
			// 
			this->submit_button->Enabled = false;
			this->submit_button->Location = System::Drawing::Point(53, 183);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(75, 23);
			this->submit_button->TabIndex = 3;
			this->submit_button->Text = L"Submit";
			this->submit_button->UseVisualStyleBackColor = true;
			this->submit_button->Click += gcnew System::EventHandler(this, &Form1::submit_button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(80, 55);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(120, 91);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Control";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(25, 54);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"UNLOCK";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(25, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"LOCK";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(308, 216);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Custom";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->pictureBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(308, 216);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"About";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(130, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"All Rights Reserved.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(130, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"© 2006 David Martin. ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(124, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Lock Down Utility V.1.0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 77);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// all_box
			// 
			this->all_box->AutoSize = true;
			this->all_box->Location = System::Drawing::Point(83, 157);
			this->all_box->Name = L"all_box";
			this->all_box->Size = System::Drawing::Size(105, 17);
			this->all_box->TabIndex = 5;
			this->all_box->Text = L"Apply to all users";
			this->all_box->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 266);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lock Down Utility";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



//****************************************** //exit button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
this->Close();
Application::Exit();
		 }
 //*********************Comming Soon to a theater near you.....
private: System::Void tab_select(System::Object^  sender, System::EventArgs^  e) {
				 
				 if (tabControl1->SelectedIndex==1)
				 {
					 MessageBox::Show("Comming Soon!!!", "Lock Down", MessageBoxButtons::OK,MessageBoxIcon::Warning);
						tabControl1->SelectedIndex=0;
						
				 }
				 }

 //*********************************disable submit button until it's being used
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 submit_button->Enabled=1;
		 }

//*********************************disable submit button until it's being used
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			submit_button->Enabled=1;
		 }


//*******************************Submit button action!!!!!!
private: System::Void submit_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {		//lock button enabled
			 if(radioButton1->Checked==1)
			 {

Lock_Registry();
Lock_mmc_snap_ins();
//Lock_out_command_prompt();
Lock_out_run();
Lock_out_mmc();
Lock_out_control_panel();
Lock_out_explorer();
Lock_out_network();
Lock_out_My_computer();
Lock_out_install1();
Lock_out_install2();
Lock_out_install3();
Lock_out_install4();
Lock_out_install5();
Lock_out_install6();
Lock_out_install7();
Lock_out_install8();
Lock_out_install9();
Lock_out_network10();
Lock_out_IE();
Lock_taskbar();
//!@@#$%^&^&&&//////////////////////////////////////////////////////////////////////////
if(all_box->Checked==true)
{
Lock_Registry_local_user();
Lock_mmc_snap_ins_local_user();
//Lock_out_command_prompt_local_user();
Lock_out_run_local_user();
Lock_out_mmc_local_user();
Lock_out_control_panel_local_user();
Lock_out_explorer_local_user();
Lock_out_network_local_user();
Lock_out_My_computer_local_user();
Lock_out_install1_local_user();
Lock_out_install2_local_user();
Lock_out_install3_local_user();
Lock_out_install4_local_user();
Lock_out_install5_local_user();
Lock_out_install6_local_user();
Lock_out_install7_local_user();
Lock_out_install8_local_user();
Lock_out_install9_local_user();
Lock_out_network10_local_user();
Lock_out_IE_local_user();
Lock_taskbar_local_user();
}

/////////////////////////////////////////////////////////////////////////////////////////

				
	 MessageBox::Show("Lock Down Compleated Successfully!.","Lock Down",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			 }
			 //unlock button enabled
			 else if(radioButton2->Checked==1)
			 {

unLock_Registry();
unLock_mmc_snap_ins();
//unLock_out_command_prompt();
unLock_out_run();
unLock_out_mmc();
unLock_out_control_panel();
unLock_out_explorer();
unLock_out_network();
unLock_out_My_computer();
unLock_out_install1();
unLock_out_install2();
unLock_out_install3();
unLock_out_install4();
unLock_out_install5();
unLock_out_install6();
unLock_out_install7();
unLock_out_install8();
unLock_out_install9();
unLock_out_install10();
unLock_out_IE();
unLock_out_taskbar();
////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
if(all_box->Checked==true)
{

unLock_Registry_local_user();
unLock_mmc_snap_ins_local_user();
//unLock_out_command_prompt_local_user();
unLock_out_run_local_user();
unLock_out_mmc_local_user();
unLock_out_control_panel_local_user();
unLock_out_explorer_local_user();
unLock_out_network_local_user();
unLock_out_My_computer_local_user();
unLock_out_install1_local_user();
unLock_out_install2_local_user();
unLock_out_install3_local_user();
unLock_out_install4_local_user();
unLock_out_install5_local_user();
unLock_out_install6_local_user();
unLock_out_install7_local_user();
unLock_out_install8_local_user();
unLock_out_install9_local_user();
unLock_out_install10_local_user();
unLock_out_IE_local_user();
unLock_out_taskbar_local_user();
}

///////////////////////////////////////////////////////////////////////////////////////////


					MessageBox::Show("Unlock Compleated Successfully!.","Lock Down",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);

			 }
			 
			 submit_button->Enabled=0;

		 }

				
		 
private: System::Void button_submit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		int i = system ("shutdown -t 00 -r");



		 }
};
}


