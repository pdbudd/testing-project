#pragma once
#include <string>
#include <vector>
#include <memory>
#include "locations.h"
#include "characters.h"
using namespace std;

class plot_location;
class plot_treasure;

extern vector<plot_item*> item_list;
extern vector<plot_treasure*> treasure_list;

class plot_item {
public:
	enum class rarity { common, uncommon, rare, epic, legendary, artifact } item_rarity;
	string item_name, notes;
	int item_value, item_number;
	plot_location* item_origin;
	plot_item();
	plot_item(string itemname);
	plot_item(string itemname, int itemvalue);
	plot_item(string itemname, int itemvalue, rarity itemrarity);
	~plot_item();
	friend ostream& operator<<(ostream& fs, plot_item* const& it);
};

class plot_treasure {
public:
	int treasure_gold, treasure_silver, treasure_electrum, treasure_copper;
	vector<plot_item> treasure_items;
};