#ifndef APPS_H
#define APPS_H

#include "../driver/keyboard.h"

typedef enum {
  APP_TASK_MANAGER,
  APP_SPECTRUM,
  APP_STILL,
  APP_FINPUT,
  APP_MAINMENU,
  APP_RESET,
  APP_TEXTINPUT,
  APP_VFO_CFG,
  APP_SAVECH,
  APP_SETTINGS,
  // APP_SCANLIST,
  // APP_AB_SCANNER,
} AppType_t;

typedef struct App {
  const char *name;
  void (*init)(void);
  void (*update)(void);
  void (*render)(void);
  bool (*key)(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld);
} App;

extern const App apps[10];
extern AppType_t gPreviousApp;
extern AppType_t gCurrentApp;

bool APPS_key(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld);
void APPS_init(AppType_t app);
void APPS_update(void);
void APPS_render(void);
void APPS_run(AppType_t app);

#endif /* end of include guard: APPS_H */