#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
	/*static void onModify(auto& self) {
        	self.setHookPriority("MenuLayer::init", 6099);
    	}*/
	bool init() {
		if (!MenuLayer::init()) 
      			return false;

		if (!Mod::get()->getSettingValue<bool>("mod-enabled"))
			return true;
		
		auto mainMenuButtons = this->getChildByID("main-menu");
		auto button = mainMenuButtons->getChildByID("icon-kit-button");
		
		button->setVisible(false);

		return true;
	} 
};
