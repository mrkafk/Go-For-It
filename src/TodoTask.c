/* TodoTask.c generated by valac 0.34.7, the Vala compiler
 * generated from TodoTask.vala, do not modify */

/* Copyright 2016-2017 Go For It! developers
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
#include <stdlib.h>
#include <string.h>


#define TYPE_TODO_TASK (todo_task_get_type ())
#define TODO_TASK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TODO_TASK, TodoTask))
#define TODO_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TODO_TASK, TodoTaskClass))
#define IS_TODO_TASK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TODO_TASK))
#define IS_TODO_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TODO_TASK))
#define TODO_TASK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TODO_TASK, TodoTaskClass))

typedef struct _TodoTask TodoTask;
typedef struct _TodoTaskClass TodoTaskClass;
typedef struct _TodoTaskPrivate TodoTaskPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

struct _TodoTask {
	GObject parent_instance;
	TodoTaskPrivate * priv;
};

struct _TodoTaskClass {
	GObjectClass parent_class;
};

struct _TodoTaskPrivate {
	gchar* _description;
	gboolean _done;
	GDateTime* _creation_date;
	GDateTime* _completion_date;
	gchar* _priority;
};


static gpointer todo_task_parent_class = NULL;

GType todo_task_get_type (void) G_GNUC_CONST;
#define TODO_TASK_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_TODO_TASK, TodoTaskPrivate))
enum  {
	TODO_TASK_DUMMY_PROPERTY,
	TODO_TASK_DESCRIPTION,
	TODO_TASK_DONE,
	TODO_TASK_VALID,
	TODO_TASK_CREATION_DATE,
	TODO_TASK_COMPLETION_DATE,
	TODO_TASK_PRIORITY
};
TodoTask* todo_task_new (const gchar* line, gboolean done);
TodoTask* todo_task_construct (GType object_type, const gchar* line, gboolean done);
void todo_task_set_creation_date (TodoTask* self, GDateTime* value);
void todo_task_set_completion_date (TodoTask* self, GDateTime* value);
const gchar* todo_task_get_description (TodoTask* self);
void todo_task_set_description (TodoTask* self, const gchar* value);
gboolean todo_task_get_done (TodoTask* self);
void todo_task_set_done (TodoTask* self, gboolean value);
GDateTime* todo_task_get_creation_date (TodoTask* self);
gboolean todo_task_get_valid (TodoTask* self);
GDateTime* todo_task_get_completion_date (TodoTask* self);
const gchar* todo_task_get_priority (TodoTask* self);
void todo_task_set_priority (TodoTask* self, const gchar* value);
static void todo_task_finalize (GObject* obj);
static void _vala_todo_task_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_todo_task_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


TodoTask* todo_task_construct (GType object_type, const gchar* line, gboolean done) {
	TodoTask * self = NULL;
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 75 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (line != NULL, NULL);
#line 75 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self = (TodoTask*) g_object_new (object_type, NULL);
#line 76 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	todo_task_set_creation_date (self, NULL);
#line 77 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	todo_task_set_completion_date (self, NULL);
#line 78 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = done;
#line 78 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv->_done = _tmp0_;
#line 79 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = line;
#line 79 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp2_ = g_strdup (_tmp1_);
#line 79 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_free0 (self->priv->_description);
#line 79 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv->_description = _tmp2_;
#line 75 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return self;
#line 117 "TodoTask.c"
}


TodoTask* todo_task_new (const gchar* line, gboolean done) {
#line 75 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return todo_task_construct (TYPE_TODO_TASK, line, done);
#line 124 "TodoTask.c"
}


const gchar* todo_task_get_description (TodoTask* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 23 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 24 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = self->priv->_description;
#line 24 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	result = _tmp0_;
#line 24 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return result;
#line 139 "TodoTask.c"
}


void todo_task_set_description (TodoTask* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 26 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_if_fail (self != NULL);
#line 27 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = value;
#line 27 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 27 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_free0 (self->priv->_description);
#line 27 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv->_description = _tmp1_;
#line 28 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_signal_emit_by_name (self, "data-changed");
#line 26 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_notify ((GObject *) self, "description");
#line 160 "TodoTask.c"
}


gboolean todo_task_get_done (TodoTask* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 34 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 35 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = self->priv->_done;
#line 35 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	result = _tmp0_;
#line 35 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return result;
#line 175 "TodoTask.c"
}


void todo_task_set_done (TodoTask* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
#line 37 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_if_fail (self != NULL);
#line 38 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = self->priv->_done;
#line 38 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = value;
#line 38 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	if (_tmp0_ != _tmp1_) {
#line 190 "TodoTask.c"
		gboolean _tmp2_ = FALSE;
		gboolean _tmp3_ = FALSE;
		gboolean _tmp7_ = FALSE;
#line 39 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		_tmp3_ = value;
#line 39 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		if (_tmp3_) {
#line 198 "TodoTask.c"
			GDateTime* _tmp4_ = NULL;
#line 39 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			_tmp4_ = self->priv->_creation_date;
#line 39 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			_tmp2_ = _tmp4_ != NULL;
#line 204 "TodoTask.c"
		} else {
#line 39 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			_tmp2_ = FALSE;
#line 208 "TodoTask.c"
		}
#line 39 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		if (_tmp2_) {
#line 212 "TodoTask.c"
			GDateTime* _tmp5_ = NULL;
			GDateTime* _tmp6_ = NULL;
#line 40 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			_tmp5_ = g_date_time_new_now_local ();
#line 40 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			_tmp6_ = _tmp5_;
#line 40 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			todo_task_set_completion_date (self, _tmp6_);
#line 40 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			_g_date_time_unref0 (_tmp6_);
#line 223 "TodoTask.c"
		} else {
#line 42 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
			todo_task_set_completion_date (self, NULL);
#line 227 "TodoTask.c"
		}
#line 44 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		_tmp7_ = value;
#line 44 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		self->priv->_done = _tmp7_;
#line 45 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_signal_emit_by_name (self, "done-changed");
#line 235 "TodoTask.c"
	}
#line 37 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_notify ((GObject *) self, "done");
#line 239 "TodoTask.c"
}


gboolean todo_task_get_valid (TodoTask* self) {
	gboolean result;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
#line 52 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 53 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = todo_task_get_description (self);
#line 53 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = _tmp0_;
#line 53 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	result = g_strcmp0 (_tmp1_, "") != 0;
#line 53 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return result;
#line 257 "TodoTask.c"
}


GDateTime* todo_task_get_creation_date (TodoTask* self) {
	GDateTime* result;
	GDateTime* _tmp0_ = NULL;
#line 58 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 58 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = self->priv->_creation_date;
#line 58 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	result = _tmp0_;
#line 58 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return result;
#line 272 "TodoTask.c"
}


static gpointer _g_date_time_ref0 (gpointer self) {
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return self ? g_date_time_ref (self) : NULL;
#line 279 "TodoTask.c"
}


void todo_task_set_creation_date (TodoTask* self, GDateTime* value) {
	GDateTime* _tmp0_ = NULL;
	GDateTime* _tmp1_ = NULL;
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_if_fail (self != NULL);
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = value;
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = _g_date_time_ref0 (_tmp0_);
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_date_time_unref0 (self->priv->_creation_date);
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv->_creation_date = _tmp1_;
#line 59 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_notify ((GObject *) self, "creation-date");
#line 298 "TodoTask.c"
}


GDateTime* todo_task_get_completion_date (TodoTask* self) {
	GDateTime* result;
	GDateTime* _tmp0_ = NULL;
#line 63 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 63 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = self->priv->_completion_date;
#line 63 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	result = _tmp0_;
#line 63 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return result;
#line 313 "TodoTask.c"
}


void todo_task_set_completion_date (TodoTask* self, GDateTime* value) {
	GDateTime* _tmp0_ = NULL;
	GDateTime* _tmp1_ = NULL;
#line 64 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_if_fail (self != NULL);
#line 64 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = value;
#line 64 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = _g_date_time_ref0 (_tmp0_);
#line 64 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_date_time_unref0 (self->priv->_completion_date);
#line 64 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv->_completion_date = _tmp1_;
#line 64 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_notify ((GObject *) self, "completion-date");
#line 332 "TodoTask.c"
}


const gchar* todo_task_get_priority (TodoTask* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 68 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 68 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = self->priv->_priority;
#line 68 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	result = _tmp0_;
#line 68 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	return result;
#line 347 "TodoTask.c"
}


void todo_task_set_priority (TodoTask* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 69 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_return_if_fail (self != NULL);
#line 69 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp0_ = value;
#line 69 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 69 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_free0 (self->priv->_priority);
#line 69 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv->_priority = _tmp1_;
#line 69 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_notify ((GObject *) self, "priority");
#line 366 "TodoTask.c"
}


static void todo_task_class_init (TodoTaskClass * klass) {
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	todo_task_parent_class = g_type_class_peek_parent (klass);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_type_class_add_private (klass, sizeof (TodoTaskPrivate));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_todo_task_get_property;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_todo_task_set_property;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	G_OBJECT_CLASS (klass)->finalize = todo_task_finalize;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TODO_TASK_DESCRIPTION, g_param_spec_string ("description", "description", "description", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TODO_TASK_DONE, g_param_spec_boolean ("done", "done", "done", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TODO_TASK_VALID, g_param_spec_boolean ("valid", "valid", "valid", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TODO_TASK_CREATION_DATE, g_param_spec_boxed ("creation-date", "creation-date", "creation-date", G_TYPE_DATE_TIME, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TODO_TASK_COMPLETION_DATE, g_param_spec_boxed ("completion-date", "completion-date", "completion-date", G_TYPE_DATE_TIME, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TODO_TASK_PRIORITY, g_param_spec_string ("priority", "priority", "priority", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_signal_new ("done_changed", TYPE_TODO_TASK, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	g_signal_new ("data_changed", TYPE_TODO_TASK, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 397 "TodoTask.c"
}


static void todo_task_instance_init (TodoTask * self) {
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self->priv = TODO_TASK_GET_PRIVATE (self);
#line 404 "TodoTask.c"
}


static void todo_task_finalize (GObject* obj) {
	TodoTask * self;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_TODO_TASK, TodoTask);
#line 31 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_free0 (self->priv->_description);
#line 57 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_date_time_unref0 (self->priv->_creation_date);
#line 62 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_date_time_unref0 (self->priv->_completion_date);
#line 67 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	_g_free0 (self->priv->_priority);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	G_OBJECT_CLASS (todo_task_parent_class)->finalize (obj);
#line 422 "TodoTask.c"
}


/**
 * This class stores all task information.
 */
GType todo_task_get_type (void) {
	static volatile gsize todo_task_type_id__volatile = 0;
	if (g_once_init_enter (&todo_task_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TodoTaskClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) todo_task_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TodoTask), 0, (GInstanceInitFunc) todo_task_instance_init, NULL };
		GType todo_task_type_id;
		todo_task_type_id = g_type_register_static (G_TYPE_OBJECT, "TodoTask", &g_define_type_info, 0);
		g_once_init_leave (&todo_task_type_id__volatile, todo_task_type_id);
	}
	return todo_task_type_id__volatile;
}


static void _vala_todo_task_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	TodoTask * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_TODO_TASK, TodoTask);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	switch (property_id) {
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_DESCRIPTION:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_value_set_string (value, todo_task_get_description (self));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_DONE:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_value_set_boolean (value, todo_task_get_done (self));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_VALID:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_value_set_boolean (value, todo_task_get_valid (self));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_CREATION_DATE:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_value_set_boxed (value, todo_task_get_creation_date (self));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_COMPLETION_DATE:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_value_set_boxed (value, todo_task_get_completion_date (self));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_PRIORITY:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		g_value_set_string (value, todo_task_get_priority (self));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 482 "TodoTask.c"
		default:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 488 "TodoTask.c"
	}
}


static void _vala_todo_task_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	TodoTask * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_TODO_TASK, TodoTask);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
	switch (property_id) {
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_DESCRIPTION:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		todo_task_set_description (self, g_value_get_string (value));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_DONE:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		todo_task_set_done (self, g_value_get_boolean (value));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_CREATION_DATE:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		todo_task_set_creation_date (self, g_value_get_boxed (value));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_COMPLETION_DATE:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		todo_task_set_completion_date (self, g_value_get_boxed (value));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		case TODO_TASK_PRIORITY:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		todo_task_set_priority (self, g_value_get_string (value));
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 528 "TodoTask.c"
		default:
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 21 "/home/mark/projects/Go-For-It/src/TodoTask.vala"
		break;
#line 534 "TodoTask.c"
	}
}


