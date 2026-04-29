/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0a1019ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc1c3c5ff, 0x0a1019ff, 0x59616eff },
	[SchemeSel]  = { 0xc1c3c5ff, 0x3C8467ff, 0x877956ff },
	[SchemeUrg]  = { 0xc1c3c5ff, 0x877956ff, 0x3C8467ff },
};
