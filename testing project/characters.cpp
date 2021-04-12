#include "characters.h"
#include "locations.h"
#include "items.h"
#include "tools.h"

using namespace std;

plot_character::plot_character(string charname)
{
	character_origin = &loc_placeholder;
	location = &loc_placeholder;
	character_name = charname;
}

plot_character::plot_character(string charname, string charhair, char_class charclass, race charrace)
{
	character_origin = &loc_placeholder;
	location = &loc_placeholder;
	character_name = charname;
	character_hair = charhair;
	character_class = charclass;
	character_race = charrace;
}

plot_character::~plot_character()
{
}

void plot_character::character_add_item(plot_item* item)
{
}

void plot_character::character_add_relation(plot_relation* charrel)
{
}

void plot_character::character_add_location(plot_location* charloc)
{
}

void plot_character::character_get_items()
{
}

void plot_character::character_get_relations()
{
}
