

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetInteractiveMarkers_.idl using "rtiddsgen".
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

#include "GetInteractiveMarkers_.h"

#include <new>

namespace visualization_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetInteractiveMarkers_Request_TYPENAME = "visualization_msgs::srv::dds_::GetInteractiveMarkers_Request_";

            DDS_TypeCode* GetInteractiveMarkers_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetInteractiveMarkers_Request__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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
                    }
                };

                static DDS_TypeCode GetInteractiveMarkers_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::srv::dds_::GetInteractiveMarkers_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetInteractiveMarkers_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetInteractiveMarkers_Request_*/

                if (is_initialized) {
                    return &GetInteractiveMarkers_Request__g_tc;
                }

                GetInteractiveMarkers_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &GetInteractiveMarkers_Request__g_tc;
            }

            RTIBool GetInteractiveMarkers_Request__initialize(
                GetInteractiveMarkers_Request_* sample) {
                return visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetInteractiveMarkers_Request__initialize_ex(
                GetInteractiveMarkers_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetInteractiveMarkers_Request__initialize_w_params(
                GetInteractiveMarkers_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void GetInteractiveMarkers_Request__finalize(
                GetInteractiveMarkers_Request_* sample)
            {

                visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetInteractiveMarkers_Request__finalize_ex(
                GetInteractiveMarkers_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetInteractiveMarkers_Request__finalize_w_params(
                GetInteractiveMarkers_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetInteractiveMarkers_Request__finalize_optional_members(
                GetInteractiveMarkers_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetInteractiveMarkers_Request__copy(
                GetInteractiveMarkers_Request_* dst,
                const GetInteractiveMarkers_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'GetInteractiveMarkers_Request_' sequence class.
            */
            #define T GetInteractiveMarkers_Request_
            #define TSeq GetInteractiveMarkers_Request_Seq

            #define T_initialize_w_params visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__finalize_w_params
            #define T_copy       visualization_msgs::srv::dds_::GetInteractiveMarkers_Request__copy

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
    } /* namespace srv  */
} /* namespace visualization_msgs  */
namespace visualization_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetInteractiveMarkers_Response_TYPENAME = "visualization_msgs::srv::dds_::GetInteractiveMarkers_Response_";

            DDS_TypeCode* GetInteractiveMarkers_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetInteractiveMarkers_Response__g_tc_markers__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member GetInteractiveMarkers_Response__g_tc_members[2]=
                {

                    {
                        (char *)"sequence_number_",/* Member name */
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
                        (char *)"markers_",/* Member name */
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

                static DDS_TypeCode GetInteractiveMarkers_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::srv::dds_::GetInteractiveMarkers_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GetInteractiveMarkers_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetInteractiveMarkers_Response_*/

                if (is_initialized) {
                    return &GetInteractiveMarkers_Response__g_tc;
                }

                GetInteractiveMarkers_Response__g_tc_markers__sequence._data._typeCode = (RTICdrTypeCode *)visualization_msgs::msg::dds_::InteractiveMarker__get_typecode();

                GetInteractiveMarkers_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                GetInteractiveMarkers_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& GetInteractiveMarkers_Response__g_tc_markers__sequence;

                is_initialized = RTI_TRUE;

                return &GetInteractiveMarkers_Response__g_tc;
            }

            RTIBool GetInteractiveMarkers_Response__initialize(
                GetInteractiveMarkers_Response_* sample) {
                return visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetInteractiveMarkers_Response__initialize_ex(
                GetInteractiveMarkers_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetInteractiveMarkers_Response__initialize_w_params(
                GetInteractiveMarkers_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->sequence_number_)) {
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

            void GetInteractiveMarkers_Response__finalize(
                GetInteractiveMarkers_Response_* sample)
            {

                visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetInteractiveMarkers_Response__finalize_ex(
                GetInteractiveMarkers_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetInteractiveMarkers_Response__finalize_w_params(
                GetInteractiveMarkers_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                visualization_msgs::msg::dds_::InteractiveMarker_Seq_set_element_deallocation_params(
                    &sample->markers_,deallocParams);
                visualization_msgs::msg::dds_::InteractiveMarker_Seq_finalize(&sample->markers_);

            }

            void GetInteractiveMarkers_Response__finalize_optional_members(
                GetInteractiveMarkers_Response_* sample, RTIBool deletePointers)
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

            RTIBool GetInteractiveMarkers_Response__copy(
                GetInteractiveMarkers_Response_* dst,
                const GetInteractiveMarkers_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->sequence_number_, &src->sequence_number_)) { 
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
            * Configure and implement 'GetInteractiveMarkers_Response_' sequence class.
            */
            #define T GetInteractiveMarkers_Response_
            #define TSeq GetInteractiveMarkers_Response_Seq

            #define T_initialize_w_params visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__finalize_w_params
            #define T_copy       visualization_msgs::srv::dds_::GetInteractiveMarkers_Response__copy

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
    } /* namespace srv  */
} /* namespace visualization_msgs  */

