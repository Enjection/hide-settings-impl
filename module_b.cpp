#include "module_b.h"
#include "module_b_settings.h"

namespace B {

std::string Extract(const std::shared_ptr<Appdata::AppdataInterface>& appdata) {
    return std::to_string(appdata->Extract<SettingsB>().b);
}

} // namespace B
