

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IMUInfo_.idl using "rtiddsgen".
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

#include "IMUInfo_.h"

#include <new>

namespace realsense2_camera_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *IMUInfo_TYPENAME = "realsense2_camera_msgs::msg::dds_::IMUInfo_";

            DDS_TypeCode* IMUInfo__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IMUInfo__g_tc_data__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,12, NULL,NULL);
                static DDS_TypeCode IMUInfo__g_tc_noise_variances__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode IMUInfo__g_tc_bias_variances__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode_Member IMUInfo__g_tc_members[4]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"data_",/* Member name */
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
                    }, 
                    {
                        (char *)"noise_variances_",/* Member name */
                        {
                            2,/* Representation ID */          
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
                        (char *)"bias_variances_",/* Member name */
                        {
                            3,/* Representation ID */          
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

                static DDS_TypeCode IMUInfo__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"realsense2_camera_msgs::msg::dds_::IMUInfo_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        IMUInfo__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for IMUInfo_*/

                if (is_initialized) {
                    return &IMUInfo__g_tc;
                }

                IMUInfo__g_tc_data__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                IMUInfo__g_tc_noise_variances__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                IMUInfo__g_tc_bias_variances__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                IMUInfo__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                IMUInfo__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& IMUInfo__g_tc_data__array;
                IMUInfo__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& IMUInfo__g_tc_noise_variances__array;
                IMUInfo__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& IMUInfo__g_tc_bias_variances__array;

                is_initialized = RTI_TRUE;

                return &IMUInfo__g_tc;
            }

            RTIBool IMUInfo__initialize(
                IMUInfo_* sample) {
                return realsense2_camera_msgs::msg::dds_::IMUInfo__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool IMUInfo__initialize_ex(
                IMUInfo_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return realsense2_camera_msgs::msg::dds_::IMUInfo__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool IMUInfo__initialize_w_params(
                IMUInfo_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->data_, (12), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->noise_variances_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->bias_variances_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void IMUInfo__finalize(
                IMUInfo_* sample)
            {

                realsense2_camera_msgs::msg::dds_::IMUInfo__finalize_ex(sample,RTI_TRUE);
            }

            void IMUInfo__finalize_ex(
                IMUInfo_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                realsense2_camera_msgs::msg::dds_::IMUInfo__finalize_w_params(
                    sample,&deallocParams);
            }

            void IMUInfo__finalize_w_params(
                IMUInfo_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

            }

            void IMUInfo__finalize_optional_members(
                IMUInfo_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
            }

            RTIBool IMUInfo__copy(
                IMUInfo_* dst,
                const IMUInfo_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyArray(
                        dst->data_ ,src->data_,(12), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->noise_variances_ ,src->noise_variances_,(3), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->bias_variances_ ,src->bias_variances_,(3), RTI_CDR_DOUBLE_SIZE)) {
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
            * Configure and implement 'IMUInfo_' sequence class.
            */
            #define T IMUInfo_
            #define TSeq IMUInfo_Seq

            #define T_initialize_w_params realsense2_camera_msgs::msg::dds_::IMUInfo__initialize_w_params

            #define T_finalize_w_params   realsense2_camera_msgs::msg::dds_::IMUInfo__finalize_w_params
            #define T_copy       realsense2_camera_msgs::msg::dds_::IMUInfo__copy

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

