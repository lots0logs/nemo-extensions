bin_PROGRAMS = eiciel
eiciel_CPPFLAGS = -I@top_srcdir@/lib -DDATADIR="\"$(datadir)\"" -DPKGDATADIR="\"$(pkgdatadir)\"" 
eiciel_CXXFLAGS = @GTKMM_CFLAGS@ -Wall 
eiciel_LDFLAGS = @GTKMM_LIBS@ @ACL_LIBS@
eiciel_SOURCES = \
    acl_manager.cpp \
	acl_manager.hpp \
	eiciel_main_controller.cpp \
	eiciel_main_controller.hpp \
	eiciel_main_window.cpp \
	eiciel_main_window.hpp \
	acl_list.hpp \
	participant_list.hpp \
	acl_element_kind.hpp \
	cellrenderer_acl.hpp \
	cellrenderer_acl.cpp \
	eiciel_standalone.cpp \
	eiciel_container.hpp \
	eiciel_container.cpp

if ENABLE_USER_XATTR
eiciel_SOURCES += \
	xattr_manager.hpp \
	xattr_manager.cpp \
	eiciel_xattr_window.cpp \
	eiciel_xattr_window.hpp \
	eiciel_xattr_controller.cpp \
	eiciel_xattr_controller.hpp \
	xattr_list_model.hpp
endif

nemoextdir=@NEMO_EXTENSIONS_DIR@
nemoext_LTLIBRARIES=libeiciel-nemo.la
libeiciel_nemo_la_CPPFLAGS = -I@top_srcdir@/lib -DDATADIR="\"$(datadir)\"" -DPKGDATADIR="\"$(pkgdatadir)\""
libeiciel_nemo_la_CXXFLAGS = @GTKMM_CFLAGS@ -Wall
libeiciel_nemo_la_LDFLAGS =  -module -avoid-version @GTKMM_LIBS@ @ACL_LIBS@
libeiciel_nemo_la_SOURCES = \
    acl_manager.cpp \
	acl_manager.hpp \
	eiciel_nemo_page.cpp \
	eiciel_nemo_page.hpp \
	eiciel_main_controller.cpp \
	eiciel_main_controller.hpp \
	eiciel_main_window.cpp \
	eiciel_main_window.hpp \
	xattr_list_model.hpp \
	participant_list.hpp \
	acl_element_kind.hpp \
	cellrenderer_acl.hpp \
	cellrenderer_acl.cpp 

if ENABLE_USER_XATTR
libeiciel_nemo_la_SOURCES += \
	xattr_manager.hpp \
	xattr_manager.cpp \
	eiciel_xattr_window.cpp \
	eiciel_xattr_window.hpp \
	eiciel_xattr_controller.cpp \
	eiciel_xattr_controller.hpp \
	xattr_list_model.hpp
endif

desktopfilesdir=@datadir@/applications
desktopfiles_DATA=eiciel.desktop


appdatadir = $(datarootdir)/appdata
dist_appdata_DATA = eiciel.appdata.xml

eiciel.desktop : eiciel.desktop.in
	sed -e "s|@DSK_VERSION@|$(VERSION)|;s|@DSK_bindir@|$(bindir)|;s|@DSK_pkgdatadir@|$(pkgdatadir)|" $< > $@

CLEANFILES = 

# Since 'make' built it, 'make clean' should clean it
# see http://sources.redhat.com/automake/automake.html#Clean
CLEANFILES += nemo-acl-editor.desktop

EXTRA_DIST= \
	nemo-acl-editor.desktop.in \
	nemo-acl-editor.appdata.xml
