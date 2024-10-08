/*
 * File: analog_input.h
 *
 * Code generated for Simulink model 'analog_input'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep  3 20:15:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_analog_input_h_
#define RTW_HEADER_analog_input_h_
#include <stddef.h>
#ifndef analog_input_COMMON_INCLUDES_
# define analog_input_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* analog_input_COMMON_INCLUDES_ */

#include "analog_input_types.h"

/* Child system includes */
#include "Subsystem.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T analog_inp;                 /* '<Root>/analog_inp' */
} ExtU_analog_input_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T lamp;                      /* '<Root>/lamp' */
} ExtY_analog_input_T;

/* Real-time Model Data Structure */
struct tag_RTM_analog_input_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_analog_input_T analog_input_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_analog_input_T analog_input_Y;

/* Model entry point functions */
extern void analog_input_initialize(void);
extern void analog_input_step(void);
extern void analog_input_terminate(void);

/* Real-time Model object */
extern RT_MODEL_analog_input_T *const analog_input_M;

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
 * '<Root>' : 'analog_input'
 * '<S1>'   : 'analog_input/Subsystem'
 */
#endif                                 /* RTW_HEADER_analog_input_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
