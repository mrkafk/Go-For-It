/* DragListModel.c generated by valac 0.34.7, the Vala compiler
 * generated from DragListModel.vala, do not modify */

/* Copyright 2017 Go For It! developers
*
* This file is part of Go For It!.
*
* Go For It! is free software: you can redistribute it
* and/or modify it under the terms of version 3 of the
* GNU General Public License as published by the Free Software Foundation.
*
* Go For It! is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with Go For It!. If not, see http://www.gnu.org/licenses/.
*/

#include <glib.h>
#include <glib-object.h>


#define TYPE_DRAG_LIST_MODEL (drag_list_model_get_type ())
#define DRAG_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST_MODEL, DragListModel))
#define IS_DRAG_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST_MODEL))
#define DRAG_LIST_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_DRAG_LIST_MODEL, DragListModelIface))

typedef struct _DragListModel DragListModel;
typedef struct _DragListModelIface DragListModelIface;

struct _DragListModelIface {
	GTypeInterface parent_iface;
	void (*move_item) (DragListModel* self, guint old_position, guint new_position);
	GObject* (*get_item) (DragListModel* self, guint position);
	GType (*get_item_type) (DragListModel* self);
	guint (*get_n_items) (DragListModel* self);
};



GType drag_list_model_get_type (void) G_GNUC_CONST;
void drag_list_model_move_item (DragListModel* self, guint old_position, guint new_position);
GObject* drag_list_model_get_item (DragListModel* self, guint position);
GType drag_list_model_get_item_type (DragListModel* self);
guint drag_list_model_get_n_items (DragListModel* self);
static void g_cclosure_user_marshal_VOID__UINT_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void g_cclosure_user_marshal_VOID__UINT_UINT_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);


/**
     * Called when a row is moved in the widget.
     * It should only be used to synchronize the model with the widget.
     */
void drag_list_model_move_item (DragListModel* self, guint old_position, guint new_position) {
#line 30 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	g_return_if_fail (self != NULL);
#line 30 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	DRAG_LIST_MODEL_GET_INTERFACE (self)->move_item (self, old_position, new_position);
#line 62 "DragListModel.c"
}


/**
     * Get the item at position.
     */
GObject* drag_list_model_get_item (DragListModel* self, guint position) {
#line 41 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 41 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	return DRAG_LIST_MODEL_GET_INTERFACE (self)->get_item (self, position);
#line 74 "DragListModel.c"
}


/**
     * Gets the type of the items in this.
     */
GType drag_list_model_get_item_type (DragListModel* self) {
#line 45 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	g_return_val_if_fail (self != NULL, 0UL);
#line 45 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	return DRAG_LIST_MODEL_GET_INTERFACE (self)->get_item_type (self);
#line 86 "DragListModel.c"
}


/**
     * Gets the number of items in this.
     */
guint drag_list_model_get_n_items (DragListModel* self) {
#line 49 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	g_return_val_if_fail (self != NULL, 0U);
#line 49 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	return DRAG_LIST_MODEL_GET_INTERFACE (self)->get_n_items (self);
#line 98 "DragListModel.c"
}


static void g_cclosure_user_marshal_VOID__UINT_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__UINT_UINT) (gpointer data1, guint arg_1, guint arg_2, gpointer data2);
	register GMarshalFunc_VOID__UINT_UINT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	g_return_if_fail (n_param_values == 3);
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	if (G_CCLOSURE_SWAP_DATA (closure)) {
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data1 = closure->data;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data2 = param_values->data[0].v_pointer;
#line 117 "DragListModel.c"
	} else {
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data1 = param_values->data[0].v_pointer;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data2 = closure->data;
#line 123 "DragListModel.c"
	}
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	callback = (GMarshalFunc_VOID__UINT_UINT) (marshal_data ? marshal_data : cc->callback);
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	callback (data1, g_value_get_uint (param_values + 1), g_value_get_uint (param_values + 2), data2);
#line 129 "DragListModel.c"
}


static void g_cclosure_user_marshal_VOID__UINT_UINT_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__UINT_UINT_UINT) (gpointer data1, guint arg_1, guint arg_2, guint arg_3, gpointer data2);
	register GMarshalFunc_VOID__UINT_UINT_UINT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	g_return_if_fail (n_param_values == 4);
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	if (G_CCLOSURE_SWAP_DATA (closure)) {
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data1 = closure->data;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data2 = param_values->data[0].v_pointer;
#line 148 "DragListModel.c"
	} else {
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data1 = param_values->data[0].v_pointer;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		data2 = closure->data;
#line 154 "DragListModel.c"
	}
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	callback = (GMarshalFunc_VOID__UINT_UINT_UINT) (marshal_data ? marshal_data : cc->callback);
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	callback (data1, g_value_get_uint (param_values + 1), g_value_get_uint (param_values + 2), g_value_get_uint (param_values + 3), data2);
#line 160 "DragListModel.c"
}


static void drag_list_model_base_init (DragListModelIface * iface) {
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	static gboolean initialized = FALSE;
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
	if (!initialized) {
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		initialized = TRUE;
#line 171 "DragListModel.c"
		/**
		     * This signal is emitted whenever an item is moved when this wasn't caused
		     * by move_item.
		     */
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		g_signal_new ("item_moved", TYPE_DRAG_LIST_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__UINT_UINT, G_TYPE_NONE, 2, G_TYPE_UINT, G_TYPE_UINT);
#line 178 "DragListModel.c"
		/**
		     * This signal is emitted whenever items were added or removed to list.
		     */
#line 25 "/home/mark/projects/Go-For-It/src/DragListModel.vala"
		g_signal_new ("items_changed", TYPE_DRAG_LIST_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__UINT_UINT_UINT, G_TYPE_NONE, 3, G_TYPE_UINT, G_TYPE_UINT, G_TYPE_UINT);
#line 184 "DragListModel.c"
	}
}


/**
 * GLib.ListModel extended with support for moving items from a widget or other
 * object.
 * See documentation of GLib.ListModel for more detailed information.
 * Because versions of GLib older than 2.44 are supported right now,
 * GLib.ListModel can't be inherited from.
 */
GType drag_list_model_get_type (void) {
	static volatile gsize drag_list_model_type_id__volatile = 0;
	if (g_once_init_enter (&drag_list_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DragListModelIface), (GBaseInitFunc) drag_list_model_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType drag_list_model_type_id;
		drag_list_model_type_id = g_type_register_static (G_TYPE_INTERFACE, "DragListModel", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (drag_list_model_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&drag_list_model_type_id__volatile, drag_list_model_type_id);
	}
	return drag_list_model_type_id__volatile;
}


