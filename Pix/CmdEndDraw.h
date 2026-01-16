#pragma once
#include "Command.h"
class cmdEndDraw : public Command
{
public:
    const char* GetName() override
    {
        return "EndDraw";
    }
    const char* GetDescription() override
    {
        return "EndDraw()\n"
            "\n"
            "- Sends the vertices to the rasterizer";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

