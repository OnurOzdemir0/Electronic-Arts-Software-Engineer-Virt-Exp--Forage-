#include <iostream>
#include <vector>
#include <queue>

struct Blueprint
{
	std::string name;
	int quantity;
	float price;
};

struct Filament
{
	std::string name;
	int quantity;
	float price;
};

class printer
{
public:

protected:
	Filament filamentLeft;
	std::vector<Blueprint> blueprintList;
	std::queue<Blueprint> printQueue;

	void TDprint(Blueprint, Filament);
	Blueprint searchBlueprint();
	void addFilament(Filament, int);
	void cancel();
	
private:
	float price;
	int quality;
	Filament filament;
	int filamentLeft;
	
};

