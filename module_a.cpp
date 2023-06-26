#include "module_a.h"
#include "module_a_settings.h"

namespace A {

std::string Extract(const std::shared_ptr<Appdata::AppdataInterface>& appdata) {
    return std::to_string(appdata->Extract<SettingsA>().b);
}

} // namespace A
