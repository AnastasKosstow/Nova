
#pragma once

#include "Application.h"

#ifdef NOVA_PLATFORM_WINDOWS

extern Nova::Application* Nova::Create();

int main() {

	auto app = Nova::Create();
	app->Run();
	delete app;
}
#endif // NOVA_PLATFORM_WINDOWS
