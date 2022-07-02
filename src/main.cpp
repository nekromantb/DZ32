#include <iostream>
#include <fstream>
#include <assert.h>
#include "nlohmann/json.hpp"

nlohmann::json new_film ()
{
    nlohmann::json film;
    std::cout << "Enter name, country, date, studio, author, director and producer of film:"<<std::endl;
    std::cout << "name:";
    std::string input_string;
    std::getline(std::cin,input_string);
    film["name_film"] = input_string;
    std::cout <<"date of creation:";
    std::getline(std::cin,input_string);
    film["date"] = input_string;
    std::cout <<"studio:";
    std::getline(std::cin,input_string);
    film["studio"] = input_string;
    std::cout <<"author:";
    std::getline(std::cin,input_string);
    film["author"] = input_string;
    std::cout <<"director:";
    std::getline(std::cin,input_string);;
    film["director"] = input_string;
    std::cout <<"producer:";
    std::getline(std::cin,input_string);
    film["producer"] = input_string;
    std::cout << "Enter main actor of film:"<< std::endl;
    nlohmann::json actor;
    std::cout <<"name_ac:";
    std::cin >> input_string;
    actor["name"] = input_string;
    std::cout <<"surname:";
    std::cin >> input_string;
    actor["surname"] = input_string;
    std::cout <<"cast:";
    std::cin.ignore();
    std::getline(std::cin,input_string);
    actor["cast"] = input_string;
    film["main_actor"] = actor;
    return film;
};

void add_film(nlohmann::json& film, nlohmann::json& filmoteca)
{
    std::ofstream file ("G:\\work\\Prog\\progs\\DZ32\\filmoteca.json");
    filmoteca[film["name_film"]] = film;
    file << filmoteca;
    file.close();
}

void new_filmoteca (nlohmann::json filmoteca)
{
    if (!filmoteca.empty()) filmoteca.clear();
    nlohmann::json film;
    for (int i = 0; i< 5; ++i)
    {
        film = new_film();
        add_film(film,filmoteca);
    }
}

int main() {
    nlohmann::json filmoteca;
    //new_filmoteca(filmoteca);
    std::ifstream file ("G:\\work\\Prog\\progs\\DZ32\\filmoteca.json");
    file >> filmoteca;
    std::string find_obj;
    std::cout << "Enter name or surname of actor" << std::endl;
    std::cin >> find_obj;
    for (auto i : filmoteca)
    {
        if (i["main_actor"]["name"]==find_obj || i["main_actor"]["surname"]==find_obj) {
            std::cout << "Cast of actor: "<< i["main_actor"]["cast"] << " in film " <<i["name_film"] <<std::endl;
        }
    }
    file.close();
    return 0;
}
