/*
 * This file was generated automatically by xsubpp version 1.9508 from the
 * contents of Masks.xs. Do not edit this file, edit Masks.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST!
 *
 */

#line 1 "Masks.xs"
#include "module.h"

#line 13 "Masks.c"

XS(XS_Irssi_mask_match); /* prototype to pass -Wmissing-prototypes */
XS(XS_Irssi_mask_match)
{
    dXSARGS;
    if (items != 4)
	Perl_croak(aTHX_ "Usage: Irssi::mask_match(mask, nick, user, host)");
    {
	char *	mask = (char *)SvPV_nolen(ST(0));
	char *	nick = (char *)SvPV_nolen(ST(1));
	char *	user = (char *)SvPV_nolen(ST(2));
	char *	host = (char *)SvPV_nolen(ST(3));
	int	RETVAL;
	dXSTARG;
#line 13 "Masks.xs"
	RETVAL = mask_match(NULL, mask, nick, user, host);
#line 30 "Masks.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Irssi_mask_match_address); /* prototype to pass -Wmissing-prototypes */
XS(XS_Irssi_mask_match_address)
{
    dXSARGS;
    if (items != 3)
	Perl_croak(aTHX_ "Usage: Irssi::mask_match_address(mask, nick, address)");
    {
	char *	mask = (char *)SvPV_nolen(ST(0));
	char *	nick = (char *)SvPV_nolen(ST(1));
	char *	address = (char *)SvPV_nolen(ST(2));
	int	RETVAL;
	dXSTARG;
#line 23 "Masks.xs"
	RETVAL = mask_match_address(NULL, mask, nick, address);
#line 51 "Masks.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Irssi_masks_match); /* prototype to pass -Wmissing-prototypes */
XS(XS_Irssi_masks_match)
{
    dXSARGS;
    if (items != 3)
	Perl_croak(aTHX_ "Usage: Irssi::masks_match(masks, nick, address)");
    {
	char *	masks = (char *)SvPV_nolen(ST(0));
	char *	nick = (char *)SvPV_nolen(ST(1));
	char *	address = (char *)SvPV_nolen(ST(2));
	int	RETVAL;
	dXSTARG;
#line 33 "Masks.xs"
	RETVAL = masks_match(NULL, masks, nick, address);
#line 72 "Masks.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Irssi__Server_mask_match); /* prototype to pass -Wmissing-prototypes */
XS(XS_Irssi__Server_mask_match)
{
    dXSARGS;
    if (items != 5)
	Perl_croak(aTHX_ "Usage: Irssi::Server::mask_match(server, mask, nick, user, host)");
    {
	Irssi__Server	server = irssi_ref_object(ST(0));
	char *	mask = (char *)SvPV_nolen(ST(1));
	char *	nick = (char *)SvPV_nolen(ST(2));
	char *	user = (char *)SvPV_nolen(ST(3));
	char *	host = (char *)SvPV_nolen(ST(4));
	int	RETVAL;
	dXSTARG;

	RETVAL = mask_match(server, mask, nick, user, host);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Irssi__Server_mask_match_address); /* prototype to pass -Wmissing-prototypes */
XS(XS_Irssi__Server_mask_match_address)
{
    dXSARGS;
    if (items != 4)
	Perl_croak(aTHX_ "Usage: Irssi::Server::mask_match_address(server, mask, nick, address)");
    {
	Irssi__Server	server = irssi_ref_object(ST(0));
	char *	mask = (char *)SvPV_nolen(ST(1));
	char *	nick = (char *)SvPV_nolen(ST(2));
	char *	address = (char *)SvPV_nolen(ST(3));
	int	RETVAL;
	dXSTARG;

	RETVAL = mask_match_address(server, mask, nick, address);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Irssi__Server_masks_match); /* prototype to pass -Wmissing-prototypes */
XS(XS_Irssi__Server_masks_match)
{
    dXSARGS;
    if (items != 4)
	Perl_croak(aTHX_ "Usage: Irssi::Server::masks_match(server, masks, nick, address)");
    {
	Irssi__Server	server = irssi_ref_object(ST(0));
	char *	masks = (char *)SvPV_nolen(ST(1));
	char *	nick = (char *)SvPV_nolen(ST(2));
	char *	address = (char *)SvPV_nolen(ST(3));
	int	RETVAL;
	dXSTARG;

	RETVAL = masks_match(server, masks, nick, address);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Irssi__Masks); /* prototype to pass -Wmissing-prototypes */
XS(boot_Irssi__Masks)
{
    dXSARGS;
    char* file = __FILE__;

    XS_VERSION_BOOTCHECK ;

        newXSproto("Irssi::mask_match", XS_Irssi_mask_match, file, "$$$$");
        newXSproto("Irssi::mask_match_address", XS_Irssi_mask_match_address, file, "$$$");
        newXSproto("Irssi::masks_match", XS_Irssi_masks_match, file, "$$$");
        newXSproto("Irssi::Server::mask_match", XS_Irssi__Server_mask_match, file, "$$$$$");
        newXSproto("Irssi::Server::mask_match_address", XS_Irssi__Server_mask_match_address, file, "$$$$");
        newXSproto("Irssi::Server::masks_match", XS_Irssi__Server_masks_match, file, "$$$$");
    XSRETURN_YES;
}

