#include "appdata_iface.h"

#include <type_traits>

#include "module_a_settings.h"
#include "module_b_settings.h"

namespace Appdata {

struct AppdataImpl 
    : public AppdataInterface
    , public SettingsA
    , public SettingsB 
{};

std::shared_ptr<AppdataInterface> Create() {
    return std::make_shared<AppdataImpl>();
}

#define DEFINE_SETTINGS(SETTING)                                    \
static_assert(std::is_convertible<AppdataImpl*, SETTING*>::value,   \
    "AppdataImpl should be derived from " #SETTING);                \
template <>                                                         \
SETTING& AppdataInterface::Extract<SETTING>() {                     \
    return *static_cast<AppdataImpl*>(this);                        \
}                                                                   \

DEFINE_SETTINGS(SettingsA);
DEFINE_SETTINGS(SettingsB);

struct err {};

DEFINE_SETTINGS(err);

} // namespace Appdata
