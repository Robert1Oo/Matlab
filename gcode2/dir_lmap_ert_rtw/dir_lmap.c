/*
 * File: dir_lmap.c
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

#include "dir_lmap.h"
#include "dir_lmap_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_dir_lmap_T dir_lmap_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_dir_lmap_T dir_lmap_Y;

/* Real-time model */
RT_MODEL_dir_lmap_T dir_lmap_M_;
RT_MODEL_dir_lmap_T *const dir_lmap_M = &dir_lmap_M_;

/* Model step function */
void dir_lmap_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/directional_light_func' */

  /* Outport: '<Root>/right_lamp' incorporates:
   *  Inport: '<Root>/left_sw'
   *  Inport: '<Root>/right_sw'
   *  Outport: '<Root>/left_lamp'
   */
  dir_lmap_directional_light_func(dir_lmap_U.left_sw, dir_lmap_U.right_sw,
    &dir_lmap_Y.left_lamp, &dir_lmap_Y.right_lamp);

  /* End of Outputs for SubSystem: '<Root>/directional_light_func' */
}

/* Model initialize function */
void dir_lmap_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(dir_lmap_M, (NULL));

  /* external inputs */
  (void)memset(&dir_lmap_U, 0, sizeof(ExtU_dir_lmap_T));

  /* external outputs */
  (void) memset((void *)&dir_lmap_Y, 0,
                sizeof(ExtY_dir_lmap_T));
}

/* Model terminate function */
void dir_lmap_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
