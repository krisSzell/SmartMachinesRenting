#include "pch.h"
#include "MachineObjectsContainer.h"

using namespace SmartMachinesRenting;

SmartMachinesRenting::MachineObjectsContainer::~MachineObjectsContainer()
{
}

MachineObjectsContainer::MachineObjectsContainer()
{
	this->AllMachines->Append(ref new Digger(42, "JCB", "8025 ZTS", "JCBDigger2400x400", "Dwu-biegowy silnik pozwala osi�gn�� pr�dko�� 4.3kph oraz doskona�e sprawowanie nawet w ci�kim terenie. Gumowe g�sienice s� oferowane jako standardowe wyposa�enie"));
	this->AllMachines->Append(ref new Digger(48, "Bobcat", "E19", "BobcatE19Digger400x400", "Minikoparka Bobcat� E19 dostarcza niezwyk�e osi�gi oraz mo�liwo�� dzia�ania nawet w najcia�niejszych miejscach. Operator mo�e manualnie zw�y� rozstaw g�sienic do 98 cm aby przejecha� przez bramy b�d� pomi�dzy drzewami a p�niej rozszerzy� je do 136 cm dla uzyskania lepszej stabilno�ci."));
	this->AllMachines->Append(ref new Digger(62, "Bobcat", "E45", "BobcatE45Digger400x400", "Minikoparka Bobcat� E45 jest niezwykle sztywna i stabilna, jej masa operacyjna wynosi 4634 kg a maksymalny zasi�g ramienia 3.30 m.  Dzi�ki temu pozwala pracowa� w miejscach o ograniczonych mo�liwo�ciach pozycjonowania maszyny, jednocze�nie niweluj�c niebezpiecze�stwo uszkodzenia otoczenia oraz samej maszyny."));
	this->AllMachines->Append(ref new Digger(56, "JCB", "8020 CTS", "JCBDigger400x400", "Przede wszystkim, Minikoparka JCB 8020 CTS jest stabiln�, lekk� maszyn� zdoln� do wykonywania szerokiego zakresu ruch�w."));
}

void SmartMachinesRenting::MachineObjectsContainer::RentMachine(Digger ^ machineToRent)
{
	if (machineToRent->Availability)
	{
		for (unsigned i = 0; i < AllMachines->Size; i++)
		{
			if (AllMachines->GetAt(i)->Model == machineToRent->Model)
			{
				this->AllMachines->GetAt(i)->Availability = false;
				this->MachinesRented->Append(AllMachines->GetAt(i));
			}
		}
	}
	else
	{
		throw ref new InvalidArgumentException("Maszyna zosta�a ju� wypo�yczona");
	}
}

void SmartMachinesRenting::MachineObjectsContainer::ReturnMachine(Digger ^ machineToReturn)
{
	for (unsigned i = 0; i < MachinesRented->Size; i++)
	{
		if (MachinesRented->GetAt(i)->Model == machineToReturn->Model)
		{
			this->MachinesRented->RemoveAt(i);
		}
	}
}
