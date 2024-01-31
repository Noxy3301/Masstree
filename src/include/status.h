#pragma once

#include <cstdint>

enum class Status : std::int32_t {
    OK,
    WARN_ALREADY_EXISTS,
    WARN_CONCURRENT_DELETE,
    WARN_NOT_FOUND,
    ERROR_CONCURRENT_WRITE_OR_DELETE,
    ERROR_LOCK_FAILED,
    ERROR_PREEMPTIVE_ABORT,
    ERROR_NO_VISIBLE_VERSION,
    RETRY_FROM_UPPER_LAYER, // for Masstree
};