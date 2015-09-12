/**********************************************************************************************************************************************/
#include "main.h"
#include "version.h"
/**********************************************************************************************************************************************/
#include "image_tiles.xpm"
#include "image_toolbox_frame.xpm"
/**********************************************************************************************************************************************/
//Globals (in all files)
namespace Global {
    //Holds if in debug mode or not. Causes more messages to appear in the console.
    //Defined in version.h
    #ifndef DEFINED_BUILD_MODE_PRIVATE
        const bool blnDebugMode = false;
    #else
        const bool blnDebugMode = true;
    #endif // DEFINED_BUILD_MODE_PRIVATE
    const uint pic_size = 24;
    uchar map[DEFINED_MAP_HEIGHT][DEFINED_MAP_WIDTH] = {{1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,5,5,5,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,0,0,0,0,0,0,0,5,5,5,5,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,1,1,1,0,0,0,0},
                        {0,0,0,0,0,0,5,5,5,5,5,5,5,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,1,1,1,0,0,0,0},
                        {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,3,0,0,0,0,1,1,1,1,1,0,0,0},
                        {0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,0,3,0,0,0,0,1,1,1,1,1,0,0,0},
                        {1,1,1,1,1,2,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,4,0,0,1,1,1,1,0,0,0,0,0,0,0,4,0,0,0,0,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,3,0,0,0,1,1,1,1,1,1,0,0,0},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

};
/**********************************************************************************************************************************************/
int main(int argc, char *argv[]) {
    bool quit = false;
    SDL_Event event;
	//TODO allow setting of map size
    /* TODO (GamerMan7799#1#): Add menu buttons (such as save, close, and reset, maybe others too) */

	//Initiate everything that needs it
    Textures::set_clips();
    Screen::start();
    //quits the program if there was an error starting SDL, its components or in getting the textures we need.
    if (Screen::bln_SDL_Started == false) {return 1;}
    //Make all the buttons for the toolbar
    Toolbar::make_buttons();

    while ( !quit ) {
        Screen::show();
        if (SDL_PollEvent( &event ) ) {
            Toolbar::check_events( &event );
            if (event.type == SDL_QUIT) {quit = true;}
        }
    }

    //Clean up the screen
    Screen::cleanup();
	return 0;
}
/**********************************************************************************************************************************************/
void Textures::set_clips() {
    //Sets all the location of tiles in the main tile.png

    //since all of the sizes are the same size we will do this all together to save space
    for (uchar i = 0; i < DEFINED_NUM_OF_TILES; i++) {
        Textures::clips[i].w = Textures::clips[i].h = Global::pic_size;
    }

/*     The Picture Coordinates (x,y)
 *     we multiply this by the pic size to get the clip
 *     +-----+-----+-----+-----+
 *     |(0,0)|(1,0)|(2,0)|(3,0)|
 *     +-----+-----+-----+-----+
 *     |(0,1)|(1,1)|(2,1)|(3,1)|
 *     +-----+-----+-----+-----+
 *     |(0,2)|(1,2)|(2,2)|(3,2)|
 *     +-----+-----+-----+-----+
 */

    //First row, Coin, Monster, Player, Frame
    Textures::clips[tileCoin].x = 0 * Global::pic_size;
    Textures::clips[tileCoin].y = 0 * Global::pic_size;

    Textures::clips[tileMonster].x = 1 * Global::pic_size;
    Textures::clips[tileMonster].y = 0 * Global::pic_size;

    Textures::clips[tilePlayer].x = 2 * Global::pic_size;
    Textures::clips[tilePlayer].y = 0 * Global::pic_size;

    Textures::clips[menuFrame].x = 3 * Global::pic_size;
    Textures::clips[menuFrame].y = 0 * Global::pic_size;

    //Second Row, Wall, sky, pole, error
    Textures::clips[tileWall].x = 0 * Global::pic_size;
    Textures::clips[tileWall].y = 1 * Global::pic_size;

    Textures::clips[tileSpace].x = 1 * Global::pic_size;
    Textures::clips[tileSpace].y = 1 * Global::pic_size;

    Textures::clips[tilePole].x = 2 * Global::pic_size;
    Textures::clips[tilePole].y = 1 * Global::pic_size;

    Textures::clips[menuError].x = 3 * Global::pic_size;
    Textures::clips[menuError].y = 1 * Global::pic_size;

    //Third Row, Save, Close, Left and Right
    Textures::clips[menuSave].x = 0 * Global::pic_size;
    Textures::clips[menuSave].y = 2 * Global::pic_size;

    Textures::clips[menuClose].x = 1 * Global::pic_size;
    Textures::clips[menuClose].y = 2 * Global::pic_size;

    Textures::clips[menuLeft].x = 2 * Global::pic_size;
    Textures::clips[menuLeft].y = 2 * Global::pic_size;

    Textures::clips[menuRight].x = 3 * Global::pic_size;
    Textures::clips[menuRight].y = 2 * Global::pic_size;

    if (Global::blnDebugMode) {printf("Clips made.\n");}
}
/**********************************************************************************************************************************************/
void Textures::load() {
    //Load tiles
    SDL_Surface* temp = IMG_ReadXPMFromArray(image_tiles_xpm);

    if (temp == nullptr) {
        printf("Failed to load embedded tiles.\n");
        Screen::error();
        return;
	} else {
	    if (Global::blnDebugMode) {printf("Map tiles surface created.\n");}
    }

	Textures::tilemap = SDL_CreateTextureFromSurface(Screen::window.ren,temp);
	if (Textures::tilemap == nullptr) {
        printf("Failed to create texture.\n");
        Screen::error();
        return;
	} else {
	    if (Global::blnDebugMode) {printf("Surface to texture successful\n");}
	    Screen::blnload.blnTiles = true;
    }

    //Load toolbox frame
    temp = IMG_ReadXPMFromArray(image_toolbox_frame_xpm);

    if (temp == nullptr) {
        printf("Failed to load embedded toolbar frame.\n");
        Screen::error();
        return;
	} else {
	    if (Global::blnDebugMode) {printf("Toolbar surface created.\n");}
    }

	Textures::toolboxframe = SDL_CreateTextureFromSurface(Screen::window.ren,temp);
	if (Textures::toolboxframe == nullptr) {
        printf("Failed to create texture.\n");
        Screen::error();
        return;
	} else {
	    if (Global::blnDebugMode) {printf("Surface to texture successful\n");}
	    Screen::blnload.blnToolboxFrame = true;
    }

    SDL_FreeSurface(temp);
}
/**********************************************************************************************************************************************/
void Screen::start() {
/* TODO (Gamerman7799 the Scrub#1#): More Comments Required to continue window32 Folder*/
    Screen::window.width = 35 * Global::pic_size;
    Screen::window.height = 14 * Global::pic_size;
    Screen::blnload.blnMessage = Screen::blnload.blnMessageFont = Screen::blnload.blnTiles = Screen::blnload.blnToolboxFrame = false;
    Screen::blnload.blnWindow = Screen::blnload.blnRenderer = Screen::bln_SDL_Started = false;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        Screen::error();
        return;
    } else {
        Screen::bln_SDL_Started = true;
        if (Global::blnDebugMode) {printf("SDL init successful\n");}
    }

    //Start TTF
    if (TTF_Init() != 0) {
        Screen::error();
        return;
    } else {
        if (Global::blnDebugMode) {printf("TTF init successful\n");}
    }

    //Start Image (with only png)
    /*if (!(IMG_Init( IMG_INIT_PNG )) & IMG_INIT_PNG) {
        Screen::error();
        return;
    } else {
        if (Global::blnDebugMode) {printf("IMG init successful\n");}
    }*/

    Screen::window.MessageFont = TTF_OpenFont(DEFINED_MESSAGE_FONT,16); //Opens font and sets size
    if ( Screen::window.MessageFont == nullptr) {
        printf("Font failed to load, messages will not appear.");
        Screen::blnload.blnMessageFont = false;
    } else {
        if(Global::blnDebugMode) {printf("Message font created\n");}
       Screen::blnload.blnMessageFont = true;
    }

    Screen::window.win = SDL_CreateWindow("Map Maker", 100, 100, Screen::window.width, Screen::window.height, SDL_WINDOW_SHOWN);
    if (Screen::window.win == nullptr) {
        printf("SDL Failed to create window.\n");
        Screen::error();
        return;
    } else {
        Screen::blnload.blnWindow = true;
        if (Global::blnDebugMode) {printf("Window creation successful\n");}
    }

    Screen::window.ren = SDL_CreateRenderer(Screen::window.win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (Screen::window.ren == nullptr) {
        printf("SDL Failed to create renderer.\n");
        Screen::error();
        return;
    } else {
        Screen::blnload.blnRenderer = true;
        if (Global::blnDebugMode) {printf("Renderer creation successful\n");}
    }

    Textures::load();
    if (Screen::bln_SDL_Started == false) {return;}

    Screen::colors.Black = {0, 0, 0, 0};
    //This causes an error for some reason.
    //Screen::colors.White = (255, 255, 255, 0);
}
/**********************************************************************************************************************************************/
void Screen::cleanup() {
    if (Screen::blnload.blnMessage) {
        SDL_DestroyTexture(Textures::texmessage);
        Screen::blnload.blnMessage = false;
        if(Global::blnDebugMode) {printf("Message texture destroyed.\n");}
    }

    if (Screen::blnload.blnTiles) {
        SDL_DestroyTexture(Textures::tilemap);
        Screen::blnload.blnTiles = false;
        if(Global::blnDebugMode) {printf("Map tile texture destroyed.\n");}
    }

    if (Screen::blnload.blnToolboxFrame) {
        SDL_DestroyTexture(Textures::toolboxframe);
        Screen::blnload.blnToolboxFrame = false;
        if(Global::blnDebugMode) {printf("Map tile texture destroyed.\n");}
    }

    if (Screen::blnload.blnMessageFont) {
        TTF_CloseFont(Screen::window.MessageFont);
        Screen::blnload.blnMessageFont = false;
        if(Global::blnDebugMode) {printf("Message font destroyed.\n");}
    }

    if (Screen::blnload.blnRenderer) {
        SDL_DestroyRenderer(Screen::window.ren);
        Screen::blnload.blnRenderer = false;
        if (Global::blnDebugMode) {printf("Renderer destroyed\n");}
    }

	if (Screen::blnload.blnWindow) {
        SDL_DestroyWindow(Screen::window.win);
        Screen::blnload.blnWindow = false;
        if (Global::blnDebugMode) {printf("Window destroyed\n");}
    }

    TTF_Quit();
    //IMG_Quit();
    SDL_Quit();
    if (Global::blnDebugMode) {printf("SDL quit\n");}
}
/**********************************************************************************************************************************************/
void Screen::error() {
    Screen::bln_SDL_Started = false;
    printf("SDL error: %s\n", SDL_GetError());
    printf("TTF error: %s\n", TTF_GetError());
    //printf("IMG error: %s\n", IMG_GetError());
    getchar();
    Screen::cleanup();
}
/**********************************************************************************************************************************************/
void Screen::show() {
    //Clear renderer
    SDL_RenderClear(Screen::window.ren);
    //copy sky to cover entire screen.
    SDL_RenderCopy(Screen::window.ren, Textures::tilemap, &Textures::clips[tileSpace], NULL);
    SDL_Rect dst;
    dst.h = dst.w = Global::pic_size;
    //Do a few checks on the offset so we aren't accessing a non-existing part of the map array.
/* TODO (Gamerman7799 the Scrub#1#): Get rid of modoffset and replace with just normal offset






JUST DO IT! */

    if (Screen::offset.y < 0) {Screen::modoffset.y = 0;}
    else if (Screen::offset.y > (DEFINED_MAP_HEIGHT * Global::pic_size) - Screen::window.height) {Screen::modoffset.y = (DEFINED_MAP_HEIGHT * Global::pic_size) - Screen::window.height;}
    else {Screen::modoffset.y = Screen::offset.y;}

    if (Screen::offset.x < 0) {Screen::modoffset.x = 0;}
    else if (Screen::offset.x > (DEFINED_MAP_WIDTH * Global::pic_size) - Screen::window.width) {Screen::modoffset.x = (DEFINED_MAP_WIDTH * Global::pic_size) - Screen::window.width;}
    else {Screen::modoffset.x = Screen::offset.x;}

    for (uint y = 0; (y < DEFINED_MAP_HEIGHT); y++) {
        for (uint x = 0; (x < DEFINED_MAP_WIDTH); x++) {
            //update where we're trying to put the texture.
            dst.x = (x * Global::pic_size) - Screen::modoffset.x;
            dst.y = (y * Global::pic_size) - Screen::modoffset.y;

            switch (Global::map[y][x]) { //Use this to make sure we aren't try to load a non-existing part
            case tileCoin:
            case tileMonster:
            case tilePlayer:
            case tilePole:
            case tileSpace:
            case tileWall:
                SDL_RenderCopy(Screen::window.ren, Textures::tilemap, &Textures::clips[Global::map[y][x]], &dst);
                break;
            default:
                SDL_RenderCopy(Screen::window.ren, Textures::tilemap, &Textures::clips[menuError], &dst);
                break;
            } //end switch
        } //end for x
    } //end for y

    Toolbar::draw();
    SDL_RenderPresent(Screen::window.ren);
}
/**********************************************************************************************************************************************/
char Screen::promptuser(uchar prompttype, std::string message) {
    //Prompt the user for something, prompt the user for something.
    //returns what they say.

    //Clear the Renderer
    SDL_RenderClear(Screen::window.ren);

    //Copy the sky
    SDL_RenderCopy(Screen::window.ren, Textures::tilemap, &Textures::clips[tileSpace], NULL);

    SDL_Surface* surmessage = TTF_RenderText_Solid(Screen::window.MessageFont, message.c_str(), Screen::colors.Black);
    if (surmessage == nullptr) {
            Screen::error();
            return 'F';
    }

    SDL_Rect dst;

    Textures::texmessage = SDL_CreateTextureFromSurface(Screen::window.ren, surmessage);
    if (Textures::texmessage == nullptr) {
        Screen::error();
        return 'F';
    } else {Screen::blnload.blnMessage = true;}

    SDL_QueryTexture(Textures::texmessage, NULL, NULL, &dst.w, &dst.h);
    //figure out x and y so that message is in the middle

    dst.x = (uint) ((Screen::window.width / 2) - (dst.w / 2));
    dst.y = (uint) ((Screen::window.height / 2) - (dst.h / 2));

    SDL_RenderCopy(Screen::window.ren, Textures::texmessage, NULL, &dst);

    std::string message2;

    switch (prompttype) {
    case promptYesNo:
        message2 = "Please hit Y for yes, or N for no.";
        break;
    case promptOkay:
        message2 = "Please hit any button to close.";
        break;
    default :
        message2 = " ";
        break;
    }

    surmessage = TTF_RenderText_Solid(Screen::window.MessageFont, message2.c_str(), Screen::colors.Black);
    if (surmessage == nullptr) {
            Screen::error();
            return 'F';
    }

    Textures::texmessage = SDL_CreateTextureFromSurface(Screen::window.ren, surmessage);
    if (Textures::texmessage == nullptr) {
        Screen::error();
        return 'F';
    } else {Screen::blnload.blnMessage = true;}

    SDL_QueryTexture(Textures::texmessage, NULL, NULL, &dst.w, &dst.h);
    //figure out x and y so that message is in the middle, but below the first message
    dst.x = (uint) ((Screen::window.width / 2) - (dst.w / 2));
    dst.y = (uint) ((Screen::window.height / 2) + (dst.h / 2));

    SDL_RenderCopy(Screen::window.ren, Textures::texmessage, NULL, &dst);

    bool blnStopLoop = false;
    char keyPress;
    SDL_Event event;

    //Start looping while wait for a response.
    do {
        SDL_RenderPresent(Screen::window.ren);
        if (SDL_PollEvent( &event ) ) {
            if (event.type == SDL_QUIT) {
                //player wants to quit leave the loop
                keyPress = 'N';
                blnStopLoop = true;
            } else if (event.type == SDL_KEYDOWN) {
                switch (prompttype) {
                case promptOkay:
                    keyPress = 'O';
                    blnStopLoop = true;
                    break;
                case promptYesNo:
                    switch (event.key.keysym.sym) {
                    case SDLK_y:
                        keyPress = 'Y';
                        blnStopLoop = true;
                        break;
                    case SDLK_n:
                        keyPress = 'N';
                        blnStopLoop = true;
                        break;
                    } //end switch key
                }//end switch prompt type
            } // end if event type
        } //end if poll event
    } while (blnStopLoop == false);
    return keyPress;
}
/**********************************************************************************************************************************************/
void Toolbar::make_buttons() {
    uint centerx; //center of the toolbox
    centerx = (uint)(Screen::window.width / 2);
	//FIXME weird space in toolbar
    //Calculate all the places, the tool box frame has a 2 px wide border all the way around.
    for (uchar i = 0; i < DEFINED_NUM_BUTN_TILES; i++) {
        Toolbar::button_xplaces[i] = centerx - ( ( 2 - i ) * 4 ) - ( ( 2 - i ) * Global::pic_size );
        //if (i <= 2 ) {xplaces[i] -= 2;}
        //else {xplaces[i] += 2;}
    }

    for (uchar i = 0; i < DEFINED_NUM_BUTN_TILES; i++) {
        Toolbar::tilebuttons[i].buttontype = i;
        Toolbar::tilebuttons[i].clip = &Textures::clips[i];
        Toolbar::tilebuttons[i].box.w = Toolbar::tilebuttons[i].box.h = Global::pic_size;
        Toolbar::tilebuttons[i].box.y = 2;
        Toolbar::tilebuttons[i].box.x = Toolbar::button_xplaces[i];
    }
}
/**********************************************************************************************************************************************/
void Toolbar::draw() {

    //draw toolbox frame
    SDL_Rect dst;
    dst.w = dst.h = Global::pic_size + 4;
    dst.y = 0;
    for (uchar i = 0; i < DEFINED_NUM_BUTN_TILES; i++) {
        dst.x = Toolbar::button_xplaces[i] - 2;
        SDL_RenderCopy(Screen::window.ren, Textures::toolboxframe, NULL, &dst);
    }

    //Show all the buttons
    for (uchar i = 0; i < DEFINED_NUM_BUTN_TILES; i++) {
        SDL_RenderCopy(Screen::window.ren, Textures::tilemap, Toolbar::tilebuttons[i].clip, &Toolbar::tilebuttons[i].box);
        if (Toolbar::tilebuttons[i].buttontype == paintbrush.CurrentTile) {
            SDL_RenderCopy(Screen::window.ren, Textures::tilemap, &Textures::clips[menuFrame] , &Toolbar::tilebuttons[i].box);
        }
    }
}
/**********************************************************************************************************************************************/
void Toolbar::check_events(SDL_Event* e) {
    static bool blnButtonDown;
    if (e->type == SDL_MOUSEBUTTONUP) {blnButtonDown = false;}
    if ( e->type == SDL_MOUSEBUTTONDOWN || blnButtonDown) {
        blnButtonDown = true;
        //get Mouse position
        int x, y;
        SDL_GetMouseState(&x, &y);

        //check all of the buttons to see if we are on that one.

        for (uchar i = 0; i < DEFINED_NUM_BUTN_TILES; i++) {
            if ( x >= Toolbar::tilebuttons[i].box.x && x <= Toolbar::tilebuttons[i].box.x + Toolbar::tilebuttons[i].box.w ) { //In the x range
                if ( y >= Toolbar::tilebuttons[i].box.y && y <= Toolbar::tilebuttons[i].box.y + Toolbar::tilebuttons[i].box.h) { //in the y range
                    paintbrush.CurrentTile = Toolbar::tilebuttons[i].buttontype;
                } //end if in y
            } // end if in x
        } // end for buttons


        //user did not click on any buttons therefore change the map tile.
        //convert to map coordinates
        uint mapx, mapy;
        /* TODO (GamerMan7799#1#): Add drag ability */
        mapx = (uint) ( (x + Screen::modoffset.x) / Global::pic_size);
        mapy = (uint) ( (y + Screen::modoffset.y) / Global::pic_size);

        Global::map[mapy][mapx] = paintbrush.CurrentTile;
    } else if (e->type == SDL_KEYDOWN) {

        switch( e->key.keysym.sym) {
        //All of the directional cases
        case SDLK_UP:
        case SDLK_w:
            Screen::offset.y -= Global::pic_size;
            break;
        case SDLK_DOWN:
        case SDLK_s:
            Screen::offset.y += Global::pic_size;
            break;
        case SDLK_RIGHT:
        case SDLK_d:
            Screen::offset.x += Global::pic_size;
            break;
        case SDLK_LEFT:
        case SDLK_a:
            Screen::offset.x -= Global::pic_size;
            break;
        case SDLK_HOME:
            Screen::offset.x = Screen::offset.y = 0;
            break;
        case SDLK_END:
            Screen::offset.x = (DEFINED_MAP_WIDTH * Global::pic_size) - Screen::window.width;
            break;
        case SDLK_PAGEDOWN:
            Screen::offset.x -= Screen::window.width;
            break;
        case SDLK_PAGEUP:
            Screen::offset.x += Screen::window.width;
            break;

        //Quiting cases
        case SDLK_q:
        case SDLK_ESCAPE:
            //change the event type to be a quit.
            if (Screen::promptuser(promptYesNo, "Do you really want to quit?") == 'Y') {
                e->type = SDL_QUIT;
                return;
            }
            break;

        //Menu cases
        case SDLK_v:
            Map::save();
            break;
        case SDLK_n:
            Map::newmap();
            break;
        case SDLK_l:
            Map::load();
            break;
        //Switch tile
        case SDLK_1:
            Toolbar::paintbrush.CurrentTile = tileSpace;
            break;
        case SDLK_2:
            Toolbar::paintbrush.CurrentTile = tileWall;
            break;
        case SDLK_3:
            Toolbar::paintbrush.CurrentTile = tilePlayer;
            break;
        case SDLK_4:
            Toolbar::paintbrush.CurrentTile = tilePole;
            break;
        case SDLK_5:
            Toolbar::paintbrush.CurrentTile = tileMonster;
            break;
        case SDLK_6:
            Toolbar::paintbrush.CurrentTile = tileCoin;
            break;
        } //end switch
    } //end if event type
}
/**********************************************************************************************************************************************/
void Map::save() {
    FILE* savemap;
    savemap = fopen("map.sav", "r");
    if (savemap == NULL) {
        // save does not exist make a new one.
        if (Global::blnDebugMode) {printf("No save found.\n");}
        savemap = fopen("map.sav","w");
        for (uint y = 0; y < DEFINED_MAP_HEIGHT; y++) {
            for (uint x = 0; x < DEFINED_MAP_WIDTH; x++) {
                fprintf(savemap,"%u ", Global::map[y][x]);
            } //end for x
            fprintf(savemap, "\n");
        } //end for y
    } else {
        if (Global::blnDebugMode) {printf("Save found.\n");}
        fclose(savemap);
        if (Screen::promptuser(promptYesNo, "Save already exists, would you like to overwrite?") == 'Y') {
            if (Global::blnDebugMode) {printf("Overwrite save.\n");}
            for (uint y = 0; y < DEFINED_MAP_HEIGHT; y++) {
                for (uint x = 0; x < DEFINED_MAP_WIDTH; x++) {
                    fprintf(savemap,"%u ", Global::map[y][x]);
                } //end for x
                fprintf(savemap, "\n");
            } //end for y
        } else {
            if (Global::blnDebugMode) {printf("Do not overwrite\n");}
        } //end if y or n
    } //end if exists
}
/**********************************************************************************************************************************************/
void Map::load() {
    //Load map
}
/**********************************************************************************************************************************************/
void Map::newmap() {
    //New map; completely blank
    if (Screen::promptuser(promptYesNo, "Do you really want to completely blank the map?") == 'Y') {
        for (uint y = 0; y < DEFINED_MAP_HEIGHT; y++) {
            for (uint x = 0; x < DEFINED_MAP_WIDTH; x++) {
                Global::map[y][x] = tileSpace;
            } //end for xh
        } //end for y
    } //end if yes
}
/**********************************************************************************************************************************************/
