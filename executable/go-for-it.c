/* go-for-it.c generated by valac 0.34.7, the Vala compiler
 * generated from go-for-it.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <glib/gi18n-lib.h>
#include "com.github.jmoerman.go-for-it-0_internal.h"
#include <gio/gio.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))



gint _vala_main (gchar** args, int args_length1);
void apply_desktop_specific_tweaks (void);


/**
 * The entry point for running the application.
 */
gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	gchar* locale_dir = NULL;
	gchar* _tmp0_ = NULL;
	Main* app = NULL;
	Main* _tmp1_ = NULL;
	gint status = 0;
	gchar** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	gint _tmp3_ = 0;
#line 5 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	setlocale (LC_MESSAGES, "");
#line 6 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	textdomain (GOFI_GETTEXT_PACKAGE);
#line 7 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	bind_textdomain_codeset (GOFI_GETTEXT_PACKAGE, "utf-8");
#line 8 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp0_ = g_build_filename (GOFI_INSTALL_PREFIX, "share", "locale", NULL);
#line 8 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	locale_dir = _tmp0_;
#line 9 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	bindtextdomain (GOFI_GETTEXT_PACKAGE, locale_dir);
#line 11 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	apply_desktop_specific_tweaks ();
#line 12 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp1_ = main_new ();
#line 12 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	app = _tmp1_;
#line 13 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp2_ = args;
#line 13 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp2__length1 = args_length1;
#line 13 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp3_ = g_application_run ((GApplication*) app, _tmp2__length1, _tmp2_);
#line 13 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	status = _tmp3_;
#line 14 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	result = status;
#line 14 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_g_object_unref0 (app);
#line 14 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_g_free0 (locale_dir);
#line 14 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	return result;
#line 71 "go-for-it.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 4 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	return _vala_main (argv, argc);
#line 81 "go-for-it.c"
}


/**
 * This function handles different tweaks that have to be applied to
 * make Go For It! work properly on certain desktop environments.
 */
void apply_desktop_specific_tweaks (void) {
	gchar* desktop = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
#line 22 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp0_ = g_getenv ("DESKTOP_SESSION");
#line 22 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 22 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	desktop = _tmp1_;
#line 24 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_tmp2_ = desktop;
#line 24 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	if (g_strcmp0 (_tmp2_, "ubuntu") == 0) {
#line 26 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
		g_setenv ("LIBOVERLAY_SCROLLBAR", "0", TRUE);
#line 106 "go-for-it.c"
	}
#line 21 "/home/mark/projects/Go-For-It/executable/go-for-it.vala"
	_g_free0 (desktop);
#line 110 "go-for-it.c"
}



