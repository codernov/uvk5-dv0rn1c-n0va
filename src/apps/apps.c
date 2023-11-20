#include "apps.h"
#include "../driver/st7565.h"
#include "../ui/helper.h"
#include "finput.h"
#include "mainmenu.h"
#include "reset.h"
#include "savech.h"
#include "settings.h"
#include "spectrumreborn.h"
#include "still.h"
#include "test.h"
#include "textinput.h"
#include "vfocfg.h"

AppType_t gPreviousApp = APP_SPECTRUM;
AppType_t gCurrentApp = APP_SPECTRUM;

const App apps[10] = {
    {"Test", TEST_Init, TEST_Update, TEST_Render, TEST_key},
    {"Spectrum", SPECTRUM_init, SPECTRUM_update, SPECTRUM_render, SPECTRUM_key},
    {"Still", STILL_init, STILL_update, STILL_render, STILL_key},
    {"Frequency input", FINPUT_init, NULL, FINPUT_render, FINPUT_key},
    {"Main menu", MAINMENU_init, NULL, MAINMENU_render, MAINMENU_key},
    {"Reset", RESET_Init, RESET_Update, RESET_Render, RESET_key},
    {"Text input", TEXTINPUT_init, TEXTINPUT_update, TEXTINPUT_render,
     TEXTINPUT_key},
    {"VFO config", VFOCFG_init, VFOCFG_update, VFOCFG_render, VFOCFG_key},
    {"Save to channel", SAVECH_init, SAVECH_update, SAVECH_render, SAVECH_key},
    {"Settings", SETTINGS_init, SETTINGS_update, SETTINGS_render, SETTINGS_key},
    // {"Scanlist", NULL, SCANLIST_update, SCANLIST_render, SCANLIST_key},
    /* {"A to B scanner", ABSCANNER_init, ABSCANNER_update, ABSCANNER_render,
     ABSCANNER_key}, */

};

bool APPS_key(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld) {
  if (apps[gCurrentApp].key) {
    return apps[gCurrentApp].key(Key, bKeyPressed, bKeyHeld);
  }
  return false;
}
void APPS_init(AppType_t app) {
  UI_ClearScreen();
  UI_PrintStringSmallest(apps[gCurrentApp].name, 0, 0, true, true);
  if (apps[app].init) {
    apps[app].init();
  }
  APPS_render();
  gRedrawStatus = true;
  gRedrawScreen = true;
}
void APPS_update(void) {
  if (apps[gCurrentApp].update) {
    apps[gCurrentApp].update();
  }
}
void APPS_render(void) {
  if (apps[gCurrentApp].render) {
    apps[gCurrentApp].render();
  }
}
void APPS_run(AppType_t app) {
  if (gPreviousApp != app) {
    gPreviousApp = gCurrentApp;
  }
  APPS_init(app);
  gCurrentApp = app;
}