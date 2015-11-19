/*
    Eiciel - GNOME editor of ACL file permissions.
    Copyright (C) 2004-2014 Roger Ferrer Ib��ez

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,  USA
*/

#ifndef EICIEL_NEMO_PAGE_HPP
#define EICIEL_NEMO_PAGE_HPP

#define NEMO_TYPE_EICIEL_PROPERTIES_PAGE         (nemo_eiciel_properties_page_get_type ())
#define NEMO_EICIEL_PROPERTIES_PAGE(obj)         (GTK_CHECK_CAST ((obj), NEMO_TYPE_EICIEL_PROPERTIES_PAGE, NemoEicielPropertiesPage))
#define NEMO_EICIEL_PROPERTIES_PAGE_CLASS(klass)    (GTK_CHECK_CLASS_CAST ((klass), NEMO_TYPE_EICIEL_PROPERTIES_PAGE, NemoEicielPropertiesPageClass))
#define NEMO_IS_EICIEL_PROPERTIES_PAGE(obj)      (GTK_CHECK_TYPE ((obj), NEMO_TYPE_EICIEL_PROPERTIES_PAGE))
#define NEMO_IS_EICIEL_PROPERTIES_PAGE_CLASS(klass) (GTK_CHECK_CLASS_TYPE ((klass), NEMO_TYPE_EICIEL_PROPERTIES_PAGE))

G_BEGIN_DECLS

typedef struct NemoEicielPropertiesPageDetails NemoEicielPropertiesPageDetails;

typedef struct {
    GtkVBox parent;
} NemoEicielPropertiesPage;

typedef struct {
    GtkVBoxClass parent;
} NemoEicielPropertiesPageClass;

G_END_DECLS

#endif // EICIEL_NEMO_PAGE_HPP
