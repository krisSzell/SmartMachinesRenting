//
// DetailViewForRented.xaml.cpp
// Implementation of the DetailViewForRented class
//

#include "pch.h"
#include "DetailViewForRented.xaml.h"

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

void SmartMachinesRenting::DetailViewForRented::OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs ^ e)
{
	SentDigger = (Digger^)(e->Parameter);
}

DetailViewForRented::DetailViewForRented()
{
	this->InitializeComponent();
	sentDigger = ref new Digger();
}

