/*
 * File: gcode1.h
 *
 * Code generated for Simulink model 'gcode1'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep  3 00:40:05 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gcode1_h_
#define RTW_HEADER_gcode1_h_
#ifndef gcode1_COMMON_INCLUDES_
# define gcode1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* gcode1_COMMON_INCLUDES_ */

#include "gcode1_types.h"

/* Child system includes */
#include "lamp_func.h"

/* Macros for accessing real-time model data structure */

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T sw;                        /* '<Root>/sw' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T lamp;                      /* '<Root>/lamp' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void gcode1_initialize(void);
extern void gcode1_step(void);

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
 * '<Root>' : 'gcode1'
 * '<S1>'   : 'gcode1/  lamp_func '
 */
#endif                                 /* RTW_HEADER_gcode1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
