#include "pch.h"
#include "ForRentView.xaml.h"
#include "DetailView.xaml.h"

using namespace SmartMachinesRenting;


using namespace Platform;
using namespace Platform::Collections;
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


void ForRentView::MyGridView_SelectionChanged(Object ^ sender, SelectionChangedEventArgs ^ e)
{
	DiggerToPass = (Digger^)e->AddedItems->GetAt(0);
	DetailFrame->Navigate(TypeName(DetailView::typeid), DiggerToPass);
}

ForRentView::ForRentView()
{
	Digger^ diggerToPass = ref new Digger();
	this->diggers = MainPage::MachinesContainer->AllMachines;
	this->InitializeComponent();
}

