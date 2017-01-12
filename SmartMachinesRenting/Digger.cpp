#include "pch.h"
#include "Digger.h"

using namespace SmartMachinesRenting;

SmartMachinesRenting::Digger::~Digger()
{
	
}

SmartMachinesRenting::Digger::Digger()
{
	srand(time(NULL));
	_mileage = rand() % 100000 + 1;
	_fuel = _tankCapacity;
	_isMoving = false;
	_status = "idle";
	_engineState = false;
	this->_name = "Default";
}


SmartMachinesRenting::Digger::Digger(double tankCapacity, String^ name, String^ model, String^ imgUrl, String^ description)
{
	
	srand(time(NULL));
	this->_mileage = rand() % 100000 + 1;
	this->_fuel = _tankCapacity = tankCapacity;
	this->_isMoving = false;
	this->_status = "idle";
	this->_engineState = false;
	this->_availability = true;
	this->_name = name;
	this->_model = model;
	this->_imgUrl = "Assets/" + imgUrl + ".jpg";
	this->_description = description;
}

int SmartMachinesRenting::Digger::FillTank()
{
	return _tankCapacity - _fuel;
}

void SmartMachinesRenting::Digger::StartEngine()
{
	_engineState = true;
}

void SmartMachinesRenting::Digger::Move()
{

	if (_engineState)
	{
		_isMoving = true;
		while (_fuel > 0)
		{
			_mileage++;
			_fuel -= 0.1;
			Sleep(1000);
		}
		_isMoving = false;
		_status = "Out of fuel!";
	}
	else
		_status = "Turn on the engine first!";
	
}


