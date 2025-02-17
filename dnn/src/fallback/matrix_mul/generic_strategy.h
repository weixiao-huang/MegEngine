/**
 * \file dnn/src/fallback/matrix_mul/generic_strategy.h
 * MegEngine is Licensed under the Apache License, Version 2.0 (the "License")
 *
 * Copyright (c) 2014-2021 Megvii Inc. All rights reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT ARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */
#pragma once
#include "src/fallback/matrix_mul/gemm_common.h"

namespace megdnn {
namespace matmul {
namespace fallback {

MEGDNN_REG_GEMM_STRATEGY(float, float, float, 8, 12, 1, false, true, sgemm_8x12);

}  // namespace fallback
}  // namespace matmul
}  // namespace megdnn

// vim: syntax=cpp.doxygen
