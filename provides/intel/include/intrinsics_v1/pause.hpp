#pragma once

#include "intrinsics_v1/synopsis.hpp"

#include <immintrin.h>

inline void intrinsics_v1::pause() { _mm_pause(); }
