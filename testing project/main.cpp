#include <string>
#include <vector>
#include <iostream>
#include "locations.h"
#include "items.h"
#include "characters.h"

auto Kimkirk = make_shared<plot_location>("Kimkirk");

int main()
{
	//todo Import from CSV lists
	//todo Implement GUI
	plot_item Glove("Gloves of blasting", 650, plot_item::rare);
	Kimkirk->location_add_item(&Glove);
	Kimkirk->location_get_item_list();
	{
		plot_item Sword("sword of a thousand truths");
		Kimkirk->location_add_item(&Sword);
		Kimkirk->location_get_item_list();
	}
	Kimkirk->location_get_item_list();

	//todo export to CSV lists
	return 0;
}