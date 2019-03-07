/* com.github.jmoerman.go-for-it-0.h generated by valac 0.34.7, the Vala compiler, do not modify */


#ifndef __COM_GITHUB_JMOERMAN_GO_FOR_IT_0_H__
#define __COM_GITHUB_JMOERMAN_GO_FOR_IT_0_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS


#define GOFI_TYPE_FEATURE_STATUS (gofi_feature_status_get_type ())

#define TYPE_SETTINGS_MANAGER (settings_manager_get_type ())
#define SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SETTINGS_MANAGER, SettingsManager))
#define SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SETTINGS_MANAGER, SettingsManagerClass))
#define IS_SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SETTINGS_MANAGER))
#define IS_SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SETTINGS_MANAGER))
#define SETTINGS_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SETTINGS_MANAGER, SettingsManagerClass))

typedef struct _SettingsManager SettingsManager;
typedef struct _SettingsManagerClass SettingsManagerClass;
typedef struct _SettingsManagerPrivate SettingsManagerPrivate;

#define TYPE_TODO_TASK (todo_task_get_type ())
#define TODO_TASK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TODO_TASK, TodoTask))
#define TODO_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TODO_TASK, TodoTaskClass))
#define IS_TODO_TASK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TODO_TASK))
#define IS_TODO_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TODO_TASK))
#define TODO_TASK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TODO_TASK, TodoTaskClass))

typedef struct _TodoTask TodoTask;
typedef struct _TodoTaskClass TodoTaskClass;
typedef struct _TodoTaskPrivate TodoTaskPrivate;

#define TYPE_FILE_WATCHER (file_watcher_get_type ())
#define FILE_WATCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FILE_WATCHER, FileWatcher))
#define FILE_WATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FILE_WATCHER, FileWatcherClass))
#define IS_FILE_WATCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FILE_WATCHER))
#define IS_FILE_WATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FILE_WATCHER))
#define FILE_WATCHER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FILE_WATCHER, FileWatcherClass))

typedef struct _FileWatcher FileWatcher;
typedef struct _FileWatcherClass FileWatcherClass;
typedef struct _FileWatcherPrivate FileWatcherPrivate;

#define TYPE_TASK_TIMER (task_timer_get_type ())
#define TASK_TIMER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TASK_TIMER, TaskTimer))
#define TASK_TIMER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TASK_TIMER, TaskTimerClass))
#define IS_TASK_TIMER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TASK_TIMER))
#define IS_TASK_TIMER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TASK_TIMER))
#define TASK_TIMER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TASK_TIMER, TaskTimerClass))

typedef struct _TaskTimer TaskTimer;
typedef struct _TaskTimerClass TaskTimerClass;
typedef struct _TaskTimerPrivate TaskTimerPrivate;

#define TYPE_DRAG_LIST_MODEL (drag_list_model_get_type ())
#define DRAG_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST_MODEL, DragListModel))
#define IS_DRAG_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST_MODEL))
#define DRAG_LIST_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_DRAG_LIST_MODEL, DragListModelIface))

typedef struct _DragListModel DragListModel;
typedef struct _DragListModelIface DragListModelIface;

#define TYPE_DRAG_LIST (drag_list_get_type ())
#define DRAG_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST, DragList))
#define DRAG_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DRAG_LIST, DragListClass))
#define IS_DRAG_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST))
#define IS_DRAG_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DRAG_LIST))
#define DRAG_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DRAG_LIST, DragListClass))

typedef struct _DragList DragList;
typedef struct _DragListClass DragListClass;
typedef struct _DragListPrivate DragListPrivate;

#define TYPE_DRAG_LIST_ROW (drag_list_row_get_type ())
#define DRAG_LIST_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST_ROW, DragListRow))
#define DRAG_LIST_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DRAG_LIST_ROW, DragListRowClass))
#define IS_DRAG_LIST_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST_ROW))
#define IS_DRAG_LIST_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DRAG_LIST_ROW))
#define DRAG_LIST_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DRAG_LIST_ROW, DragListRowClass))

typedef struct _DragListRow DragListRow;
typedef struct _DragListRowClass DragListRowClass;
typedef struct _DragListRowPrivate DragListRowPrivate;

#define TYPE_TIMER_VIEW (timer_view_get_type ())
#define TIMER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TIMER_VIEW, TimerView))
#define TIMER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TIMER_VIEW, TimerViewClass))
#define IS_TIMER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TIMER_VIEW))
#define IS_TIMER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TIMER_VIEW))
#define TIMER_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TIMER_VIEW, TimerViewClass))

typedef struct _TimerView TimerView;
typedef struct _TimerViewClass TimerViewClass;
typedef struct _TimerViewPrivate TimerViewPrivate;

#define TYPE_SETTINGS_DIALOG (settings_dialog_get_type ())
#define SETTINGS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SETTINGS_DIALOG, SettingsDialog))
#define SETTINGS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SETTINGS_DIALOG, SettingsDialogClass))
#define IS_SETTINGS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SETTINGS_DIALOG))
#define IS_SETTINGS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SETTINGS_DIALOG))
#define SETTINGS_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SETTINGS_DIALOG, SettingsDialogClass))

typedef struct _SettingsDialog SettingsDialog;
typedef struct _SettingsDialogClass SettingsDialogClass;
typedef struct _SettingsDialogPrivate SettingsDialogPrivate;

#define TYPE_ABOUT_DIALOG (about_dialog_get_type ())
#define ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ABOUT_DIALOG, AboutDialog))
#define ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ABOUT_DIALOG, AboutDialogClass))
#define IS_ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ABOUT_DIALOG))
#define IS_ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ABOUT_DIALOG))
#define ABOUT_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ABOUT_DIALOG, AboutDialogClass))

typedef struct _AboutDialog AboutDialog;
typedef struct _AboutDialogClass AboutDialogClass;
typedef struct _AboutDialogPrivate AboutDialogPrivate;

#define TYPE_CONTRIBUTE_DIALOG (contribute_dialog_get_type ())
#define CONTRIBUTE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CONTRIBUTE_DIALOG, ContributeDialog))
#define CONTRIBUTE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CONTRIBUTE_DIALOG, ContributeDialogClass))
#define IS_CONTRIBUTE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CONTRIBUTE_DIALOG))
#define IS_CONTRIBUTE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CONTRIBUTE_DIALOG))
#define CONTRIBUTE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CONTRIBUTE_DIALOG, ContributeDialogClass))

typedef struct _ContributeDialog ContributeDialog;
typedef struct _ContributeDialogClass ContributeDialogClass;
typedef struct _ContributeDialogPrivate ContributeDialogPrivate;

typedef enum  {
	GOFI_FEATURE_STATUS_UNKNOWN,
	GOFI_FEATURE_STATUS_ALWAYS,
	GOFI_FEATURE_STATUS_COMMON,
	GOFI_FEATURE_STATUS_UNCOMMON,
	GOFI_FEATURE_STATUS_NEVER
} GOFIFeatureStatus;

struct _SettingsManager {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SettingsManagerPrivate * priv;
	gboolean first_start;
};

struct _SettingsManagerClass {
	GTypeClass parent_class;
	void (*finalize) (SettingsManager *self);
};

struct _TodoTask {
	GObject parent_instance;
	TodoTaskPrivate * priv;
};

struct _TodoTaskClass {
	GObjectClass parent_class;
};

struct _FileWatcher {
	GTypeInstance parent_instance;
	volatile int ref_count;
	FileWatcherPrivate * priv;
};

struct _FileWatcherClass {
	GTypeClass parent_class;
	void (*finalize) (FileWatcher *self);
};

struct _TaskTimer {
	GTypeInstance parent_instance;
	volatile int ref_count;
	TaskTimerPrivate * priv;
	GDateTime* start_time;
};

struct _TaskTimerClass {
	GTypeClass parent_class;
	void (*finalize) (TaskTimer *self);
};

struct _DragListModelIface {
	GTypeInterface parent_iface;
	void (*move_item) (DragListModel* self, guint old_position, guint new_position);
	GObject* (*get_item) (DragListModel* self, guint position);
	GType (*get_item_type) (DragListModel* self);
	guint (*get_n_items) (DragListModel* self);
};

struct _DragList {
	GtkBin parent_instance;
	DragListPrivate * priv;
	DragListModel* model;
	DragListRow* drag_row;
};

struct _DragListClass {
	GtkBinClass parent_class;
	void (*activate_cursor_row) (DragList* self);
	void (*row_activated) (DragList* self, DragListRow* row);
	void (*move_cursor) (DragList* self, GtkMovementStep step, gint count);
	void (*row_selected) (DragList* self, DragListRow* row);
	void (*row_received_with_model) (DragList* self, DragListRow* row, gint index);
};

typedef GtkWidget* (*DragListCreateWidgetFunc) (GObject* item, void* user_data);
typedef gboolean (*DragListFilterFunc) (DragListRow* row, void* user_data);
struct _DragListRow {
	GtkListBoxRow parent_instance;
	DragListRowPrivate * priv;
};

struct _DragListRowClass {
	GtkListBoxRowClass parent_class;
};

struct _TimerView {
	GtkGrid parent_instance;
	TimerViewPrivate * priv;
	GtkButton* done_btn;
};

struct _TimerViewClass {
	GtkGridClass parent_class;
};

struct _SettingsDialog {
	GtkDialog parent_instance;
	SettingsDialogPrivate * priv;
};

struct _SettingsDialogClass {
	GtkDialogClass parent_class;
};

struct _AboutDialog {
	GtkAboutDialog parent_instance;
	AboutDialogPrivate * priv;
};

struct _AboutDialogClass {
	GtkAboutDialogClass parent_class;
};

struct _ContributeDialog {
	GtkMessageDialog parent_instance;
	ContributeDialogPrivate * priv;
};

struct _ContributeDialogClass {
	GtkMessageDialogClass parent_class;
};


GType gofi_feature_status_get_type (void) G_GNUC_CONST;
gboolean gofi_feature_status_use_feature (GOFIFeatureStatus self, gboolean _default);
gboolean gofi_feature_status_config_useful (GOFIFeatureStatus self);
gpointer settings_manager_ref (gpointer instance);
void settings_manager_unref (gpointer instance);
GParamSpec* param_spec_settings_manager (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_settings_manager (GValue* value, gpointer v_object);
void value_take_settings_manager (GValue* value, gpointer v_object);
gpointer value_get_settings_manager (const GValue* value);
GType settings_manager_get_type (void) G_GNUC_CONST;
SettingsManager* settings_manager_new_load_from_key_file (void);
SettingsManager* settings_manager_construct_load_from_key_file (GType object_type);
SettingsManager* settings_manager_new (void);
SettingsManager* settings_manager_construct (GType object_type);
gchar* settings_manager_get_todo_txt_location (SettingsManager* self);
void settings_manager_set_todo_txt_location (SettingsManager* self, const gchar* value);
gint settings_manager_get_task_duration (SettingsManager* self);
void settings_manager_set_task_duration (SettingsManager* self, gint value);
gint settings_manager_get_break_duration (SettingsManager* self);
void settings_manager_set_break_duration (SettingsManager* self, gint value);
gint settings_manager_get_reminder_time (SettingsManager* self);
void settings_manager_set_reminder_time (SettingsManager* self, gint value);
gboolean settings_manager_get_reminder_active (SettingsManager* self);
gint settings_manager_get_win_x (SettingsManager* self);
void settings_manager_set_win_x (SettingsManager* self, gint value);
gint settings_manager_get_win_y (SettingsManager* self);
void settings_manager_set_win_y (SettingsManager* self, gint value);
gint settings_manager_get_win_width (SettingsManager* self);
void settings_manager_set_win_width (SettingsManager* self, gint value);
gint settings_manager_get_win_height (SettingsManager* self);
void settings_manager_set_win_height (SettingsManager* self, gint value);
gboolean settings_manager_get_use_header_bar (SettingsManager* self);
void settings_manager_set_use_header_bar (SettingsManager* self, gboolean value);
gboolean settings_manager_get_use_dark_theme (SettingsManager* self);
void settings_manager_set_use_dark_theme (SettingsManager* self, gboolean value);
gboolean gofi_txt_utils_is_date (const gchar* token);
gboolean gofi_txt_utils_is_priority (const gchar* token);
gboolean gofi_txt_utils_is_project_tag (const gchar* token);
gboolean gofi_txt_utils_is_context_tag (const gchar* token);
gboolean gofi_txt_utils_consume_status (gchar** txt_line);
gchar* gofi_txt_utils_consume_priority (gchar** pseudo_description);
GDateTime* gofi_txt_utils_string_to_date (const gchar* date_txt);
gchar* gofi_txt_utils_date_to_string (GDateTime* date);
GType todo_task_get_type (void) G_GNUC_CONST;
TodoTask* todo_task_new (const gchar* line, gboolean done);
TodoTask* todo_task_construct (GType object_type, const gchar* line, gboolean done);
const gchar* todo_task_get_description (TodoTask* self);
void todo_task_set_description (TodoTask* self, const gchar* value);
gboolean todo_task_get_done (TodoTask* self);
void todo_task_set_done (TodoTask* self, gboolean value);
gboolean todo_task_get_valid (TodoTask* self);
GDateTime* todo_task_get_creation_date (TodoTask* self);
void todo_task_set_creation_date (TodoTask* self, GDateTime* value);
GDateTime* todo_task_get_completion_date (TodoTask* self);
void todo_task_set_completion_date (TodoTask* self, GDateTime* value);
const gchar* todo_task_get_priority (TodoTask* self);
void todo_task_set_priority (TodoTask* self, const gchar* value);
gpointer file_watcher_ref (gpointer instance);
void file_watcher_unref (gpointer instance);
GParamSpec* param_spec_file_watcher (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_file_watcher (GValue* value, gpointer v_object);
void value_take_file_watcher (GValue* value, gpointer v_object);
gpointer value_get_file_watcher (const GValue* value);
GType file_watcher_get_type (void) G_GNUC_CONST;
FileWatcher* file_watcher_new (GFile* file);
FileWatcher* file_watcher_construct (GType object_type, GFile* file);
gboolean file_watcher_get_watching (FileWatcher* self);
void file_watcher_set_watching (FileWatcher* self, gboolean value);
gboolean file_watcher_get_being_updated (FileWatcher* self);
GFile* file_watcher_get_file (FileWatcher* self);
void file_watcher_set_file (FileWatcher* self, GFile* value);
gpointer task_timer_ref (gpointer instance);
void task_timer_unref (gpointer instance);
GParamSpec* param_spec_task_timer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_task_timer (GValue* value, gpointer v_object);
void value_take_task_timer (GValue* value, gpointer v_object);
gpointer value_get_task_timer (const GValue* value);
GType task_timer_get_type (void) G_GNUC_CONST;
TaskTimer* task_timer_new (SettingsManager* settings);
TaskTimer* task_timer_construct (GType object_type, SettingsManager* settings);
void task_timer_start (TaskTimer* self);
void task_timer_stop (TaskTimer* self);
void task_timer_reset (TaskTimer* self);
void task_timer_update (TaskTimer* self);
void task_timer_update_active_task (TaskTimer* self);
void task_timer_set_active_task_done (TaskTimer* self);
GDateTime* task_timer_get_runtime (TaskTimer* self);
void task_timer_toggle_break (TaskTimer* self);
void task_timer_end_iteration (TaskTimer* self);
gboolean task_timer_get_running (TaskTimer* self);
gboolean task_timer_get_break_active (TaskTimer* self);
GDateTime* task_timer_get_remaining_duration (TaskTimer* self);
void task_timer_set_remaining_duration (TaskTimer* self, GDateTime* value);
TodoTask* task_timer_get_active_task (TaskTimer* self);
void task_timer_set_active_task (TaskTimer* self, TodoTask* value);
GType drag_list_model_get_type (void) G_GNUC_CONST;
void drag_list_model_move_item (DragListModel* self, guint old_position, guint new_position);
GObject* drag_list_model_get_item (DragListModel* self, guint position);
GType drag_list_model_get_item_type (DragListModel* self);
guint drag_list_model_get_n_items (DragListModel* self);
GType drag_list_get_type (void) G_GNUC_CONST;
GType drag_list_row_get_type (void) G_GNUC_CONST;
DragList* drag_list_new (void);
DragList* drag_list_construct (GType object_type);
void drag_list_bind_model (DragList* self, DragListModel* model, DragListCreateWidgetFunc create_widget_func, void* create_widget_func_target, GDestroyNotify create_widget_func_target_destroy_notify);
DragListRow* drag_list_get_selected_row (DragList* self);
void drag_list_select_row (DragList* self, DragListRow* row);
void drag_list_add_row (DragList* self, GtkWidget* widget);
void drag_list_insert_row (DragList* self, GtkWidget* widget, gint position);
void drag_list_remove_row (DragList* self, DragListRow* row);
GList* drag_list_get_rows (DragList* self);
void drag_list_move_row (DragList* self, DragListRow* row, gint index);
DragListRow* drag_list_get_row_at_index (DragList* self, gint index);
void drag_list_set_filter_func (DragList* self, DragListFilterFunc filter_func, void* filter_func_target);
void drag_list_invalidate_filter (DragList* self);
GtkAdjustment* drag_list_get_vadjustment (DragList* self);
void drag_list_set_vadjustment (DragList* self, GtkAdjustment* value);
DragListRow* drag_list_row_new (void);
DragListRow* drag_list_row_construct (GType object_type);
void drag_list_row_set_start_widget (DragListRow* self, GtkWidget* widget);
GtkWidget* drag_list_row_get_start_widget (DragListRow* self);
void drag_list_row_set_center_widget (DragListRow* self, GtkWidget* widget);
GtkWidget* drag_list_row_get_center_widget (DragListRow* self);
DragList* drag_list_row_get_drag_list_box (DragListRow* self);
GType timer_view_get_type (void) G_GNUC_CONST;
TimerView* timer_view_new (TaskTimer* timer);
TimerView* timer_view_construct (GType object_type, TaskTimer* timer);
void timer_view_set_time (TimerView* self, GDateTime* time);
void timer_view_set_running (TimerView* self, gboolean running);
GDateTime* timer_view_get_timer_values (TimerView* self);
void timer_view_show_no_task (TimerView* self);
GType settings_dialog_get_type (void) G_GNUC_CONST;
SettingsDialog* settings_dialog_new (GtkWindow* parent, SettingsManager* settings);
SettingsDialog* settings_dialog_construct (GType object_type, GtkWindow* parent, SettingsManager* settings);
GType about_dialog_get_type (void) G_GNUC_CONST;
AboutDialog* about_dialog_new (GtkWindow* parent);
AboutDialog* about_dialog_construct (GType object_type, GtkWindow* parent);
GType contribute_dialog_get_type (void) G_GNUC_CONST;
ContributeDialog* contribute_dialog_new (GtkWindow* parent);
ContributeDialog* contribute_dialog_construct (GType object_type, GtkWindow* parent);


G_END_DECLS

#endif