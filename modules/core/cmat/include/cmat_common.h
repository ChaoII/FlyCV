// Copyright (c) 2022 FlyCV Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#pragma once

#include "modules/core/mat/interface/mat.h"
#include "modules/core/cmat/interface/cmat.h"

int cmat_to_mat(CMat* src, g_fcv_ns::Mat& dst);

int mat_to_cmat(g_fcv_ns::Mat& src, CMat* dst);