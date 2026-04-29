static const char norm_fg[] = "#c1c3c5";
static const char norm_bg[] = "#0a1019";
static const char norm_border[] = "#59616e";

static const char sel_fg[] = "#c1c3c5";
static const char sel_bg[] = "#3C8467";
static const char sel_border[] = "#c1c3c5";

static const char urg_fg[] = "#c1c3c5";
static const char urg_bg[] = "#877956";
static const char urg_border[] = "#877956";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
