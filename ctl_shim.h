OPUS_SHIM_CTL(SET_COMPLEXITY, set_complexity, opus_int32, complexity)
OPUS_SHIM_CTL(GET_COMPLEXITY, get_complexity, opus_int32*, complexity)
OPUS_SHIM_CTL(SET_BITRATE, set_bitrate, opus_int32, bitrate)
OPUS_SHIM_CTL(GET_BITRATE, get_bitrate, opus_int32*, bitrate)
OPUS_SHIM_CTL(SET_VBR, set_vbr, opus_int32, vbr)
OPUS_SHIM_CTL(GET_VBR, get_vbr, opus_int32*, vbr)
OPUS_SHIM_CTL(SET_VBR_CONSTRAINT, set_vbr_constraint, opus_int32, constraint)
OPUS_SHIM_CTL(GET_VBR_CONSTRAINT, get_vbr_constraint, opus_int32*, constraint)
OPUS_SHIM_CTL(SET_FORCE_CHANNELS, set_force_channels, opus_int32, channels)
OPUS_SHIM_CTL(GET_FORCE_CHANNELS, get_force_channels, opus_int32*, channels)
OPUS_SHIM_CTL(SET_MAX_BANDWIDTH, set_max_bandwidth, opus_int32, bandwidth)
OPUS_SHIM_CTL(GET_MAX_BANDWIDTH, get_max_bandwidth, opus_int32*, bandwidth)
OPUS_SHIM_CTL(SET_BANDWIDTH, set_bandwidth, opus_int32*, bandwidth)
OPUS_SHIM_CTL(SET_SIGNAL, set_signal, opus_int32, signal)
OPUS_SHIM_CTL(GET_SIGNAL, get_signal, opus_int32*, signal)
OPUS_SHIM_CTL(SET_APPLICATION, set_application, opus_int32, application)
OPUS_SHIM_CTL(GET_APPLICATION, get_application, opus_int32*, application)
OPUS_SHIM_CTL(GET_LOOKAHEAD, get_lookahead, opus_int32*, lookahead)
OPUS_SHIM_CTL(SET_INBAND_FEC, set_inband_fec, opus_int32, fec)
OPUS_SHIM_CTL(GET_INBAND_FEC, get_inband_fec, opus_int32*, fec)
OPUS_SHIM_CTL(SET_PACKET_LOSS_PERC, set_packet_loss_perc, opus_int32, loss)
OPUS_SHIM_CTL(GET_PACKET_LOSS_PERC, get_packet_loss_perc, opus_int32*, loss)
OPUS_SHIM_CTL(SET_DTX, set_dtx, opus_int32, dtx)
OPUS_SHIM_CTL(GET_DTX, get_dtx, opus_int32*, dtx)
OPUS_SHIM_CTL(SET_LSB_DEPTH, set_lsb_depth, opus_int32, depth)
OPUS_SHIM_CTL(GET_LSB_DEPTH, get_lsb_depth, opus_int32*, depth)
OPUS_SHIM_CTL(SET_EXPERT_FRAME_DURATION, set_expert_frame_duration, opus_int32, duration)
OPUS_SHIM_CTL(GET_EXPERT_FRAME_DURATION, get_expert_frame_duration, opus_int32*, duration)
OPUS_SHIM_CTL(SET_PREDICTION_DISABLED, set_prediction_disabled, opus_int32, predictionDisabled)
OPUS_SHIM_CTL(GET_PREDICTION_DISABLED, get_prediction_disabled, opus_int32*, predictionDisabled)
OPUS_SHIM_CTL(GET_FINAL_RANGE, get_final_range, opus_uint32*, range)
OPUS_SHIM_CTL(GET_BANDWIDTH, get_bandwidth, opus_int32*, bandwidth)
OPUS_SHIM_CTL(GET_SAMPLE_RATE, get_sample_rate, opus_int32*, sampleRate)
OPUS_SHIM_CTL(SET_PHASE_INVERSION_DISABLED, set_phase_inversion_disabled, opus_int32, phaseInversionDisabled)
OPUS_SHIM_CTL(GET_PHASE_INVERSION_DISABLED, get_phase_inversion_disabled, opus_int32*, phaseInversionDisabled)
OPUS_SHIM_CTL(SET_GAIN, set_gain, opus_int32, gain)
OPUS_SHIM_CTL(GET_GAIN, get_gain, opus_int32*, gain)
OPUS_SHIM_CTL(GET_LAST_PACKET_DURATION, get_last_packet_duration, opus_int32*, duration)
OPUS_SHIM_CTL(GET_PITCH, get_pitch, opus_int32*, pitch)

#undef OPUS_SHIM_CTL