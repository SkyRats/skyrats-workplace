

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Extrinsics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Extrinsics_.h"

#include <new>

namespace realsense2_camera_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Extrinsics_TYPENAME = "realsense2_camera_msgs::msg::dds_::Extrinsics_";

            DDS_TypeCode* Extrinsics__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Extrinsics__g_tc_rotation__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,9, NULL,NULL);
                static DDS_TypeCode Extrinsics__g_tc_translation__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode_Member Extrinsics__g_tc_members[2]=
                {

                    {
                        (char *)"rotation_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"translation_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Extrinsics__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"realsense2_camera_msgs::msg::dds_::Extrinsics_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Extrinsics__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Extrinsics_*/

                if (is_initialized) {
                    return &Extrinsics__g_tc;
                }

                Extrinsics__g_tc_rotation__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                Extrinsics__g_tc_translation__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                Extrinsics__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Extrinsics__g_tc_rotation__array;
                Extrinsics__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Extrinsics__g_tc_translation__array;

                is_initialized = RTI_TRUE;

                return &Extrinsics__g_tc;
            }

            RTIBool Extrinsics__initialize(
                Extrinsics_* sample) {
                return realsense2_camera_msgs::msg::dds_::Extrinsics__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Extrinsics__initialize_ex(
                Extrinsics_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return realsense2_camera_msgs::msg::dds_::Extrinsics__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Extrinsics__initialize_w_params(
                Extrinsics_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->rotation_, (9), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->translation_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Extrinsics__finalize(
                Extrinsics_* sample)
            {

                realsense2_camera_msgs::msg::dds_::Extrinsics__finalize_ex(sample,RTI_TRUE);
            }

            void Extrinsics__finalize_ex(
                Extrinsics_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                realsense2_camera_msgs::msg::dds_::Extrinsics__finalize_w_params(
                    sample,&deallocParams);
            }

            void Extrinsics__finalize_w_params(
                Extrinsics_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Extrinsics__finalize_optional_members(
                Extrinsics_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool Extrinsics__copy(
                Extrinsics_* dst,
                const Extrinsics_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        dst->rotation_ ,src->rotation_,(9), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->translation_ ,src->translation_,(3), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Extrinsics_' sequence class.
            */
            #define T Extrinsics_
            #define TSeq Extrinsics_Seq

            #define T_initialize_w_params realsense2_camera_msgs::msg::dds_::Extrinsics__initialize_w_params

            #define T_finalize_w_params   realsense2_camera_msgs::msg::dds_::Extrinsics__finalize_w_params
            #define T_copy       realsense2_camera_msgs::msg::dds_::Extrinsics__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace realsense2_camera_msgs  */

