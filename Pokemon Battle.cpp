#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <iomanip> 
#include <cstdio>
#include "curses.h" //TODO

class Pokemon {
public:
	std::string type[2];
	int maxstamina;
	int stamina;
	int staminainc;
	int attack;
	int maxhealth;
	int health;
	float rarity;
	float multiplier;
	std::string raritystr;

	Pokemon(std::string typestr1, std::string typestr2, int healthint, int attackint, int staminaint) {
		type[0] = typestr1; //type hp attack special

		if (typestr2 == "") {
			type[1] = "null";
		}
		else {
			type[1] = typestr2;
		}
		healthint *= 2;
		maxhealth = healthint;
		health = healthint;
		attack = attackint;
		maxstamina = staminaint;
		stamina = 0;
		staminainc = 10;
		//std::cout << "Created Pokemon that has type " << type[0] << " and " << type[1] << std::endl;
	}
};

//Creating the Pokemons
Pokemon null("null", "null", 0, 0, 0);

Pokemon venasaur("Grass", "Poison", 80, 82, 100);
Pokemon charizard("Fire", "Flying", 78, 84, 85);
Pokemon blastoise("Water", "", 69, 83, 85);
Pokemon metapod("Bug", "", 50, 20, 25);
Pokemon beedrill("Bug", "Poison", 65, 80, 45);
Pokemon pidgeot("Normal", "Flying", 83, 80, 70);
Pokemon raticate("Normal", "", 55, 81, 50);
Pokemon fearow("Normal", "Flying", 65, 90, 61);
Pokemon arbok("Poison", "", 60, 85, 65);
Pokemon pikachu("Electric", "", 35, 55, 50);
Pokemon raichu("Electric", "", 60, 90, 90);
Pokemon sandslash("Ground", "", 75, 100, 55);
Pokemon nidoqueen("Poison", "Ground", 90, 82, 75);
Pokemon nidoking("Poison", "Ground", 81, 92, 75);
Pokemon clefable("Normal", "", 95, 70, 85);
Pokemon ninetails("Fire", "", 73, 76, 100);
Pokemon wigglytuff("Normal", "", 140, 70, 50);
Pokemon golbat("Poison", "Flying", 75, 80, 75);
Pokemon vileplume("Grass", "Poison", 75, 80, 100);
Pokemon parasect("Bug", "Grass", 60, 95, 80);
Pokemon venomoth("Bug", "Poison", 70, 65, 90);
Pokemon dugtrio("Ground", "", 35, 80, 70);
Pokemon persian("Normal", "", 65, 70, 65);
Pokemon golduck("Water", "", 80, 82, 80);
Pokemon primeape("Fighting", "", 65, 60, 60);
Pokemon arcanine("Fire", "", 90, 110, 80);
Pokemon poliwrath("Water", "Fighting", 90, 85, 70);
Pokemon alkazam("Psychic", "", 55, 50, 135);
Pokemon machamp("Fighting", "", 90, 130, 65);
Pokemon victreebell("Grass", "Poison", 80, 105, 100);
Pokemon tentacruel("Water", "Poison", 80, 70, 120);
Pokemon golem("Rock", "Ground", 80, 110, 55);
Pokemon rapidash("Fire", "", 65, 100, 80);
Pokemon slowbro("Water", "Psychic", 95, 75, 80);
Pokemon magneton("Electric", "Steel", 50, 60, 120);
Pokemon farfetchd("Normal", "Flying", 52, 65, 58);
Pokemon dodrio("Normal", "Flying", 60, 110, 60);
Pokemon dewgong("Water", "Ice", 90, 70, 95);
Pokemon muk("Poison", "", 105, 105, 65);
Pokemon cloyster("Water", "Ice", 50, 95, 85);
Pokemon gengar("Ghost", "Poison", 60, 65, 130);
Pokemon onix("Rock", "Ground", 45, 45, 30);
Pokemon hypno("Psychic", "", 85, 73, 115);
Pokemon kingler("Water", "", 55, 130, 50);
Pokemon electrode("Electric", "", 60, 50, 80);
Pokemon exeggutor("Grass", "Psychic", 95, 95, 125);
Pokemon marowak("Ground", "", 60, 80, 50);
Pokemon hitmonchan("Fighting", "", 50, 105, 35);
Pokemon lickitung("Normal", "", 90, 55, 60);
Pokemon weezing("Poison", "", 65, 90, 85);
Pokemon rhydon("Ground", "Rock", 105, 130, 45);
Pokemon chansey("Normal", "", 250, 5, 105);
Pokemon tangela("Grass", "", 65, 55, 100);
Pokemon kangaskhan("Normal", "", 105, 95, 40);
Pokemon seadra("Water", "", 55, 65, 95);
Pokemon seaking("Water", "", 80, 92, 80);
Pokemon starmie("Water", "Psychic", 60, 75, 100);
Pokemon mrmime("Psychic", "", 40, 45, 100);
Pokemon scyther("Bug", "Flying", 70, 110, 55);
Pokemon jynx("Ice", "Psychic", 65, 50, 95);
Pokemon electabuzz("Electric", "", 65, 83, 85);
Pokemon magmar("Fire", "", 65, 95, 85);
Pokemon pinsir("Bug", "", 65, 125, 55);
Pokemon tauros("Normal", "", 75, 100, 70);
Pokemon gyarados("Water", "Flying", 95, 125, 100);
Pokemon lapras("Water", "Ice", 130, 85, 95);
Pokemon ditto("Normal", "", 48, 48, 48);
Pokemon vaporeon("Water", "", 130, 65, 110);
Pokemon jolteon("Electric", "", 65, 65, 110);
Pokemon flareon("Fire", "", 65, 130, 110);
Pokemon porygon("Normal", "", 65, 60, 75);
Pokemon omastar("Rock", "Water", 70, 60, 115);
Pokemon kabutops("Rock", "Water", 60, 115, 70);
Pokemon aerodactyl("Rock", "Flying", 80, 105, 60);
Pokemon snorlax("Normal", "", 160, 110, 65);
Pokemon articuno("Ice", "Flying", 90, 85, 125);
Pokemon zapdos("Electric", "Flying", 90, 90, 125);
Pokemon moltres("Fire", "Flying", 90, 100, 125);
Pokemon dragonite("Dragon", "Flying", 91, 134, 100);
Pokemon mewtwo("Psychic", "", 106, 110, 154);
Pokemon mew("Psychic", "", 100, 100, 100);

std::vector<std::string> pokemons = { "null", "venasaur", "charizard", "blastoise", "metapod", "beedrill", "pidgeot", "raticate", "fearow", "arbok", "pikachu", "raichu", "sandslash", "nidoqueen",
"nidoking", "clefable", "ninetails", "wigglytuff", "golbat", "vileplume", "parasect", "venomoth", "dugtrio", "persian", "golduck", "primeape", "arcanine", "poliwrath", "alkazam",
"machamp", "victreebell", "tentacruel",  "golem", "rapidash", "slowbro", "magneton", "farfetchd", "dodrio", "dewgong", "muk", "cloyster", "gengar", "onix", "hypno", "kingler",
"electrode", "exeggutor", "marowak", "hitmonchan", "lickitung", "weezing", "rhydon", "chansey", "tangela", "kangaskhan", "seadra", "seaking", "starmie", "mrmime", "scyther",
"jynx", "electabuzz", "magmar", "pinsir", "tauros", "gyarados", "lapras", "ditto", "vaporeon", "jolteon", "flareon", "porygon", "omastar", "kabutops", "aerodactyl", "snorlax",
"articuno", "zapdos", "moltres", "dragonite", "mewtwo", "mew" };

std::vector<Pokemon> pokemonsobj = { null, venasaur, charizard, blastoise, metapod, beedrill, pidgeot, raticate, fearow, arbok, pikachu, raichu, sandslash, nidoqueen,
nidoking, clefable, ninetails, wigglytuff, golbat, vileplume, parasect, venomoth, dugtrio, persian, golduck, primeape, arcanine, poliwrath, alkazam,
machamp, victreebell, tentacruel,  golem, rapidash, slowbro, magneton, farfetchd, dodrio, dewgong, muk, cloyster, gengar, onix, hypno, kingler,
electrode, exeggutor, marowak, hitmonchan, lickitung, weezing, rhydon, chansey, tangela, kangaskhan, seadra, seaking, starmie, mrmime, scyther,
jynx, electabuzz, magmar, pinsir, tauros, gyarados, lapras, ditto, vaporeon, jolteon, flareon, porygon, omastar, kabutops, aerodactyl, snorlax,
articuno, zapdos, moltres, dragonite, mewtwo, mew };

//Defining Global Vars/Func
//Functions
//Battle-Related
void battle(Pokemon attacker, Pokemon defender, std::string attackstr, std::string defendstr), info(Pokemon attacker, std::string attackstr, Pokemon defender, std::string defendstr);
//Multipliers
void multiplier(Pokemon &attacker, Pokemon &defender);
//Misc
void rarity(Pokemon &attacker, Pokemon &defender, std::string attackerstr, std::string defenderstr);
void pagebreak(), stats();

//Variables
//Stats
float wincount = 0, losecount = 0;
//Misc
std::string divider = "======================================== \n";
int previous[2] = { 0, 0 };

int main() {
	srand(static_cast <unsigned> (time(0)));
	bool gameover = false;
	while (!gameover) {
		//Game start
		printf("Welcome to a text based Pokemon Battle Simulator. \nThis simulator only has fully evolved Pokemon from Generation 1. \n\n");

		bool select = true;
		int player;
		int enemy;

		while (select) {
			std::cout << "Pick a Pokemon to use!" << std::endl << "To use your previous matchups, send Previous!" << std::endl << "To view all available Pokemon, send List" << std::endl << "To view your past stats, send Stats!" << std::endl;
			std::string selection;
			std::cin >> selection;
			std::transform(selection.begin(), selection.end(), selection.begin(), tolower);

			if (selection == "list") {
				std::cout << "\n";
				for (int i = 1; i < pokemons.size(); i++) {
					for (int a = 0; a < pokemons[i].size(); a++) {
						if (a == 0) {
							char temp = toupper(pokemons[i][a]);
							std::cout << temp;
						}
						else {
							std::cout << pokemons[i][a];
						}
					}
					if (i % 5 == 0) {
						std::cout << "\n";
					}
					else {
						if (i != pokemons.size() - 1) {
							std::cout << ", ";
						}
						else if (i % 5 != 0) {
							std::cout << "\n";
						}
					}
				}
				std::cout << "\n";
				continue;
			}
			if (selection == "stats") {
				stats();
				continue;
			}

			if (selection == "previous") {
				if (pokemonsobj[previous[0]].attack == null.attack && pokemons[previous[0]] == "null") {
					std::cout << "You haven't played any games yet! Enter a Pokemon name!" << std::endl;
					std::cin >> selection;
					std::transform(selection.begin(), selection.end(), selection.begin(), tolower);
				}
				else {
					player = previous[0];
					enemy = previous[1];
					break;
				}
			}

			bool found = false;

			for (unsigned int i = 0; i < pokemons.size(); i++) {
				if (selection == pokemons[i]) {
					found = true;
					player = i;
					break;
				}
			}

			if (!found) {
				std::cout << "You have entered an invalid selection!" << std::endl << std::endl;
				continue;
			}

			std::cout << "Pick a Pokemon to fight against!" << std::endl;
			std::string selection2;
			std::cin >> selection2;
			std::transform(selection2.begin(), selection2.end(), selection2.begin(), tolower);

			found = false;

			for (unsigned int i = 0; i < pokemons.size(); i++) {
				if (selection2 == pokemons[i]) {
					found = true;
					enemy = i;
					break;
				}
			}

			if (found) {
				select = false;
				previous[0] = player;
				previous[1] = enemy;
				break;
			}
			else {
				std::cout << "You have entered an invalid Pokemon name!" << std::endl << std::endl;
				continue;
			}
		}
		battle(pokemonsobj[player], pokemonsobj[enemy], pokemons[player], pokemons[enemy]);
		gameover = true;
		break;
	}

	std::cout << "\n";
	while (gameover) {
		std::cout << "Do you want to play again? [Yes][No][Stats]" << std::endl;
		std::string playagain;
		std::cin >> playagain;
		std::transform(playagain.begin(), playagain.end(), playagain.begin(), tolower);
		if (playagain == "yes") {
			gameover = false;
			main();
		}
		else if (playagain == "stats") {
			stats();
			continue;
		}
		else if (playagain == "no") {
			return 0;
		}
		else {
			std::cout << "Invalid Option!" << std::endl;
			continue;
		}
	}
	return 0;
}

void battle(Pokemon attacker, Pokemon defender, std::string attackstr, std::string defendstr) {
	char temp = toupper(attackstr[0]);
	attackstr = temp + attackstr.erase(0, 1);
	temp = toupper(defendstr[0]);
	defendstr = temp + defendstr.erase(0, 1);

	std::cout << "\n";

	pagebreak();
	std::cout << divider;
	rarity(attacker, defender, attackstr, defendstr);
	multiplier(attacker, defender);

	std::cout << divider << "Welcome to the Gym! This is where Pokemons fight off!" << std::endl << "There are a few controls in this mode, as listed below." << std::endl;

	//ATTACKK!!
	char move;

	bool battle = true;
	while (battle) {
		info(attacker, attackstr, defender, defendstr);

		std::cout << "Make your move!" << std::endl << "A - Normal Attack" << std::endl << "S - Special Attack, only available if stamina bar is full." << std::endl << divider;
		std::string movestr;
		std::cin >> movestr;
		move = tolower(movestr[0]);
		bool valid = true;
		pagebreak();
		std::cout << divider;
		if (move == 'a') {
			int chance = 1 + rand() % 4;
			if (chance == 1) { chance = 0; }
			else if (chance > 1) { chance = 1; }
			int damage = chance * ((attacker.attack / 8 * attacker.multiplier)*attacker.rarity);

			std::cout << "You dealt " << damage << " damage!" << std::endl;
			defender.health -= damage;
			attacker.stamina += attacker.staminainc;
			if (attacker.stamina > attacker.maxstamina) { attacker.stamina = attacker.maxstamina; }
		}
		else if (move == 's') {
			if (attacker.stamina == attacker.maxstamina) {
				int damage = ((attacker.attack / 2 * attacker.multiplier)*attacker.rarity);

				std::cout << "You used your special move and dealt " << damage << " damage!" << std::endl;
				defender.health -= damage;
				attacker.stamina = 0;
			}
			else {
				std::cout << "You don't have enough stamina to do your special move!" << std::endl;
				valid = false;
			}
		}
		else {
			std::cout << "You have entered an invalid move!" << std::endl;
			valid = false;
		}
		if (valid) {
			if (defender.stamina >= defender.maxstamina) {
				int damage = ((defender.attack / 2 * defender.multiplier)*defender.rarity);

				std::cout << defendstr << " used his special attack and dealt " << damage << " damage!" << std::endl;
				attacker.health -= damage;
				defender.stamina = 0;
			}
			else {
				int chance = 1 + rand() % 4;
				if (chance == 1) { chance = 0; }
				else if (chance > 1) { chance = 1; }
				int damage = chance * ((defender.attack / 8 * defender.multiplier)*defender.rarity);

				std::cout << defendstr << " dealt " << damage << " damage!" << std::endl;
				attacker.health -= damage;
				defender.stamina += defender.staminainc;
				if (defender.stamina > defender.maxstamina) { defender.stamina = defender.maxstamina; }
			}
		}
		if (attacker.health <= 0) {
			attacker.health = 0;
			std::cout << divider << "You have been beaten by " << defendstr << "!" << std::endl;
			losecount++;
			info(attacker, attackstr, defender, defendstr);
			battle = false;
			break;
		}
		if (defender.health <= 0) {
			defender.health = 0;
			std::cout << divider << "You have killed " << defendstr << "!" << std::endl;
			wincount++;
			info(attacker, attackstr, defender, defendstr);
			battle = false;
			break;
		}
	}
	return;
}

void info(Pokemon attacker, std::string attackstr, Pokemon defender, std::string defendstr) {
	printf("%sCURRENT BATTLE STATS \n\nAttacker vs Defender \n%s vs %s \n%s vs %s \n\nAttacker Health - %d/%d \nAttacker Stamina - %d/%d \nDefender Health - %d/%d \nDefender Stamina - %d/%d \n%s", divider.c_str(), attackstr.c_str(), defendstr.c_str(), attacker.raritystr.c_str(), defender.raritystr.c_str(), attacker.health, attacker.maxhealth, attacker.stamina, attacker.maxstamina, defender.health, defender.maxhealth, defender.stamina, defender.maxstamina, divider.c_str());
}

void rarity(Pokemon &attacker, Pokemon &defender, std::string attackerstr, std::string defenderstr) {
	int rarint = 1 + rand() % 11;
	switch (rarint) {
	case 1:
		attacker.raritystr = "Trash";
		attacker.rarity = 0.75;
		break;
	case 2:
		attacker.raritystr = "Common";
		attacker.rarity = 1.0;
		break;
	case 3:
		attacker.raritystr = "Common";
		attacker.rarity = 1.0;
		break;
	case 4:
		attacker.raritystr = "Common";
		attacker.rarity = 1.0;
		break;
	case 5:
		attacker.raritystr = "Common";
		attacker.rarity = 1.0;
		break;
	case 6:
		attacker.raritystr = "Rare";
		attacker.rarity = 1.25;
		break;
	case 7:
		attacker.raritystr = "Rare";
		attacker.rarity = 1.25;
		break;
	case 8:
		attacker.raritystr = "Rare";
		attacker.rarity = 1.25;
		break;
	case 9:
		attacker.raritystr = "Epic";
		attacker.rarity = 1.5;
		break;
	case 10:
		attacker.raritystr = "Epic";
		attacker.rarity = 1.5;
		break;
	case 11:
		attacker.raritystr = "Legendary";
		attacker.rarity = 1.75;
		break;
	default:
		std::cout << "Something went extremely wrong!" << std::endl;
	}

	printf("You have found a %s %s! \n", attacker.raritystr.c_str(), attackerstr.c_str());
	attacker.maxhealth *= attacker.rarity;
	attacker.health = attacker.maxhealth;
	attacker.staminainc *= attacker.rarity;

	rarint = 1 + rand() % 11;
	switch (rarint) {
	case 1:
		defender.raritystr = "Trash";
		defender.rarity = 0.75;
		break;
	case 2:
		defender.raritystr = "Common";
		defender.rarity = 1.0;
		break;
	case 3:
		defender.raritystr = "Common";
		defender.rarity = 1.0;
		break;
	case 4:
		defender.raritystr = "Common";
		defender.rarity = 1.0;
		break;
	case 5:
		defender.raritystr = "Common";
		defender.rarity = 1.0;
		break;
	case 6:
		defender.raritystr = "Rare";
		defender.rarity = 1.25;
		break;
	case 7:
		defender.raritystr = "Rare";
		defender.rarity = 1.25;
		break;
	case 8:
		defender.raritystr = "Rare";
		defender.rarity = 1.25;
		break;
	case 9:
		defender.raritystr = "Epic";
		defender.rarity = 1.5;
		break;
	case 10:
		defender.raritystr = "Epic";
		defender.rarity = 1.5;
		break;
	case 11:
		defender.raritystr = "Legendary";
		defender.rarity = 1.75;
		break;
	default:
		std::cout << "Something went extremely wrong!" << std::endl;
	}
	printf("The defending %s is a %s! \n", defenderstr.c_str(), defender.raritystr.c_str());
	defender.maxhealth *= defender.rarity;
	defender.health = defender.maxhealth;
	defender.staminainc *= defender.rarity;
}

void multiplier(Pokemon &attacker, Pokemon &defender) {
	//attacker v defender
	float multiplier1[2] = { 1.0, 1.0 };

	//ATTACK MULTIPLIER
	//Normal
	if (attacker.type[0] == "Normal") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Rock" || defender.type[i] == "Ghost" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Fire
	else if (attacker.type[0] == "Fire") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Grass" || defender.type[i] == "Ice" || defender.type[i] == "Bug" || defender.type[i] == "Steel") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fire" || defender.type[i] == "Water" || defender.type[i] == "Rock" || defender.type[i] == "Dragon") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Water
	else if (attacker.type[0] == "Water") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Fire" || defender.type[i] == "Ground" || defender.type[i] == "Rock") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Water" || defender.type[i] == "Grass" || defender.type[i] == "Dragon") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Grass
	else if (attacker.type[0] == "Grass") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Water" || defender.type[i] == "Ground" || defender.type[i] == "Rock") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fire" || defender.type[i] == "Grass" || defender.type[i] == "Poison" || defender.type[i] == "Flying" || defender.type[i] == "Bug" || defender.type[i] == "Dragon" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Electric
	else if (attacker.type[0] == "Electric") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Water" || defender.type[i] == "Flying") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Grass" || defender.type[i] == "Electric" || defender.type[i] == "Ground" || defender.type[i] == "Dragon") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Ice
	else if (attacker.type[0] == "Ice") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Grass" || defender.type[i] == "Ground" || defender.type[i] == "Flying" || defender.type[i] == "Dragon") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fire" || defender.type[i] == "Water" || defender.type[i] == "Ice" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Fighting
	else if (attacker.type[0] == "Fighting") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Normal" || defender.type[i] == "Ice" || defender.type[i] == "Rock" || defender.type[i] == "Dark" || defender.type[i] == "Steel") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Poison" || defender.type[i] == "Flying" || defender.type[i] == "Psychic" || defender.type[i] == "Bug" || defender.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Poison
	else if (attacker.type[0] == "Poison") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Grass" || defender.type[i] == "Fairy") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Poison" || defender.type[i] == "Ground" || defender.type[i] == "Rock" || defender.type[i] == "Ghost" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Ground
	else if (attacker.type[0] == "Ground") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Fire" || defender.type[i] == "Electric" || defender.type[i] == "Poison" || defender.type[i] == "Rock" || defender.type[i] == "Steel") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Grass" || defender.type[i] == "Flying") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Flying
	else if (attacker.type[0] == "Flying") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Grass" || defender.type[i] == "Fighting" || defender.type[i] == "Bug") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Electric" || defender.type[i] == "Rock" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Psychic
	else if (attacker.type[0] == "Psychic") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Grass" || defender.type[i] == "Fighting" || defender.type[i] == "Bug") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Psychic" || defender.type[i] == "Dark" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Bug
	else if (attacker.type[0] == "Bug") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Grass" || defender.type[i] == "Psychic" || defender.type[i] == "Dark") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fire" || defender.type[i] == "Fighting" || defender.type[i] == "Poison" || defender.type[i] == "Flying" || defender.type[i] == "Ghost" || defender.type[i] == "Steel" || defender.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Rock
	else if (attacker.type[0] == "Rock") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Fire" || defender.type[i] == "Ice" || defender.type[i] == "Flying" || defender.type[i] == "Bug") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fighting" || defender.type[i] == "Ground" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Ghost
	else if (attacker.type[0] == "Ghost") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Psychic" || defender.type[i] == "Ghost") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Normal" || defender.type[i] == "Dark") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Dragon
	else if (attacker.type[0] == "Dragon") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Dragon") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Steel" || defender.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Dark
	else if (attacker.type[0] == "Dark") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Psychic" || defender.type[i] == "Ghost") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fighting" || defender.type[i] == "Dark" || defender.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Steel
	else if (attacker.type[0] == "Steel") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Ice" || defender.type[i] == "Rock" || defender.type[i] == "Fairy") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fire" || defender.type[i] == "Water" || defender.type[i] == "Electric" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Fairy
	else if (attacker.type[0] == "Fairy") {
		if (defender.type[1] == "null") { defender.type[1] = defender.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (attacker.type[i] != "null") {
				if (defender.type[i] == "Fighting" || defender.type[i] == "Dragon" || defender.type[i] == "Dark") {
					multiplier1[i] = 2.0;
				}
				else if (defender.type[i] == "Fire" || defender.type[i] == "Poison" || defender.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Last
	else {
		std::cout << "Something.. went wrong!" << std::endl;
	}
	attacker.multiplier = multiplier1[0] * multiplier1[1];

	multiplier1[0] = 1.0;
	multiplier1[1] = 1.0;

	//DEFENDER MULTIPLIER
	//Normal
	if (defender.type[0] == "Normal") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Fighting") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Ghost") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Fire
	else if (defender.type[0] == "Fire") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Water" || attacker.type[i] == "Ground" || attacker.type[i] == "Rock") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Fire" || attacker.type[i] == "Grass" || attacker.type[i] == "Ice" || attacker.type[i] == "Bug" || attacker.type[i] == "Steel" || attacker.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Water
	else if (defender.type[0] == "Water") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Grass" || attacker.type[i] == "Electric") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Fire" || attacker.type[i] == "Water" || attacker.type[i] == "Ice" || attacker.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Grass
	else if (defender.type[0] == "Grass") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Fire" || attacker.type[i] == "Ice" || attacker.type[i] == "Poison" || attacker.type[i] == "Flying" || attacker.type[i] == "Bug") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Water" || attacker.type[i] == "Grass" || attacker.type[i] == "Electric" || attacker.type[i] == "Ground") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Electric
	else if (defender.type[0] == "Electric") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Ground") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Electric" || attacker.type[i] == "Flying" || attacker.type[i] == "Steel") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Ice
	else if (defender.type[0] == "Ice") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Fire" || attacker.type[i] == "Fighting" || attacker.type[i] == "Rock" || attacker.type[i] == "Steel") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Ice") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Fighting
	else if (defender.type[0] == "Fighting") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Flying" || attacker.type[i] == "Psychic" || attacker.type[i] == "Fairy") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Bug" || attacker.type[i] == "Rock" || attacker.type[i] == "Dark") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Poison
	else if (defender.type[0] == "Poison") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Ground" || attacker.type[i] == "Psychic") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Grass" || attacker.type[i] == "Fighting" || attacker.type[i] == "Poison" || attacker.type[i] == "Bug" || attacker.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Ground
	else if (defender.type[0] == "Ground") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Water" || attacker.type[i] == "Grass" || attacker.type[i] == "Ice") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Electric" || attacker.type[i] == "Poison" || attacker.type[i] == "Rock") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Flying
	else if (defender.type[0] == "Flying") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Electric" || attacker.type[i] == "Ice" || attacker.type[i] == "Rock") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Grass" || attacker.type[i] == "Fighting" || attacker.type[i] == "Ground" || attacker.type[i] == "Bug") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Psychic
	else if (defender.type[0] == "Psychic") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Bug" || attacker.type[i] == "Ghost" || attacker.type[i] == "Dark") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Fighting" || attacker.type[i] == "Psychic") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Bug
	else if (defender.type[0] == "Bug") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Fire" || attacker.type[i] == "Flying" || attacker.type[i] == "Rock") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Grass" || attacker.type[i] == "Fighting" || attacker.type[i] == "Rock") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Rock
	else if (defender.type[0] == "Rock") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Water" || attacker.type[i] == "Grass" || attacker.type[i] == "Fighting" || attacker.type[i] == "Ground" || attacker.type[i] == "Steel") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Normal" || attacker.type[i] == "Fire" || attacker.type[i] == "Poison" || attacker.type[i] == "Flying") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Ghost
	else if (defender.type[0] == "Ghost") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Ghost" || attacker.type[i] == "Dark") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Normal" || attacker.type[i] == "Fighting" || attacker.type[i] == "Poison" || attacker.type[i] == "Bug") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Dragon
	else if (defender.type[0] == "Dragon") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Ice" || attacker.type[i] == "Dragon" || attacker.type[i] == "Fairy") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Fire" || attacker.type[i] == "Water" || attacker.type[i] == "Grass" || attacker.type[i] == "Electric") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Dark
	else if (defender.type[0] == "Dark") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Fighting" || attacker.type[i] == "Bug" || attacker.type[i] == "Fairy") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Psychic" || attacker.type[i] == "Ghost" || attacker.type[i] == "Dark") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Steel
	else if (defender.type[0] == "Steel") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 0; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Fire" || attacker.type[i] == "Fighting" || attacker.type[i] == "Ground") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Normal" || attacker.type[i] == "Grass" || attacker.type[i] == "Ice" || attacker.type[i] == "Flying" || attacker.type[i] == "Psychic" || attacker.type[i] == "Bug" || attacker.type[i] == "Rock" || attacker.type[i] == "Dragon" || attacker.type[i] == "Steel" || attacker.type[i] == "Fairy") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Fairy
	else if (defender.type[0] == "Fairy") {
		if (attacker.type[1] == "null") { attacker.type[1] = attacker.type[0]; }
		for (int i = 1; i < 2; i++) {
			if (defender.type[i] != "null") {
				if (attacker.type[i] == "Poison" || attacker.type[i] == "Steel") {
					multiplier1[i] = 2.0;
				}
				else if (attacker.type[i] == "Fighting" || attacker.type[i] == "Bug" || attacker.type[i] == "Dragon" || attacker.type[i] == "Dark") {
					multiplier1[i] = 0.5;
				}
			}
		}
	}
	//Last
	else {
		std::cout << "Something.. went wrong!" << std::endl;
	}
	defender.multiplier = multiplier1[0] * multiplier1[1];
}

void pagebreak() {
	printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
}

void stats() {
	if (wincount == 0 && losecount == 0) {
		std::cout << divider << "PLAYER STATISTICS" << std::endl << std::endl << "Total Wins: 0 (0%)" << std::endl << "Total Losses: 0 (0%)" << std::endl << "Total Games Played: 0 (100%)" << std::endl << divider;
	}
	else {
		float wincountpercent = (wincount / (wincount + losecount)) * 100, losecountpercent = (losecount / (wincount + losecount)) * 100;
		std::cout << divider << "PLAYER STATISTICS" << std::endl << std::endl << "Total Wins: " << wincount << " (" << std::setprecision(3) << wincountpercent << "%)" << std::endl << "Total Losses: " << losecount << " (" << std::setprecision(3) << losecountpercent << "%)" << std::endl << "Total Games Played: " << wincount + losecount << " (100%)" << std::endl << divider;
	}
}