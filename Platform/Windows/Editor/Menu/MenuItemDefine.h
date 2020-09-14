
#define DEF_MENU_OPTION(n,id) static int Menu_Option_##n=id;
DEF_MENU_OPTION(Window_Animation, 1)
DEF_MENU_OPTION(Window_Animator,2)
DEF_MENU_OPTION(Window_Atlas, 3)
DEF_MENU_OPTION(Window_Profiler, 4)
DEF_MENU_OPTION(Window_Physics, 5)

DEF_MENU_OPTION(File_NewProject, 100)
DEF_MENU_OPTION(File_OpenProject, 101)
DEF_MENU_OPTION(File_Build, 102)
DEF_MENU_OPTION(File_Exit, 103)
DEF_MENU_OPTION(File_SaveCurrentScene, 104)
DEF_MENU_OPTION(File_NewScene, 105)
DEF_MENU_OPTION(Edit_Duplicate, 200)
DEF_MENU_OPTION(Edit_Undo, 201)

DEF_MENU_OPTION(Component_ImageSprite, 300)
DEF_MENU_OPTION(Component_Camera, 301)
DEF_MENU_OPTION(Component_Label, 302)
DEF_MENU_OPTION(Component_Animator, 303)
DEF_MENU_OPTION(Component_ImageSprite9, 304)
DEF_MENU_OPTION(Component_Button, 305)
DEF_MENU_OPTION(Component_Particle, 306)
DEF_MENU_OPTION(Component_AudioSource, 307)
DEF_MENU_OPTION(Component_AudioListener, 308)
DEF_MENU_OPTION(Component_Physic2DComponent, 309)