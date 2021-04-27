#pragma once
#include <vector>
#include "characters.h"
#include "locations.h"
#include "items.h"

std::vector<plot_location*> location_listed;
std::vector<plot_character*> character_list;
std::vector<plot_path*> path_list;
std::vector<plot_relation*> relation_list;
std::vector<plot_item*> item_list;
std::vector<plot_treasure*> treasure_list;