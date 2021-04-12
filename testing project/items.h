#pragma once
#include <string>
#include <vector>
#include <memory>
using namespace std;

class plot_location;

class plot_item {
public:
	enum rarity { common, uncommon, rare, epic, legendary, artifact } item_rarity;
	string item_name, notes;
	int item_value, item_number;
	plot_location* item_origin;
	plot_item();
	plot_item(string itemname);
	plot_item(string itemname, int itemvalue);
	plot_item(string itemname, int itemvalue, rarity itemrarity);
};

class plot_treasure {
public:
	int treasure_gold, treasure_silver, treasure_electrum, treasure_copper;
	vector<plot_item> treasure_items;
};