# Platformer Map Editor - ARCHIVED

## Status

This project is archive and will no longer be updated. The code has been merged into [Experimental-Platformer-Ai](https://github.com/GamerMan7799/Experimental-Platformer-AI), the program this one was built for, starting with version 6.0.0.

## Introduction

This is a map editor / maker that is meant to be used with my other project the experimental platformer Ai which you can find [here](https://github.com/GamerMan7799/Experimental-Platformer-AI)

## License and copyright

All of this project was written from scratch by [GamerMan7799] (https://github.com/GamerMan7799) & [xPUREx](https://github.com/xPUREx) unless otherwise noted.

That being said all parts of this project we own have been released to the Public Domain. (This does not apply to parts that were noted as being someone else's).

As such you may use any and/or all of this project however you wish; Commercially or not; modify it or not. You do not even have to give credit (though we would greatly appreciate it if you did).

You can read more about the Public Domain Dedication [Here](http://unlicense.org/).

This project uses libraries created by other individuals. Each one of course has a license by their own owner, these can be found under Documentation/Library Licenses.
Please read these licenses before you decide to distribute any copies of this project.

## Questions, patches, and other feedback

We are pretty novice programmers at best. Part of the reason we made this was to improve our skills. And part of the reason we made it open source is to get feedback.

We are always open to people contributing to the project by giving suggestions, or helping us with improvements.

## Building the Project

### SDL Library

In order to run the program properly you will need to download SDL2-2.0.3 or higher.
You will also need SDL2 TTF library, and SDL2 Images library

A link for SDL2 can be found [here] (https://www.libsdl.org/download-2.0.php).

A link for SDL2 TTF can be found [here] (https://www.libsdl.org/projects/SDL_ttf/).

A link for SDL2 Images can be found [here] (https://www.libsdl.org/projects/SDL_image/).

You will want to download the Runtime Binaries (if you have windows I recommend 32 bit over 64 bit; even if you have a 64 bit computer).

If you are running the version in the release tab you WILL need the 32 bit version because that it how I compile it.

I have also included copies of the 32 bit Runtime binaries in the releases. You can just download these if you don't know what you're doing and you're on Windows.

When all is said and done you should have the following files in your folder. (Also note that you should be able to put the dll files in your C drive).

```
FolderName\
FolderName\MapMaker.exe
FolderName\SDL2.dll
FolderName\SDL2_ttf.dll
FolderName\SDL2_image.dll
FolderName\libfreetype-6.dll
FolderName\zlib1.dll
FolderName\libpng16-16.dll
```

### Windows

You can download the .exe under the Releases Tab you will need the SDL2 runtime binaries (see above).

### Linux

You should be able to use the Makefile to compile the program. You will also need the SDL library which you can use by enter the following code into your terminal, or downloading from the link above.

Ubuntu, Mint, or Debian

```
sudo apt-get install libsdl2-dev
sudo apt-get install libsdl2-ttf-dev
sudo apt-get install libsdl2-image-dev
```

### IOSX

I don't know you're on your own. Sorry.

## Using the Project

You select what you want to draw with by selecting it from the toolbar on the top.

Then you simply click on the tiles you want to change.

Please note there there can only be one player and there has to be a player. There are no checks at the moment to see if it is valid.

You can change your position on the map using the arrow keys.

HOME or END will take you to the start or end of the map

Page Up and Page down will move you one screen's width at a time.

You can use the number keys (1-6) to switch your tile for painting. (You can also just click on the tile).

Q, ESC, or Hitting the X on the window will close the program.

N will wipe the map (you will be promted)

V to save the map (you will be prompted if one already exists)
