#pragma once
#include <string>
#include <vector>

using namespace std;
class plot_item;
class plot_location;
class plot_relation;

enum race {
	elf, dwarf, human, gnome, tiefling,
	dragonborn, helf, orc, horc, goliath, halfling,
	firbolg, leonin, satyr, aarakocra, genasi, aasimar,
	bugbear, goblin, hobgoblin, kenku, kobold, lizardfolk,
	tabaxi, triton, yuan_ti, tortle, changeling, kalashtar,
	shifter, warforged, gith, centaur, loxodon, minotaur,
	simic_hybrid, vedalken, verdan, locathah, grung, dhampir,
	fairy, hexblood, owlfolk, rabbitfolk, reborn
};

enum char_class {
	bard, druid, barbarian, fighter, ranger,
	warlock, wizard, sorcerer, rogue, artificer, multiclass,
	cleric, paladin, monk
};

class plot_character {
public:
	string character_name, character_hair, character_skin,
		character_eyes, character_voice, character_other;
	int character_age, character_height, character_gold,
		character_silver, character_copper, character_CR;
	vector<plot_item*> character_items;
	vector<plot_relation*> character_relationships;
	plot_location* character_origin, *location;
	char_class character_class;
	race character_race;
	plot_character(string charname);
	plot_character(string charname, string charhair, char_class charclass, race charrace);
	~plot_character();
	void character_add_item(plot_item* item);
	void character_add_relation(plot_relation* charrel);
	void character_add_location(plot_location* charloc);
	void character_get_items();
	void character_get_relations();
};

class plot_relation {
public:
	enum class hostility{
		bff,
		friends,
		acquaintances,
		indifferent,
		hostile,
		hate,
		mixed
	} hostility;
	plot_character *character_from, *character_to;
	string relation_notes;
};