#pragma once

#include <pu/Plutonium>

class CustomLayout : public pu::ui::Layout
{
    public:
        CustomLayout();
        PU_SMART_CTOR(CustomLayout)

    private:
        pu::ui::elm::TextBlock::Ref helloText;
};

class LauncherApplication : public pu::ui::Application
{
    public:
        using Application::Application;
        PU_SMART_CTOR(LauncherApplication)

        void OnLoad() override;

    private:
        CustomLayout::Ref layout;
};
