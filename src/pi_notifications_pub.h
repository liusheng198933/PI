/* Copyright 2013-present Barefoot Networks, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Antonin Bas (antonin@barefootnetworks.com)
 *
 */

#ifndef PI_SRC_PI_NOTIFICATIONS_PUB_H_
#define PI_SRC_PI_NOTIFICATIONS_PUB_H_

#include <PI/pi_learn.h>

pi_status_t pi_notifications_init(const char *notifications_addr);

void pi_notifications_pub_learn(const pi_learn_msg_t *msg);

void pi_notifications_pub_packetin(pi_dev_id_t dev_id, const char *pkt,
                                   size_t size);

#endif  // PI_SRC_PI_NOTIFICATIONS_PUB_H_
