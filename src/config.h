#ifndef CONFIG_H_
#define CONFIG_H_

#include <SDL3/SDL.h>

// WINDOW CONSTANTS
#define WINDOW_TITLE         "Auctrum"
#define WINDOW_WIDTH         400
#define WINDOW_HEIGHT        80 
#define WINDOW_FLAGS         SDL_WINDOW_RESIZABLE

#define RENDER_DRIVER        NULL

// VISUALIZER CONSTANTS
#define ATTACK         100.0f
#define DECAY          100.0f
#define MAX_FREQ       20000.0f
#define MIN_FREQ       20.0f
#define MAX_DB         0.0f   // dBFS
#define MIN_DB         -80.0f // dBFS
#define BAR_NUMBER     50
#define BAR_MIN_HEIGHT 0.f
#define BAR_SEPARATION 0.5f
#define REF_FREQ       1000.0f
#define TILT_STRENGTH  0.65f 

/*
 * Adds contrast to small variations
 * in dB values. This makes the
 * visualiser more reactive.
 */
#define PIVOT                0.18f
#define VISUAL_CONTRAST      1.4f
#define TIMESTAMP_FONT_SIZE  14
#define SONG_TITLE_FONT_SIZE 14
#define SONG_TITLE_MAX_LEN   40

// FFT CONSTANTS
#define FFT_SIZE         8192
#define RING_BUFFER_SIZE (FFT_SIZE * 4)
/*
 * Provide a value or leave
 * as 0 for it to be determined
 * from your monitor's refresh rate.
 */
#define FFT_HOP_SIZE 0

/*
 * Audio buffer will get resampled
 * to this value before visualization
 * to preserve frequency resolution.
 * Set to 0 if you want to disable this
 * feature.
 */
#define FFT_DESIRED_SAMPLERATE 44100

// MUSIC PLAYER CONSTANTS
#define MAX_GAIN 0.0f    // dBFS
#define MIN_GAIN -100.0f // dBFS

/* For a linear step of x out of 100
 * GAIN_STEP = 10^(((x / 100) * MIN_GAIN) / 20)
 */
#define GAIN_STEP     1.58f // dBFS

#define SEEK_FORWARD  5.0f  // seconds
#define SEEK_BACKWARD 5.0f  // seconds
#define MAX_SPEED     2.0f
#define MIN_SPEED     0.5f

const SDL_Color BACKGROUND_COLOR = {0, 0, 0, 255};
const SDL_Color BAR_COLOR        = {255, 255, 255, 255};

#endif
