/*
 * \brief  Dummy definitions of Linux Kernel functions
 * \author Automatically generated file - do no edit
 * \date   2021-09-07
 */

#include <lx_emul.h>


#include <linux/ratelimit_types.h>

int ___ratelimit(struct ratelimit_state * rs,const char * func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/thread_info.h>

void __check_object_size(const void * ptr,unsigned long n,bool to_user)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/clk-provider.h>

const char * __clk_get_name(const struct clk * clk)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kexec.h>

void __noclone __crash_kexec(struct pt_regs * regs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/ioport.h>

struct resource * __devm_request_region(struct device * dev,struct resource * parent,resource_size_t start,resource_size_t n,const char * name)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/reset.h>

struct reset_control * __devm_reset_control_get(struct device * dev,const char * id,int index,bool shared,bool optional,bool acquired)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/serial_core.h>

const struct earlycon_id __earlycon_table[] = {};


#include <linux/serial_core.h>

const struct earlycon_id __earlycon_table_end[] = {};


#include <linux/gfp.h>

unsigned long __get_free_pages(gfp_t gfp_mask,unsigned int order)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/suspend.h>

void __pm_pr_dbg(bool defer,const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

int __printk_ratelimit(const char * func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/cred.h>

void __put_cred(struct cred * cred)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/task.h>

void __put_task_struct(struct task_struct * tsk)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/freezer.h>

bool __refrigerator(bool check_kthr_stop)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm.h>

void __suspend_report_result(const char * function,void * fn,int ret)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

pid_t __task_pid_nr_ns(struct task_struct * task,enum pid_type type,struct pid_namespace * ns)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

void __unregister_chrdev(unsigned int major,unsigned int baseminor,unsigned int count,const char * name)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/random.h>

void add_bootloader_randomness(const void * buf,unsigned int size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kobject.h>

int add_uevent_var(struct kobj_uevent_env * env,const char * format,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/amba/bus.h>

int amba_device_add(struct amba_device * dev,struct resource * parent)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/amba/bus.h>

struct amba_device * amba_device_alloc(const char * name,resource_size_t base,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/amba/bus.h>

void amba_device_put(struct amba_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/async.h>

async_cookie_t async_schedule_node(async_func_t func,void * data,int node)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/async.h>

void async_synchronize_full(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/init.h>

char __initdata boot_command_line[] = {};


#include <linux/bsearch.h>

void * bsearch(const void * key,const void * base,size_t num,size_t size,cmp_func_t cmp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kernel.h>

void bust_spinlocks(int yes)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/srcu.h>

void call_srcu(struct srcu_struct * ssp,struct rcu_head * rhp,rcu_callback_t func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/cdev.h>

void cdev_del(struct cdev * p)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/clk.h>

void clk_bulk_put(int num_clks,struct clk_bulk_data * clks)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

long compat_ptr_ioctl(struct file * file,unsigned int cmd,unsigned long arg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/console.h>

void console_flush_on_panic(enum con_flush_mode mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

int console_printk[] = {};


#include <linux/console.h>

void console_unblank(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

struct timespec64 current_time(struct inode * inode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/debugfs.h>

ssize_t debugfs_attr_read(struct file * file,char __user * buf,size_t len,loff_t * ppos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/debugfs.h>

ssize_t debugfs_attr_write(struct file * file,const char __user * buf,size_t len,loff_t * ppos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/debugfs.h>

struct dentry * debugfs_create_bool(const char * name,umode_t mode,struct dentry * parent,bool * value)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/debugfs.h>

int debugfs_file_get(struct dentry * dentry)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/debugfs.h>

void debugfs_file_put(struct dentry * dentry)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/debugfs.h>

ssize_t debugfs_read_file_bool(struct file * file,char __user * user_buf,size_t count,loff_t * ppos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

loff_t default_llseek(struct file * file,loff_t offset,int whence)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm_qos.h>

enum pm_qos_flags_status dev_pm_qos_flags(struct device * dev,s32 mask)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm.h>

int device_pm_wait_for_dev(struct device * subordinate,struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm_wakeup.h>

int device_wakeup_enable(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/dma-mapping.h>

int dma_mmap_attrs(struct device * dev,struct vm_area_struct * vma,void * cpu_addr,dma_addr_t dma_addr,size_t size,unsigned long attrs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/dmapool.h>

void dma_pool_destroy(struct dma_pool * pool)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

asmlinkage __visible void dump_stack(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/reboot.h>

void emergency_restart(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/syscalls.h>

struct trace_event_functions enter_syscall_print_funcs;


#include <linux/errname.h>

const char * errname(int err)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/syscalls.h>

struct trace_event_class event_class_syscall_enter;


#include <linux/syscalls.h>

struct trace_event_class event_class_syscall_exit;


#include <linux/trace_events.h>

enum event_trigger_type event_triggers_call(struct trace_event_file * file,void * rec,struct ring_buffer_event * event)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/syscalls.h>

struct trace_event_functions exit_syscall_print_funcs;


#include <linux/kobject.h>

struct kobject *firmware_kobj;


#include <linux/gfp.h>

void free_pages(unsigned long addr,unsigned int order)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/freezer.h>

bool freezing_slow_path(struct task_struct * p)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/uidgid.h>

gid_t from_kgid(struct user_namespace * targ,kgid_t kgid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/uidgid.h>

uid_t from_kuid(struct user_namespace * targ,kuid_t kuid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kernel.h>

void ftrace_dump(enum ftrace_dump_mode oops_dump_mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/property.h>

struct fwnode_handle * fwnode_create_software_node(const struct property_entry * properties,const struct fwnode_handle * parent)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/property.h>

void fwnode_remove_software_node(struct fwnode_handle * fwnode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/genalloc.h>

void * gen_pool_dma_alloc(struct gen_pool * pool,size_t size,dma_addr_t * dma)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/genalloc.h>

void gen_pool_free_owner(struct gen_pool * pool,unsigned long addr,size_t size,void ** owner)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/bug.h>

void generic_bug_clear_once(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/uuid.h>

const u8 guid_index[16] = {};


#include <linux/capability.h>

bool has_capability_noaudit(struct task_struct * t,int cap)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/utsname.h>

struct user_namespace init_user_ns;


#include <linux/utsname.h>

struct uts_namespace init_uts_ns;


#include <linux/init.h>

bool initcall_debug;


#include <linux/sched.h>

void io_schedule_finish(int token)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

int io_schedule_prepare(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

long __sched io_schedule_timeout(long timeout)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/ioport.h>

struct resource iomem_resource;


#include <linux/ioport.h>

struct resource ioport_resource;


extern bool irq_pm_check_wakeup(struct irq_desc * desc);
bool irq_pm_check_wakeup(struct irq_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


extern void irq_pm_remove_action(struct irq_desc * desc,struct irqaction * action);
void irq_pm_remove_action(struct irq_desc * desc,struct irqaction * action)
{
	lx_emul_trace_and_stop(__func__);
}


extern bool irq_wait_for_poll(struct irq_desc * desc);
bool irq_wait_for_poll(struct irq_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq_work.h>

void irq_work_tick(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/property.h>

bool is_software_node(const struct fwnode_handle * fwnode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kobject.h>

struct kobject *kernel_kobj;


#include <linux/kgdb.h>

void kgdb_panic(const char * msg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/signal.h>

int kill_pid_usb_asyncio(int sig,int errno,sigval_t addr,struct pid * pid,const struct cred * cred)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/slab.h>

void * kmalloc_order_trace(size_t size,gfp_t flags,unsigned int order)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/slab.h>

void kmem_cache_destroy(struct kmem_cache * s)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kmsg_dump.h>

void kmsg_dump(enum kmsg_dump_reason reason)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kobject.h>

int kobject_synth_uevent(struct kobject * kobj,const char * buf,size_t count)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kobject.h>

int kobject_uevent_env(struct kobject * kobj,enum kobject_action action,char * envp_ext[])
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/logic_pio.h>

unsigned long logic_pio_trans_hwaddr(struct fwnode_handle * fwnode,resource_size_t addr,resource_size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/delay.h>

unsigned long lpj_fine;


#include <linux/parser.h>

bool match_wildcard(const char * pattern,const char * str)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/memblock.h>

int __init_memblock memblock_add(phys_addr_t base,phys_addr_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/memblock.h>

phys_addr_t __init_memblock memblock_find_in_range(phys_addr_t start,phys_addr_t end,phys_addr_t size,phys_addr_t align)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/memblock.h>

int __init_memblock memblock_free(phys_addr_t base,phys_addr_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/memblock.h>

int __init_memblock memblock_mark_hotplug(phys_addr_t base,phys_addr_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/memblock.h>

int __init_memblock memblock_remove(phys_addr_t base,phys_addr_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/memblock.h>

int __init_memblock memblock_reserve(phys_addr_t base,phys_addr_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/string.h>

ssize_t memory_read_from_buffer(void * to,size_t count,loff_t * ppos,const void * from,size_t available)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq.h>

struct irq_chip no_irq_chip;


#include <linux/fs.h>

loff_t no_llseek(struct file * file,loff_t offset,int whence)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

loff_t no_seek_end_llseek(struct file * file,loff_t offset,int whence)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/nodemask.h>

nodemask_t node_states[NR_NODE_STATES] = {};


#include <linux/fs.h>

loff_t noop_llseek(struct file * file,loff_t offset,int whence)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq.h>

void note_interrupt(struct irq_desc * desc,irqreturn_t action_ret)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/nodemask.h>

unsigned int nr_node_ids;


#include <linux/serial_core.h>

int __init of_setup_earlycon(const struct earlycon_id * match,unsigned long node,const char * options)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/smp.h>

void on_each_cpu(smp_call_func_t func,void * info,int wait)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

int oops_in_progress;	/* If set, an oops, panic(), BUG() or die() is in progress */


#include <linux/reboot.h>

enum reboot_mode panic_reboot_mode;


#include <linux/genhd.h>

struct device_type part_type;


#include <linux/pci.h>

int pci_alloc_irq_vectors_affinity(struct pci_dev * dev,unsigned int min_vecs,unsigned int max_vecs,unsigned int flags,struct irq_affinity * affd)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

struct bus_type pci_bus_type;


#include <linux/pci.h>

void pci_clear_mwi(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_d3cold_disable(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_dev_put(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

bool pci_dev_run_wake(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_disable_device(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_enable_device(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

u8 pci_find_capability(struct pci_dev * dev,int cap)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_free_irq_vectors(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

struct pci_dev * pci_get_device(unsigned int vendor,unsigned int device,struct pci_dev * from)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_irq_vector(struct pci_dev * dev,unsigned int nr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

const struct pci_device_id * pci_match_id(const struct pci_device_id * ids,struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

const char *pci_power_names[] = {};


#include <linux/pci.h>

int pci_prepare_to_sleep(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_read_config_byte(const struct pci_dev * dev,int where,u8 * val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_read_config_dword(const struct pci_dev * dev,int where,u32 * val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_read_config_word(const struct pci_dev * dev,int where,u16 * val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_save_state(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_set_master(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_set_mwi(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_set_power_state(struct pci_dev * dev,pci_power_t state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_write_config_byte(const struct pci_dev * dev,int where,u8 val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_write_config_dword(const struct pci_dev * dev,int where,u32 val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_write_config_word(const struct pci_dev * dev,int where,u16 val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

void * perf_trace_buf_alloc(int size,struct pt_regs ** regs,int * rctxp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

void perf_trace_run_bpf_submit(void * raw_data,int size,int rctx,struct trace_event_call * call,u64 count,struct pt_regs * regs,struct hlist_head * head,struct task_struct * task)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/initrd.h>

unsigned long phys_initrd_size;


#include <linux/initrd.h>

phys_addr_t phys_initrd_start;


#include <linux/pinctrl/consumer.h>

int pinctrl_pm_select_default_state(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pinctrl/consumer.h>

int pinctrl_pm_select_sleep_state(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm_wakeup.h>

void pm_wakeup_dev_event(struct device * dev,unsigned int msec,bool hard)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm_runtime.h>

struct workqueue_struct *pm_wq;


#include <linux/pm.h>

const char power_group_name[] = {};		/* = power */


#include <linux/printk.h>

int printk_deferred(const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

void printk_safe_flush_on_panic(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/proc_fs.h>

struct proc_dir_entry * proc_create(const char * name,umode_t mode,struct proc_dir_entry * parent,const struct proc_ops * proc_ops)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pid.h>

void put_pid(struct pid * pid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rcutree.h>

void rcu_irq_enter_irqson(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rcutree.h>

void rcu_irq_exit_irqson(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/reboot.h>

enum reboot_mode reboot_mode;


#include <linux/refcount.h>

bool refcount_dec_not_one(refcount_t * r)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/refcount.h>

void refcount_warn_saturate(refcount_t * r,enum refcount_saturation_type t)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/regulator/consumer.h>

int regulator_disable(struct regulator * regulator)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/regulator/consumer.h>

void regulator_put(struct regulator * regulator)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/ioport.h>

int release_resource(struct resource * old)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

int remap_pfn_range(struct vm_area_struct * vma,unsigned long addr,unsigned long pfn,unsigned long size,pgprot_t prot)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/reset.h>

int reset_control_reset(struct reset_control * rstc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rtc.h>

void rtc_class_close(struct rtc_device * rtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rtc.h>

struct rtc_device * rtc_class_open(const char * name)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rtc.h>

int rtc_set_time(struct rtc_device * rtc,struct rtc_time * tm)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rtc.h>

void rtc_time64_to_tm(time64_t time,struct rtc_time * tm)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/init.h>

char *saved_command_line;


#include <linux/sched.h>

void sched_set_fifo(struct task_struct * p)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

void seq_escape(struct seq_file * m,const char * s,const char * esc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

loff_t seq_lseek(struct file * file,loff_t offset,int whence)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

int seq_open_private(struct file * filp,const struct seq_operations * ops,int psize)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

void seq_printf(struct seq_file * m,const char * f,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

void seq_puts(struct seq_file * m,const char * s)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

ssize_t seq_read(struct file * file,char __user * buf,size_t size,loff_t * ppos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

int seq_release_private(struct inode * inode,struct file * file)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

void seq_vprintf(struct seq_file * m,const char * f,va_list args)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

void show_mem(unsigned int filter,nodemask_t * nodemask)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/debug.h>

void show_state_filter(unsigned long state_filter)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

int simple_attr_open(struct inode * inode,struct file * file,int (* get)(void *,u64 *),int (* set)(void *,u64),const char * fmt)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

int simple_attr_release(struct inode * inode,struct file * file)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

int simple_open(struct inode * inode,struct file * file)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

ssize_t simple_read_from_buffer(void __user * to,size_t count,loff_t * ppos,const void * from,size_t available)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

int single_open(struct file * file,int (* show)(struct seq_file *,void *),void * data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

int single_release(struct inode * inode,struct file * file)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/siphash.h>

u64 siphash_1u64(const u64 first,const siphash_key_t * key)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/smp.h>

int smp_call_function_single(int cpu,smp_call_func_t func,void * info,int wait)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/smp.h>

void smp_send_stop(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/jump_label.h>

bool static_key_initialized;


#include <linux/string_helpers.h>

int string_escape_mem(const char * src,size_t isz,char * dst,size_t osz,unsigned int flags,const char * only)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/string_helpers.h>

int string_unescape(char * src,char * dst,size_t size,unsigned int flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

int suppress_printk;


#include <linux/sysfs.h>

void sysfs_delete_link(struct kobject * kobj,struct kobject * targ,const char * name)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysfs.h>

int sysfs_emit(char * buf,const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysfs.h>

int sysfs_emit_at(char * buf,int at,const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysfs.h>

void sysfs_notify(struct kobject * kobj,const char * dir,const char * attr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysfs.h>

void sysfs_remove_group(struct kobject * kobj,const struct attribute_group * grp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/freezer.h>

atomic_t system_freezing_cnt;	/* nr of freezing conds in effect */


#include <linux/sched/numa_balancing.h>

pid_t task_numa_group_id(struct task_struct * p)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/task_work.h>

int task_work_add(struct task_struct * task,struct callback_head * work,enum task_work_notify_mode notify)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/task_work.h>

struct callback_head * task_work_cancel(struct task_struct * task,task_work_func_t func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/clockchips.h>

void tick_broadcast(const struct cpumask * mask)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/hrtimer.h>

void timerfd_clock_was_set(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/nmi.h>

notrace void touch_softlockup_watchdog(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

void trace_event_buffer_commit(struct trace_event_buffer * fbuffer)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

void * trace_event_buffer_reserve(struct trace_event_buffer * fbuffer,struct trace_event_file * trace_file,unsigned long len)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

bool trace_event_ignore_this_pid(struct trace_event_file * trace_file)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

int trace_event_raw_init(struct trace_event_call * call)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

int trace_event_reg(struct trace_event_call * call,enum trace_reg type,void * data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

enum print_line_t trace_handle_return(struct trace_seq * s)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

const char * trace_print_flags_seq(struct trace_seq * p,const char * delim,unsigned long flags,const struct trace_print_flags * flag_array)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

const char * trace_print_symbols_seq(struct trace_seq * p,unsigned long val,const struct trace_print_flags * symbol_array)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_events.h>

int trace_raw_output_prep(struct trace_iterator * iter,struct trace_event * trace_event)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/trace_seq.h>

void trace_seq_printf(struct trace_seq * s,const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/vt_kern.h>

void unblank_screen(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

void unregister_chrdev_region(dev_t from,unsigned count)
{
	lx_emul_trace_and_stop(__func__);
}


extern void unregister_handler_proc(unsigned int irq,struct irqaction * action);
void unregister_handler_proc(unsigned int irq,struct irqaction * action)
{
	lx_emul_trace_and_stop(__func__);
}


extern void unregister_irq_proc(unsigned int irq,struct irq_desc * desc);
void unregister_irq_proc(unsigned int irq,struct irq_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/uuid.h>

const u8 uuid_index[16] = {};


#include <linux/vmalloc.h>

void vfree(const void * addr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/vmalloc.h>

void * vmalloc(unsigned long size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/wake_q.h>

void wake_q_add_safe(struct wake_q_head * head,struct task_struct * task)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/usb/ehci-dbgp.h>

int xen_dbgp_external_startup(struct usb_hcd * hcd)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/usb/ehci-dbgp.h>

int xen_dbgp_reset_prep(struct usb_hcd * hcd)
{
	lx_emul_trace_and_stop(__func__);
}

