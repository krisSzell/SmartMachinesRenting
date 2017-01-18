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
	this->AllMachines->Append(ref new Digger(10, "Honda", "HRG 416 PKEA", "HondaLawnmower", "Nowa ma�a zwrotna kosiarka IZY II do ogrodu przydomowego. Wyposa�ona najnowszy  4 taktowy silnik HONDA GCV 160 z uk�adem automatycznego ssania. Szeroko�� ci�cia tej maszyny wynosi 41 cm, a pojemno�� kosza to 50 litr�w."));
	this->AllMachines->Append(ref new Digger(3, "Honda", "WB 30 XT", "HondaWaterPump", "Te pompy udowodni�y swoj� wysok� pozycj� i niezawodno�� podczas suszy w 2006 roku. Bardzo du�a wydajno�� przy zachowaniu niskiej masy pompy sprawi�y, �e sta�y si� najbardziej poszukiwanym produktem tych gor�cych dni."));
	this->AllMachines->Append(ref new Digger(1, "Honda", "FG 205 DE", "HondaGroundMower", "Glebogryzarka spalinowa Honda FG 205 posiada silnik Honda GXV 50 o mocy 2,5 KM. Mocna przek�adnia �a�cuchowa nap�dza b�ben o szeroko�ci roboczej 45 cm posiadaj�cy 4 no�e i dwa dyski."));
	this->AllMachines->Append(ref new Digger(6, "Honda", "ECT7000", "HondaPowerGenerator", "ECT7000 to najpopularniejszy agregat pr�dotw�rczy tr�jfazowy Honda wykorzystywany na placach budowy, przez firmy us�ugowo - remontowe, warsztaty naprawcze itp. Agregat wyposa�ony jest w jedno gniazdo tr�jfazowe 400V 16 A oraz dwa gniazda jednofazowe 230V 16 A."));
	this->AllMachines->Append(ref new Digger(340, "Pramac", "GSW 110", "PramacPowerGenerator", "Model Pramac GSW 110I to uniwersalne urz�dzenie pozwalaj�ce na bezpiecze�stwo i komfort pracy w ka�dych warunkach.Dysponuj�c moc� ci�g�� 80, 67kW mo�e pos�u�y� jako �r�d�o pr�du dla r�norakich potrzeb.Jednostka nap�dowa to silnik diesla o mocy 89, 3kW, produkcji FPT - Iveco."));
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
