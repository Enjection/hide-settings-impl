#pragma once

#include <memory>

namespace Appdata {

struct AppdataInterface {
    template <class Settings>
    Settings& Extract();
};

std::shared_ptr<AppdataInterface> Create();

} // namespace Appdata
