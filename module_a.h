#pragma once

#include <string>

#include "appdata_iface.h"

namespace A {

std::string Extract(const std::shared_ptr<Appdata::AppdataInterface>& appdata);

} // namespace A
