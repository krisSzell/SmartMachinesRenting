#pragma once

#include "DetailView.g.h"
#include "MainPage.xaml.h"
#include "Digger.h"



namespace SmartMachinesRenting
{
	public ref class DetailView sealed
	{
	private:
		Digger^ sentDigger;
	public:
		DetailView();
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
	protected:
		virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}