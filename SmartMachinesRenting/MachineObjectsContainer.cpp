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
	this->AllMachines->Append(ref new Digger(10, "Honda", "HRG 416 PKEA", "HondaLawnmower", "Nowa ma³a zwrotna kosiarka IZY II do ogrodu przydomowego. Wyposa¿ona najnowszy  4 taktowy silnik HONDA GCV 160 z uk³adem automatycznego ssania. Szerokoœæ ciêcia tej maszyny wynosi 41 cm, a pojemnoœæ kosza to 50 litrów."));
	this->AllMachines->Append(ref new Digger(3, "Honda", "WB 30 XT", "HondaWaterPump", "Te pompy udowodni³y swoj¹ wysok¹ pozycjê i niezawodnoœæ podczas suszy w 2006 roku. Bardzo du¿a wydajnoœæ przy zachowaniu niskiej masy pompy sprawi³y, ¿e sta³y siê najbardziej poszukiwanym produktem tych gor¹cych dni."));
	this->AllMachines->Append(ref new Digger(1, "Honda", "FG 205 DE", "HondaGroundMower", "Glebogryzarka spalinowa Honda FG 205 posiada silnik Honda GXV 50 o mocy 2,5 KM. Mocna przek³adnia ³añcuchowa napêdza bêben o szerokoœci roboczej 45 cm posiadaj¹cy 4 no¿e i dwa dyski."));
	this->AllMachines->Append(ref new Digger(6, "Honda", "ECT7000", "HondaPowerGenerator", "ECT7000 to najpopularniejszy agregat pr¹dotwórczy trójfazowy Honda wykorzystywany na placach budowy, przez firmy us³ugowo - remontowe, warsztaty naprawcze itp. Agregat wyposa¿ony jest w jedno gniazdo trójfazowe 400V 16 A oraz dwa gniazda jednofazowe 230V 16 A."));
	this->AllMachines->Append(ref new Digger(340, "Pramac", "GSW 110", "PramacPowerGenerator", "Model Pramac GSW 110I to uniwersalne urz¹dzenie pozwalaj¹ce na bezpieczeñstwo i komfort pracy w ka¿dych warunkach.Dysponuj¹c moc¹ ci¹g³¹ 80, 67kW mo¿e pos³u¿yæ jako Ÿród³o pr¹du dla ró¿norakich potrzeb.Jednostka napêdowa to silnik diesla o mocy 89, 3kW, produkcji FPT - Iveco."));
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
