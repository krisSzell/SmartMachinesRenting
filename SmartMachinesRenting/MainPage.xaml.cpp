//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"



using namespace SmartMachinesRenting;


using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Interop;


// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409
MachineObjectsContainer^ MainPage::machinesContainer = ref new MachineObjectsContainer();

MainPage::MainPage()
{
	this->InitializeComponent();
	MyFrame->Navigate(TypeName(ForRentView::typeid));
}



void MainPage::HomeButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	HamburgerSplitView->IsPaneOpen = !HamburgerSplitView->IsPaneOpen;
}

void MainPage::HamburgerListBox_SelectionChanged(Platform::Object^ sender, SelectionChangedEventArgs^ e)
{
	if (RentPanel->IsSelected)
	{
			Title->Text = "Vehicles to rent";
			MyFrame->Navigate(TypeName(ForRentView::typeid));
	}
	else if (AlreadyRentedPanel->IsSelected)
	{
			Title->Text = "Rented vehicles";
			MyFrame->Navigate(TypeName(RentedView::typeid));
	}
	HamburgerSplitView->IsPaneOpen = false;
}

