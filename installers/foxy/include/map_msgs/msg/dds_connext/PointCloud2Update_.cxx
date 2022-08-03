

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud2Update_.idl using "rtiddsgen".
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

#include "PointCloud2Update_.h"

#include <new>

namespace map_msgs {
    namespace msg {
        namespace dds_ {
            namespace PointCloud2Update_Constants {
            } /* namespace PointCloud2Update_Constants  */

            /* ========================================================================= */
            const char *PointCloud2Update_TYPENAME = "map_msgs::msg::dds_::PointCloud2Update_";

            DDS_TypeCode* PointCloud2Update__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PointCloud2Update__g_tc_members[3]=
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
                        (char *)"type_",/* Member name */
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
                        (char *)"points_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PointCloud2Update__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::msg::dds_::PointCloud2Update_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PointCloud2Update__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointCloud2Update_*/

                if (is_initialized) {
                    return &PointCloud2Update__g_tc;
                }

                PointCloud2Update__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                PointCloud2Update__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                PointCloud2Update__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::PointCloud2__get_typecode();

                is_initialized = RTI_TRUE;

                return &PointCloud2Update__g_tc;
            }

            RTIBool PointCloud2Update__initialize(
                PointCloud2Update_* sample) {
                return map_msgs::msg::dds_::PointCloud2Update__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointCloud2Update__initialize_ex(
                PointCloud2Update_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::msg::dds_::PointCloud2Update__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointCloud2Update__initialize_w_params(
                PointCloud2Update_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initUnsignedLong(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::PointCloud2__initialize_w_params(&sample->points_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PointCloud2Update__finalize(
                PointCloud2Update_* sample)
            {

                map_msgs::msg::dds_::PointCloud2Update__finalize_ex(sample,RTI_TRUE);
            }

            void PointCloud2Update__finalize_ex(
                PointCloud2Update_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::msg::dds_::PointCloud2Update__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointCloud2Update__finalize_w_params(
                PointCloud2Update_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                sensor_msgs::msg::dds_::PointCloud2__finalize_w_params(&sample->points_,deallocParams);

            }

            void PointCloud2Update__finalize_optional_members(
                PointCloud2Update_* sample, RTIBool deletePointers)
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
                sensor_msgs::msg::dds_::PointCloud2__finalize_optional_members(&sample->points_, deallocParams->delete_pointers);
            }

            RTIBool PointCloud2Update__copy(
                PointCloud2Update_* dst,
                const PointCloud2Update_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::PointCloud2__copy(
                        &dst->points_,(const sensor_msgs::msg::dds_::PointCloud2_*)&src->points_)) {
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
            * Configure and implement 'PointCloud2Update_' sequence class.
            */
            #define T PointCloud2Update_
            #define TSeq PointCloud2Update_Seq

            #define T_initialize_w_params map_msgs::msg::dds_::PointCloud2Update__initialize_w_params

            #define T_finalize_w_params   map_msgs::msg::dds_::PointCloud2Update__finalize_w_params
            #define T_copy       map_msgs::msg::dds_::PointCloud2Update__copy

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
} /* namespace map_msgs  */

