
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ODEJointProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "ODEJointProperties_Plugin.h"

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type ODEJointProperties_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ODEJointProperties_*
            ODEJointProperties_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                ODEJointProperties_ *sample = NULL;

                sample = new (std::nothrow) ODEJointProperties_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!gazebo_msgs::msg::dds_::ODEJointProperties__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            ODEJointProperties_ *
            ODEJointProperties_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                ODEJointProperties_ *sample = NULL;

                sample = new (std::nothrow) ODEJointProperties_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!gazebo_msgs::msg::dds_::ODEJointProperties__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            ODEJointProperties_ *
            ODEJointProperties_PluginSupport_create_data(void)
            {
                return gazebo_msgs::msg::dds_::ODEJointProperties_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            ODEJointProperties_PluginSupport_destroy_data_w_params(
                ODEJointProperties_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                gazebo_msgs::msg::dds_::ODEJointProperties__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            ODEJointProperties_PluginSupport_destroy_data_ex(
                ODEJointProperties_ *sample,RTIBool deallocate_pointers) {

                gazebo_msgs::msg::dds_::ODEJointProperties__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            ODEJointProperties_PluginSupport_destroy_data(
                ODEJointProperties_ *sample) {

                gazebo_msgs::msg::dds_::ODEJointProperties_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            ODEJointProperties_PluginSupport_copy_data(
                ODEJointProperties_ *dst,
                const ODEJointProperties_ *src)
            {
                return gazebo_msgs::msg::dds_::ODEJointProperties__copy(dst,(const ODEJointProperties_*) src);
            }

            void 
            ODEJointProperties_PluginSupport_print_data(
                const ODEJointProperties_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->damping_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->damping_),
                        DDS_DoubleSeq_get_length(&sample->damping_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "damping_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->damping_),
                        DDS_DoubleSeq_get_length(&sample->damping_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "damping_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->hi_stop_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->hi_stop_),
                        DDS_DoubleSeq_get_length(&sample->hi_stop_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "hi_stop_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->hi_stop_),
                        DDS_DoubleSeq_get_length(&sample->hi_stop_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "hi_stop_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->lo_stop_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->lo_stop_),
                        DDS_DoubleSeq_get_length(&sample->lo_stop_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "lo_stop_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->lo_stop_),
                        DDS_DoubleSeq_get_length(&sample->lo_stop_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "lo_stop_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->erp_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->erp_),
                        DDS_DoubleSeq_get_length(&sample->erp_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "erp_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->erp_),
                        DDS_DoubleSeq_get_length(&sample->erp_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "erp_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->cfm_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->cfm_),
                        DDS_DoubleSeq_get_length(&sample->cfm_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "cfm_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->cfm_),
                        DDS_DoubleSeq_get_length(&sample->cfm_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "cfm_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_erp_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_erp_),
                        DDS_DoubleSeq_get_length(&sample->stop_erp_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "stop_erp_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->stop_erp_),
                        DDS_DoubleSeq_get_length(&sample->stop_erp_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "stop_erp_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_cfm_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_cfm_),
                        DDS_DoubleSeq_get_length(&sample->stop_cfm_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "stop_cfm_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->stop_cfm_),
                        DDS_DoubleSeq_get_length(&sample->stop_cfm_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "stop_cfm_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->fudge_factor_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->fudge_factor_),
                        DDS_DoubleSeq_get_length(&sample->fudge_factor_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "fudge_factor_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->fudge_factor_),
                        DDS_DoubleSeq_get_length(&sample->fudge_factor_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "fudge_factor_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->fmax_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->fmax_),
                        DDS_DoubleSeq_get_length(&sample->fmax_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "fmax_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->fmax_),
                        DDS_DoubleSeq_get_length(&sample->fmax_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "fmax_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->vel_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->vel_),
                        DDS_DoubleSeq_get_length(&sample->vel_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "vel_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->vel_),
                        DDS_DoubleSeq_get_length(&sample->vel_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "vel_", indent_level + 1);
                }

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            ODEJointProperties_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            ODEJointProperties_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            ODEJointProperties_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    gazebo_msgs::msg::dds_::ODEJointProperties_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    gazebo_msgs::msg::dds_::ODEJointProperties_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            ODEJointProperties_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ODEJointProperties_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ *sample,
                void *handle)
            {

                ODEJointProperties__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ODEJointProperties_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ *dst,
                const ODEJointProperties_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return gazebo_msgs::msg::dds_::ODEJointProperties_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ODEJointProperties_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            ODEJointProperties_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const ODEJointProperties_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->damping_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->damping_),
                            DDS_DoubleSeq_get_length(&sample->damping_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->damping_),
                            DDS_DoubleSeq_get_length(&sample->damping_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->hi_stop_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->hi_stop_),
                            DDS_DoubleSeq_get_length(&sample->hi_stop_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->hi_stop_),
                            DDS_DoubleSeq_get_length(&sample->hi_stop_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->lo_stop_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->lo_stop_),
                            DDS_DoubleSeq_get_length(&sample->lo_stop_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->lo_stop_),
                            DDS_DoubleSeq_get_length(&sample->lo_stop_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->erp_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->erp_),
                            DDS_DoubleSeq_get_length(&sample->erp_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->erp_),
                            DDS_DoubleSeq_get_length(&sample->erp_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->cfm_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->cfm_),
                            DDS_DoubleSeq_get_length(&sample->cfm_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->cfm_),
                            DDS_DoubleSeq_get_length(&sample->cfm_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_erp_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_erp_),
                            DDS_DoubleSeq_get_length(&sample->stop_erp_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->stop_erp_),
                            DDS_DoubleSeq_get_length(&sample->stop_erp_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_cfm_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_cfm_),
                            DDS_DoubleSeq_get_length(&sample->stop_cfm_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->stop_cfm_),
                            DDS_DoubleSeq_get_length(&sample->stop_cfm_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->fudge_factor_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->fudge_factor_),
                            DDS_DoubleSeq_get_length(&sample->fudge_factor_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->fudge_factor_),
                            DDS_DoubleSeq_get_length(&sample->fudge_factor_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->fmax_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->fmax_),
                            DDS_DoubleSeq_get_length(&sample->fmax_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->fmax_),
                            DDS_DoubleSeq_get_length(&sample->fmax_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->vel_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->vel_),
                            DDS_DoubleSeq_get_length(&sample->vel_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->vel_),
                            DDS_DoubleSeq_get_length(&sample->vel_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            ODEJointProperties_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        gazebo_msgs::msg::dds_::ODEJointProperties__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->damping_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->damping_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->damping_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->damping_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->damping_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->damping_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->damping_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->hi_stop_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->hi_stop_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->hi_stop_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->hi_stop_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->hi_stop_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->hi_stop_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->hi_stop_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->lo_stop_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->lo_stop_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->lo_stop_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->lo_stop_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->lo_stop_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->lo_stop_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->lo_stop_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->erp_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->erp_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->erp_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->erp_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->erp_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->erp_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->erp_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->cfm_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->cfm_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->cfm_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->cfm_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->cfm_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->cfm_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->cfm_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->stop_erp_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_erp_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_erp_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->stop_erp_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->stop_erp_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->stop_erp_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->stop_erp_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->stop_cfm_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_cfm_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->stop_cfm_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->stop_cfm_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->stop_cfm_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->stop_cfm_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->stop_cfm_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->fudge_factor_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->fudge_factor_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->fudge_factor_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->fudge_factor_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->fudge_factor_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->fudge_factor_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->fudge_factor_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->fmax_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->fmax_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->fmax_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->fmax_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->fmax_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->fmax_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->fmax_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->vel_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->vel_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->vel_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->vel_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->vel_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->vel_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->vel_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            ODEJointProperties_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ODEJointProperties_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                ODEJointProperties_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    ODEJointProperties_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            ODEJointProperties_Plugin_deserialize_from_cdr_buffer(
                ODEJointProperties_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                ODEJointProperties__finalize_optional_members(sample, RTI_TRUE);
                return ODEJointProperties_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            ODEJointProperties_Plugin_data_to_string(
                const ODEJointProperties_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!ODEJointProperties_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!ODEJointProperties_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    ODEJointProperties__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            ODEJointProperties_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "ODEJointProperties_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "ODEJointProperties_");

                }

                return result;

            }

            RTIBool ODEJointProperties_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            ODEJointProperties_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            ODEJointProperties_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = ODEJointProperties_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            ODEJointProperties_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            ODEJointProperties_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const ODEJointProperties_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->damping_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->hi_stop_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->lo_stop_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->erp_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->cfm_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->stop_erp_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->stop_cfm_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->fudge_factor_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->fmax_),
                        RTI_CDR_DOUBLE_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->vel_),
                        RTI_CDR_DOUBLE_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            ODEJointProperties_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            ODEJointProperties_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const ODEJointProperties_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool ODEJointProperties_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool ODEJointProperties_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            ODEJointProperties_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            ODEJointProperties_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = ODEJointProperties_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            ODEJointProperties_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ODEJointProperties_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ODEJointProperties_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ODEJointProperties_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ODEJointProperties_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                ODEJointProperties__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ODEJointProperties_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ODEJointProperties_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)gazebo_msgs::msg::dds_::ODEJointProperties__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ODEJointProperties_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ODEJointProperties_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                gazebo_msgs::msg::dds_::ODEJointProperties_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = ODEJointProperties_TYPENAME;

                return plugin;
            }

            void
            ODEJointProperties_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */
#undef RTI_CDR_CURRENT_SUBMODULE 
