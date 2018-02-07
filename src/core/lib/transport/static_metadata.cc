/*
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * WARNING: Auto-generated code.
 *
 * To make changes to this file, change
 * tools/codegen/core/gen_static_metadata.py, and then re-run it.
 *
 * See metadata.h for an explanation of the interface here, and metadata.cc for
 * an explanation of what's going on.
 */

#include "src/core/lib/transport/static_metadata.h"

#include "src/core/lib/slice/slice_internal.h"

static uint8_t g_bytes[] = {
    58,  112, 97,  116, 104, 58,  109, 101, 116, 104, 111, 100, 58,  115, 116,
    97,  116, 117, 115, 58,  97,  117, 116, 104, 111, 114, 105, 116, 121, 58,
    115, 99,  104, 101, 109, 101, 116, 101, 103, 114, 112, 99,  45,  109, 101,
    115, 115, 97,  103, 101, 103, 114, 112, 99,  45,  115, 116, 97,  116, 117,
    115, 103, 114, 112, 99,  45,  112, 97,  121, 108, 111, 97,  100, 45,  98,
    105, 110, 103, 114, 112, 99,  45,  101, 110, 99,  111, 100, 105, 110, 103,
    103, 114, 112, 99,  45,  97,  99,  99,  101, 112, 116, 45,  101, 110, 99,
    111, 100, 105, 110, 103, 103, 114, 112, 99,  45,  115, 101, 114, 118, 101,
    114, 45,  115, 116, 97,  116, 115, 45,  98,  105, 110, 103, 114, 112, 99,
    45,  116, 97,  103, 115, 45,  98,  105, 110, 103, 114, 112, 99,  45,  116,
    114, 97,  99,  101, 45,  98,  105, 110, 99,  111, 110, 116, 101, 110, 116,
    45,  116, 121, 112, 101, 99,  111, 110, 116, 101, 110, 116, 45,  101, 110,
    99,  111, 100, 105, 110, 103, 97,  99,  99,  101, 112, 116, 45,  101, 110,
    99,  111, 100, 105, 110, 103, 103, 114, 112, 99,  45,  105, 110, 116, 101,
    114, 110, 97,  108, 45,  101, 110, 99,  111, 100, 105, 110, 103, 45,  114,
    101, 113, 117, 101, 115, 116, 103, 114, 112, 99,  45,  105, 110, 116, 101,
    114, 110, 97,  108, 45,  115, 116, 114, 101, 97,  109, 45,  101, 110, 99,
    111, 100, 105, 110, 103, 45,  114, 101, 113, 117, 101, 115, 116, 117, 115,
    101, 114, 45,  97,  103, 101, 110, 116, 104, 111, 115, 116, 108, 98,  45,
    116, 111, 107, 101, 110, 103, 114, 112, 99,  45,  116, 105, 109, 101, 111,
    117, 116, 103, 114, 112, 99,  46,  119, 97,  105, 116, 95,  102, 111, 114,
    95,  114, 101, 97,  100, 121, 103, 114, 112, 99,  46,  116, 105, 109, 101,
    111, 117, 116, 103, 114, 112, 99,  46,  109, 97,  120, 95,  114, 101, 113,
    117, 101, 115, 116, 95,  109, 101, 115, 115, 97,  103, 101, 95,  98,  121,
    116, 101, 115, 103, 114, 112, 99,  46,  109, 97,  120, 95,  114, 101, 115,
    112, 111, 110, 115, 101, 95,  109, 101, 115, 115, 97,  103, 101, 95,  98,
    121, 116, 101, 115, 47,  103, 114, 112, 99,  46,  108, 98,  46,  118, 49,
    46,  76,  111, 97,  100, 66,  97,  108, 97,  110, 99,  101, 114, 47,  66,
    97,  108, 97,  110, 99,  101, 76,  111, 97,  100, 100, 101, 102, 108, 97,
    116, 101, 103, 122, 105, 112, 115, 116, 114, 101, 97,  109, 47,  103, 122,
    105, 112, 48,  49,  50,  105, 100, 101, 110, 116, 105, 116, 121, 116, 114,
    97,  105, 108, 101, 114, 115, 97,  112, 112, 108, 105, 99,  97,  116, 105,
    111, 110, 47,  103, 114, 112, 99,  80,  79,  83,  84,  50,  48,  48,  52,
    48,  52,  104, 116, 116, 112, 104, 116, 116, 112, 115, 103, 114, 112, 99,
    71,  69,  84,  80,  85,  84,  47,  47,  105, 110, 100, 101, 120, 46,  104,
    116, 109, 108, 50,  48,  52,  50,  48,  54,  51,  48,  52,  52,  48,  48,
    53,  48,  48,  97,  99,  99,  101, 112, 116, 45,  99,  104, 97,  114, 115,
    101, 116, 103, 122, 105, 112, 44,  32,  100, 101, 102, 108, 97,  116, 101,
    97,  99,  99,  101, 112, 116, 45,  108, 97,  110, 103, 117, 97,  103, 101,
    97,  99,  99,  101, 112, 116, 45,  114, 97,  110, 103, 101, 115, 97,  99,
    99,  101, 112, 116, 97,  99,  99,  101, 115, 115, 45,  99,  111, 110, 116,
    114, 111, 108, 45,  97,  108, 108, 111, 119, 45,  111, 114, 105, 103, 105,
    110, 97,  103, 101, 97,  108, 108, 111, 119, 97,  117, 116, 104, 111, 114,
    105, 122, 97,  116, 105, 111, 110, 99,  97,  99,  104, 101, 45,  99,  111,
    110, 116, 114, 111, 108, 99,  111, 110, 116, 101, 110, 116, 45,  100, 105,
    115, 112, 111, 115, 105, 116, 105, 111, 110, 99,  111, 110, 116, 101, 110,
    116, 45,  108, 97,  110, 103, 117, 97,  103, 101, 99,  111, 110, 116, 101,
    110, 116, 45,  108, 101, 110, 103, 116, 104, 99,  111, 110, 116, 101, 110,
    116, 45,  108, 111, 99,  97,  116, 105, 111, 110, 99,  111, 110, 116, 101,
    110, 116, 45,  114, 97,  110, 103, 101, 99,  111, 111, 107, 105, 101, 100,
    97,  116, 101, 101, 116, 97,  103, 101, 120, 112, 101, 99,  116, 101, 120,
    112, 105, 114, 101, 115, 102, 114, 111, 109, 105, 102, 45,  109, 97,  116,
    99,  104, 105, 102, 45,  109, 111, 100, 105, 102, 105, 101, 100, 45,  115,
    105, 110, 99,  101, 105, 102, 45,  110, 111, 110, 101, 45,  109, 97,  116,
    99,  104, 105, 102, 45,  114, 97,  110, 103, 101, 105, 102, 45,  117, 110,
    109, 111, 100, 105, 102, 105, 101, 100, 45,  115, 105, 110, 99,  101, 108,
    97,  115, 116, 45,  109, 111, 100, 105, 102, 105, 101, 100, 108, 98,  45,
    99,  111, 115, 116, 45,  98,  105, 110, 108, 105, 110, 107, 108, 111, 99,
    97,  116, 105, 111, 110, 109, 97,  120, 45,  102, 111, 114, 119, 97,  114,
    100, 115, 112, 114, 111, 120, 121, 45,  97,  117, 116, 104, 101, 110, 116,
    105, 99,  97,  116, 101, 112, 114, 111, 120, 121, 45,  97,  117, 116, 104,
    111, 114, 105, 122, 97,  116, 105, 111, 110, 114, 97,  110, 103, 101, 114,
    101, 102, 101, 114, 101, 114, 114, 101, 102, 114, 101, 115, 104, 114, 101,
    116, 114, 121, 45,  97,  102, 116, 101, 114, 115, 101, 114, 118, 101, 114,
    115, 101, 116, 45,  99,  111, 111, 107, 105, 101, 115, 116, 114, 105, 99,
    116, 45,  116, 114, 97,  110, 115, 112, 111, 114, 116, 45,  115, 101, 99,
    117, 114, 105, 116, 121, 116, 114, 97,  110, 115, 102, 101, 114, 45,  101,
    110, 99,  111, 100, 105, 110, 103, 118, 97,  114, 121, 118, 105, 97,  119,
    119, 119, 45,  97,  117, 116, 104, 101, 110, 116, 105, 99,  97,  116, 101,
    105, 100, 101, 110, 116, 105, 116, 121, 44,  100, 101, 102, 108, 97,  116,
    101, 105, 100, 101, 110, 116, 105, 116, 121, 44,  103, 122, 105, 112, 100,
    101, 102, 108, 97,  116, 101, 44,  103, 122, 105, 112, 105, 100, 101, 110,
    116, 105, 116, 121, 44,  100, 101, 102, 108, 97,  116, 101, 44,  103, 122,
    105, 112};

static void static_ref(void* unused) {}
static void static_unref(void* unused) {}
static const grpc_slice_refcount_vtable static_sub_vtable = {
    static_ref, static_unref, grpc_slice_default_eq_impl,
    grpc_slice_default_hash_impl};
const grpc_slice_refcount_vtable grpc_static_metadata_vtable = {
    static_ref, static_unref, grpc_static_slice_eq, grpc_static_slice_hash};
static grpc_slice_refcount static_sub_refcnt = {&static_sub_vtable,
                                                &static_sub_refcnt};
grpc_slice_refcount grpc_static_metadata_refcounts[GRPC_STATIC_MDSTR_COUNT] = {
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
    {&grpc_static_metadata_vtable, &static_sub_refcnt},
};

const grpc_slice grpc_static_slice_table[GRPC_STATIC_MDSTR_COUNT] = {
    {&grpc_static_metadata_refcounts[0], {{g_bytes + 0, 5}}},
    {&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
    {&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
    {&grpc_static_metadata_refcounts[3], {{g_bytes + 19, 10}}},
    {&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
    {&grpc_static_metadata_refcounts[5], {{g_bytes + 36, 2}}},
    {&grpc_static_metadata_refcounts[6], {{g_bytes + 38, 12}}},
    {&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
    {&grpc_static_metadata_refcounts[8], {{g_bytes + 61, 16}}},
    {&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
    {&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
    {&grpc_static_metadata_refcounts[11], {{g_bytes + 110, 21}}},
    {&grpc_static_metadata_refcounts[12], {{g_bytes + 131, 13}}},
    {&grpc_static_metadata_refcounts[13], {{g_bytes + 144, 14}}},
    {&grpc_static_metadata_refcounts[14], {{g_bytes + 158, 12}}},
    {&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
    {&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
    {&grpc_static_metadata_refcounts[17], {{g_bytes + 201, 30}}},
    {&grpc_static_metadata_refcounts[18], {{g_bytes + 231, 37}}},
    {&grpc_static_metadata_refcounts[19], {{g_bytes + 268, 10}}},
    {&grpc_static_metadata_refcounts[20], {{g_bytes + 278, 4}}},
    {&grpc_static_metadata_refcounts[21], {{g_bytes + 282, 8}}},
    {&grpc_static_metadata_refcounts[22], {{g_bytes + 290, 12}}},
    {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}},
    {&grpc_static_metadata_refcounts[24], {{g_bytes + 302, 19}}},
    {&grpc_static_metadata_refcounts[25], {{g_bytes + 321, 12}}},
    {&grpc_static_metadata_refcounts[26], {{g_bytes + 333, 30}}},
    {&grpc_static_metadata_refcounts[27], {{g_bytes + 363, 31}}},
    {&grpc_static_metadata_refcounts[28], {{g_bytes + 394, 36}}},
    {&grpc_static_metadata_refcounts[29], {{g_bytes + 430, 7}}},
    {&grpc_static_metadata_refcounts[30], {{g_bytes + 437, 4}}},
    {&grpc_static_metadata_refcounts[31], {{g_bytes + 441, 11}}},
    {&grpc_static_metadata_refcounts[32], {{g_bytes + 452, 1}}},
    {&grpc_static_metadata_refcounts[33], {{g_bytes + 453, 1}}},
    {&grpc_static_metadata_refcounts[34], {{g_bytes + 454, 1}}},
    {&grpc_static_metadata_refcounts[35], {{g_bytes + 455, 8}}},
    {&grpc_static_metadata_refcounts[36], {{g_bytes + 463, 8}}},
    {&grpc_static_metadata_refcounts[37], {{g_bytes + 471, 16}}},
    {&grpc_static_metadata_refcounts[38], {{g_bytes + 487, 4}}},
    {&grpc_static_metadata_refcounts[39], {{g_bytes + 491, 3}}},
    {&grpc_static_metadata_refcounts[40], {{g_bytes + 494, 3}}},
    {&grpc_static_metadata_refcounts[41], {{g_bytes + 497, 4}}},
    {&grpc_static_metadata_refcounts[42], {{g_bytes + 501, 5}}},
    {&grpc_static_metadata_refcounts[43], {{g_bytes + 506, 4}}},
    {&grpc_static_metadata_refcounts[44], {{g_bytes + 510, 3}}},
    {&grpc_static_metadata_refcounts[45], {{g_bytes + 513, 3}}},
    {&grpc_static_metadata_refcounts[46], {{g_bytes + 516, 1}}},
    {&grpc_static_metadata_refcounts[47], {{g_bytes + 517, 11}}},
    {&grpc_static_metadata_refcounts[48], {{g_bytes + 528, 3}}},
    {&grpc_static_metadata_refcounts[49], {{g_bytes + 531, 3}}},
    {&grpc_static_metadata_refcounts[50], {{g_bytes + 534, 3}}},
    {&grpc_static_metadata_refcounts[51], {{g_bytes + 537, 3}}},
    {&grpc_static_metadata_refcounts[52], {{g_bytes + 540, 3}}},
    {&grpc_static_metadata_refcounts[53], {{g_bytes + 543, 14}}},
    {&grpc_static_metadata_refcounts[54], {{g_bytes + 557, 13}}},
    {&grpc_static_metadata_refcounts[55], {{g_bytes + 570, 15}}},
    {&grpc_static_metadata_refcounts[56], {{g_bytes + 585, 13}}},
    {&grpc_static_metadata_refcounts[57], {{g_bytes + 598, 6}}},
    {&grpc_static_metadata_refcounts[58], {{g_bytes + 604, 27}}},
    {&grpc_static_metadata_refcounts[59], {{g_bytes + 631, 3}}},
    {&grpc_static_metadata_refcounts[60], {{g_bytes + 634, 5}}},
    {&grpc_static_metadata_refcounts[61], {{g_bytes + 639, 13}}},
    {&grpc_static_metadata_refcounts[62], {{g_bytes + 652, 13}}},
    {&grpc_static_metadata_refcounts[63], {{g_bytes + 665, 19}}},
    {&grpc_static_metadata_refcounts[64], {{g_bytes + 684, 16}}},
    {&grpc_static_metadata_refcounts[65], {{g_bytes + 700, 14}}},
    {&grpc_static_metadata_refcounts[66], {{g_bytes + 714, 16}}},
    {&grpc_static_metadata_refcounts[67], {{g_bytes + 730, 13}}},
    {&grpc_static_metadata_refcounts[68], {{g_bytes + 743, 6}}},
    {&grpc_static_metadata_refcounts[69], {{g_bytes + 749, 4}}},
    {&grpc_static_metadata_refcounts[70], {{g_bytes + 753, 4}}},
    {&grpc_static_metadata_refcounts[71], {{g_bytes + 757, 6}}},
    {&grpc_static_metadata_refcounts[72], {{g_bytes + 763, 7}}},
    {&grpc_static_metadata_refcounts[73], {{g_bytes + 770, 4}}},
    {&grpc_static_metadata_refcounts[74], {{g_bytes + 774, 8}}},
    {&grpc_static_metadata_refcounts[75], {{g_bytes + 782, 17}}},
    {&grpc_static_metadata_refcounts[76], {{g_bytes + 799, 13}}},
    {&grpc_static_metadata_refcounts[77], {{g_bytes + 812, 8}}},
    {&grpc_static_metadata_refcounts[78], {{g_bytes + 820, 19}}},
    {&grpc_static_metadata_refcounts[79], {{g_bytes + 839, 13}}},
    {&grpc_static_metadata_refcounts[80], {{g_bytes + 852, 11}}},
    {&grpc_static_metadata_refcounts[81], {{g_bytes + 863, 4}}},
    {&grpc_static_metadata_refcounts[82], {{g_bytes + 867, 8}}},
    {&grpc_static_metadata_refcounts[83], {{g_bytes + 875, 12}}},
    {&grpc_static_metadata_refcounts[84], {{g_bytes + 887, 18}}},
    {&grpc_static_metadata_refcounts[85], {{g_bytes + 905, 19}}},
    {&grpc_static_metadata_refcounts[86], {{g_bytes + 924, 5}}},
    {&grpc_static_metadata_refcounts[87], {{g_bytes + 929, 7}}},
    {&grpc_static_metadata_refcounts[88], {{g_bytes + 936, 7}}},
    {&grpc_static_metadata_refcounts[89], {{g_bytes + 943, 11}}},
    {&grpc_static_metadata_refcounts[90], {{g_bytes + 954, 6}}},
    {&grpc_static_metadata_refcounts[91], {{g_bytes + 960, 10}}},
    {&grpc_static_metadata_refcounts[92], {{g_bytes + 970, 25}}},
    {&grpc_static_metadata_refcounts[93], {{g_bytes + 995, 17}}},
    {&grpc_static_metadata_refcounts[94], {{g_bytes + 1012, 4}}},
    {&grpc_static_metadata_refcounts[95], {{g_bytes + 1016, 3}}},
    {&grpc_static_metadata_refcounts[96], {{g_bytes + 1019, 16}}},
    {&grpc_static_metadata_refcounts[97], {{g_bytes + 1035, 16}}},
    {&grpc_static_metadata_refcounts[98], {{g_bytes + 1051, 13}}},
    {&grpc_static_metadata_refcounts[99], {{g_bytes + 1064, 12}}},
    {&grpc_static_metadata_refcounts[100], {{g_bytes + 1076, 21}}},
};

uintptr_t grpc_static_mdelem_user_data[GRPC_STATIC_MDELEM_COUNT] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 4, 4, 6, 6, 8, 8, 2, 4, 4};

static const int8_t elems_r[] = {
    13, 2,  1,   0,  15,  4,   0,   21,  0,   23,  -3, 0,  0,  0,  10, 19, -4,
    0,  0,  1,   10, 9,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,   0,  0,   0,   0,   0,   0,   0,   0,  0,  0,  0,  0,  0,  0,
    0,  0,  -52, 0,  -55, -36, -57, -58, -58, -58, 0,  40, 39, 38, 37, 36, 35,
    34, 33, 32,  31, 30,  29,  28,  28,  27,  26,  25, 24, 23, 22, 21, 20, 19,
    18, 17, 16,  15, 18,  17,  16,  15,  14,  13,  12, 11, 11, 0};
static uint32_t elems_phash(uint32_t i) {
  i -= 46;
  uint32_t x = i % 99;
  uint32_t y = i / 99;
  uint32_t h = x;
  if (y < GPR_ARRAY_SIZE(elems_r)) {
    uint32_t delta = (uint32_t)elems_r[y];
    h += delta;
  }
  return h;
}

static const uint16_t elem_keys[] = {
    1039, 1040, 145,  146,  541,  1639, 1045, 250,  251,  252,  253,  254,
    1646, 46,   47,   1437, 1942, 1651, 445,  446,  447,  739,  740,  741,
    938,  939,  1538, 2043, 2144, 1451, 944,  5376, 5578, 1545, 5780, 5881,
    1670, 5982, 1550, 6083, 6184, 6285, 6386, 6487, 6588, 6689, 6790, 6891,
    6992, 7093, 7194, 7295, 7396, 5679, 7497, 7598, 7699, 7800, 7901, 8002,
    8103, 8204, 8305, 8406, 8507, 8608, 8709, 8810, 1107, 1108, 1109, 1110,
    8911, 9012, 9113, 9214, 9315, 9416, 9517, 9618, 1714, 9719, 0,    326,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    241,  242,  0,    0,    0,    0,    0,    0,    139,  0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0};
static const uint8_t elem_idxs[] = {
    77,  79,  15,  16,  6,   25,  76,  19,  20,  21,  22,  23,  84,  17,
    18,  43,  72,  83,  11,  12,  13,  0,   1,   2,   5,   4,   38,  50,
    57,  7,   3,   24,  27,  37,  29,  30,  26,  31,  36,  32,  33,  34,
    35,  39,  40,  41,  42,  44,  45,  46,  47,  48,  49,  28,  51,  52,
    53,  54,  55,  56,  58,  59,  60,  61,  62,  63,  64,  65,  78,  80,
    81,  82,  66,  67,  68,  69,  70,  71,  73,  74,  85,  75,  255, 14,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    9,   10,  255, 255, 255, 255, 255, 255, 8};

grpc_mdelem grpc_static_mdelem_for_static_strings(int a, int b) {
  if (a == -1 || b == -1) return GRPC_MDNULL;
  uint32_t k = (uint32_t)(a * 101 + b);
  uint32_t h = elems_phash(k);
  return h < GPR_ARRAY_SIZE(elem_keys) && elem_keys[h] == k &&
                 elem_idxs[h] != 255
             ? GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[elem_idxs[h]],
                                GRPC_MDELEM_STORAGE_STATIC)
             : GRPC_MDNULL;
}

grpc_mdelem_data grpc_static_mdelem_table[GRPC_STATIC_MDELEM_COUNT] = {
    {{&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
     {&grpc_static_metadata_refcounts[32], {{g_bytes + 452, 1}}}},
    {{&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
     {&grpc_static_metadata_refcounts[33], {{g_bytes + 453, 1}}}},
    {{&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
     {&grpc_static_metadata_refcounts[34], {{g_bytes + 454, 1}}}},
    {{&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 455, 8}}}},
    {{&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
     {&grpc_static_metadata_refcounts[30], {{g_bytes + 437, 4}}}},
    {{&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
     {&grpc_static_metadata_refcounts[29], {{g_bytes + 430, 7}}}},
    {{&grpc_static_metadata_refcounts[5], {{g_bytes + 36, 2}}},
     {&grpc_static_metadata_refcounts[36], {{g_bytes + 463, 8}}}},
    {{&grpc_static_metadata_refcounts[14], {{g_bytes + 158, 12}}},
     {&grpc_static_metadata_refcounts[37], {{g_bytes + 471, 16}}}},
    {{&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
     {&grpc_static_metadata_refcounts[38], {{g_bytes + 487, 4}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[39], {{g_bytes + 491, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[40], {{g_bytes + 494, 3}}}},
    {{&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
     {&grpc_static_metadata_refcounts[41], {{g_bytes + 497, 4}}}},
    {{&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
     {&grpc_static_metadata_refcounts[42], {{g_bytes + 501, 5}}}},
    {{&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
     {&grpc_static_metadata_refcounts[43], {{g_bytes + 506, 4}}}},
    {{&grpc_static_metadata_refcounts[3], {{g_bytes + 19, 10}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
     {&grpc_static_metadata_refcounts[44], {{g_bytes + 510, 3}}}},
    {{&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
     {&grpc_static_metadata_refcounts[45], {{g_bytes + 513, 3}}}},
    {{&grpc_static_metadata_refcounts[0], {{g_bytes + 0, 5}}},
     {&grpc_static_metadata_refcounts[46], {{g_bytes + 516, 1}}}},
    {{&grpc_static_metadata_refcounts[0], {{g_bytes + 0, 5}}},
     {&grpc_static_metadata_refcounts[47], {{g_bytes + 517, 11}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[48], {{g_bytes + 528, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[49], {{g_bytes + 531, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[50], {{g_bytes + 534, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[51], {{g_bytes + 537, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[52], {{g_bytes + 540, 3}}}},
    {{&grpc_static_metadata_refcounts[53], {{g_bytes + 543, 14}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[54], {{g_bytes + 557, 13}}}},
    {{&grpc_static_metadata_refcounts[55], {{g_bytes + 570, 15}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[56], {{g_bytes + 585, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[57], {{g_bytes + 598, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[58], {{g_bytes + 604, 27}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[59], {{g_bytes + 631, 3}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[60], {{g_bytes + 634, 5}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[61], {{g_bytes + 639, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[62], {{g_bytes + 652, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[63], {{g_bytes + 665, 19}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 455, 8}}}},
    {{&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
     {&grpc_static_metadata_refcounts[30], {{g_bytes + 437, 4}}}},
    {{&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[64], {{g_bytes + 684, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[65], {{g_bytes + 700, 14}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[66], {{g_bytes + 714, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[67], {{g_bytes + 730, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[14], {{g_bytes + 158, 12}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[68], {{g_bytes + 743, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[69], {{g_bytes + 749, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[70], {{g_bytes + 753, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[71], {{g_bytes + 757, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[72], {{g_bytes + 763, 7}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[73], {{g_bytes + 770, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[20], {{g_bytes + 278, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[74], {{g_bytes + 774, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[75], {{g_bytes + 782, 17}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[76], {{g_bytes + 799, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[77], {{g_bytes + 812, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[78], {{g_bytes + 820, 19}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[79], {{g_bytes + 839, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[21], {{g_bytes + 282, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[80], {{g_bytes + 852, 11}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[81], {{g_bytes + 863, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[82], {{g_bytes + 867, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[83], {{g_bytes + 875, 12}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[84], {{g_bytes + 887, 18}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[85], {{g_bytes + 905, 19}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[86], {{g_bytes + 924, 5}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[87], {{g_bytes + 929, 7}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[88], {{g_bytes + 936, 7}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[89], {{g_bytes + 943, 11}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[90], {{g_bytes + 954, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[91], {{g_bytes + 960, 10}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[92], {{g_bytes + 970, 25}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[93], {{g_bytes + 995, 17}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[19], {{g_bytes + 268, 10}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[94], {{g_bytes + 1012, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[95], {{g_bytes + 1016, 3}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[96], {{g_bytes + 1019, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 455, 8}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[29], {{g_bytes + 430, 7}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[97], {{g_bytes + 1035, 16}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[30], {{g_bytes + 437, 4}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[98], {{g_bytes + 1051, 13}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[99], {{g_bytes + 1064, 12}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[100], {{g_bytes + 1076, 21}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 455, 8}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[30], {{g_bytes + 437, 4}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[98], {{g_bytes + 1051, 13}}}},
};
bool grpc_static_callout_is_default[GRPC_BATCH_CALLOUTS_COUNT] = {
    true,  // :path
    true,  // :method
    true,  // :status
    true,  // :authority
    true,  // :scheme
    true,  // te
    true,  // grpc-message
    true,  // grpc-status
    true,  // grpc-payload-bin
    true,  // grpc-encoding
    true,  // grpc-accept-encoding
    true,  // grpc-server-stats-bin
    true,  // grpc-tags-bin
    true,  // grpc-trace-bin
    true,  // content-type
    true,  // content-encoding
    true,  // accept-encoding
    true,  // grpc-internal-encoding-request
    true,  // grpc-internal-stream-encoding-request
    true,  // user-agent
    true,  // host
    true,  // lb-token
};

const uint8_t grpc_static_accept_encoding_metadata[8] = {0,  76, 77, 78,
                                                         79, 80, 81, 82};

const uint8_t grpc_static_accept_stream_encoding_metadata[4] = {0, 83, 84, 85};
