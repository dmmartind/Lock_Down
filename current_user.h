///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Copyright 2006 David Martin. All Rights Reserved.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>


//using namespace System;
//using namespace System::ComponentModel;
	//using namespace System::Collections;
	//using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;
	using namespace Microsoft::Win32;
//lock functions**********************************************************************************************


void Lock_Registry()
		{
			//////////////////////////////////Lock Registry/////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
			RegistryKey ^ pRegKey1 = Registry::CurrentUser->CreateSubKey("Software")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("Currentversion")->CreateSubKey("Policies")->CreateSubKey("System");
	pRegKey1->SetValue("DisableRegistryTools",1);
	pRegKey1->Close();

			 ///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}




void Lock_mmc_snap_ins()
		{
			//////////////////////////////////Lock mmc snap-ins/////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey2 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("policies")->CreateSubKey("microsoft")->CreateSubKey("mmc");
	 pRegKey2->SetValue("restricttopermittedsnapins",1);
	 pRegKey2->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}





void Lock_out_command_prompt()
		{
			/////////////////////////////////Lock out command prompt//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey3 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("policies")->CreateSubKey("microsoft")->CreateSubKey("windows");
	 pRegKey3->SetValue("disablecmd",1);
pRegKey3->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}






void Lock_out_run()
		{
			/////////////////////////////////Lock out run//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey4 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("microsoft")->CreateSubKey("windows")->CreateSubKey("currentversion")->
	 CreateSubKey("policies")->CreateSubKey("explorer");
	 pRegKey4->SetValue("NoRun",1);
	 pRegKey4->SetValue("NoDriveTypeAutoRun",1);
	 pRegKey4->SetValue("NoNetHood",1);
	 pRegKey4->SetValue("NoNetworkConnections",1);
	 pRegKey4->Close();
	 


///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}






void Lock_out_mmc()
		{
			/////////////////////////////////Lock out mmc//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey5 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("policies")->CreateSubKey("microsoft")->CreateSubKey("mmc");
	 pRegKey5->SetValue("RestrictAuthorMode",1);
pRegKey5->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}







void Lock_out_control_panel()
		{
			/////////////////////////////////Lock out control panel//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
			RegistryKey ^ pRegKey6 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("microsoft")->CreateSubKey("windows")->CreateSubKey("currentversion")->
		 CreateSubKey("policies")->CreateSubKey("explorer");
	 pRegKey6->SetValue("NoControlPanel",1);
pRegKey6->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}






void Lock_out_explorer()
		{
			/////////////////////////////////Lock out welcome screen, autorun, autoupdate//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey7 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("CurrentVersion")->
		 CreateSubKey("Policies")->CreateSubKey("Explorer");
	 pRegKey7->SetValue("NoWelcomeScreen",1);
	pRegKey7->SetValue("NoDriveTypeAutoRun",1);
pRegKey7->SetValue("NoAutoUpdate",1);
pRegKey7->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}






void Lock_out_network()
		{
			/////////////////////////////////Lock out ipconfig and lan properties//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey10 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Network Connections");
	 pRegKey10->SetValue("NC_IpStateChecking",1);
	pRegKey10->SetValue("NC_LanProperties",1);
	pRegKey10->Close();
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}


void Lock_out_My_computer()
		{
			/////////////////////////////////Lock out My computer properties//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey11 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("CurrentVersion")->
		 CreateSubKey("Policies")->CreateSubKey("Explorer");
	 pRegKey11->SetValue("NoPropertiesMyComputer",1);
	 pRegKey11->Close();

	///////////////////////////////////////////////////////////////////////////////////////
////

	
		}




void Lock_out_install1()
		{
			///////////////////////////////////////////////////////////////////////////////////

	 /////////////////////////////////Lock out install from removable media source//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey12 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey12->SetValue("DisableMedia",1);
	 pRegKey12->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}


		void Lock_out_install2()
		{
			/////////////////////////////////Always install with elevated privileges//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey13 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey13->SetValue("AlwaysInstallElevated",1);
	 pRegKey13->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
	void Lock_out_install3()
		{
			/////////////////////////////////Prohibit User Installs//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey14 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey14->SetValue("DisableUserInstalls",1);
	 pRegKey14->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			 
		}
		void Lock_out_install4()
		{
			/////////////////////////////////Enable user to patch elevated products//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey15 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey15->SetValue("AllowLockdownPatch",0);
	 pRegKey15->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
	void Lock_out_install5()
		{
			/////////////////////////////////Enable user to use media source while elevated//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey16 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey16->SetValue("AllowLockdownMedia",0);
	 pRegKey16->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
	void Lock_out_install6()
		{
			/////////////////////////////////Disable Windows Installer//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey17 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey17->SetValue("DisableMSI",1);
	 pRegKey17->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
	void Lock_out_install7()
		{
			/////////////////////////////////Enable user to browse media source while elevated//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey18 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey18->SetValue("AllowLockdownBrowse",0);
	 pRegKey18->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
		void Lock_out_install8()
		{
			/////////////////////////////////Enable user control over installs//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey20 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey20->SetValue("EnableUserControl",0);
	 pRegKey20->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
	void Lock_out_install9()
		{
			/////////////////////////////////Prohibit patching//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey21 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey21->SetValue("DisablePatch",1);
	 pRegKey21->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
		

void Lock_out_network10()
		{
			/////////////////////////////////Disable Automatic Install of Internet Explorer components//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey23 = Registry::CurrentUser->CreateSubKey("Software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows Script Host")->CreateSubKey("Settings");
	 pRegKey23->SetValue("Enabled",0);
pRegKey23->Close();

	 RegistryKey ^ pRegKey24 = Registry::LocalMachine->CreateSubKey("Software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows Script Host")->CreateSubKey("Settings");
	 pRegKey24->SetValue("Enabled",0);

	 pRegKey24->Close();
		}












		void Lock_out_IE()
		{
			/////////////////////////////////Disable Automatic Install of Internet Explorer components//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey22 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("InternetExplorer")->
		 CreateSubKey("Infodelivery")->CreateSubKey("Restrictions");

	 pRegKey22->SetValue("NoJITSetup",1);
	 pRegKey22->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}
																						



void Lock_taskbar()
		{
	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
RegistryKey ^ pRegKey25 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("CurrentVersion")->
		 CreateSubKey("Policies")->CreateSubKey("Explorer");

	 pRegKey25->SetValue("NoSetTaskbar",1);
	 pRegKey25->Close();

 /////////////////////////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////////////////////////////////////////////////////////////
		 
		}






//unlock functions///////////////////////////////////////////////////////////////////////

//***************************************************************************************
void unLock_Registry()
		{
			//////////////////////////////////Lock Registry/////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey1 = Registry::CurrentUser->CreateSubKey("software")->CreateSubKey("microsoft")->CreateSubKey("windows")->CreateSubKey("currentversion")->CreateSubKey("policies")->CreateSubKey("system");
	pRegKey1->SetValue("disableregistrytools",0);
	pRegKey1->Close();
		 ///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

	
		}




void unLock_mmc_snap_ins()
		{
			//////////////////////////////////Lock mmc snap-ins/////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey2 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("policies")->CreateSubKey("microsoft")->CreateSubKey("mmc");
	 pRegKey2->SetValue("restricttopermittedsnapins",0);
	 pRegKey2->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}





void unLock_out_command_prompt()
		{
/////////////////////////////////Lock out command prompt//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey3 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("policies")->CreateSubKey("microsoft")->CreateSubKey("windows");
	 pRegKey3->SetValue("disablecmd",0);
pRegKey3->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}






void unLock_out_run()
		{
			/////////////////////////////////Lock out run//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey4 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("microsoft")->CreateSubKey("windows")->CreateSubKey("currentversion")->
	 CreateSubKey("policies")->CreateSubKey("explorer");
	 pRegKey4->SetValue("NoRun",0);
	 pRegKey4->SetValue("NoDriveTypeAutoRun",0);
	 pRegKey4->SetValue("NoNetHood",0);
	 pRegKey4->SetValue("NoNetworkConnections",0);
	 pRegKey4->Close();
	 
	 
		}





void unLock_out_mmc()
		{
			/////////////////////////////////Lock out mmc//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey5 = Registry::CurrentUser->CreateSubKey("software")->
	 CreateSubKey("policies")->CreateSubKey("microsoft")->CreateSubKey("mmc");
	 pRegKey5->SetValue("RestrictAuthorMode",0);
pRegKey5->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}







void unLock_out_control_panel()
		{
			/////////////////////////////////Lock out control panel//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey6 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("microsoft")->CreateSubKey("windows")->CreateSubKey("currentversion")->
		 CreateSubKey("policies")->CreateSubKey("explorer");
	 pRegKey6->SetValue("NoControlPanel",0);
pRegKey6->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}






void unLock_out_explorer()
		{
			/////////////////////////////////Lock out welcome screen, autorun, autoupdate//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey7 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("CurrentVersion")->
		 CreateSubKey("Policies")->CreateSubKey("Explorer");
	 pRegKey7->SetValue("NoWelcomeScreen",0);
	pRegKey7->SetValue("NoDriveTypeAutoRun",0);
pRegKey7->SetValue("NoAutoUpdate",0);
pRegKey7->Close();

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}







void unLock_out_network()
		{
			/////////////////////////////////Lock out ipconfig and lan properties//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey10 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Network Connections");
	 pRegKey10->SetValue("NC_IpStateChecking",0);
	pRegKey10->SetValue("NC_LanProperties",0);
	pRegKey10->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}


void unLock_out_My_computer()
		{
			/////////////////////////////////Lock out My computer properties//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey11 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("CurrentVersion")->
		 CreateSubKey("Policies")->CreateSubKey("Explorer");
	 pRegKey11->SetValue("NoPropertiesMyComputer",0);
	 pRegKey11->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

			
		}




void unLock_out_install1()
		{
			 /////////////////////////////////Lock out install from removable media source//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey12 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey12->SetValue("DisableMedia",0);
	 pRegKey12->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}


		void unLock_out_install2()
		{
			/////////////////////////////////Always install with elevated privileges//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey13 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey13->SetValue("AlwaysInstallElevated",0);
	 pRegKey13->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		
		}
		void unLock_out_install3()
		{
			/////////////////////////////////Prohibit User Installs//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey14 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey14->SetValue("DisableUserInstalls",0);
	 pRegKey14->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		void unLock_out_install4()
		{
			/////////////////////////////////Enable user to patch elevated products//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey15 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey15->SetValue("AllowLockdownPatch",1);
	 pRegKey15->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		void unLock_out_install5()
		{
			/////////////////////////////////Enable user to use media source while elevated//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey16 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey16->SetValue("AllowLockdownMedia",1);
	 pRegKey16->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		void unLock_out_install6()
		{
			/////////////////////////////////Disable Windows Installer//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey17 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey17->SetValue("DisableMSI",0);
	 pRegKey17->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		void unLock_out_install7()
		{
			/////////////////////////////////Enable user to browse media source while elevated//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey18 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey18->SetValue("AllowLockdownBrowse",1);
	 pRegKey18->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		void unLock_out_install8()
		{
			/////////////////////////////////Enable user control over installs//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey20 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey20->SetValue("EnableUserControl",1);
	 pRegKey20->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		void unLock_out_install9()
		{
			/////////////////////////////////Prohibit patching//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey21 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("Windows")->
		 CreateSubKey("Installer");
	 pRegKey21->SetValue("DisablePatch",0);
	 pRegKey21->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}

void unLock_out_install10()
		{
			RegistryKey ^ pRegKey23 = Registry::CurrentUser->CreateSubKey("Software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows Script Host")->CreateSubKey("Settings");
	 pRegKey23->SetValue("Enabled",1);
pRegKey23->Close();

	 RegistryKey ^ pRegKey24 = Registry::LocalMachine->CreateSubKey("Software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows Script Host")->CreateSubKey("Settings");
	 pRegKey24->SetValue("Enabled",1);

	 pRegKey24->Close();

		}











		void unLock_out_IE()
		{
			/////////////////////////////////Disable Automatic Install of Internet Explorer components//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	 RegistryKey ^ pRegKey22 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Policies")->CreateSubKey("Microsoft")->CreateSubKey("InternetExplorer")->
		 CreateSubKey("Infodelivery")->CreateSubKey("Restrictions");

	 pRegKey22->SetValue("NoJITSetup",0);
	 pRegKey22->Close();

	///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

		}
		
																						

void unLock_out_taskbar()
		{
			///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
RegistryKey ^ pRegKey25 = Registry::CurrentUser->CreateSubKey("software")->
		 CreateSubKey("Microsoft")->CreateSubKey("Windows")->CreateSubKey("CurrentVersion")->
		 CreateSubKey("Policies")->CreateSubKey("Explorer");

	 pRegKey25->SetValue("NoSetTaskbar",0);
	 pRegKey25->Close();

 /////////////////////////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////////////////////////////////////////////////////////////

		}





//**********************************/reboot button///
	// System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//MessageBox::Show( "You must enter a name.", "Name Entry Error",
            //MessageBoxButtons::OK, MessageBoxIcon::Exclamation 
		
	

	//int i = system ("shutdown -t 00 -r");



    //return 0;

		//	 }