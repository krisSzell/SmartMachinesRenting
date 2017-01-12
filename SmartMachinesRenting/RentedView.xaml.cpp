#include "pch.h"
#include "RentedView.xaml.h"
#include "DetailViewForRented.xaml.h"

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

void SmartMachinesRenting::RentedView::MyGridView_SelectionChanged(Platform::Object ^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs ^ e)
{
	DiggerToPass = (Digger^)e->AddedItems->GetAt(0);
	DetailFrame->Navigate(TypeName(DetailViewForRented::typeid), DiggerToPass);
}

SmartMachinesRenting::RentedView::RentedView()
{
	Digger^ diggerToPass = ref new Digger();
	this->rentedMachines = MainPage::MachinesContainer->MachinesRented;
	InitializeComponent();
}
