/*
 * Task switching definitions for the Hexagon architecture
 *
 * Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef _ASM_SWITCH_TO_H
#define _ASM_SWITCH_TO_H

struct thread_struct;

extern struct task_struct *__switch_to(struct task_struct *,
	struct task_struct *,
	struct task_struct *);

#define switch_to(p, n, r) do {\
	r = __switch_to((p), (n), (r));\
} while (0)

#endif /* _ASM_SWITCH_TO_H */
