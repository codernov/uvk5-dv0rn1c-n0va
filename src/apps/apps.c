#include "apps.h"
#include "spectrum.h"
#include "test.h"

AppType_t currentApp = APP_TEST;

const App apps[5] = {
    {"Test", TEST_Init, TEST_Update, TEST_Render, TEST_Key},
    {"Spectrum", SPECTRUM_init, SPECTRUM_update, SPECTRUM_render, SPECTRUM_key},
    /* {"Scanlist", NULL, SCANLIST_update, SCANLIST_render, SCANLIST_key},
    {"A to B scanner", ABSCANNER_init, ABSCANNER_update, ABSCANNER_render,
     ABSCANNER_key}, */
};

void APPS_key(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld) {
  if (apps[currentApp].key) {
    apps[currentApp].key(Key, bKeyPressed, bKeyHeld);
  }
}
void APPS_init(void) {
  if (apps[currentApp].init) {
    apps[currentApp].init();
  }
}
void APPS_update(void) {
  if (apps[currentApp].update) {
    apps[currentApp].update();
  }
}
void APPS_render(void) {
  if (apps[currentApp].render) {
    apps[currentApp].render();
  }
}
void APPS_run(AppType_t app) {
  currentApp = app;
  APPS_init();
}
