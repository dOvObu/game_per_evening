#include "json.h"
#include "micropather.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <functional>

struct ui
{
	float x = 0, y = 0;
	float w = 0, h = 0;
	
	bool _enabled = true;
	std::string _type;
	
	std::vector<ui*> _childs;
};

struct img : ui
{
	img(sf::Image* img) :_img(img) { _type = "img"; }
	sf::Image* _img;
};

struct btn : img
{
	btn(sf::Image* img) : ::img(img) { _type = "btn"; }

	enum btn_state
	{
		pressed,
		released,
	}
	_state{ released };
};


int main()
{
	
}