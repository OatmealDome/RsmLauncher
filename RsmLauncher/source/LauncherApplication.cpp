#include "LauncherApplication.hpp"

#include <switch.h>

CustomLayout::CustomLayout() : Layout::Layout()
{
    this->helloText = pu::ui::elm::TextBlock::New(10, 10, "Hello, world!");
    this->Add(this->helloText);
}

void LauncherApplication::OnLoad()
{
    this->layout = CustomLayout::New();
    this->LoadLayout(this->layout);
}
