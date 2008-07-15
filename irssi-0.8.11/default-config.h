const char *default_config =
"servers = (\n"
"  { address = \"irc.stealth.net\"; chatnet = \"IRCnet\"; port = \"6668\"; },\n"
"  { address = \"irc.efnet.org\"; chatnet = \"EFNet\"; port = \"6667\"; },\n"
"  { \n"
"    address = \"irc.undernet.org\";\n"
"    chatnet = \"Undernet\";\n"
"    port = \"6667\";\n"
"  },\n"
"  { address = \"irc.dal.net\"; chatnet = \"DALnet\"; port = \"6667\"; }, \n"
"  { address = \"irc.quakenet.org\"; chatnet = \"QuakeNet\"; port = \"6667\"; },\n"
"  { address = \"silc.silcnet.org\"; chatnet = \"SILC\"; port = \"706\"; }\n"
");\n"
"\n"
"chatnets = {\n"
"  IRCnet = {\n"
"    type = \"IRC\";\n"
"    max_kicks = \"4\";\n"
"    max_msgs = \"5\";\n"
"    max_whois = \"4\";\n"
"    max_query_chans = \"5\";\n"
"  };\n"
"  EFNet = {\n"
"    type = \"IRC\";\n"
"    max_kicks = \"4\";\n"
"    max_msgs = \"3\";\n"
"    max_whois = \"1\";\n"
"  };\n"
"  Undernet = {\n"
"    type = \"IRC\";\n"
"    max_kicks = \"1\";\n"
"    max_msgs = \"3\";\n"
"    max_whois = \"30\";\n"
"  };\n"
"  DALnet = {\n"
"    type = \"IRC\";\n"
"    max_kicks = \"4\";\n"
"    max_msgs = \"3\";\n"
"    max_whois = \"30\";\n"
"  }; \n"
"  QuakeNet = {\n"
"    type = \"IRC\";\n"
"    max_kicks = \"1\";\n"
"    max_msgs = \"3\";\n"
"    max_whois = \"30\";\n"
"  };\n"
"  SILC = { type = \"SILC\"; };\n"
"};\n"
"\n"
"channels = (\n"
"  { name = \"#irssi\"; chatnet = \"ircnet\"; autojoin = \"No\"; },\n"
"  { name = \"silc\"; chatnet = \"silc\"; autojoin = \"No\"; }\n"
");\n"
"\n"
"aliases = {\n"
"  J = \"join\";\n"
"  WJOIN = \"join -window\";\n"
"  WQUERY = \"query -window\";\n"
"  LEAVE = \"part\";\n"
"  BYE = \"quit\";\n"
"  EXIT = \"quit\";\n"
"  SIGNOFF = \"quit\";\n"
"  DESCRIBE = \"action\";\n"
"  DATE = \"time\";\n"
"  HOST = \"userhost\";\n"
"  LAST = \"lastlog\";\n"
"  SAY = \"msg *\";\n"
"  WI = \"whois\";\n"
"  WII = \"whois $0 $0\";\n"
"  WW = \"whowas\";\n"
"  W = \"who\";\n"
"  N = \"names\";\n"
"  M = \"msg\";\n"
"  T = \"topic\";\n"
"  C = \"clear\";\n"
"  CL = \"clear\";\n"
"  K = \"kick\";\n"
"  KB = \"kickban\";\n"
"  KN = \"knockout\";\n"
"  BANS = \"ban\";\n"
"  B = \"ban\";\n"
"  MUB = \"unban *\";\n"
"  UB = \"unban\";\n"
"  IG = \"ignore\";\n"
"  UNIG = \"unignore\";\n"
"  SB = \"scrollback\";\n"
"  UMODE = \"mode $N\";\n"
"  WC = \"window close\";\n"
"  WN = \"window new hide\";\n"
"  SV = \"say Irssi $J ($V) - http://irssi.org/\";\n"
"  GOTO = \"sb goto\";\n"
"  CHAT = \"dcc chat\";\n"
"  RUN = \"SCRIPT LOAD\";\n"
"  CALC = \"exec - if which bc &>/dev/null\\\\; then echo '$*' | bc | awk '{print \\\"$*=\\\"$$1}'\\\\; else echo bc was not found\\\\; fi\";\n"
"  SBAR = \"STATUSBAR\";\n"
"  INVITELIST = \"mode $C +I\";\n"
"  Q = \"QUERY\";\n"
"  \"MANUAL-WINDOWS\" = \"set use_status_window off;set autocreate_windows off;set autocreate_query_level none;set autoclose_windows off;set reuse_unused_windows on;save\";\n"
"  EXEMPTLIST = \"mode $C +e\";\n"
"  ATAG = \"WINDOW SERVER\";\n"
"};\n"
"\n"
"statusbar = {\n"
"  # formats:\n"
"  # when using {templates}, the template is shown only if it's argument isn't\n"
"  # empty unless no argument is given. for example {sb} is printed always,\n"
"  # but {sb $T} is printed only if $T isn't empty.\n"
"\n"
"  items = {\n"
"    # start/end text in statusbars\n"
"    barstart = \"{sbstart}\";\n"
"    barend = \"{sbend}\";\n"
"\n"
"    topicbarstart = \"{topicsbstart}\";\n"
"    topicbarend = \"{topicsbend}\";\n"
"\n"
"    # treated \"normally\", you could change the time/user name to whatever\n"
"    time = \"{sb $Z}\";\n"
"    user = \"{sb {sbnickmode $cumode}$N{sbmode $usermode}{sbaway $A}}\";\n"
"\n"
"    # treated specially .. window is printed with non-empty windows,\n"
"    # window_empty is printed with empty windows\n"
"    window = \"{sb $winref:$itemname{sbmode $M}}\";\n"
"    window_empty = \"{sb $winref{sbservertag $tag}}\";\n"
"    prompt = \"{prompt $[.15]itemname}\";\n"
"    prompt_empty = \"{prompt $winname}\";\n"
"    topic = \" $topic\";\n"
"    topic_empty = \" Irssi v$J - http://irssi.org/help/\";\n"
"\n"
"    # all of these treated specially, they're only displayed when needed\n"
"    lag = \"{sb Lag: $0-}\";\n"
"    act = \"{sb Act: $0-}\";\n"
"    more = \"-- more --\";\n"
"  };\n"
"\n"
"  # there's two type of statusbars. root statusbars are either at the top\n"
"  # of the screen or at the bottom of the screen. window statusbars are at\n"
"  # the top/bottom of each split window in screen.\n"
"  default = {\n"
"    # the \"default statusbar\" to be displayed at the bottom of the window.\n"
"    # contains all the normal items.\n"
"    window = {\n"
"      disabled = \"no\";\n"
"\n"
"      # window, root\n"
"      type = \"window\";\n"
"      # top, bottom\n"
"      placement = \"bottom\";\n"
"      # number\n"
"      position = \"1\";\n"
"      # active, inactive, always\n"
"      visible = \"active\";\n"
"\n"
"      # list of items in statusbar in the display order\n"
"      items = {\n"
"        barstart = { priority = \"100\"; };\n"
"        time = { };\n"
"        user = { };\n"
"        window = { };\n"
"        window_empty = { };\n"
"        lag = { priority = \"-1\"; };\n"
"        act = { priority = \"10\"; };\n"
"        more = { priority = \"-1\"; alignment = \"right\"; };\n"
"        barend = { priority = \"100\"; alignment = \"right\"; };\n"
"      };\n"
"    };\n"
"\n"
"    # statusbar to use in inactive split windows\n"
"    window_inact = {\n"
"      type = \"window\";\n"
"      placement = \"bottom\";\n"
"      position = \"1\";\n"
"      visible = \"inactive\";\n"
"      items = {\n"
"        barstart = { priority = \"100\"; };\n"
"        window = { };\n"
"        window_empty = { };\n"
"        more = { priority = \"-1\"; alignment = \"right\"; };\n"
"        barend = { priority = \"100\"; alignment = \"right\"; };\n"
"      };\n"
"    };\n"
"\n"
"    # we treat input line as yet another statusbar :) It's possible to\n"
"    # add other items before or after the input line item.\n"
"    prompt = {\n"
"      type = \"root\";\n"
"      placement = \"bottom\";\n"
"      # we want to be at the bottom always\n"
"      position = \"100\";\n"
"      visible = \"always\";\n"
"      items = {\n"
"        prompt = { priority = \"-1\"; };\n"
"        prompt_empty = { priority = \"-1\"; };\n"
"        # treated specially, this is the real input line.\n"
"        input = { priority = \"10\"; };\n"
"      };\n"
"    };\n"
"\n"
"    # topicbar\n"
"    topic = {\n"
"      type = \"root\";\n"
"      placement = \"top\";\n"
"      position = \"1\";\n"
"      visible = \"always\";\n"
"      items = {\n"
"        topicbarstart = { priority = \"100\"; };\n"
"        topic = { };\n"
"        topic_empty = { };\n"
"        topicbarend = { priority = \"100\"; alignment = \"right\"; };\n"
"      };\n"
"    };\n"
"  };\n"
"};\n"
;
