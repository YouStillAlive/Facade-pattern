#include <iostream>

class PowerSupply
{
public:
	void PowerStart()
	{
		std::cout << "Start Power";
	}

	void StartRAM()
	{
		std::cout << "\nPower for RAM";
	}

	void StartVideoCard()
	{
		std::cout << "\nPower for VideoCard";
	}

	void StartHDD()
	{
		std::cout << "\nPower for HDD";
	}

	void StartOptical()
	{
		std::cout << "\nPower Optical Disc";
	}

	void EndVideoCard()
	{
		std::cout << "\nStop powering the video card";
	}

	void EndRAM()
	{
		std::cout << "\nStop powering ram";
	}

	void EndOptical()
	{
		std::cout << "Stop powering the drive";
	}

	void EndHDD()
	{
		std::cout << "\nStop powering the hard drive.";
	}

	void OFF()
	{
		std::cout << "\nOFF";
	}
};

class VideoCard
{
public:
	void Start()
	{
		std::cout << "\nStart VideoCard!";
	}

	void CheckMonitor()
	{
		std::cout << "\nCheck Monitor";
	}

	void RAM_Check()
	{
		std::cout << "\nCheck RAM";
	}

	void HDD_Check()
	{
		std::cout << "\nCheck HDD";
	}

	void Bye_Message()
	{
		std::cout << "\nShut down";
	}

	void Optical_Check()
	{
		std::cout << "\nCheck Optical";
	}

};

class Sensors
{
public:

	void CheckPower()
	{
		std::cout << "\nCheck Power";
	}

	void CheckTemperature()
	{
		std::cout << "\nCheck the temperature in the power supply";
	}

	void CheckPowerVideoCard()
	{
		std::cout << "\nCheck Power for VideoCard";
	}

	void CheckTempVideoCard()
	{
		std::cout << "\nCheck the temperature in the video card";
	}

	void CheckPowerAll()
	{
		std::cout << "\nCheck the temperature of all systems";
	}

	void CheckRAMPower()
	{
		std::cout << "\nCheck the temperature in RAM";
	}

	void CheckVoltage()
	{
		std::cout << "\nCheck voltage";
	}
};

class RAM
{
public:
	void Start()
	{
		std::cout << "\nStart RAM";
	}
	
	void Memory_Analysis()
	{
		std::cout << "\nMemory Analysis";
	}

	void Clear()
	{
		std::cout << "\nClear Memory";
	}
};

class OpticalDisk
{
public:
	void Start()
	{
		std::cout << "\nStart Optical Disk";
	}

	void CheckAvailability()
	{
		std::cout << "\nCheck availability";
	}

	void ReturnPosition()
	{
		std::cout << "\nReturn Position";
	}
};

class HDD
{
public:
	void Start()
	{
		std::cout << "\nStart HDD";
	}

	void CheckSectors()
	{
		std::cout << "\nBoot sector check";
	}

	void EndWork()
	{
		std::cout << "End work HDD";
	}
};

class Facade
{
	OpticalDisk Disk;
	HDD Vinch;
	PowerSupply Block;
	RAM Memory;
	VideoCard Card;
	Sensors Sensor;

public:
	void Start()
	{
		Block.PowerStart();
		Sensor.CheckPower();
		Sensor.CheckTemperature();
		Sensor.CheckTempVideoCard();
		Block.StartVideoCard();
		Card.Start();
		Card.CheckMonitor();
		Sensor.CheckRAMPower();
		Block.StartRAM();
		Memory.Start();
		Memory.Memory_Analysis();
		Card.RAM_Check();
		Block.StartOptical();
		Disk.Start();
		Disk.CheckAvailability();
		Card.Optical_Check();
		Block.StartHDD();
		Vinch.Start();
		Vinch.CheckSectors();
		Card.HDD_Check();
		Sensor.CheckPowerAll();
	}

	void END()
	{
		Vinch.EndWork();
		Memory.Clear();
		Memory.Memory_Analysis();
		Card.Bye_Message();
		Disk.ReturnPosition();
		Block.EndVideoCard();
		Block.EndRAM();
		Block.EndOptical();
		Block.EndHDD();
		Sensor.CheckVoltage();
		Block.OFF();
	}
};

int main()
{
	Facade obj;
	obj.Start();
	system("pause");
	std::cout << "\n\n";
	obj.END();
}