#include "locations.h"
#include "characters.h"
#include "items.h"
#include <iostream>
#include <fstream>

extern vector<plot_location*> location_listed;
//location constructor
plot_location::plot_location(string loc_name)
{
	location_name = loc_name;
	location_listed.push_back(this);
}

//location destructor
plot_location::~plot_location()
{
	auto pend = location_listed.begin();
	pend = remove_if(location_listed.begin(), location_listed.end(), [this]
	(plot_location* plotloc) {return this->location_name == plotloc->location_name;});
	if (!location_listed.empty())
	{
		location_listed.pop_back();
	}
}

void plot_location::location_add_item(plot_item* location_item)
{
	location_items.push_back(location_item);
	return;
}

void plot_location::location_add_character(plot_character* location_character)
{
	location_characters.push_back(location_character);
	return;
}

void plot_location::location_add_path(plot_path* location_path)
{
	location_paths.push_back(location_path);
	return;
}

void plot_location::location_get_path()
{
	for (plot_path* path : location_paths)
	{
		cout << path->path_name << endl;
	}
	return;
}

void plot_location::location_get_character_list()
{
	for (plot_character* character : location_characters)
	{
		cout << character->character_name << endl;
	}
	return;
}

 void plot_location::location_get_item_list()
{
	for (plot_item* n : location_items)
	{
		std::cout << n->item_name << endl;
	}
	return;
}

plot_location::plot_location(string loc_name, enum class location_type loc_type)
{
	location_name = loc_name;
	location_type = loc_type;
	location_listed.push_back(this);
}

ostream& operator<<(ostream& fs, plot_location* const& plotloc)
{
	fs << plotloc->location_characters.size() << ", ";
	fs << plotloc->location_items.size() << ",";
	fs << plotloc->location_paths.size() << ",";
	fs << plotloc->location_name << ", ";
	if (plotloc->location_type == location_type::building)
	{
		fs << "building, ";
	}
	if (plotloc->location_type == location_type::town)
	{
		fs << "town, ";
	}
	if (plotloc->location_type == location_type::path)
	{
		fs << "path, ";
	}
	if (plotloc->location_type == location_type::room)
	{
		fs << "room, ";
	}
	if (plotloc->location_type == location_type::other)
	{
		fs << "misc, ";
	}
	for (plot_item* item : plotloc->location_items)
	{
		fs << item->item_name << ", ";
	}
	for (plot_character* chara : plotloc->location_characters)
	{
		fs << chara->character_name << ", ";
	}
	for (plot_path* path : plotloc->location_paths)
	{
		fs << path->from->location_name << ", " << path->to->location_name << ", ";
	}
	fs << plotloc->location_notes << endl;
	return fs;
}

/*ostream& operator<<(ostream& os, const plot_location& plotloc)
{
	os <<"location name: "<<plotloc.location_name<<endl;
	if (plotloc.location_type == location_type::building)
	{
		os << "location type: building"<< endl;
	}
	if (plotloc.location_type == location_type::town)
	{
		os << "location type: town" << endl;
	}
	if (plotloc.location_type == location_type::path)
	{
		os << "location type: path" << endl;
	}
	if (plotloc.location_type == location_type::room)
	{
		os << "location type: room" << endl;
	}
	if (plotloc.location_type == location_type::other)
	{
		os << "location type: misc" << endl;
	}
	os << "other notes: " << plotloc.location_notes<<endl;
	
	return os;
}
*/
/*ofstream& location_file_write(ofstream& fs, const plot_location& plotloc)
{
	fs << plotloc.location_name << ", ";
	if (plotloc.location_type == location_type::building)
	{
		fs << "building, ";
	}
	if (plotloc.location_type == location_type::town)
	{
		fs << "town, ";
	}
	if (plotloc.location_type == location_type::path)
	{
		fs << "path, ";
	}
	if (plotloc.location_type == location_type::room)
	{
		fs << "room, ";
	}
	if (plotloc.location_type == location_type::other)
	{
		fs << "misc, ";
	}
	fs << plotloc.location_items.size() << ", ";
	for (plot_item* item : plotloc.location_items)
	{
		fs << item->item_name << ", ";
	}
	fs << plotloc.location_characters.size() << ", ";
	for (plot_character* chara : plotloc.location_characters)
	{
		fs << chara->character_name << ", ";
	}
	fs << plotloc.location_items.size() << ", ";
	for (plot_path* path : plotloc.location_paths)
	{
		fs << path->from << ", " << path->to << ", ";
	}
	fs << plotloc.location_notes << endl;
	return fs;
}*/

ostream& operator<<(ostream& os, plot_path* const& plotpath)
{
	os << "From: " << plotpath->from << ", to: " << plotpath->to;
	return os;
}
