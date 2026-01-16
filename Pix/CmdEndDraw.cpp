#include "cmdEndDraw.h"
#include "PrimitivesManager.h"

bool cmdEndDraw::Execute(const std::vector<std::string>& params)
{
    return PrimitivesManager::Get()->EndDraw();
}
