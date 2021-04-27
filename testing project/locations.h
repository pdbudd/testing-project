#pragma once
#include <string>
#include <iostream>
#include <vector>


using namespace std;

class plot_character;
class plot_item;
class plot_path;
class plot_location;

enum class location_type { town, building, room, path, other };

class plot_location {
public:

private:
	location_type location_type;
	vector<plot_character*> location_characters;	
	vector<plot_path*> location_paths;
public:
	std::string location_name, location_notes;
	vector<plot_item*> location_items;
	plot_location(string loc_name, enum class location_type loc_type);
	plot_location(string loc_name);
	~plot_location();
	void location_add_item(plot_item* location_item);
	void location_add_character(plot_character* location_character);
	void location_add_path(plot_path* location_path);
	void location_get_path();
	void location_get_character_list();
	void location_get_item_list();
	friend ostream& operator<< (ostream& fs, plot_location* const& plotloc);
};

class plot_path {
public:
	string path_name;
	plot_location* from, *to;
	vector<plot_character*> path_characters;
private:

public:
	friend ostream& operator<<(ostream& os, plot_path* const& plotpath);
};

