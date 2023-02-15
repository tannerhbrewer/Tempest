#pragma once

#include "Walnut/Application.h"

class Server : public Walnut::Layer
{
public:
	virtual void OnUIRender() override
	{
		ImGui::Begin("Messaging");

		ImGui::Text("This is the server layer.");

		ImGui::End();
	}
};