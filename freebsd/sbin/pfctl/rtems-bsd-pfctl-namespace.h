/* generated by userspace-header-gen.py */
/* parse.c */
#define atoul _bsd_pfctl_atoul
#define check_file_secrecy _bsd_pfctl_check_file_secrecy
#define check_rulestate _bsd_pfctl_check_rulestate
#define decide_address_family _bsd_pfctl_decide_address_family
#define disallow_alias _bsd_pfctl_disallow_alias
#define disallow_table _bsd_pfctl_disallow_table
#define disallow_urpf_failed _bsd_pfctl_disallow_urpf_failed
#define expand_altq _bsd_pfctl_expand_altq
#define expand_label _bsd_pfctl_expand_label
#define expand_label_addr _bsd_pfctl_expand_label_addr
#define expand_label_if _bsd_pfctl_expand_label_if
#define expand_label_nr _bsd_pfctl_expand_label_nr
#define expand_label_port _bsd_pfctl_expand_label_port
#define expand_label_proto _bsd_pfctl_expand_label_proto
#define expand_label_str _bsd_pfctl_expand_label_str
#define expand_queue _bsd_pfctl_expand_queue
#define expand_rule _bsd_pfctl_expand_rule
#define expand_skip_interface _bsd_pfctl_expand_skip_interface
#define filter_consistent _bsd_pfctl_filter_consistent
#define findeol _bsd_pfctl_findeol
#define getservice _bsd_pfctl_getservice
#define invalid_redirect _bsd_pfctl_invalid_redirect
#define kw_casecmp _bsd_pfctl_kw_casecmp
#define kw_cmp _bsd_pfctl_kw_cmp
#define lgetc _bsd_pfctl_lgetc
#define lookup _bsd_pfctl_lookup
#define lungetc _bsd_pfctl_lungetc
#define map_tos _bsd_pfctl_map_tos
#define mv_rules _bsd_pfctl_mv_rules
#define nat_consistent _bsd_pfctl_nat_consistent
#define parse_config _bsd_pfctl_parse_config
#define parseicmpspec _bsd_pfctl_parseicmpspec
#define parseport _bsd_pfctl_parseport
#define pfctl_cmdline_symset _bsd_pfctl_pfctl_cmdline_symset
#define pfctl_load_anchors _bsd_pfctl_pfctl_load_anchors
#define pfctlychar _bsd_pfctl_pfctlychar
#define pfctlydebug _bsd_pfctl_pfctlydebug
#define pfctlyerrflag _bsd_pfctl_pfctlyerrflag
#define pfctlyerror _bsd_pfctl_pfctlyerror
#define pfctlylex _bsd_pfctl_pfctlylex
#define pfctlylval _bsd_pfctl_pfctlylval
#define pfctlynerrs _bsd_pfctl_pfctlynerrs
#define pfctlyparse _bsd_pfctl_pfctlyparse
#define pfctlyval _bsd_pfctl_pfctlyval
#define popfile _bsd_pfctl_popfile
#define process_tabledef _bsd_pfctl_process_tabledef
#define pushfile _bsd_pfctl_pushfile
#define rdr_consistent _bsd_pfctl_rdr_consistent
#define remove_invalid_hosts _bsd_pfctl_remove_invalid_hosts
#define rt_tableid_max _bsd_pfctl_rt_tableid_max
#define rule_consistent _bsd_pfctl_rule_consistent
#define rule_label _bsd_pfctl_rule_label
#define symget _bsd_pfctl_symget
#define symset _bsd_pfctl_symset
/* pfctl_altq.c */
#define check_commit_altq _bsd_pfctl_check_commit_altq
#define eval_bwspec _bsd_pfctl_eval_bwspec
#define eval_pfaltq _bsd_pfctl_eval_pfaltq
#define eval_pfqueue _bsd_pfctl_eval_pfqueue
#define eval_queue_opts _bsd_pfctl_eval_queue_opts
#define getifmtu _bsd_pfctl_getifmtu
#define getifspeed _bsd_pfctl_getifspeed
#define pfaltq_lookup _bsd_pfctl_pfaltq_lookup
#define pfaltq_store _bsd_pfctl_pfaltq_store
#define print_altq _bsd_pfctl_print_altq
#define print_fairq_sc _bsd_pfctl_print_fairq_sc
#define print_hfsc_sc _bsd_pfctl_print_hfsc_sc
#define print_queue _bsd_pfctl_print_queue
#define qname_to_pfaltq _bsd_pfctl_qname_to_pfaltq
#define qname_to_qid _bsd_pfctl_qname_to_qid
#define rate2str _bsd_pfctl_rate2str
/* pfctl.c */
#define altqsupport _bsd_pfctl_altqsupport
#define dev _bsd_pfctl_dev
#define loadopt _bsd_pfctl_loadopt
#define pfctl_add_altq _bsd_pfctl_pfctl_add_altq
#define pfctl_add_pool _bsd_pfctl_pfctl_add_pool
#define pfctl_add_rule _bsd_pfctl_pfctl_add_rule
#define pfctl_addrprefix _bsd_pfctl_pfctl_addrprefix
#define pfctl_check_skip_ifaces _bsd_pfctl_pfctl_check_skip_ifaces
#define pfctl_clear_altq _bsd_pfctl_pfctl_clear_altq
#define pfctl_clear_interface_flags _bsd_pfctl_pfctl_clear_interface_flags
#define pfctl_clear_nat _bsd_pfctl_pfctl_clear_nat
#define pfctl_clear_pool _bsd_pfctl_pfctl_clear_pool
#define pfctl_clear_rules _bsd_pfctl_pfctl_clear_rules
#define pfctl_clear_skip_ifaces _bsd_pfctl_pfctl_clear_skip_ifaces
#define pfctl_clear_src_nodes _bsd_pfctl_pfctl_clear_src_nodes
#define pfctl_clear_states _bsd_pfctl_pfctl_clear_states
#define pfctl_clear_stats _bsd_pfctl_pfctl_clear_stats
#define pfctl_debug _bsd_pfctl_pfctl_debug
#define pfctl_disable _bsd_pfctl_pfctl_disable
#define pfctl_enable _bsd_pfctl_pfctl_enable
#define pfctl_fopen _bsd_pfctl_pfctl_fopen
#define pfctl_get_pool _bsd_pfctl_pfctl_get_pool
#define pfctl_get_skip_ifaces _bsd_pfctl_pfctl_get_skip_ifaces
#define pfctl_id_kill_states _bsd_pfctl_pfctl_id_kill_states
#define pfctl_init_options _bsd_pfctl_pfctl_init_options
#define pfctl_kill_src_nodes _bsd_pfctl_pfctl_kill_src_nodes
#define pfctl_label_kill_states _bsd_pfctl_pfctl_label_kill_states
#define pfctl_load_debug _bsd_pfctl_pfctl_load_debug
#define pfctl_load_hostid _bsd_pfctl_pfctl_load_hostid
#define pfctl_load_limit _bsd_pfctl_pfctl_load_limit
#define pfctl_load_logif _bsd_pfctl_pfctl_load_logif
#define pfctl_load_options _bsd_pfctl_pfctl_load_options
#define pfctl_load_rule _bsd_pfctl_pfctl_load_rule
#define pfctl_load_ruleset _bsd_pfctl_pfctl_load_ruleset
#define pfctl_load_timeout _bsd_pfctl_pfctl_load_timeout
#define pfctl_lookup_option _bsd_pfctl_pfctl_lookup_option
#define pfctl_move_pool _bsd_pfctl_pfctl_move_pool
#define pfctl_net_kill_states _bsd_pfctl_pfctl_net_kill_states
#define pfctl_print_rule_counters _bsd_pfctl_pfctl_print_rule_counters
#define pfctl_print_title _bsd_pfctl_pfctl_print_title
#define pfctl_rules _bsd_pfctl_pfctl_rules
#define pfctl_ruleset_trans _bsd_pfctl_pfctl_ruleset_trans
#define pfctl_set_debug _bsd_pfctl_pfctl_set_debug
#define pfctl_set_hostid _bsd_pfctl_pfctl_set_hostid
#define pfctl_set_interface_flags _bsd_pfctl_pfctl_set_interface_flags
#define pfctl_set_limit _bsd_pfctl_pfctl_set_limit
#define pfctl_set_logif _bsd_pfctl_pfctl_set_logif
#define pfctl_set_optimization _bsd_pfctl_pfctl_set_optimization
#define pfctl_set_timeout _bsd_pfctl_pfctl_set_timeout
#define pfctl_show_anchors _bsd_pfctl_pfctl_show_anchors
#define pfctl_show_limits _bsd_pfctl_pfctl_show_limits
#define pfctl_show_nat _bsd_pfctl_pfctl_show_nat
#define pfctl_show_rules _bsd_pfctl_pfctl_show_rules
#define pfctl_show_src_nodes _bsd_pfctl_pfctl_show_src_nodes
#define pfctl_show_states _bsd_pfctl_pfctl_show_states
#define pfctl_show_status _bsd_pfctl_pfctl_show_status
#define pfctl_show_timeouts _bsd_pfctl_pfctl_show_timeouts
#define pfctl_test_altqsupport _bsd_pfctl_pfctl_test_altqsupport
#define usage _bsd_pfctl_usage
/* pfctl_optimize.c */
#define add_opt_table _bsd_pfctl_add_opt_table
#define addrs_combineable _bsd_pfctl_addrs_combineable
#define addrs_equal _bsd_pfctl_addrs_equal
#define block_feedback _bsd_pfctl_block_feedback
#define combine_rules _bsd_pfctl_combine_rules
#define comparable_rule _bsd_pfctl_comparable_rule
#define construct_superblocks _bsd_pfctl_construct_superblocks
#define exclude_supersets _bsd_pfctl_exclude_supersets
#define interface_group _bsd_pfctl_interface_group
#define load_feedback_profile _bsd_pfctl_load_feedback_profile
#define optimize_superblock _bsd_pfctl_optimize_superblock
#define pf_opt_create_table _bsd_pfctl_pf_opt_create_table
#define pfctl_optimize_ruleset _bsd_pfctl_pfctl_optimize_ruleset
#define remove_from_skipsteps _bsd_pfctl_remove_from_skipsteps
#define remove_identical_rules _bsd_pfctl_remove_identical_rules
#define reorder_rules _bsd_pfctl_reorder_rules
#define rules_combineable _bsd_pfctl_rules_combineable
#define skip_append _bsd_pfctl_skip_append
#define skip_cmp_af _bsd_pfctl_skip_cmp_af
#define skip_cmp_dir _bsd_pfctl_skip_cmp_dir
#define skip_cmp_dst_addr _bsd_pfctl_skip_cmp_dst_addr
#define skip_cmp_dst_port _bsd_pfctl_skip_cmp_dst_port
#define skip_cmp_ifp _bsd_pfctl_skip_cmp_ifp
#define skip_cmp_proto _bsd_pfctl_skip_cmp_proto
#define skip_cmp_src_addr _bsd_pfctl_skip_cmp_src_addr
#define skip_cmp_src_port _bsd_pfctl_skip_cmp_src_port
#define skip_compare _bsd_pfctl_skip_compare
#define skip_init _bsd_pfctl_skip_init
#define superblock_free _bsd_pfctl_superblock_free
#define superblock_inclusive _bsd_pfctl_superblock_inclusive
/* pfctl_osfp.c */
#define add_fingerprint _bsd_pfctl_add_fingerprint
#define fingerprint_name_entry _bsd_pfctl_fingerprint_name_entry
#define get_field _bsd_pfctl_get_field
#define get_int _bsd_pfctl_get_int
#define get_str _bsd_pfctl_get_str
#define get_tcpopts _bsd_pfctl_get_tcpopts
#define import_fingerprint _bsd_pfctl_import_fingerprint
#define lookup_name_list _bsd_pfctl_lookup_name_list
#define pfctl_clear_fingerprints _bsd_pfctl_pfctl_clear_fingerprints
#define pfctl_file_fingerprints _bsd_pfctl_pfctl_file_fingerprints
#define pfctl_flush_my_fingerprints _bsd_pfctl_pfctl_flush_my_fingerprints
#define pfctl_get_fingerprint _bsd_pfctl_pfctl_get_fingerprint
#define pfctl_load_fingerprints _bsd_pfctl_pfctl_load_fingerprints
#define pfctl_lookup_fingerprint _bsd_pfctl_pfctl_lookup_fingerprint
#define pfctl_show_fingerprints _bsd_pfctl_pfctl_show_fingerprints
#define print_ioctl _bsd_pfctl_print_ioctl
#define print_name_list _bsd_pfctl_print_name_list
#define sort_name_list _bsd_pfctl_sort_name_list
/* pfctl_parser.c */
#define append_addr _bsd_pfctl_append_addr
#define append_addr_host _bsd_pfctl_append_addr_host
#define check_netmask _bsd_pfctl_check_netmask
#define get_socket_domain _bsd_pfctl_get_socket_domain
#define geticmpcodebyname _bsd_pfctl_geticmpcodebyname
#define geticmpcodebynumber _bsd_pfctl_geticmpcodebynumber
#define geticmptypebyname _bsd_pfctl_geticmptypebyname
#define geticmptypebynumber _bsd_pfctl_geticmptypebynumber
#define host _bsd_pfctl_host
#define host_dns _bsd_pfctl_host_dns
#define host_if _bsd_pfctl_host_if
#define host_v4 _bsd_pfctl_host_v4
#define host_v6 _bsd_pfctl_host_v6
#define ifa_exists _bsd_pfctl_ifa_exists
#define ifa_grouplookup _bsd_pfctl_ifa_grouplookup
#define ifa_load _bsd_pfctl_ifa_load
#define ifa_lookup _bsd_pfctl_ifa_lookup
#define ifa_skip_if _bsd_pfctl_ifa_skip_if
#define parse_flags _bsd_pfctl_parse_flags
#define pfctl_add_trans _bsd_pfctl_pfctl_add_trans
#define pfctl_get_ticket _bsd_pfctl_pfctl_get_ticket
#define pfctl_trans _bsd_pfctl_pfctl_trans
#define print_flags _bsd_pfctl_print_flags
#define print_fromto _bsd_pfctl_print_fromto
#define print_op _bsd_pfctl_print_op
#define print_pool _bsd_pfctl_print_pool
#define print_port _bsd_pfctl_print_port
#define print_rule _bsd_pfctl_print_rule
#define print_src_node _bsd_pfctl_print_src_node
#define print_status _bsd_pfctl_print_status
#define print_tabledef _bsd_pfctl_print_tabledef
#define print_ugid _bsd_pfctl_print_ugid
#define set_ipmask _bsd_pfctl_set_ipmask
/* pfctl_qstats.c */
#define pfctl_find_altq_node _bsd_pfctl_pfctl_find_altq_node
#define pfctl_free_altq_node _bsd_pfctl_pfctl_free_altq_node
#define pfctl_insert_altq_node _bsd_pfctl_pfctl_insert_altq_node
#define pfctl_print_altq_node _bsd_pfctl_pfctl_print_altq_node
#define pfctl_print_altq_nodestat _bsd_pfctl_pfctl_print_altq_nodestat
#define pfctl_show_altq _bsd_pfctl_pfctl_show_altq
#define pfctl_update_qstats _bsd_pfctl_pfctl_update_qstats
#define print_cbqstats _bsd_pfctl_print_cbqstats
#define print_codelstats _bsd_pfctl_print_codelstats
#define print_fairqstats _bsd_pfctl_print_fairqstats
#define print_hfscstats _bsd_pfctl_print_hfscstats
#define print_priqstats _bsd_pfctl_print_priqstats
#define update_avg _bsd_pfctl_update_avg
/* pfctl_radix.c */
#define pfi_get_ifaces _bsd_pfctl_pfi_get_ifaces
#define pfr_add_addrs _bsd_pfctl_pfr_add_addrs
#define pfr_add_tables _bsd_pfctl_pfr_add_tables
#define pfr_buf_add _bsd_pfctl_pfr_buf_add
#define pfr_buf_clear _bsd_pfctl_pfr_buf_clear
#define pfr_buf_grow _bsd_pfctl_pfr_buf_grow
#define pfr_buf_load _bsd_pfctl_pfr_buf_load
#define pfr_buf_next _bsd_pfctl_pfr_buf_next
#define pfr_clr_addrs _bsd_pfctl_pfr_clr_addrs
#define pfr_clr_tables _bsd_pfctl_pfr_clr_tables
#define pfr_clr_tstats _bsd_pfctl_pfr_clr_tstats
#define pfr_del_addrs _bsd_pfctl_pfr_del_addrs
#define pfr_del_tables _bsd_pfctl_pfr_del_tables
#define pfr_get_addrs _bsd_pfctl_pfr_get_addrs
#define pfr_get_astats _bsd_pfctl_pfr_get_astats
#define pfr_get_tables _bsd_pfctl_pfr_get_tables
#define pfr_get_tstats _bsd_pfctl_pfr_get_tstats
#define pfr_ina_define _bsd_pfctl_pfr_ina_define
#define pfr_set_addrs _bsd_pfctl_pfr_set_addrs
#define pfr_strerror _bsd_pfctl_pfr_strerror
#define pfr_tst_addrs _bsd_pfctl_pfr_tst_addrs
/* pfctl_table.c */
#define pfctl_clear_tables _bsd_pfctl_pfctl_clear_tables
#define pfctl_command_tables _bsd_pfctl_pfctl_command_tables
#define pfctl_define_table _bsd_pfctl_pfctl_define_table
#define pfctl_show_ifaces _bsd_pfctl_pfctl_show_ifaces
#define pfctl_show_tables _bsd_pfctl_pfctl_show_tables
#define warn_namespace_collision _bsd_pfctl_warn_namespace_collision
/* pf_print_state.c */
#define print_addr _bsd_pfctl_print_addr
#define print_host _bsd_pfctl_print_host
#define print_name _bsd_pfctl_print_name
#define print_seq _bsd_pfctl_print_seq
#define print_state _bsd_pfctl_print_state
#define unmask _bsd_pfctl_unmask
