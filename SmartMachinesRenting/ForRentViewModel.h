#pragma once

#include "Digger.h"

using namespace Windows::Foundation::Collections;

namespace SmartMachinesRenting
{

	public ref class ForRentViewModel sealed 
	{
	private:
		IVector<Digger^>^ diggers;
	public:
		ForRentViewModel();
		property IVector<Digger^>^ Diggers
		{
			IVector<Digger^>^ get()
			{
				if (this->diggers == nullptr)
				{
					this->diggers = ref new Platform::Collections::Vector<Digger^>();
				}
				return this->diggers;
			};
			void set(IVector<Digger^> ^vector)
			{
				if (this->diggers == nullptr)
				{
					this->diggers = ref new Platform::Collections::Vector<Digger^>();
				}
				this->diggers = vector;
			};
		};
	};
}