#pragma once

#include "keycodes.h"

#ifdef ENCODER_ENABLE
#    include "encoder_utils.h"
#endif

#ifdef THUMBSTICK_ENABLE
#    include "thumbstick.h"
#endif

void render_qmk_logo(void);

void render_layer(void);

#ifdef ENCODER_ENABLE
void render_encoder(encoder_mode_t mode);
#endif

#ifdef THUMBSTICK_ENABLE
void render_thumbstick(thumbstick_mode_t mode);
#endif

void render_status(void);

#ifdef STARFIELD_ENABLE
#include "lib/lib8tion/lib8tion.h"
void render_starfield(void);
void init_cache(void);
#endif
