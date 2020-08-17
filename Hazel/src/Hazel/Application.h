#pragma once

#include "Core.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		~Application();
		void Run();
	};

	//To bew defined in CLIENT
	Application* CreateApplication();
}

