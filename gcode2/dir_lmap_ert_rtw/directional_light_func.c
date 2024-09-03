/*
 * File: directional_light_func.c
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

#include "directional_light_func.h"

/* Include model header file for global data */
#include "dir_lmap.h"
#include "dir_lmap_private.h"

/* Output and update for atomic system: '<Root>/directional_light_func' */
void dir_lmap_directional_light_func(boolean_T rtu_left_sw, boolean_T
  rtu_right_sw, boolean_T *rty_left_lamp, boolean_T *rty_right_lamp)
{
  /* If: '<S1>/If1' */
  if (rtu_left_sw && (!rtu_right_sw)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* SignalConversion: '<S3>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
     *  Constant: '<S3>/Constant'
     */
    *rty_left_lamp = true;

    /* SignalConversion: '<S3>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    *rty_right_lamp = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  } else if ((!rtu_left_sw) && rtu_right_sw) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* SignalConversion: '<S4>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
     *  Constant: '<S4>/Constant'
     */
    *rty_left_lamp = false;

    /* SignalConversion: '<S4>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    *rty_right_lamp = true;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* SignalConversion: '<S2>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
     *  Constant: '<S2>/Constant'
     */
    *rty_left_lamp = false;

    /* SignalConversion: '<S2>/OutportBuffer_InsertedFor_Out3_at_inport_0' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    *rty_right_lamp = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  }

  /* End of If: '<S1>/If1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
