#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "Globals.h"

#define NUM_MODULES 17

class ModuleWindow;
class ModuleInput;
class ModuleTextures;
class ModuleRender;
class ModulePlayer;
class Module;
class ModuleWelcome;
class ModuleLevel3;
class ModuleLevel4;
class ModuleCongratulation;
class ModuleFadeToBlack;
class ModuleSound;
class ModuleGhostRed;
class ModuleGhostPink;
class ModuleGhostOrange;
class ModuleGhostBlue;
class ModuleCollision;
class ModuleScore;

class Application
{
public:

	Module* modules[NUM_MODULES];
	ModuleWindow* window;
	ModuleRender* render;
	ModuleInput* input;
	ModuleTextures* textures;
	ModulePlayer* player;
	ModuleWelcome* welcome;
	ModuleLevel3* level3;
	ModuleLevel4* level4;
	ModuleCongratulation* win;
	ModuleFadeToBlack* fade;
	ModuleSound* sound;
	ModuleGhostRed* ghost_r;
	ModuleGhostBlue* ghost_b;
	ModuleGhostOrange* ghost_o;
	ModuleGhostPink* ghost_p;
	ModuleScore* score;

	ModuleCollision* collision;
public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

};

// Global var made extern for Application ---
extern Application* App;

#endif // __APPLICATION_H__