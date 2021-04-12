#include "locations.h"
#include "characters.h"
#include "items.h"
#include <iostream>


//location constructor
plot_location::plot_location(string loc_name)
{
	location_name = loc_name;
	cout << loc_name << " initialised." << endl;
}

//location destructor
plot_location::~plot_location()
{
	cout << location_name << " deleted" << endl;
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
}

ostream& operator<<(ostream& os, const plot_location& plotloc)
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

ostream& operator<<(ostream& os, const plot_path& plotpath)
{
	return os;
}
