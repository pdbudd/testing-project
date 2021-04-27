#include <string>
#include <iostream>
#include "Vector_init.h"
#include "locations.h"
#include "items.h"
#include "characters.h"
#include <fstream>
#include "dataWR.h"

plot_location* Nowhere = new plot_location("Nowhere", location_type::other);
plot_location* Kimkirk = new plot_location("Kimkirk", location_type::town);
plot_location* Dunny = new plot_location("Dunny", location_type::building);
plot_location* Stabsville = new plot_location("Stabsville", location_type::town);
plot_location* Orlando = new plot_location("Orlando", location_type::other);
plot_location* Syraceuse = new plot_location("Syraceuse", location_type::room);
plot_location* Muggerville = new plot_location("Muggerville", location_type::building);
plot_location* Volben = new plot_location("Volben", location_type::building);
plot_location* Sartith = new plot_location("Sartith", location_type::town);

int main()
{
	//todo Import from CSV lists
	//todo Implement GUI
	plot_item Glove("Gloves of blasting", 650, plot_item::rarity::rare);
	plot_item Dagger("Dagger of freezing teeth", 200, plot_item::rarity::legendary);
	plot_item Bamboo("Bamboo spear of the panda", 200, plot_item::rarity::epic);
	plot_item Corn("bugger", 400);
	plot_item hanger("snickers");
	Glove.item_origin = Orlando;
	plot_character Steven("Steven");
	plot_character Carl("Carl");
	plot_character Jude("Jude");
	plot_character Sten("Sten");
	Orlando->location_add_item(&Corn);
	Orlando->location_add_item(&Dagger);
	Orlando->location_add_item(&hanger);
	Orlando->location_add_item(&Glove);
	Syraceuse->location_add_item(&Corn);
	Muggerville->location_add_item(&Dagger);
	Stabsville->location_add_item(&hanger);
	Volben->location_add_item(&Glove);
	Kimkirk->location_add_item(&Dagger);
	Kimkirk->location_add_character(&Steven);
	Kimkirk->location_add_character(&Carl);
	Orlando->location_add_character(&Steven);
	Syraceuse->location_add_character(&Jude);

	//Saving locations in locations.txt
	location_write();
	item_write();
	character_write();
	relation_write();
	treasure_write();
	return 0;
}