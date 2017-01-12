#include "pch.h"
#include "ForRentViewModel.h"

using namespace SmartMachinesRenting;

// populate Diggers with hardcoded diggers
ForRentViewModel::ForRentViewModel()
{
	this->Diggers->Append(ref new Digger(0, 56, "JCB", "8020 CTS Mini Excavator", "JCBDigger400x400", "In all, the JCB 8020 CTS mini excavator is a stable, light machine that’s compatible with a huge range of mini attachments and buckets."));
	this->Diggers->Append(ref new Digger(1, 42, "JCB", "8025 ZTS Mini Excavator", "JCBDigger2400x400", "A two-speed tracking motor provides a top tracking speed of 4.3kph as well as excellent tractive effort and traction. The 8025 compact excavator also has single-acting auxiliary pipework as standard; additional tie down points make it easier to strap the machine onto trailers; and rubber tracks are offered as standard."));
	this->Diggers->Append(ref new Digger(2, 48, "Bobcat", "E19 Mini Excavator", "BobcatE19Digger400x400", "The Bobcat® E19 compact excavator (mini excavator) delivers impressive performance in confined spaces with the need for only minimal repositioning. The operator can hydraulically retract the undercarriage to a width of only 98 cm in order to travel through gates or between walls and houses, then expand it to 136 cm for a wider footprint and greater performance."));
	this->Diggers->Append(ref new Digger(2, 62, "Bobcat", "E45 Mini Excavator", "BobcatE45Digger400x400", "The Bobcat® E45 mini excavator offers zero tail swing,  has an operating weight of 4634 kg and a maximum digging depth of 3.30 m.  It therefore enables you to excavate very close to surrounding obstacles with unrestricted rotation, greater flexibility and reduced risk of damage to the machine and surrounding property."));
}





