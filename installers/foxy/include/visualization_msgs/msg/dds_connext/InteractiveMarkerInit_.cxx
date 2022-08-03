

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerInit_.idl using "rtiddsgen".
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

#include "InteractiveMarkerInit_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *InteractiveMarkerInit_TYPENAME = "visualization_msgs::msg::dds_::InteractiveMarkerInit_";

            DDS_TypeCode* InteractiveMarkerInit__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode InteractiveMarkerInit__g_tc_server_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InteractiveMarkerInit__g_tc_markers__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member InteractiveMarkerInit__g_tc_members[3]=
                {

                    {
                        (char *)"server_id_",/* Member name */
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
                        (char *)"seq_num_",/* Member name */
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
                        (char *)"markers_",/* Member name */
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

                static DDS_TypeCode InteractiveMarkerInit__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::InteractiveMarkerInit_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        InteractiveMarkerInit__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for InteractiveMarkerInit_*/

                if (is_initialized) {
                    return &InteractiveMarkerInit__g_tc;
                }

                InteractiveMarkerInit__g_tc_markers__sequence._data._typeCode = (RTICdrTypeCode *)visualization_msgs::msg::dds_::InteractiveMarker__get_typecode();

                InteractiveMarkerInit__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerInit__g_tc_server_id__string;

                InteractiveMarkerInit__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                InteractiveMarkerInit__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& InteractiveMarkerInit__g_tc_markers__sequence;

                is_initialized = RTI_TRUE;

                return &InteractiveMarkerInit__g_tc;
            }

            RTIBool InteractiveMarkerInit__initialize(
                InteractiveMarkerInit_* sample) {
                return visualization_msgs::msg::dds_::InteractiveMarkerInit__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool InteractiveMarkerInit__initialize_ex(
                InteractiveMarkerInit_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::InteractiveMarkerInit__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool InteractiveMarkerInit__initialize_w_params(
                InteractiveMarkerInit_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->server_id_= DDS_String_alloc ((0));
                    if (sample->server_id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->server_id_!= NULL) { 
                        sample->server_id_[0] = '\0';
                    }
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->seq_num_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    visualization_msgs::msg::dds_::InteractiveMarker_Seq_initialize(&sample->markers_ );
                    visualization_msgs::msg::dds_::InteractiveMarker_Seq_set_element_allocation_params(&sample->markers_ ,allocParams);
                    visualization_msgs::msg::dds_::InteractiveMarker_Seq_set_absolute_maximum(&sample->markers_ , RTI_INT32_MAX);
                    if (!visualization_msgs::msg::dds_::InteractiveMarker_Seq_set_maximum(&sample->markers_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    visualization_msgs::msg::dds_::InteractiveMarker_Seq_set_length(&sample->markers_, 0);
                }
                return RTI_TRUE;
            }

            void InteractiveMarkerInit__finalize(
                InteractiveMarkerInit_* sample)
            {

                visualization_msgs::msg::dds_::InteractiveMarkerInit__finalize_ex(sample,RTI_TRUE);
            }

            void InteractiveMarkerInit__finalize_ex(
                InteractiveMarkerInit_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::InteractiveMarkerInit__finalize_w_params(
                    sample,&deallocParams);
            }

            void InteractiveMarkerInit__finalize_w_params(
                InteractiveMarkerInit_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->server_id_ != NULL) {
                    DDS_String_free(sample->server_id_);
                    sample->server_id_=NULL;

                }

                visualization_msgs::msg::dds_::InteractiveMarker_Seq_set_element_deallocation_params(
                    &sample->markers_,deallocParams);
                visualization_msgs::msg::dds_::InteractiveMarker_Seq_finalize(&sample->markers_);

            }

            void InteractiveMarkerInit__finalize_optional_members(
                InteractiveMarkerInit_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = visualization_msgs::msg::dds_::InteractiveMarker_Seq_get_length(
                        &sample->markers_);

                    for (i = 0; i < length; i++) {
                        visualization_msgs::msg::dds_::InteractiveMarker__finalize_optional_members(
                            visualization_msgs::msg::dds_::InteractiveMarker_Seq_get_reference(
                                &sample->markers_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool InteractiveMarkerInit__copy(
                InteractiveMarkerInit_* dst,
                const InteractiveMarkerInit_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->server_id_, src->server_id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->seq_num_, &src->seq_num_)) { 
                        return RTI_FALSE;
                    }
                    if (!visualization_msgs::msg::dds_::InteractiveMarker_Seq_copy(&dst->markers_ ,
                    &src->markers_ )) {
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
            * Configure and implement 'InteractiveMarkerInit_' sequence class.
            */
            #define T InteractiveMarkerInit_
            #define TSeq InteractiveMarkerInit_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::InteractiveMarkerInit__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::InteractiveMarkerInit__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::InteractiveMarkerInit__copy

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
} /* namespace visualization_msgs  */

