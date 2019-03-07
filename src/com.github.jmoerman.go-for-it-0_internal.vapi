/* com.github.jmoerman.go-for-it-0_internal.vapi generated by valac 0.34.7, do not modify. */

namespace GOFI {
	namespace TxtUtils {
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static bool is_date (string token);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static bool is_priority (string token);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static bool is_project_tag (string token);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static bool is_context_tag (string token);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static bool consume_status (ref string txt_line);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static string? consume_priority (ref string pseudo_description);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static GLib.DateTime string_to_date (string date_txt);
		[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
		public static string date_to_string (GLib.DateTime date);
	}
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal class Utils {
		public static Gtk.Image load_image_fallback (Gtk.IconSize size, string icon_name, ...);
		public Utils ();
		public static string config_dir { owned get; }
		public static string config_file { owned get; }
		public static string old_config_file { owned get; }
		public static GOFI.FeatureStatus desktop_hb_status { get; }
	}
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	public enum FeatureStatus {
		UNKNOWN,
		ALWAYS,
		COMMON,
		UNCOMMON,
		NEVER;
		public bool use_feature (bool _default);
		public bool config_useful ();
	}
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string APP_NAME;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string EXEC_NAME;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string APP_SYSTEM_NAME;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string APP_ID;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string APP_VERSION;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string ICON_NAME;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string FILE_CONF;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string PROJECT_WEBSITE;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string PROJECT_REPO;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string PROJECT_DONATIONS;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string INSTALL_PREFIX;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string GETTEXT_PACKAGE;
	[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
	internal const string[] TEST_DIRS;
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class SettingsManager {
	public bool first_start;
	public SettingsManager.load_from_key_file ();
	public SettingsManager ();
	public string todo_txt_location { owned get; set; }
	public int task_duration { get; set; }
	public int break_duration { get; set; }
	public int reminder_time { get; set; }
	public bool reminder_active { get; }
	public int win_x { get; set; }
	public int win_y { get; set; }
	public int win_width { get; set; }
	public int win_height { get; set; }
	public bool use_header_bar { get; set; }
	public bool use_dark_theme { get; set; }
	public signal void todo_txt_location_changed ();
	public signal void timer_duration_changed ();
	public signal void use_dark_theme_changed (bool use_dark);
	public signal void use_header_bar_changed ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class TodoTask : GLib.Object {
	public TodoTask (string line, bool done);
	public string description { get; set; }
	public bool done { get; set; }
	public bool valid { get; }
	public GLib.DateTime? creation_date { get; set; }
	public GLib.DateTime? completion_date { get; set; }
	public string? priority { get; set; }
	public signal void done_changed ();
	public signal void data_changed ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class SequentialList {
	public SequentialList (GLib.Type item_type);
	public void append_item (GLib.Object item);
	public uint remove_item (GLib.Object item);
	public void move_item (uint old_position, uint new_position);
	public GLib.Object? get_item (uint position);
	public GLib.Type get_item_type ();
	public void clear ();
	public uint length { get; }
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class TaskStore : GLib.Object, DragListModel {
	public TaskStore (bool done_by_default);
	public void add_task (TodoTask task);
	public void clear ();
	public void remove_task (TodoTask task);
	public bool done_by_default { get; private set; }
	public signal void task_data_changed ();
	public signal void task_done_changed (TodoTask task);
	public signal void task_became_invalid (TodoTask task);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class FileWatcher {
	public FileWatcher (GLib.File file);
	public bool watching { get; set; }
	public bool being_updated { get; private set; }
	public GLib.File file { get; set; }
	public signal void changed ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class TaskManager {
	public TaskStore todo_store;
	public TaskStore done_store;
	public TaskManager (SettingsManager settings);
	public void set_active_task (TodoTask? task);
	public void add_new_task (string task);
	public void mark_task_done (TodoTask task);
	public void clear_done_store ();
	public void refresh ();
	public signal void active_task_invalid ();
	public signal void refreshing ();
	public signal void refreshed ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class TaskTimer {
	public GLib.DateTime start_time;
	public TaskTimer (SettingsManager settings);
	public void start ();
	public void stop ();
	public void reset ();
	public void update ();
	public void update_active_task ();
	public void set_active_task_done ();
	public GLib.DateTime get_runtime ();
	public void toggle_break ();
	public void end_iteration ();
	public bool running { get; private set; }
	public bool break_active { get; private set; }
	public GLib.DateTime remaining_duration { owned get; set; }
	public TodoTask? active_task { get; set; }
	public signal void timer_updated (GLib.DateTime remaining_duration);
	public signal void timer_updated_relative (double progress);
	public signal void timer_running_changed (bool running);
	public signal void timer_almost_over (GLib.DateTime remaining_duration);
	public signal void timer_finished (bool break_active);
	public signal void active_task_done (TodoTask task);
	public signal void active_task_description_changed (TodoTask task);
	public signal void active_task_changed (TodoTask? task, bool break_active);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class Filter {
	public Filter ();
	public void parse (string filter_string);
	public bool filter (DragListRow _row);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class TaskRow : DragListRow {
	public TaskRow (TodoTask task);
	public void edit ();
	public void stop_editing ();
	public TodoTask task { get; private set; }
	public signal void link_clicked (string uri);
	public signal void deletion_requested ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class TaskList : Gtk.Grid {
	public TaskList (TaskStore model, bool add_new = false);
	public TodoTask? get_selected_task ();
	public void toggle_filter_bar ();
	public signal void add_new_task (string task);
	public signal void selection_changed (TodoTask selected_task);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class DragList : Gtk.Bin {
	internal DragListModel? model;
	internal DragListRow? drag_row;
	public DragList ();
	public void bind_model (DragListModel? model, owned DragListCreateWidgetFunc? create_widget_func);
	public unowned DragListRow? get_selected_row ();
	public void select_row (DragListRow row);
	public void add_row (Gtk.Widget widget);
	public void insert_row (Gtk.Widget widget, int position);
	public void remove_row (DragListRow row);
	public GLib.List<weak DragListRow> get_rows ();
	public void move_row (DragListRow row, int index);
	public DragListRow get_row_at_index (int index);
	public void set_filter_func (DragListFilterFunc? filter_func);
	public void invalidate_filter ();
	public Gtk.Adjustment vadjustment { get; set; }
	public virtual signal void activate_cursor_row ();
	public virtual signal void row_activated (DragListRow row);
	public virtual signal void move_cursor (Gtk.MovementStep step, int count);
	public virtual signal void row_selected (DragListRow? row);
	public virtual signal void row_received_with_model (DragListRow row, int index);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class DragListRow : Gtk.ListBoxRow {
	public DragListRow ();
	public void set_start_widget (Gtk.Widget? widget);
	public unowned Gtk.Widget? get_start_widget ();
	public void set_center_widget (Gtk.Widget? widget);
	public unowned Gtk.Widget? get_center_widget ();
	public unowned DragList? get_drag_list_box ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class TimerView : Gtk.Grid {
	public Gtk.Button done_btn;
	public TimerView (TaskTimer timer);
	public void set_time (GLib.DateTime time);
	public void set_running (bool running);
	public GLib.DateTime get_timer_values ();
	public void show_no_task ();
	public override void show_all ();
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class SettingsDialog : Gtk.Dialog {
	public SettingsDialog (Gtk.Window? parent, SettingsManager settings);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class AboutDialog : Gtk.AboutDialog {
	public AboutDialog (Gtk.Window? parent = null);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public class ContributeDialog : Gtk.MessageDialog {
	public ContributeDialog (Gtk.Window? parent);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class MainWindow : Gtk.ApplicationWindow {
	public MainWindow (Gtk.Application app_context, TaskManager task_manager, TaskTimer task_timer, SettingsManager settings);
	public override bool delete_event (Gdk.EventAny event);
	public void add_headerbar ();
	public void on_selection_changed (TodoTask? selected_task);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal class Main : Gtk.Application {
	public Main ();
	public void new_window ();
	public void show_about (Gtk.Window? parent = null);
	public override int command_line (GLib.ApplicationCommandLine command_line);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public interface DragListModel : GLib.Object {
	public abstract void move_item (uint old_position, uint new_position);
	public abstract GLib.Object? get_item (uint position);
	public abstract GLib.Type get_item_type ();
	public abstract uint get_n_items ();
	public signal void item_moved (uint old_position, uint new_position);
	public signal void items_changed (uint position, uint removed, uint added);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal struct IntRange {
	public int min;
	public int max;
	public bool contains (int val);
	public int clamp (int val);
}
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public delegate bool DragListFilterFunc (DragListRow row);
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
public delegate Gtk.Widget DragListCreateWidgetFunc (GLib.Object item);
[CCode (cheader_filename = "com.github.jmoerman.go-for-it-0_internal.h")]
internal const Gtk.TargetEntry[] dlb_entries;