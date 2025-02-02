/**
 * NEURON IIoT System for Industry 4.0
 * Copyright (C) 2020-2021 EMQ Technologies Co., Ltd All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **/

#ifndef NEURON_PLUGIN_MQTT_COMMAND_GROUP_CONFIG
#define NEURON_PLUGIN_MQTT_COMMAND_GROUP_CONFIG

#ifdef __cplusplus
extern "C" {
#endif

#include <neuron.h>

#include "common.h"

char *command_group_config_get(neu_plugin_t *plugin, neu_json_mqtt_t *mqtt,
                               neu_json_get_group_config_req_t *req);
char *command_group_config_add(neu_plugin_t *plugin, neu_json_mqtt_t *mqtt,
                               neu_json_add_group_config_req_t *req);
char *command_group_config_update(neu_plugin_t *plugin, neu_json_mqtt_t *mqtt,
                                  neu_json_update_group_config_req_t *req);
char *command_group_config_delete(neu_plugin_t *plugin, neu_json_mqtt_t *mqtt,
                                  neu_json_del_group_config_req_t *req);
char *command_group_config_subscribe(neu_plugin_t *            plugin,
                                     neu_json_mqtt_t *         mqtt,
                                     neu_json_subscribe_req_t *req);
char *command_group_config_unsubscribe(neu_plugin_t *              plugin,
                                       neu_json_mqtt_t *           mqtt,
                                       neu_json_unsubscribe_req_t *req);
char *command_get_group_config_subscribes(neu_plugin_t *   plugin,
                                          neu_json_mqtt_t *mqtt,
                                          neu_json_get_group_config_req_t *req);

#ifdef __cplusplus
}
#endif
#endif