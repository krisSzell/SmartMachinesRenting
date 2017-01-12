#pragma once
#include <string>
#include <ctime>
using namespace Platform;

namespace SmartMachinesRenting
{

	[Windows::UI::Xaml::Data::Bindable]
	public ref class Digger sealed
	{
	private:
		double _tankCapacity;
		double _fuel;
		bool _engineState;
		bool _isMoving;
		bool _availability;
		int _mileage;
		String^ _status;
		String^ _name;
		String^ _model;
		String^ _imgUrl;
		String^ _description;
	public:
		virtual ~Digger();
		Digger();
		Digger(double tankCapacity, String^ name, String^ model, String^ imgUrl, String^ description);

#pragma region Properties
		property String^ Name
		{
			String^ get() { return this->_name; }
		}
		property String^ Model
		{
			String^ get() { return this->_model; }
		}
		property String^ ImgUrl
		{
			String^ get() { return this->_imgUrl; }
		}
		property String^ Status
		{
			String^ get() { return this->_status; }
		}
		property String^ Description
		{
			String^ get() { return this->_description; }
		}
		property double TankCapacity
		{
			double get() { return this->_tankCapacity; }
		}
		property String^ EngineState
		{
			String^ get() 
			{ 
				if (this->_engineState)
					return "Engine running";
				else
					return "Engine stopped";
			}
		}
		property bool Availability
		{
			bool get()
			{
				return this->_availability;
			}
			void set(bool value)
			{
				this->_availability = value;
			};
		}
#pragma endregion

		int FillTank();
		void StartEngine();
		void Move();

	};
}
