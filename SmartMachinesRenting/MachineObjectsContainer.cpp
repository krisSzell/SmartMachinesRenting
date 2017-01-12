#include "pch.h"
#include "MachineObjectsContainer.h"

using namespace SmartMachinesRenting;

SmartMachinesRenting::MachineObjectsContainer::~MachineObjectsContainer()
{
}

MachineObjectsContainer::MachineObjectsContainer()
{
	this->AllMachines->Append(ref new Digger(42, "JCB", "8025 ZTS", "JCBDigger2400x400", "Dwu-biegowy silnik pozwala osi¹gn¹æ prêdkoœæ 4.3kph oraz doskona³e sprawowanie nawet w ciê¿kim terenie. Gumowe g¹sienice s¹ oferowane jako standardowe wyposa¿enie"));
	this->AllMachines->Append(ref new Digger(48, "Bobcat", "E19", "BobcatE19Digger400x400", "Minikoparka Bobcat® E19 dostarcza niezwyk³e osi¹gi oraz mo¿liwoœæ dzia³ania nawet w najciaœniejszych miejscach. Operator mo¿e manualnie zwê¿yæ rozstaw g¹sienic do 98 cm aby przejechaæ przez bramy b¹dŸ pomiêdzy drzewami a pó¿niej rozszerzyæ je do 136 cm dla uzyskania lepszej stabilnoœci."));
	this->AllMachines->Append(ref new Digger(62, "Bobcat", "E45", "BobcatE45Digger400x400", "Minikoparka Bobcat® E45 jest niezwykle sztywna i stabilna, jej masa operacyjna wynosi 4634 kg a maksymalny zasiêg ramienia 3.30 m.  Dziêki temu pozwala pracowaæ w miejscach o ograniczonych mo¿liwoœciach pozycjonowania maszyny, jednoczeœnie niweluj¹c niebezpieczeñstwo uszkodzenia otoczenia oraz samej maszyny."));
	this->AllMachines->Append(ref new Digger(56, "JCB", "8020 CTS", "JCBDigger400x400", "Przede wszystkim, Minikoparka JCB 8020 CTS jest stabiln¹, lekk¹ maszyn¹ zdoln¹ do wykonywania szerokiego zakresu ruchów."));
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
		throw ref new InvalidArgumentException("Maszyna zosta³a ju¿ wypo¿yczona");
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
