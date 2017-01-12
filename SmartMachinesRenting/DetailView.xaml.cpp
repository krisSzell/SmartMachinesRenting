#include "pch.h"
#include "DetailView.xaml.h"

using namespace SmartMachinesRenting;


using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI;
using namespace Windows::UI::Popups;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Media::Imaging;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Interop;
using namespace Platform;

DetailView::DetailView()
{
	this->InitializeComponent();
	sentDigger = ref new Digger();
	/*if (SentDigger->Availability == "Available")
	{
		borderAvailability->Background = ref new SolidColorBrush(Colors::LightGreen);
		iconAvailability->Foreground = ref new SolidColorBrush(Colors::Green);
	}
	else
	{
		borderAvailability->Background = ref new SolidColorBrush(Colors::Gray);
		iconAvailability->Foreground = ref new SolidColorBrush(Colors::Red);
	}*/
}

void DetailView::OnNavigatedTo(NavigationEventArgs^ e)
{
	 SentDigger = (Digger^)(e->Parameter);
	 // Solution to update DetailFrame without Binding
	 //String^ imageUri = "ms-appx:///" + SentDigger->ImgUrl;
	 //imgDigger->Source = ref new BitmapImage(ref new Uri(imageUri));
	 //txtDigger->Text = SentDigger->Name;
	 if (SentDigger->Availability)
	 {
		 borderAvailability->Background = ref new SolidColorBrush(Colors::LightGreen);
		 iconAvailability->Foreground = ref new SolidColorBrush(Colors::Green);
	 }
	 else
	 {
		 borderAvailability->Background = ref new SolidColorBrush(Colors::Gray);
		 iconAvailability->Foreground = ref new SolidColorBrush(Colors::Red);
		 iconAvailability->Symbol = Symbol::Cancel;
	 }
}


void SmartMachinesRenting::DetailView::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (SentDigger->Availability)
	{
		MainPage::MachinesContainer->RentMachine(SentDigger);
		borderAvailability->Background = ref new SolidColorBrush(Colors::Gray);
		iconAvailability->Foreground = ref new SolidColorBrush(Colors::Red);
		iconAvailability->Symbol = Symbol::Cancel;
	}
	else
	{
		MessageDialog^ messageDialog = ref new MessageDialog("Maszyna ju¿ wypo¿yczona... SprawdŸ póŸniej!");
		messageDialog->ShowAsync();
	}


}
