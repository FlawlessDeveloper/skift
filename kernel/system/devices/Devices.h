#pragma once

#include <libutils/Callback.h>
#include <libutils/Prelude.h>

#include "system/devices/DeviceAddress.h"
#include "system/devices/DeviceClass.h"
#include "system/devices/Driver.h"

void device_scan(IterationCallback<DeviceAddress> address);

void device_iterate(IterationCallback<RefPtr<Device>> callback);

String device_claim_name(DeviceClass klass);

void device_initialize();

void devices_acknowledge_interrupt(int interrupt);

void devices_handle_interrupt(int interrupt);

void device_mount(RefPtr<Device> device);
