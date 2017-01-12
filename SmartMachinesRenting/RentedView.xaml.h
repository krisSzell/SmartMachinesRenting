#pragma once

#include "RentedView.g.h"
#include "MainPage.xaml.h"
#include "Digger.h"

namespace SmartMachinesRenting
{
	public ref class RentedView sealed
	{
	private:
		Digger^ diggerToPass;
		IVector<Digger^>^ rentedMachines;
		void MyGridView_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
	public:
		RentedView();
		property IVector<Digger^>^ RentedMachines
		{
			IVector<Digger^>^ get() { return this->rentedMachines; };
		}
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

