#include "LauncherApplication.hpp"

#include <switch.h>

bool main_appInitSuccess = false;

extern "C" void userAppInit()
{
}

extern "C" void userAppExit()
{
}

// Main entrypoint
int main()
{
    auto renderer = pu::ui::render::Renderer::New(pu::ui::render::RendererInitOptions(SDL_INIT_EVERYTHING, pu::ui::render::RendererHardwareFlags).WithIMG(pu::ui::render::IMGAllFlags).WithMixer(pu::ui::render::MixerAllFlags).WithTTF());

    auto main = LauncherApplication::New(renderer);
    main->Prepare();
    main->ShowWithFadeIn();

    return 0;
}
