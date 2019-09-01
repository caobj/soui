﻿/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "include/core/SkFontMgr.h"
#include "include/core/SkTypes.h"
#include "include/ports/SkFontMgr_fontconfig.h"

sk_sp<SkFontMgr> SkFontMgr::Factory() {
    return SkFontMgr_New_FontConfig(nullptr);
}
