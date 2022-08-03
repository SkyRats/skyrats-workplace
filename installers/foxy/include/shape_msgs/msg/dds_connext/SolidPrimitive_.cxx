

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SolidPrimitive_.idl using "rtiddsgen".
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

#include "SolidPrimitive_.h"

#include <new>

namespace shape_msgs {
    namespace msg {
        namespace dds_ {
            namespace SolidPrimitive_Constants {
            } /* namespace SolidPrimitive_Constants  */

            /* ========================================================================= */
            const char *SolidPrimitive_TYPENAME = "shape_msgs::msg::dds_::SolidPrimitive_";

            DDS_TypeCode* SolidPrimitive__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SolidPrimitive__g_tc_dimensions__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
                static DDS_TypeCode_Member SolidPrimitive__g_tc_members[2]=
                {

                    {
                        (char *)"type_",/* Member name */
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
                        (char *)"dimensions_",/* Member name */
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

                static DDS_TypeCode SolidPrimitive__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"shape_msgs::msg::dds_::SolidPrimitive_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SolidPrimitive__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SolidPrimitive_*/

                if (is_initialized) {
                    return &SolidPrimitive__g_tc;
                }

                SolidPrimitive__g_tc_dimensions__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                SolidPrimitive__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                SolidPrimitive__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& SolidPrimitive__g_tc_dimensions__sequence;

                is_initialized = RTI_TRUE;

                return &SolidPrimitive__g_tc;
            }

            RTIBool SolidPrimitive__initialize(
                SolidPrimitive_* sample) {
                return shape_msgs::msg::dds_::SolidPrimitive__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SolidPrimitive__initialize_ex(
                SolidPrimitive_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return shape_msgs::msg::dds_::SolidPrimitive__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SolidPrimitive__initialize_w_params(
                SolidPrimitive_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->dimensions_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->dimensions_ , (3));
                    if (!DDS_DoubleSeq_set_maximum(&sample->dimensions_ , (3))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->dimensions_, 0);
                }
                return RTI_TRUE;
            }

            void SolidPrimitive__finalize(
                SolidPrimitive_* sample)
            {

                shape_msgs::msg::dds_::SolidPrimitive__finalize_ex(sample,RTI_TRUE);
            }

            void SolidPrimitive__finalize_ex(
                SolidPrimitive_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                shape_msgs::msg::dds_::SolidPrimitive__finalize_w_params(
                    sample,&deallocParams);
            }

            void SolidPrimitive__finalize_w_params(
                SolidPrimitive_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_DoubleSeq_finalize(&sample->dimensions_);

            }

            void SolidPrimitive__finalize_optional_members(
                SolidPrimitive_* sample, RTIBool deletePointers)
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

            RTIBool SolidPrimitive__copy(
                SolidPrimitive_* dst,
                const SolidPrimitive_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->dimensions_ ,
                    &src->dimensions_ )) {
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
            * Configure and implement 'SolidPrimitive_' sequence class.
            */
            #define T SolidPrimitive_
            #define TSeq SolidPrimitive_Seq

            #define T_initialize_w_params shape_msgs::msg::dds_::SolidPrimitive__initialize_w_params

            #define T_finalize_w_params   shape_msgs::msg::dds_::SolidPrimitive__finalize_w_params
            #define T_copy       shape_msgs::msg::dds_::SolidPrimitive__copy

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
} /* namespace shape_msgs  */

