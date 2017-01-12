//
// DetailViewForRented.xaml.h
// Declaration of the DetailViewForRented class
//

#pragma once

#include "DetailViewForRented.g.h"
#include "MainPage.xaml.h"
#include "Digger.h"

namespace SmartMachinesRenting
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class DetailViewForRented sealed
	{
	private:
		Digger^ sentDigger;
	protected:
		virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
	public:
		DetailViewForRented();
		property Digger^ SentDigger
		{
			Digger^ get()
			{
				return this->sentDigger;
			};
			void set(Digger^ value)
			{
				this->sentDigger = value;
			}
		};
	private:
		
	};
}
