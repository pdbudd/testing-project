#include "items.h"

plot_item::plot_item()
{
	item_name = "noname";
	item_value = 0;
	item_rarity = rarity::common;
	return;
}

plot_item::plot_item(string itemname)
{
	item_name = itemname;
	item_value = 0;
	item_rarity = rarity::common;
	return;
}

plot_item::plot_item(string itemname, int itemvalue)
{
	item_name = itemname;
	item_value = itemvalue;
	item_rarity = rarity::common;
	return;
}

plot_item::plot_item(string itemname, int itemvalue, rarity itemrarity)
{
	item_name = itemname;
	item_value = itemvalue;
	item_rarity = itemrarity;
	return;
}
