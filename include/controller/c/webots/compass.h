/*
 * Copyright 1996-2024 Cyberbotics Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**********************************************************************************/
/* Description:  Webots C programming interface for the Compass node              */
/**********************************************************************************/

#ifndef WB_COMPASS_H
#define WB_COMPASS_H

#define WB_USING_C_API
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

void wb_compass_enable(WbDeviceTag tag, int sampling_period);
void wb_compass_disable(WbDeviceTag tag);
int wb_compass_get_sampling_period(WbDeviceTag tag);

int wb_compass_get_lookup_table_size(WbDeviceTag tag);
const double *wb_compass_get_lookup_table(WbDeviceTag tag);

const double *wb_compass_get_values(WbDeviceTag tag);

#ifdef __cplusplus
}
#endif

#endif /* WB_COMPASS_H */
