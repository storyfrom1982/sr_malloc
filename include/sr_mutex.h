/*
 * sr_mutex.h
 *
 * Author: storyfrom1982@gmail.com
 *
 * Copyright (C) 2017 storyfrom1982@gmail.com all rights reserved.
 *
 * This file is part of sr_malloc.
 *
 * self-reliance is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * self-reliance is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef INCLUDE_SR_MUTEX_H_
#define INCLUDE_SR_MUTEX_H_


#include <pthread.h>

typedef struct Sr_mutex Sr_mutex;

extern int sr_mutex_create(Sr_mutex **pp_mutex);
extern void sr_mutex_release(Sr_mutex **pp_mutex);

extern void sr_mutex_lock(Sr_mutex *mutex);
extern void sr_mutex_unlock(Sr_mutex *mutex);

extern void sr_mutex_wait(Sr_mutex *mutex);
extern void sr_mutex_signal(Sr_mutex *mutex);
extern void sr_mutex_broadcast(Sr_mutex *mutex);
//extern int sr_mutex_timedwait(SR_Mutex *mutex, uint32_t millisecond);


#endif /* INCLUDE_SR_MUTEX_H_ */
