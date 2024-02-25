#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) 
      			return false;
		
		auto button = this->getChildByID("icon-kit-button");
		auto modEnabled = Mod::get()->getSettingValue<bool>("mod-enabled");
		
		if(modEnabled){
			button->setVisible(false);
		}

		return true;
	} 
};
