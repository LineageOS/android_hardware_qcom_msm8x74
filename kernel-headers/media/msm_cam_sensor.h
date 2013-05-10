/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_MSM_CAM_SENSOR_H
#define __LINUX_MSM_CAM_SENSOR_H
#ifdef MSM_CAMERA_BIONIC
#include <sys/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#include <linux/types.h>
#include <linux/v4l2-mediabus.h>
#include <linux/i2c.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define I2C_SEQ_REG_SETTING_MAX 5
#define I2C_SEQ_REG_DATA_MAX 20
#define MAX_CID 16
#define MSM_SENSOR_MCLK_8HZ 8000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_SENSOR_MCLK_16HZ 16000000
#define MSM_SENSOR_MCLK_24HZ 24000000
#define GPIO_OUT_LOW (0 << 1)
#define GPIO_OUT_HIGH (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSI_EMBED_DATA 0x12
#define CSI_RESERVED_DATA_0 0x13
#define CSI_YUV422_8 0x1E
#define CSI_RAW8 0x2A
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSI_RAW10 0x2B
#define CSI_RAW12 0x2C
#define CSI_DECODE_6BIT 0
#define CSI_DECODE_8BIT 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSI_DECODE_10BIT 2
#define CSI_DECODE_DPCM_10_8_10 5
#define MAX_SENSOR_NAME 32
#define MAX_ACT_MOD_NAME_SIZE 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_ACT_NAME_SIZE 32
#define NUM_ACTUATOR_DIR 2
#define MAX_ACTUATOR_SCENARIO 8
#define MAX_ACTUATOR_REGION 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_ACTUATOR_INIT_SET 12
#define MAX_ACTUATOR_REG_TBL_SIZE 8
#define MOVE_NEAR 0
#define MOVE_FAR 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_EEPROM_NAME 32
enum msm_camera_i2c_reg_addr_type {
 MSM_CAMERA_I2C_BYTE_ADDR = 1,
 MSM_CAMERA_I2C_WORD_ADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_I2C_3B_ADDR,
};
enum msm_camera_i2c_data_type {
 MSM_CAMERA_I2C_BYTE_DATA = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_I2C_WORD_DATA,
 MSM_CAMERA_I2C_SET_BYTE_MASK,
 MSM_CAMERA_I2C_UNSET_BYTE_MASK,
 MSM_CAMERA_I2C_SET_WORD_MASK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_I2C_UNSET_WORD_MASK,
 MSM_CAMERA_I2C_SET_BYTE_WRITE_MASK_DATA,
};
enum msm_sensor_power_seq_type_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_CLK,
 SENSOR_GPIO,
 SENSOR_VREG,
 SENSOR_I2C_MUX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_sensor_clk_type_t {
 SENSOR_CAM_MCLK,
 SENSOR_CAM_CLK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_CAM_CLK_MAX,
};
enum msm_sensor_power_seq_gpio_t {
 SENSOR_GPIO_RESET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_GPIO_STANDBY,
 SENSOR_GPIO_VANA,
 SENSOR_GPIO_VDIG,
 SENSOR_GPIO_VIO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SENSOR_GPIO_VCM,
 SENSOR_GPIO_MAX,
};
enum msm_camera_vreg_name_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CAM_VDIG,
 CAM_VIO,
 CAM_VANA,
 CAM_VAF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CAM_VREG_MAX,
};
enum msm_sensor_resolution_t {
 MSM_SENSOR_RES_FULL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_SENSOR_RES_QTR,
 MSM_SENSOR_RES_2,
 MSM_SENSOR_RES_3,
 MSM_SENSOR_RES_4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_SENSOR_RES_5,
 MSM_SENSOR_RES_6,
 MSM_SENSOR_RES_7,
 MSM_SENSOR_INVALID_RES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum sensor_sub_module_t {
 SUB_MODULE_SENSOR,
 SUB_MODULE_CHROMATIX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SUB_MODULE_ACTUATOR,
 SUB_MODULE_EEPROM,
 SUB_MODULE_LED_FLASH,
 SUB_MODULE_STROBE_FLASH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SUB_MODULE_CSID,
 SUB_MODULE_CSID_3D,
 SUB_MODULE_CSIPHY,
 SUB_MODULE_CSIPHY_3D,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SUB_MODULE_MAX,
};
enum csid_cfg_type_t {
 CSID_INIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CSID_CFG,
 CSID_RELEASE,
};
enum csiphy_cfg_type_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CSIPHY_INIT,
 CSIPHY_CFG,
 CSIPHY_RELEASE,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum camera_vreg_type {
 REG_LDO,
 REG_VS,
 REG_GPIO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_sensor_power_setting {
 enum msm_sensor_power_seq_type_t seq_type;
 uint16_t seq_val;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long config_val;
 uint16_t delay;
 void *data[10];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_sensor_power_setting_array {
 struct msm_sensor_power_setting *power_setting;
 uint16_t size;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_sensor_id_info_t {
 uint16_t sensor_id_reg_addr;
 uint16_t sensor_id;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_sensor_slave_info {
 uint16_t slave_addr;
 enum msm_camera_i2c_reg_addr_type addr_type;
 struct msm_sensor_id_info_t sensor_id_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msm_sensor_power_setting_array power_setting_array;
};
struct msm_camera_i2c_reg_array {
 uint16_t reg_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t reg_data;
};
struct msm_camera_i2c_reg_setting {
 struct msm_camera_i2c_reg_array *reg_setting;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t size;
 enum msm_camera_i2c_reg_addr_type addr_type;
 enum msm_camera_i2c_data_type data_type;
 uint16_t delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_camera_i2c_seq_reg_array {
 uint16_t reg_addr;
 uint8_t reg_data[I2C_SEQ_REG_DATA_MAX];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t reg_data_size;
};
struct msm_camera_i2c_seq_reg_setting {
 struct msm_camera_i2c_seq_reg_array *reg_setting;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t size;
 enum msm_camera_i2c_reg_addr_type addr_type;
 uint16_t delay;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_camera_csid_vc_cfg {
 uint8_t cid;
 uint8_t dt;
 uint8_t decode_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_camera_csid_lut_params {
 uint8_t num_cid;
 struct msm_camera_csid_vc_cfg *vc_cfg[MAX_CID];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_camera_csid_params {
 uint8_t lane_cnt;
 uint16_t lane_assign;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t phy_sel;
 struct msm_camera_csid_lut_params lut_params;
};
struct msm_camera_csiphy_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t lane_cnt;
 uint8_t settle_cnt;
 uint16_t lane_mask;
 uint8_t combo_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t csid_core;
};
struct msm_camera_csi2_params {
 struct msm_camera_csid_params csid_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msm_camera_csiphy_params csiphy_params;
};
struct msm_camera_csi_lane_params {
 uint16_t csi_lane_assign;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t csi_lane_mask;
};
struct csi_lane_params_t {
 uint16_t csi_lane_assign;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t csi_lane_mask;
 uint8_t csi_if;
 uint8_t csid_core[2];
 uint8_t csi_phy_sel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_sensor_info_t {
 char sensor_name[MAX_SENSOR_NAME];
 int32_t session_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32_t subdev_id[SUB_MODULE_MAX];
};
struct camera_vreg_t {
 const char *reg_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum camera_vreg_type type;
 int min_voltage;
 int max_voltage;
 int op_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t delay;
};
enum camb_position_t {
 BACK_CAMERA_B,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FRONT_CAMERA_B,
};
enum camerab_mode_t {
 CAMERA_MODE_2D_B = (1<<0),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CAMERA_MODE_3D_B = (1<<1)
};
struct msm_sensor_init_params {
 int modes_supported;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum camb_position_t position;
 uint32_t sensor_mount_angle;
};
struct sensorb_cfg_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cfgtype;
 union {
 struct msm_sensor_info_t sensor_info;
 struct msm_sensor_init_params sensor_init_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *setting;
 } cfg;
};
struct csid_cfg_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum csid_cfg_type_t cfgtype;
 union {
 uint32_t csid_version;
 struct msm_camera_csid_params *csid_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } cfg;
};
struct csiphy_cfg_data {
 enum csiphy_cfg_type_t cfgtype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct msm_camera_csiphy_params *csiphy_params;
 struct msm_camera_csi_lane_params *csi_lane_params;
 } cfg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum eeprom_cfg_type_t {
 CFG_EEPROM_GET_INFO,
 CFG_EEPROM_GET_DATA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_EEPROM_READ_DATA,
 CFG_EEPROM_WRITE_DATA,
};
struct eeprom_get_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t num_bytes;
};
struct eeprom_read_t {
 uint8_t *dbuffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t num_bytes;
};
struct eeprom_write_t {
 uint8_t *dbuffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t num_bytes;
};
struct msm_eeprom_cfg_data {
 enum eeprom_cfg_type_t cfgtype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t is_supported;
 union {
 char eeprom_name[MAX_SENSOR_NAME];
 struct eeprom_get_t get_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct eeprom_read_t read_data;
 struct eeprom_write_t write_data;
 } cfg;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_sensor_cfg_type_t {
 CFG_SET_SLAVE_INFO,
 CFG_WRITE_I2C_ARRAY,
 CFG_WRITE_I2C_SEQ_ARRAY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_POWER_UP,
 CFG_POWER_DOWN,
 CFG_SET_STOP_STREAM_SETTING,
 CFG_GET_SENSOR_INFO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_GET_SENSOR_INIT_PARAMS,
 CFG_SET_INIT_SETTING,
 CFG_SET_RESOLUTION,
 CFG_SET_STOP_STREAM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_SET_START_STREAM,
};
enum msm_actuator_cfg_type_t {
 CFG_GET_ACTUATOR_INFO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CFG_SET_ACTUATOR_INFO,
 CFG_SET_DEFAULT_FOCUS,
 CFG_MOVE_FOCUS,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum actuator_type {
 ACTUATOR_VCM,
 ACTUATOR_PIEZO,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_actuator_data_type {
 MSM_ACTUATOR_BYTE_DATA = 1,
 MSM_ACTUATOR_WORD_DATA,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_actuator_addr_type {
 MSM_ACTUATOR_BYTE_ADDR = 1,
 MSM_ACTUATOR_WORD_ADDR,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct reg_settings_t {
 uint16_t reg_addr;
 uint16_t reg_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct region_params_t {
 uint16_t step_bound[2];
 uint16_t code_per_step;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct damping_params_t {
 uint32_t damping_step;
 uint32_t damping_delay;
 uint32_t hw_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_actuator_move_params_t {
 int8_t dir;
 int8_t sign_dir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int16_t dest_step_pos;
 int32_t num_steps;
 struct damping_params_t *ringing_params;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_actuator_tuning_params_t {
 int16_t initial_code;
 uint16_t pwd_step;
 uint16_t region_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t total_steps;
 struct region_params_t *region_params;
};
struct msm_actuator_params_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum actuator_type act_type;
 uint8_t reg_tbl_size;
 uint16_t data_size;
 uint16_t init_setting_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t i2c_addr;
 enum msm_actuator_addr_type i2c_addr_type;
 enum msm_actuator_data_type i2c_data_type;
 struct msm_actuator_reg_params_t *reg_tbl_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct reg_settings_t *init_settings;
};
struct msm_actuator_set_info_t {
 struct msm_actuator_params_t actuator_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msm_actuator_tuning_params_t af_tuning_params;
};
struct msm_actuator_get_info_t {
 uint32_t focal_length_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t focal_length_den;
 uint32_t f_number_num;
 uint32_t f_number_den;
 uint32_t f_pix_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t f_pix_den;
 uint32_t total_f_dist_num;
 uint32_t total_f_dist_den;
 uint32_t hor_view_angle_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t hor_view_angle_den;
 uint32_t ver_view_angle_num;
 uint32_t ver_view_angle_den;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum af_camera_name {
 ACTUATOR_MAIN_CAM_0,
 ACTUATOR_MAIN_CAM_1,
 ACTUATOR_MAIN_CAM_2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ACTUATOR_MAIN_CAM_3,
 ACTUATOR_MAIN_CAM_4,
 ACTUATOR_MAIN_CAM_5,
 ACTUATOR_WEB_CAM_0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ACTUATOR_WEB_CAM_1,
 ACTUATOR_WEB_CAM_2,
};
struct msm_actuator_cfg_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cfgtype;
 uint8_t is_af_supported;
 union {
 struct msm_actuator_move_params_t move;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msm_actuator_set_info_t set_info;
 struct msm_actuator_get_info_t get_info;
 enum af_camera_name cam_name;
 } cfg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_actuator_write_type {
 MSM_ACTUATOR_WRITE_HW_DAMP,
 MSM_ACTUATOR_WRITE_DAC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_actuator_reg_params_t {
 enum msm_actuator_write_type reg_write_type;
 uint32_t hw_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t reg_addr;
 uint16_t hw_shift;
 uint16_t data_shift;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_camera_led_config_t {
 MSM_CAMERA_LED_OFF,
 MSM_CAMERA_LED_LOW,
 MSM_CAMERA_LED_HIGH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MSM_CAMERA_LED_INIT,
 MSM_CAMERA_LED_RELEASE,
};
struct msm_camera_led_cfg_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_camera_led_config_t cfgtype;
};
#define VIDIOC_MSM_SENSOR_CFG   _IOWR('V', BASE_VIDIOC_PRIVATE + 1, struct sensorb_cfg_data)
#define VIDIOC_MSM_SENSOR_RELEASE   _IO('V', BASE_VIDIOC_PRIVATE + 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIDIOC_MSM_SENSOR_GET_SUBDEV_ID   _IOWR('V', BASE_VIDIOC_PRIVATE + 3, uint32_t)
#define VIDIOC_MSM_CSIPHY_IO_CFG   _IOWR('V', BASE_VIDIOC_PRIVATE + 4, struct csid_cfg_data)
#define VIDIOC_MSM_CSID_IO_CFG   _IOWR('V', BASE_VIDIOC_PRIVATE + 5, struct csiphy_cfg_data)
#define VIDIOC_MSM_ACTUATOR_CFG   _IOWR('V', BASE_VIDIOC_PRIVATE + 6, struct msm_actuator_cfg_data)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIDIOC_MSM_FLASH_LED_DATA_CFG   _IOWR('V', BASE_VIDIOC_PRIVATE + 7, struct msm_camera_led_cfg_t)
#define VIDIOC_MSM_EEPROM_CFG   _IOWR('V', BASE_VIDIOC_PRIVATE + 8, struct msm_eeprom_cfg_data)
#define MSM_V4L2_PIX_FMT_META v4l2_fourcc('M', 'E', 'T', 'A')
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */

