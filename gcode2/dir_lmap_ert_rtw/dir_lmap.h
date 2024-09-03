/*
 * File: dir_lmap.h
 *
 * Code generated for Simulink model 'dir_lmap'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep  3 18:47:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_dir_lmap_h_
#define RTW_HEADER_dir_lmap_h_
#include <string.h>
#include <stddef.h>
#ifndef dir_lmap_COMMON_INCLUDES_
# define dir_lmap_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* dir_lmap_COMMON_INCLUDES_ */

#include "dir_lmap_types.h"

/* Child system includes */
#include "directional_light_func.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T left_sw;                   /* '<Root>/left_sw' */
  boolean_T right_sw;                  /* '<Root>/right_sw' */
} ExtU_dir_lmap_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T left_lamp;                 /* '<Root>/left_lamp' */
  boolean_T right_lamp;                /* '<Root>/right_lamp' */
} ExtY_dir_lmap_T;

/* Real-time Model Data Structure */
struct tag_RTM_dir_lmap_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_dir_lmap_T dir_lmap_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_dir_lmap_T dir_lmap_Y;

/* Model entry point functions */
extern void dir_lmap_initialize(void);
extern void dir_lmap_step(void);
extern void dir_lmap_terminate(void);

/* Real-time Model object */
extern RT_MODEL_dir_lmap_T *const dir_lmap_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'dir_lmap'
 * '<S1>'   : 'dir_lmap/directional_light_func'
 * '<S2>'   : 'dir_lmap/directional_light_func/If Action Subsystem'
 * '<S3>'   : 'dir_lmap/directional_light_func/If Action Subsystem1'
 * '<S4>'   : 'dir_lmap/directional_light_func/If Action Subsystem2'
 */
#endif                                 /* RTW_HEADER_dir_lmap_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
