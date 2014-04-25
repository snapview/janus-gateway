/*
  File autogenerated by gengetopt version 2.22.5
  generated with the following command:
  gengetopt --set-package=janus --set-version=0.0.2 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "cmdline.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: janus [OPTIONS]...";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "  -h, --help                    Print help and exit",
  "  -V, --version                 Print version and exit",
  "  -i, --interface=ipaddress     Interface to use (will be the public IP)",
  "  -p, --port=portnumber         Web server HTTP port (default=8088)",
  "  -s, --secure-port=portnumber  Web server HTTPS port (default=no HTTPS)",
  "  -n, --no-http                 Disable insecure HTTP web server  (default=off)",
  "  -b, --base-path=basepath      Base path to bind to in the web server \n                                  (default=/janus) ",
  "  -P, --plugins-folder=path     Plugins folder (default=./plugins)",
  "  -C, --config=path             Configuration file to use",
  "  -F, --configs-folder=path     Configuration files folder (default=./conf)",
  "  -c, --cert-pem=filename       HTTPS/DTLS certificate",
  "  -k, --cert-key=filename       HTTPS/DTLS certificate key",
  "  -S, --stun-server=ip:port     STUN server(:port) to use, if needed (e.g., \n                                  gateway behind NAT, default=none)",
  "  -X, --ice-ignore-list=list    Comma-separated list of interfaces or IP \n                                  addresses to ignore for ICE gathering; \n                                  partial strings are supported (e.g., \n                                  vmnet8,192.168.0.1,10.0.0.1 or \n                                  vmnet,192.168., default=vmnet)",
  "  -e, --public-ip=ipaddress     Public address of the machine, to use in SDP",
  "  -r, --rtp-port-range=min-max  Port range to use for RTP/RTCP",
  "  -d, --debug-level=1-7         Debug/logging level (0=disable debugging, \n                                  7=maximum debug level; default=4)",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_INT
} cmdline_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->interface_given = 0 ;
  args_info->port_given = 0 ;
  args_info->secure_port_given = 0 ;
  args_info->no_http_given = 0 ;
  args_info->base_path_given = 0 ;
  args_info->plugins_folder_given = 0 ;
  args_info->config_given = 0 ;
  args_info->configs_folder_given = 0 ;
  args_info->cert_pem_given = 0 ;
  args_info->cert_key_given = 0 ;
  args_info->stun_server_given = 0 ;
  args_info->ice_ignore_list_given = 0 ;
  args_info->public_ip_given = 0 ;
  args_info->rtp_port_range_given = 0 ;
  args_info->debug_level_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->interface_arg = NULL;
  args_info->interface_orig = NULL;
  args_info->port_orig = NULL;
  args_info->secure_port_orig = NULL;
  args_info->no_http_flag = 0;
  args_info->base_path_arg = NULL;
  args_info->base_path_orig = NULL;
  args_info->plugins_folder_arg = NULL;
  args_info->plugins_folder_orig = NULL;
  args_info->config_arg = NULL;
  args_info->config_orig = NULL;
  args_info->configs_folder_arg = NULL;
  args_info->configs_folder_orig = NULL;
  args_info->cert_pem_arg = NULL;
  args_info->cert_pem_orig = NULL;
  args_info->cert_key_arg = NULL;
  args_info->cert_key_orig = NULL;
  args_info->stun_server_arg = NULL;
  args_info->stun_server_orig = NULL;
  args_info->ice_ignore_list_arg = NULL;
  args_info->ice_ignore_list_orig = NULL;
  args_info->public_ip_arg = NULL;
  args_info->public_ip_orig = NULL;
  args_info->rtp_port_range_arg = NULL;
  args_info->rtp_port_range_orig = NULL;
  args_info->debug_level_orig = NULL;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->interface_help = gengetopt_args_info_help[2] ;
  args_info->port_help = gengetopt_args_info_help[3] ;
  args_info->secure_port_help = gengetopt_args_info_help[4] ;
  args_info->no_http_help = gengetopt_args_info_help[5] ;
  args_info->base_path_help = gengetopt_args_info_help[6] ;
  args_info->plugins_folder_help = gengetopt_args_info_help[7] ;
  args_info->config_help = gengetopt_args_info_help[8] ;
  args_info->configs_folder_help = gengetopt_args_info_help[9] ;
  args_info->cert_pem_help = gengetopt_args_info_help[10] ;
  args_info->cert_key_help = gengetopt_args_info_help[11] ;
  args_info->stun_server_help = gengetopt_args_info_help[12] ;
  args_info->ice_ignore_list_help = gengetopt_args_info_help[13] ;
  args_info->public_ip_help = gengetopt_args_info_help[14] ;
  args_info->rtp_port_range_help = gengetopt_args_info_help[15] ;
  args_info->debug_level_help = gengetopt_args_info_help[16] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(CMDLINE_PARSER_PACKAGE_NAME) ? CMDLINE_PARSER_PACKAGE_NAME : CMDLINE_PARSER_PACKAGE),
     CMDLINE_PARSER_VERSION);
}

static void print_help_common(void) {
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  if (strlen(gengetopt_args_info_usage) > 0)
    printf("\n%s\n", gengetopt_args_info_usage);

  printf("\n");

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n\n", gengetopt_args_info_description);
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);
}

void
cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct cmdline_parser_params *
cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params = 
    (struct cmdline_parser_params *)malloc(sizeof(struct cmdline_parser_params));
  cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{

  free_string_field (&(args_info->interface_arg));
  free_string_field (&(args_info->interface_orig));
  free_string_field (&(args_info->port_orig));
  free_string_field (&(args_info->secure_port_orig));
  free_string_field (&(args_info->base_path_arg));
  free_string_field (&(args_info->base_path_orig));
  free_string_field (&(args_info->plugins_folder_arg));
  free_string_field (&(args_info->plugins_folder_orig));
  free_string_field (&(args_info->config_arg));
  free_string_field (&(args_info->config_orig));
  free_string_field (&(args_info->configs_folder_arg));
  free_string_field (&(args_info->configs_folder_orig));
  free_string_field (&(args_info->cert_pem_arg));
  free_string_field (&(args_info->cert_pem_orig));
  free_string_field (&(args_info->cert_key_arg));
  free_string_field (&(args_info->cert_key_orig));
  free_string_field (&(args_info->stun_server_arg));
  free_string_field (&(args_info->stun_server_orig));
  free_string_field (&(args_info->ice_ignore_list_arg));
  free_string_field (&(args_info->ice_ignore_list_orig));
  free_string_field (&(args_info->public_ip_arg));
  free_string_field (&(args_info->public_ip_orig));
  free_string_field (&(args_info->rtp_port_range_arg));
  free_string_field (&(args_info->rtp_port_range_orig));
  free_string_field (&(args_info->debug_level_orig));
  
  

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  FIX_UNUSED (values);
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
cmdline_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->interface_given)
    write_into_file(outfile, "interface", args_info->interface_orig, 0);
  if (args_info->port_given)
    write_into_file(outfile, "port", args_info->port_orig, 0);
  if (args_info->secure_port_given)
    write_into_file(outfile, "secure-port", args_info->secure_port_orig, 0);
  if (args_info->no_http_given)
    write_into_file(outfile, "no-http", 0, 0 );
  if (args_info->base_path_given)
    write_into_file(outfile, "base-path", args_info->base_path_orig, 0);
  if (args_info->plugins_folder_given)
    write_into_file(outfile, "plugins-folder", args_info->plugins_folder_orig, 0);
  if (args_info->config_given)
    write_into_file(outfile, "config", args_info->config_orig, 0);
  if (args_info->configs_folder_given)
    write_into_file(outfile, "configs-folder", args_info->configs_folder_orig, 0);
  if (args_info->cert_pem_given)
    write_into_file(outfile, "cert-pem", args_info->cert_pem_orig, 0);
  if (args_info->cert_key_given)
    write_into_file(outfile, "cert-key", args_info->cert_key_orig, 0);
  if (args_info->stun_server_given)
    write_into_file(outfile, "stun-server", args_info->stun_server_orig, 0);
  if (args_info->ice_ignore_list_given)
    write_into_file(outfile, "ice-ignore-list", args_info->ice_ignore_list_orig, 0);
  if (args_info->public_ip_given)
    write_into_file(outfile, "public-ip", args_info->public_ip_orig, 0);
  if (args_info->rtp_port_range_given)
    write_into_file(outfile, "rtp-port-range", args_info->rtp_port_range_orig, 0);
  if (args_info->debug_level_given)
    write_into_file(outfile, "debug-level", args_info->debug_level_orig, 0);
  

  i = EXIT_SUCCESS;
  return i;
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct cmdline_parser_params *params)
{
  int result;
  result = cmdline_parser_internal (argc, argv, args_info, params, 0);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = cmdline_parser_internal (argc, argv, args_info, &params, 0);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  FIX_UNUSED (args_info);
  FIX_UNUSED (prog_name);
  return EXIT_SUCCESS;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see cmdline_parser_params.check_ambiguity
 * @param override @see cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  FIX_UNUSED (default_value);
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_INT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
cmdline_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "interface",	1, NULL, 'i' },
        { "port",	1, NULL, 'p' },
        { "secure-port",	1, NULL, 's' },
        { "no-http",	0, NULL, 'n' },
        { "base-path",	1, NULL, 'b' },
        { "plugins-folder",	1, NULL, 'P' },
        { "config",	1, NULL, 'C' },
        { "configs-folder",	1, NULL, 'F' },
        { "cert-pem",	1, NULL, 'c' },
        { "cert-key",	1, NULL, 'k' },
        { "stun-server",	1, NULL, 'S' },
        { "ice-ignore-list",	1, NULL, 'X' },
        { "public-ip",	1, NULL, 'e' },
        { "rtp-port-range",	1, NULL, 'r' },
        { "debug-level",	1, NULL, 'd' },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVi:p:s:nb:P:C:F:c:k:S:X:e:r:d:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          cmdline_parser_print_help ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          cmdline_parser_print_version ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'i':	/* Interface to use (will be the public IP).  */
        
        
          if (update_arg( (void *)&(args_info->interface_arg), 
               &(args_info->interface_orig), &(args_info->interface_given),
              &(local_args_info.interface_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "interface", 'i',
              additional_error))
            goto failure;
        
          break;
        case 'p':	/* Web server HTTP port (default=8088).  */
        
        
          if (update_arg( (void *)&(args_info->port_arg), 
               &(args_info->port_orig), &(args_info->port_given),
              &(local_args_info.port_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "port", 'p',
              additional_error))
            goto failure;
        
          break;
        case 's':	/* Web server HTTPS port (default=no HTTPS).  */
        
        
          if (update_arg( (void *)&(args_info->secure_port_arg), 
               &(args_info->secure_port_orig), &(args_info->secure_port_given),
              &(local_args_info.secure_port_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "secure-port", 's',
              additional_error))
            goto failure;
        
          break;
        case 'n':	/* Disable insecure HTTP web server.  */
        
        
          if (update_arg((void *)&(args_info->no_http_flag), 0, &(args_info->no_http_given),
              &(local_args_info.no_http_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "no-http", 'n',
              additional_error))
            goto failure;
        
          break;
        case 'b':	/* Base path to bind to in the web server (default=/janus) .  */
        
        
          if (update_arg( (void *)&(args_info->base_path_arg), 
               &(args_info->base_path_orig), &(args_info->base_path_given),
              &(local_args_info.base_path_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "base-path", 'b',
              additional_error))
            goto failure;
        
          break;
        case 'P':	/* Plugins folder (default=./plugins).  */
        
        
          if (update_arg( (void *)&(args_info->plugins_folder_arg), 
               &(args_info->plugins_folder_orig), &(args_info->plugins_folder_given),
              &(local_args_info.plugins_folder_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "plugins-folder", 'P',
              additional_error))
            goto failure;
        
          break;
        case 'C':	/* Configuration file to use.  */
        
        
          if (update_arg( (void *)&(args_info->config_arg), 
               &(args_info->config_orig), &(args_info->config_given),
              &(local_args_info.config_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "config", 'C',
              additional_error))
            goto failure;
        
          break;
        case 'F':	/* Configuration files folder (default=./conf).  */
        
        
          if (update_arg( (void *)&(args_info->configs_folder_arg), 
               &(args_info->configs_folder_orig), &(args_info->configs_folder_given),
              &(local_args_info.configs_folder_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "configs-folder", 'F',
              additional_error))
            goto failure;
        
          break;
        case 'c':	/* HTTPS/DTLS certificate.  */
        
        
          if (update_arg( (void *)&(args_info->cert_pem_arg), 
               &(args_info->cert_pem_orig), &(args_info->cert_pem_given),
              &(local_args_info.cert_pem_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "cert-pem", 'c',
              additional_error))
            goto failure;
        
          break;
        case 'k':	/* HTTPS/DTLS certificate key.  */
        
        
          if (update_arg( (void *)&(args_info->cert_key_arg), 
               &(args_info->cert_key_orig), &(args_info->cert_key_given),
              &(local_args_info.cert_key_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "cert-key", 'k',
              additional_error))
            goto failure;
        
          break;
        case 'S':	/* STUN server(:port) to use, if needed (e.g., gateway behind NAT, default=none).  */
        
        
          if (update_arg( (void *)&(args_info->stun_server_arg), 
               &(args_info->stun_server_orig), &(args_info->stun_server_given),
              &(local_args_info.stun_server_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "stun-server", 'S',
              additional_error))
            goto failure;
        
          break;
        case 'X':	/* Comma-separated list of interfaces or IP addresses to ignore for ICE gathering; partial strings are supported (e.g., vmnet8,192.168.0.1,10.0.0.1 or vmnet,192.168., default=vmnet).  */
        
        
          if (update_arg( (void *)&(args_info->ice_ignore_list_arg), 
               &(args_info->ice_ignore_list_orig), &(args_info->ice_ignore_list_given),
              &(local_args_info.ice_ignore_list_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "ice-ignore-list", 'X',
              additional_error))
            goto failure;
        
          break;
        case 'e':	/* Public address of the machine, to use in SDP.  */
        
        
          if (update_arg( (void *)&(args_info->public_ip_arg), 
               &(args_info->public_ip_orig), &(args_info->public_ip_given),
              &(local_args_info.public_ip_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "public-ip", 'e',
              additional_error))
            goto failure;
        
          break;
        case 'r':	/* Port range to use for RTP/RTCP.  */
        
        
          if (update_arg( (void *)&(args_info->rtp_port_range_arg), 
               &(args_info->rtp_port_range_orig), &(args_info->rtp_port_range_given),
              &(local_args_info.rtp_port_range_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "rtp-port-range", 'r',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* Debug/logging level (0=disable debugging, 7=maximum debug level; default=4).  */
        
        
          if (update_arg( (void *)&(args_info->debug_level_arg), 
               &(args_info->debug_level_orig), &(args_info->debug_level_given),
              &(local_args_info.debug_level_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "debug-level", 'd',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */




  cmdline_parser_release (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
