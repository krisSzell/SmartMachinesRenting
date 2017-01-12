#pragma once
using namespace Windows::Foundation::Collections;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;

namespace SmartMachinesRenting
{
	public ref class MachineObjectsContainer sealed
	{
	public:
		property IVector<Digger^>^ AllMachines
		{
			IVector<Digger^>^ get()
			{
				if (this->allMachines == nullptr)
				{
					this->allMachines = ref new Platform::Collections::Vector<Digger^>();
				}
				return this->allMachines;
			};
			void set(IVector<Digger^>^ objects)
			{
				if (this->allMachines == nullptr)
				{
					this->allMachines = ref new Platform::Collections::Vector<Digger^>();
				}
				this->allMachines = objects;
			};
		};
		property IVector<Digger^>^ MachinesRented
		{
			IVector<Digger^>^ get()
			{
				if (this->machinesRented == nullptr)
				{
					this->machinesRented = ref new Platform::Collections::Vector<Digger^>();
				}
				return this->machinesRented;
			};
			void set(IVector<Digger^>^ objects)
			{
				if (this->machinesRented == nullptr)
				{
					this->machinesRented = ref new Platform::Collections::Vector<Digger^>();
				}
				this->machinesRented = objects;
			};
		};
		virtual ~MachineObjectsContainer();
		MachineObjectsContainer();

		/// <summary>
		/// Adds passed machine object to RentedMachines collection, wrap up in try/catch
		/// </summary> 
		void RentMachine(Digger^ machineToRent);
		void ReturnMachine(Digger^ machineToReturn);
	private:
		IVector<Digger^>^ allMachines;
		IVector<Digger^>^ machinesRented;
	};

}