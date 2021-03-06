/*
 * Copyright 2011 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * Authors:
 *      Daniel Kopecek <dkopecek@redhat.com>
 */

#ifndef _SEXP_ID_H
#define _SEXP_ID_H

typedef uint64_t SEXP_ID_t;
typedef struct {
	SEXP_ID_t hash;
	int       part;
} __IDres_pair;


/**
 * Compute an S-exp value identifier
 */
SEXP_ID_t SEXP_ID_v(const SEXP_t *s);

#endif /* _SEXP_ID_H */
