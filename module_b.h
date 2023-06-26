#pragma once

#include <string>

#include "appdata_iface.h"

namespace B {

std::string Extract(const std::shared_ptr<Appdata::AppdataInterface>& appdata);

} // namespace B
