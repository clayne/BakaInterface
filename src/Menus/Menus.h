#pragma once

#include "Menus/HUDMenuEx/HUDMenuEx.h"
#include "Menus/LevelUpMenu/LevelUpMenu.h"
#include "Menus/PipboyMenu/PipboyManager.h"

namespace Menus
{
	void InstallHooks()
	{
		LevelUpMenu::Install();
		PipboyManager::Install();
	}

	void Register()
	{
		if (const auto UI = RE::UI::GetSingleton(); UI)
		{
			// UI->RegisterMenu("HUDMenuEx", Menus::HUDMenuEx::Create);
		}
	}
}