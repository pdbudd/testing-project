#include "items.h"
extern plot_location* Nowhere;
plot_item::plot_item()
{
	item_name = "noname";
	item_value = 0;
	item_rarity = rarity::common;
	item_list.push_back(this);
	item_origin = Nowhere;
	return;
}

plot_item::plot_item(string itemname)
{
	item_name = itemname;
	item_value = 0;
	item_rarity = rarity::common;
	item_list.push_back(this);
	item_origin = Nowhere;
	return;
}

plot_item::plot_item(string itemname, int itemvalue)
{
	item_name = itemname;
	item_value = itemvalue;
	item_rarity = rarity::common;
	item_list.push_back(this);
	item_origin = Nowhere;
	return;
}

plot_item::plot_item(string itemname, int itemvalue, rarity itemrarity)
{
	item_name = itemname;
	item_value = itemvalue;
	item_rarity = itemrarity;
	item_list.push_back(this);
	item_origin = Nowhere;
	return;
}

plot_item::~plot_item()
{
	auto pend = item_list.begin();
	pend = remove_if(item_list.begin(), item_list.end(), [this]
	(plot_item* plotitm) {return this->item_name == plotitm->item_name; });
	if (!item_list.empty())
	{
		item_list.pop_back();
	}
}

ostream& operator<<(ostream& fs, plot_item* const& it)
{
	fs << it->item_name << "," << it->item_number << "," << it->item_value << "," << it->item_origin->location_name << endl; 
	//does not return if origin is missing.
	return fs;
}
