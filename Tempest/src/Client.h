#pragma once

#include "Walnut/Application.h"

class Client : public Walnut::Layer
{
public:
	virtual void OnUIRender() override
	{
		ImGui::Begin("Messaging");

		ImGui::Text("This is the client layer.");

		ImGui::End();
	}
};