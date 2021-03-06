/*
 * purple-libnotify+ - Provide libnotify interface to Pidgin and Finch
 * Copyright © 2010-2012 Quentin "Sardem FF7" Glidic
 *
 * This file is part of purple-libnotify+.
 *
 * purple-libnotify+ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * purple-libnotify+ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with purple-libnotify+.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PURPLE_LIBNOTIFY_PLUS_UTILS_H__
#define __PURPLE_LIBNOTIFY_PLUS_UTILS_H__

void notify_plus_send_name_notification(const gchar *name, const gchar *action, const gchar *body, gchar *icon, GdkPixbuf *image);
void notify_plus_send_buddy_notification(PurpleBuddy *buddy, const gchar *action, const gchar *body);
void notify_plus_send_notification_with_actions(const gchar *title, const gchar *body, const gchar *icon, GdkPixbuf *image, ...);
void notify_plus_send_notification(const gchar *title, const gchar *body, const gchar *icon, GdkPixbuf *image);

#endif /* __PURPLE_LIBNOTIFY_PLUS_UTILS_H__ */
