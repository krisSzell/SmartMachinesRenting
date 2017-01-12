//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "Digger.h"
#include "ForRentView.xaml.h"
#include "RentedView.xaml.h"
#include "MachineObjectsContainer.h"

using namespace Windows::Foundation::Collections;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;

namespace SmartMachinesRenting
{
	
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// Real application should utilize ViewModels for both ForRent and Rented Views which would load up base of objects 
	/// from external database. Since this is just a sample APP base of objects is created in MainPage Frame and then
	/// onto desired ViewModels
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
		// Property to get/set value of static objects base which is used to communicate between frames
		static property MachineObjectsContainer^ MachinesContainer
		{
			MachineObjectsContainer^ get()
			{
				// prevents getter to fire when pointer to Objectbase is null
				/*if (MainPage::machinesContainer == nullptr)
				{
					MainPage::machinesContainer = ref new MachineObjectsContainer();
				}*/
				return machinesContainer;
			};
			void set(MachineObjectsContainer^ obj)
			{
				// prevents setter to assign object adress to pointer when the pointer to Objectbase is null
				/*if (machinesContainer == nullptr)
				{
					machinesContainer = ref new MachineObjectsContainer();
				}*/
				machinesContainer = obj;
			};
		};
	private:
		void HomeButton_Click(Platform::Object^, RoutedEventArgs^);
		void HamburgerListBox_SelectionChanged(Object^, SelectionChangedEventArgs^);
		static MachineObjectsContainer^ machinesContainer;
	};
}
