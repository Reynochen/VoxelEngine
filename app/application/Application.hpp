#ifndef APPLICATION
#define APPLICATION

class Application
{
    void updateDraw();
    
public:
    Application(/* args */);
    ~Application();
    
    void run();
};

Application* CreateApllication();

#endif