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
// See the License for the specific language governing permissions and
// limitations under the License.

#include "modules/img_calculation/connected_components/interface/connected_components_c.h"
#include "modules/img_calculation/connected_components/interface/connected_components.h"
#include "modules/core/cmat/include/cmat_common.h"

G_FCV_NAMESPACE1_BEGIN(g_fcv_ns)

int fcvConnectedComponents(
        CMat* src,
        CMat* labels,
        int connectivity,
        CFCVImageType type) {
    if (!checkCMat(src)) {
         LOG_ERR("The src is illegal, please check whether the attribute values ​​of src are correct");
         return -1;
    }

    if (!checkCMat(labels)) {
         LOG_ERR("The labels is illegal, please check whether the attribute values ​​of labels are correct");
         return -1;
    }

    Mat src_tmp;
    Mat labels_tmp;
    cmatToMat(src, src_tmp);
    cmatToMat(labels, labels_tmp);

    FCVImageType image_type = static_cast<FCVImageType>(type);

    return connected_components(src_tmp, labels_tmp, connectivity, image_type);
}

G_FCV_NAMESPACE1_END()