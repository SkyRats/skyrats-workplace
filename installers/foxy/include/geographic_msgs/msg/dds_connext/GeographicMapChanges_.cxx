

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeographicMapChanges_.idl using "rtiddsgen".
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

#include "GeographicMapChanges_.h"

#include <new>

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *GeographicMapChanges_TYPENAME = "geographic_msgs::msg::dds_::GeographicMapChanges_";

            DDS_TypeCode* GeographicMapChanges__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GeographicMapChanges__g_tc_deletes__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member GeographicMapChanges__g_tc_members[3]=
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
                        (char *)"diffs_",/* Member name */
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
                        (char *)"deletes_",/* Member name */
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

                static DDS_TypeCode GeographicMapChanges__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::msg::dds_::GeographicMapChanges_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GeographicMapChanges__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GeographicMapChanges_*/

                if (is_initialized) {
                    return &GeographicMapChanges__g_tc;
                }

                GeographicMapChanges__g_tc_deletes__sequence._data._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                GeographicMapChanges__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                GeographicMapChanges__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeographicMap__get_typecode();

                GeographicMapChanges__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& GeographicMapChanges__g_tc_deletes__sequence;

                is_initialized = RTI_TRUE;

                return &GeographicMapChanges__g_tc;
            }

            RTIBool GeographicMapChanges__initialize(
                GeographicMapChanges_* sample) {
                return geographic_msgs::msg::dds_::GeographicMapChanges__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GeographicMapChanges__initialize_ex(
                GeographicMapChanges_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::msg::dds_::GeographicMapChanges__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GeographicMapChanges__initialize_w_params(
                GeographicMapChanges_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

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
                if (!geographic_msgs::msg::dds_::GeographicMap__initialize_w_params(&sample->diffs_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    unique_identifier_msgs::msg::dds_::UUID_Seq_initialize(&sample->deletes_ );
                    unique_identifier_msgs::msg::dds_::UUID_Seq_set_element_allocation_params(&sample->deletes_ ,allocParams);
                    unique_identifier_msgs::msg::dds_::UUID_Seq_set_absolute_maximum(&sample->deletes_ , RTI_INT32_MAX);
                    if (!unique_identifier_msgs::msg::dds_::UUID_Seq_set_maximum(&sample->deletes_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    unique_identifier_msgs::msg::dds_::UUID_Seq_set_length(&sample->deletes_, 0);
                }
                return RTI_TRUE;
            }

            void GeographicMapChanges__finalize(
                GeographicMapChanges_* sample)
            {

                geographic_msgs::msg::dds_::GeographicMapChanges__finalize_ex(sample,RTI_TRUE);
            }

            void GeographicMapChanges__finalize_ex(
                GeographicMapChanges_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::msg::dds_::GeographicMapChanges__finalize_w_params(
                    sample,&deallocParams);
            }

            void GeographicMapChanges__finalize_w_params(
                GeographicMapChanges_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geographic_msgs::msg::dds_::GeographicMap__finalize_w_params(&sample->diffs_,deallocParams);

                unique_identifier_msgs::msg::dds_::UUID_Seq_set_element_deallocation_params(
                    &sample->deletes_,deallocParams);
                unique_identifier_msgs::msg::dds_::UUID_Seq_finalize(&sample->deletes_);

            }

            void GeographicMapChanges__finalize_optional_members(
                GeographicMapChanges_* sample, RTIBool deletePointers)
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
                geographic_msgs::msg::dds_::GeographicMap__finalize_optional_members(&sample->diffs_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = unique_identifier_msgs::msg::dds_::UUID_Seq_get_length(
                        &sample->deletes_);

                    for (i = 0; i < length; i++) {
                        unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(
                            unique_identifier_msgs::msg::dds_::UUID_Seq_get_reference(
                                &sample->deletes_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool GeographicMapChanges__copy(
                GeographicMapChanges_* dst,
                const GeographicMapChanges_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geographic_msgs::msg::dds_::GeographicMap__copy(
                        &dst->diffs_,(const geographic_msgs::msg::dds_::GeographicMap_*)&src->diffs_)) {
                        return RTI_FALSE;
                    } 
                    if (!unique_identifier_msgs::msg::dds_::UUID_Seq_copy(&dst->deletes_ ,
                    &src->deletes_ )) {
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
            * Configure and implement 'GeographicMapChanges_' sequence class.
            */
            #define T GeographicMapChanges_
            #define TSeq GeographicMapChanges_Seq

            #define T_initialize_w_params geographic_msgs::msg::dds_::GeographicMapChanges__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::msg::dds_::GeographicMapChanges__finalize_w_params
            #define T_copy       geographic_msgs::msg::dds_::GeographicMapChanges__copy

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
} /* namespace geographic_msgs  */

