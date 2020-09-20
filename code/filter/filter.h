
/*
 * This file is part of the micropython-ulab project,
 *
 * https://github.com/v923z/micropython-ulab
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Jeff Epler for Adafruit Industries
 *               2020 Zoltán Vörös
*/

#ifndef _FILTER_
#define _FILTER_

#include "../ulab.h"
#include "../ndarray.h"

#if ULAB_FILTER_MODULE

extern mp_obj_module_t ulab_filter_module;

#if ULAB_FILTER_HAS_CONVOLVE
MP_DECLARE_CONST_FUN_OBJ_KW(filter_convolve_obj);
#endif
#if ULAB_FILTER_HAS_SOSFILT
MP_DECLARE_CONST_FUN_OBJ_KW(filter_sosfilt_obj);
#endif
#endif
#endif
