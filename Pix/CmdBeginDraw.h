#pragma once
#include "Command.h"
class CmdBeginDraw : public Command
{
public:
    const char* GetName() override
    {
        return "BeginDraw";
    }
    const char* GetDescription() override
    {
        return "BeginDraw(topology)\n"
            "\n"
            "- Starts storing vertices\n"
            "- Stores topology (point, line, triangle)";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

