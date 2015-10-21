#ifndef CLM_STRINGS_H
#define CLM_STRINGS_H

/* there's some inconsistency about the mus- prefix: mus-interp-* but *-window etc */

#define S_all_pass                   "all-pass"
#define S_is_all_pass                "all-pass?"
#define S_all_pass_bank              "all-pass-bank"
#define S_is_all_pass_bank           "all-pass-bank?"
#define S_amplitude_modulate         "amplitude-modulate"
#define S_array_interp               "array-interp"
#define S_asymmetric_fm              "asymmetric-fm"
#define S_is_asymmetric_fm           "asymmetric-fm?"
#define S_autocorrelate              "autocorrelate"
#define S_bartlett_window            "bartlett-window"
#define S_bartlett_hann_window       "bartlett-hann-window"
#define S_blackman2_window           "blackman2-window"
#define S_blackman3_window           "blackman3-window"
#define S_blackman4_window           "blackman4-window"
#define S_blackman5_window           "blackman5-window"
#define S_blackman6_window           "blackman6-window"
#define S_blackman7_window           "blackman7-window"
#define S_blackman8_window           "blackman8-window"
#define S_blackman9_window           "blackman9-window"
#define S_blackman10_window          "blackman10-window"
#define S_bohman_window              "bohman-window"
#define S_cauchy_window              "cauchy-window"
#define S_clear_sincs                "clear-sincs"
#define S_clm_default_frequency      "clm-default-frequency"
#define S_clm_table_size             "clm-table-size"
#define S_comb                       "comb"
#define S_is_comb                    "comb?"
#define S_comb_bank                  "comb-bank"
#define S_is_comb_bank               "comb-bank?"
#define S_connes_window              "connes-window"
#define S_continue_sample_to_file    "continue-sample->file"
#define S_contrast_enhancement       "contrast-enhancement"
#define S_convolution                "convolution"
#define S_convolve                   "convolve"
#define S_convolve_files             "convolve-files"
#define S_is_convolve                "convolve?"
#define S_correlate                  "correlate"
#define S_db_to_linear               "db->linear"
#define S_degrees_to_radians         "degrees->radians"
#define S_delay                      "delay"
#define S_delay_tick                 "delay-tick"
#define S_is_delay                   "delay?"
#define S_dolph_chebyshev_window     "dolph-chebyshev-window"
#define S_dot_product                "dot-product"
#define S_dpss_window                "dpss-window"
#define S_env                        "env"
#define S_env_any                    "env-any"
#define S_env_interp                 "env-interp"
#define S_is_env                     "env?"
#define S_even_multiple              "even-multiple"
#define S_even_weight                "even-weight"
#define S_exponential_window         "exponential-window"
#define S_file_to_sample             "file->sample"
#define S_is_file_to_sample          "file->sample?"
#define S_filter                     "filter"
#define S_is_filter                  "filter?"
#define S_filtered_comb              "filtered-comb"
#define S_is_filtered_comb           "filtered-comb?"
#define S_filtered_comb_bank         "filtered-comb-bank"
#define S_is_filtered_comb_bank      "filtered-comb-bank?"
#define S_fir_filter                 "fir-filter"
#define S_is_fir_filter              "fir-filter?"
#define S_flat_top_window            "flat-top-window"
#define S_firmant                    "firmant"
#define S_is_firmant                 "firmant?"
#define S_formant                    "formant"
#define S_formant_bank               "formant-bank"
#define S_is_formant_bank            "formant-bank?"
#define S_is_formant                 "formant?"
#define S_gaussian_window            "gaussian-window"
#define S_granulate                  "granulate"
#define S_is_granulate               "granulate?"
#define S_hamming_window             "hamming-window"
#define S_hann_window                "hann-window"
#define S_hann_poisson_window        "hann-poisson-window"
#define S_hz_to_radians              "hz->radians"
#define S_iir_filter                 "iir-filter"
#define S_is_iir_filter              "iir-filter?"
#define S_in_any                     "in-any"
#define S_ina                        "ina"
#define S_inb                        "inb"
#define S_kaiser_window              "kaiser-window"
#define S_linear_to_db               "linear->db"
#define S_locsig                     "locsig"
#define S_is_locsig                  "locsig?"
#define S_locsig_ref                 "locsig-ref"
#define S_locsig_reverb_ref          "locsig-reverb-ref"
#define S_locsig_reverb_set          "locsig-reverb-set!"
#define S_locsig_set                 "locsig-set!"
#define S_locsig_type                "locsig-type"
#define S_make_all_pass              "make-all-pass"
#define S_make_all_pass_bank         "make-all-pass-bank"
#define S_make_asymmetric_fm         "make-asymmetric-fm"
#define S_make_comb                  "make-comb"
#define S_make_comb_bank             "make-comb-bank"
#define S_make_convolve              "make-convolve"
#define S_make_delay                 "make-delay"
#define S_make_env                   "make-env"
#define S_make_fft_window            "make-fft-window"
#define S_make_file_to_sample        "make-file->sample"
#define S_make_filter                "make-filter"
#define S_make_filtered_comb         "make-filtered-comb"
#define S_make_filtered_comb_bank    "make-filtered-comb-bank"
#define S_make_fir_coeffs            "make-fir-coeffs"
#define S_make_fir_filter            "make-fir-filter"
#define S_make_firmant               "make-firmant"
#define S_make_formant               "make-formant"
#define S_make_formant_bank          "make-formant-bank"
#define S_make_granulate             "make-granulate"
#define S_make_iir_filter            "make-iir-filter"
#define S_make_locsig                "make-locsig"
#define S_make_move_sound            "make-move-sound"
#define S_make_moving_average        "make-moving-average"
#define S_make_moving_max            "make-moving-max"
#define S_make_moving_norm           "make-moving-norm"
#define S_make_ncos                  "make-ncos"
#define S_make_notch                 "make-notch"
#define S_make_nrxycos               "make-nrxycos"
#define S_make_nrxysin               "make-nrxysin"
#define S_make_nsin                  "make-nsin"
#define S_make_one_pole              "make-one-pole"
#define S_make_one_pole_all_pass     "make-one-pole-all-pass"
#define S_make_one_zero              "make-one-zero"
#define S_make_oscil                 "make-oscil"
#define S_make_oscil_bank            "make-oscil-bank"
#define S_make_phase_vocoder         "make-phase-vocoder"
#define S_make_polyshape             "make-polyshape"
#define S_make_polywave              "make-polywave"
#define S_make_pulse_train           "make-pulse-train"
#define S_make_pulsed_env            "make-pulsed-env"
#define S_make_rand                  "make-rand"
#define S_make_rand_interp           "make-rand-interp"
#define S_make_readin                "make-readin"
#define S_make_rxykcos               "make-rxyk!cos"
#define S_make_rxyksin               "make-rxyk!sin"
#define S_make_sample_to_file        "make-sample->file"
#define S_make_sawtooth_wave         "make-sawtooth-wave"
#define S_make_square_wave           "make-square-wave"
#define S_make_src                   "make-src"
#define S_make_ssb_am                "make-ssb-am"
#define S_make_table_lookup          "make-table-lookup"
#define S_make_triangle_wave         "make-triangle-wave"
#define S_make_two_pole              "make-two-pole"
#define S_make_two_zero              "make-two-zero"
#define S_make_wave_train            "make-wave-train"
#define S_mlt_sine_window            "mlt-sine-window"
#define S_move_locsig                "move-locsig"
#define S_move_sound                 "move-sound"
#define S_is_move_sound              "move-sound?"
#define S_moving_average             "moving-average"
#define S_is_moving_average          "moving-average?"
#define S_moving_max                 "moving-max"
#define S_is_moving_max              "moving-max?"
#define S_moving_norm                "moving-norm"
#define S_is_moving_norm             "moving-norm?"
#define S_mus_apply                  "mus-apply"
#define S_mus_array_print_length     "mus-array-print-length"
#define S_mus_channel                "mus-channel"
#define S_mus_channels               "mus-channels"
#define S_mus_chebyshev_first_kind   "mus-chebyshev-first-kind"
#define S_mus_chebyshev_second_kind  "mus-chebyshev-second-kind"
#define S_mus_chebyshev_both_kinds   "mus-chebyshev-both-kinds"
#define S_mus_chebyshev_t_sum        "mus-chebyshev-t-sum"
#define S_mus_chebyshev_tu_sum       "mus-chebyshev-tu-sum"
#define S_mus_chebyshev_u_sum        "mus-chebyshev-u-sum"
#define S_mus_close                  "mus-close"
#define S_mus_copy                   "mus-copy"
#define S_mus_data                   "mus-data"
#define S_mus_describe               "mus-describe"
#define S_mus_feedback               "mus-feedback"
#define S_mus_feedforward            "mus-feedforward"
#define S_mus_fft                    "mus-fft"
#define S_mus_file_buffer_size       "mus-file-buffer-size"
#define S_mus_file_name              "mus-file-name"
#define S_mus_float_equal_fudge_factor "mus-float-equal-fudge-factor"
#define S_mus_frequency              "mus-frequency"
#define S_is_mus_generator           "mus-generator?"
#define S_mus_hop                    "mus-hop"
#define S_mus_increment              "mus-increment"
#define S_is_mus_input               "mus-input?"
#define S_mus_interpolate            "mus-interpolate"
#define S_mus_interp_all_pass        "mus-interp-all-pass"
#define S_mus_interp_bezier          "mus-interp-bezier"
#define S_mus_interp_hermite         "mus-interp-hermite"
#define S_mus_interp_lagrange        "mus-interp-lagrange"
#define S_mus_interp_linear          "mus-interp-linear"
#define S_mus_interp_none            "mus-interp-none"
#define S_mus_interp_sinusoidal      "mus-interp-sinusoidal"
#define S_mus_interp_type            "mus-interp-type"
#define S_mus_length                 "mus-length"
#define S_mus_location               "mus-location"
#define S_mus_name                   "mus-name"
#define S_mus_offset                 "mus-offset"
#define S_mus_order                  "mus-order"
#define S_is_mus_output              "mus-output?"
#define S_mus_phase                  "mus-phase"
#define S_mus_ramp                   "mus-ramp"
#define S_mus_rand_seed              "mus-rand-seed"
#define S_mus_random                 "mus-random"
#define S_mus_reset                  "mus-reset"
#define S_mus_run                    "mus-run"
#define S_mus_scaler                 "mus-scaler"
#define S_mus_set_formant_frequency  "mus-set-formant-frequency"
#define S_mus_set_formant_radius_and_frequency "mus-set-formant-radius-and-frequency"
#define S_mus_srate                  "mus-srate"
#define S_mus_type                   "mus-type"
#define S_mus_width                  "mus-width"
#define S_mus_xcoeff                 "mus-xcoeff"
#define S_mus_xcoeffs                "mus-xcoeffs"
#define S_mus_ycoeff                 "mus-ycoeff"
#define S_mus_ycoeffs                "mus-ycoeffs"
#define S_ncos                       "ncos"
#define S_is_ncos                    "ncos?"
#define S_normalize_partials         "normalize-partials"
#define S_notch                      "notch"
#define S_is_notch                   "notch?"
#define S_nrxycos                    "nrxycos"
#define S_is_nrxycos                 "nrxycos?"
#define S_nrxysin                    "nrxysin"
#define S_is_nrxysin                 "nrxysin?"
#define S_nsin                       "nsin"
#define S_is_nsin                    "nsin?"
#define S_odd_multiple               "odd-multiple"
#define S_odd_weight                 "odd-weight"
#define S_one_pole                   "one-pole"
#define S_is_one_pole                "one-pole?"
#define S_one_pole_all_pass          "one-pole-all-pass"
#define S_is_one_pole_all_pass       "one-pole-all-pass?"
#define S_one_zero                   "one-zero"
#define S_is_one_zero                "one-zero?"
#define S_oscil                      "oscil"
#define S_is_oscil                   "oscil?"
#define S_oscil_bank                 "oscil-bank"
#define S_is_oscil_bank              "oscil-bank?"
#define S_out_any                    "out-any"
#define S_outa                       "outa"
#define S_outb                       "outb"
#define S_outc                       "outc"
#define S_outd                       "outd"
#define S_papoulis_window            "papoulis-window"
#define S_partials_to_polynomial     "partials->polynomial"
#define S_partials_to_wave           "partials->wave"
#define S_parzen_window              "parzen-window"
#define S_phase_vocoder              "phase-vocoder"
#define S_is_phase_vocoder           "phase-vocoder?"
#define S_phase_partials_to_wave     "phase-partials->wave"
#define S_poisson_window             "poisson-window"
#define S_polar_to_rectangular       "polar->rectangular"
#define S_polynomial                 "polynomial"
#define S_polyshape                  "polyshape"
#define S_is_polyshape               "polyshape?"
#define S_polywave                   "polywave"
#define S_is_polywave                "polywave?"
#define S_pulse_train                "pulse-train"
#define S_is_pulse_train             "pulse-train?"
#define S_phase_vocoder_amp_increments "phase-vocoder-amp-increments"
#define S_phase_vocoder_amps         "phase-vocoder-amps"
#define S_phase_vocoder_freqs        "phase-vocoder-freqs"
#define S_phase_vocoder_phase_increments "phase-vocoder-phase-increments"
#define S_phase_vocoder_phases       "phase-vocoder-phases"
#define S_pulsed_env                 "pulsed-env"
#define S_is_pulsed_env              "pulsed-env?"
#define S_radians_to_degrees         "radians->degrees"
#define S_radians_to_hz              "radians->hz"
#define S_rand                       "rand"
#define S_rand_interp                "rand-interp"
#define S_is_rand_interp             "rand-interp?"
#define S_is_rand                    "rand?"
#define S_readin                     "readin"
#define S_is_readin                  "readin?"
#define S_rectangular_to_magnitudes  "rectangular->magnitudes"
#define S_rectangular_to_polar       "rectangular->polar"
#define S_rectangular_window         "rectangular-window"
#define S_riemann_window             "riemann-window"
#define S_ring_modulate              "ring-modulate"
#define S_rv2_window                 "rv2-window"
#define S_rv3_window                 "rv3-window"
#define S_rv4_window                 "rv4-window"
#define S_rxykcos                    "rxyk!cos"
#define S_is_rxykcos                 "rxyk!cos?"
#define S_rxyksin                    "rxyk!sin"
#define S_is_rxyksin                 "rxyk!sin?"
#define S_samaraki_window            "samaraki-window"
#define S_sample_to_file             "sample->file"
#define S_sample_to_file_add         "sample->file+"
#define S_is_sample_to_file          "sample->file?"
#define S_samples_to_seconds         "samples->seconds"
#define S_sawtooth_wave              "sawtooth-wave"
#define S_is_sawtooth_wave           "sawtooth-wave?"
#define S_seconds_to_samples         "seconds->samples"
#define S_sinc_window                "sinc-window"
#define S_spectrum                   "spectrum"
#define S_square_wave                "square-wave"
#define S_is_square_wave             "square-wave?"
#define S_src                        "src"
#define S_is_src                     "src?"
#define S_ssb_am                     "ssb-am"
#define S_is_ssb_am                  "ssb-am?"
#define S_table_lookup               "table-lookup"
#define S_is_table_lookup            "table-lookup?"
#define S_tap                        "tap"
#define S_is_tap                     "tap?"
#define S_triangle_wave              "triangle-wave"
#define S_is_triangle_wave           "triangle-wave?"
#define S_tukey_window               "tukey-window"
#define S_two_pole                   "two-pole"
#define S_is_two_pole                "two-pole?"
#define S_two_zero                   "two-zero"
#define S_is_two_zero                "two-zero?"
#define S_ultraspherical_window      "ultraspherical-window"
#define S_wave_train                 "wave-train"
#define S_is_wave_train              "wave-train?"
#define S_welch_window               "welch-window"


#define S_continue_frample_to_file   "continue-frample->file"
#define S_file_to_frample            "file->frample"
#define S_is_file_to_frample         "file->frample?"
#define S_frample_to_file            "frample->file"
#define S_is_frample_to_file         "frample->file?"
#define S_frample_to_frample         "frample->frample"
#define S_make_file_to_frample       "make-file->frample"
#define S_make_frample_to_file       "make-frample->file"

#define S_mus_file_mix               "mus-file-mix"
#define S_mus_file_mix_with_envs     "mus-file-mix-with-envs"

#endif