#pragma once

#include "ForRentView.g.h"
#include "MainPage.xaml.h"
#include "Digger.h"
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Controls;
using namespace Platform;

namespace SmartMachinesRenting 
{
	public ref class ForRentView sealed
	{
	private:
		Digger^ diggerToPass;
		IVector<Digger^>^ diggers;
		void MyGridView_SelectionChanged(Object^ sender, SelectionChangedEventArgs^ e);
	public:
		ForRentView();
		
		property IVector<Digger^>^ Diggers
		{
			IVector<Digger^>^ get() { return this->diggers; };
		};
		property Digger^ DiggerToPass
		{
			Digger^ get()
			{
				return this->diggerToPass;
			};
			void set(Digger^ value)
			{
				this->diggerToPass = value;
			};
		};
	};

}
