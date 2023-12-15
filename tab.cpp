// define these outside of the function you have the tabs under
// определите их вне функции, под которой у вас есть вкладки
int currentTab = 0;
const char* TabList[] = { "Aim", "Visual", "Misc" };
int numTabs = sizeof(TabList) / sizeof(TabList[0]);

// main tab system
// система основных вкладок
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
switch (currentTab)
{
case 0:
    ImGui::Text("Aim");
    break;

case 1:
    ImGui::Text("Visual");
    break;

case 2:
    ImGui::Text("Misc");
    break;
}
