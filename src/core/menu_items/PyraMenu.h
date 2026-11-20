
#ifndef __PYRA_MENU_H__
#define __PYRA_MENU_H__

#include <MenuItemInterface.h>

class PyraMenu : public MenuItemInterface {
public:
    PyraMenu() : MenuItemInterface("PYRA") {}

    void optionsMenu(void);
    void drawIcon(float scale);

    bool hasTheme() override { return false; }

    const String& themePath() override {
        static const String empty = "";
        return empty;
    }
};

#endif
