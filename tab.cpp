
//define these outside of the function you have the tabs under
//определите их вне функции, в которой у вас есть вкладки
int currentTab = 0;
int numTabs = 3;
const char* TabList[] = { "Aim", "Visual", "Misc" };

//main tab system
//система основных вкладок
float TBS = ImGui::GetContentRegionAvail().x;
for (int i = 0; i < numTabs; i++)
{
	if (ImGui::Button(TabList[i], ImVec2(TBS / numTabs - 5.f, 30)))
		currentTab = i;

	if (i < 2)
		ImGui::SameLine();
}

// how to use 
// как использовать
if (currentTab == 0) { }
else if (currentTab == 1) { }
else if (currentTab == 2) { }
