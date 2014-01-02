#include "../include/HelloPolycodeApp.h"

HelloPolycodeApp::HelloPolycodeApp(PolycodeView *view) : EventHandler() {

	core = new SDLCore(view, 640,480,false,false,0,0,90);	  

	CoreServices::getInstance()->getResourceManager()->addArchive("default.pak");
	CoreServices::getInstance()->getResourceManager()->addDirResource("default", false);

	//CoreServices::getInstance()->getFontManager()->registerFont("Script", "LeagueScripts.otf");

	Screen *screen = new Screen();
	//ScreenLabel *label = new ScreenLabel("Hello, Polycode!", 32, "Script");
	ScreenLabel *label = new ScreenLabel("Hello, Polycode!", 32);
	screen->addChild(label);

	puck = new ScreenImage("../assets/img/PuckNorm.png");
	screen->addChild(puck);
}

HelloPolycodeApp::~HelloPolycodeApp() {

}

bool HelloPolycodeApp::Update() {
    puck->setPosition(puck->getPosition2D().x + 1, puck->getPosition2D().y);

    return core->updateAndRender();
}
