// Copyright 2020 Open Source Robotics Foundation, Inc.
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


#ifdef __cplusplus
extern "C"
{
#endif

//#include "rcutils/macros.h"
#include <stdio.h>
#include "rcutils/visibility_control.h"
#include "rcutils/env.h"

#include "rcutils/event_queue.h"


static Event event_;

Event
rcutils_get_next_event(void)
{
    printf( "Get: Address of entity: %p\n", ( void * )event_.entity );
    return event_;
}

void
rcutils_set_next_event(Event event)
{
    event_ = event;

    printf( "Set: Address of entity: %p\n", ( void * )event_.entity );
}

#ifdef __cplusplus
}
#endif