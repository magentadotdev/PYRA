
#include "PyraMenu.h"

#include "core/display.h"
#include "core/utils.h"

void PyraMenu::optionsMenu() {
    options = {
        {"Python Terminal", []() {}},
        {"Run Script", []() {}},
        {"My Applications", []() {}},
        {"Script Manager", []() {}},
        {"About PYRA", []() {}},
    };

    addOptionToMainMenu();
    loopOptions(options, MENU_TYPE_SUBMENU, "PYRA");
}

void PyraMenu::drawIcon(float scale) {
    clearIconArea();

    int w = 48 * scale;
    int h = 38 * scale;

    // Terminal outline
    tft.drawRoundRect(
        iconCenterX - w / 2,
        iconCenterY - h / 2,
        w, h, 5, bruceConfig.priColor
    );

    // Terminal prompt
    tft.drawLine(
        iconCenterX - w / 4,
        iconCenterY - h / 8,
        iconCenterX - w / 8,
        iconCenterY,
        bruceConfig.priColor
    );

    tft.drawLine(
        iconCenterX - w / 8,
        iconCenterY,
        iconCenterX - w / 4,
        iconCenterY + h / 8,
        bruceConfig.priColor
    );

    // Cursor
    tft.drawLine(
        iconCenterX,
        iconCenterY + h / 8,
        iconCenterX + w / 4,
        iconCenterY + h / 8,
        bruceConfig.priColor
    );
}
