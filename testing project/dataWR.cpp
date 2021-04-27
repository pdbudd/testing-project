#include "dataWR.h"
#include <iostream>
#include <fstream>
#include "locations.h"
#include "characters.h"
#include "items.h"

extern vector<plot_location*> location_listed;
extern vector<plot_character*> character_list;
extern vector<plot_item*> item_list;
extern vector<plot_path*> path_list;
extern vector<plot_treasure*> treasure_list;

void location_read()
{
	std::string name, notes, type, pend;
	int chars, itms, paths, counter, limit;
	char comma;
	std::ifstream fs("locations.txt");
	counter = 0;
	limit = 3;
	while (getline(fs, pend, '\n'))
	{
		if (counter < limit);
		{
			chars
		}
	}
	fs >> chars >> comma >> itms >> comma >> paths >> comma >> name >> type;
	cout << chars << " " << itms << " " << paths;	
}

void location_write()
{
	std::ofstream fs;
	fs.open("locations.txt");
	fs << location_listed.size() << endl;
		for (plot_location* loc : location_listed)
		{
			fs << loc;
		}
	fs.close();
}

void character_read()
{
}

void character_write()
{
	std::ofstream fs;
	fs.open("characters.txt");
	for (plot_character* cha : character_list)
	{
		fs << cha;
	}
	fs.close();
}

void item_read()
{
}

void item_write()
{
	std::ofstream fs;
	fs.open("items.txt");
	for (plot_item* itm : item_list)
	{
		fs << itm;
	}
	fs.close();
}

void treasure_read()
{
}

void treasure_write()
{
	std::ofstream fs;
	fs.open("treasures.txt");
	for (plot_treasure* tre : treasure_list)
	{
		fs << tre;
	}
	fs.close();
}

void relation_read()
{
}

void relation_write()
{
	std::ofstream fs;
	fs.open("relations.txt");
	for (plot_relation* rel : relation_list)
	{
		fs << rel;
	}
	fs.close();
}

void path_read()
{
}

void path_write()
{
	std::ofstream fs;
	fs.open("paths.txt");
	for (plot_path* pat : path_list)
	{
		fs << pat;
	}
	fs.close();
}
