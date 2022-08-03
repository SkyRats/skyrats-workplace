

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetGeographicMap_.idl using "rtiddsgen".
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

#include "GetGeographicMap_.h"

#include <new>

namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetGeographicMap_Request_TYPENAME = "geographic_msgs::srv::dds_::GetGeographicMap_Request_";

            DDS_TypeCode* GetGeographicMap_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetGeographicMap_Request__g_tc_url__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetGeographicMap_Request__g_tc_members[2]=
                {

                    {
                        (char *)"url_",/* Member name */
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
                        (char *)"bounds_",/* Member name */
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

                static DDS_TypeCode GetGeographicMap_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::srv::dds_::GetGeographicMap_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GetGeographicMap_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetGeographicMap_Request_*/

                if (is_initialized) {
                    return &GetGeographicMap_Request__g_tc;
                }

                GetGeographicMap_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GetGeographicMap_Request__g_tc_url__string;

                GetGeographicMap_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::BoundingBox__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetGeographicMap_Request__g_tc;
            }

            RTIBool GetGeographicMap_Request__initialize(
                GetGeographicMap_Request_* sample) {
                return geographic_msgs::srv::dds_::GetGeographicMap_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetGeographicMap_Request__initialize_ex(
                GetGeographicMap_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::srv::dds_::GetGeographicMap_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetGeographicMap_Request__initialize_w_params(
                GetGeographicMap_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->url_= DDS_String_alloc ((0));
                    if (sample->url_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->url_!= NULL) { 
                        sample->url_[0] = '\0';
                    }
                }

                if (!geographic_msgs::msg::dds_::BoundingBox__initialize_w_params(&sample->bounds_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetGeographicMap_Request__finalize(
                GetGeographicMap_Request_* sample)
            {

                geographic_msgs::srv::dds_::GetGeographicMap_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetGeographicMap_Request__finalize_ex(
                GetGeographicMap_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::srv::dds_::GetGeographicMap_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetGeographicMap_Request__finalize_w_params(
                GetGeographicMap_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->url_ != NULL) {
                    DDS_String_free(sample->url_);
                    sample->url_=NULL;

                }
                geographic_msgs::msg::dds_::BoundingBox__finalize_w_params(&sample->bounds_,deallocParams);

            }

            void GetGeographicMap_Request__finalize_optional_members(
                GetGeographicMap_Request_* sample, RTIBool deletePointers)
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

                geographic_msgs::msg::dds_::BoundingBox__finalize_optional_members(&sample->bounds_, deallocParams->delete_pointers);
            }

            RTIBool GetGeographicMap_Request__copy(
                GetGeographicMap_Request_* dst,
                const GetGeographicMap_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->url_, src->url_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geographic_msgs::msg::dds_::BoundingBox__copy(
                        &dst->bounds_,(const geographic_msgs::msg::dds_::BoundingBox_*)&src->bounds_)) {
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
            * Configure and implement 'GetGeographicMap_Request_' sequence class.
            */
            #define T GetGeographicMap_Request_
            #define TSeq GetGeographicMap_Request_Seq

            #define T_initialize_w_params geographic_msgs::srv::dds_::GetGeographicMap_Request__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::srv::dds_::GetGeographicMap_Request__finalize_w_params
            #define T_copy       geographic_msgs::srv::dds_::GetGeographicMap_Request__copy

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
} /* namespace geographic_msgs  */
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetGeographicMap_Response_TYPENAME = "geographic_msgs::srv::dds_::GetGeographicMap_Response_";

            DDS_TypeCode* GetGeographicMap_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetGeographicMap_Response__g_tc_status__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetGeographicMap_Response__g_tc_members[3]=
                {

                    {
                        (char *)"success_",/* Member name */
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
                        (char *)"status_",/* Member name */
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
                        (char *)"map_",/* Member name */
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

                static DDS_TypeCode GetGeographicMap_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::srv::dds_::GetGeographicMap_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GetGeographicMap_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetGeographicMap_Response_*/

                if (is_initialized) {
                    return &GetGeographicMap_Response__g_tc;
                }

                GetGeographicMap_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetGeographicMap_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&GetGeographicMap_Response__g_tc_status__string;

                GetGeographicMap_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeographicMap__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetGeographicMap_Response__g_tc;
            }

            RTIBool GetGeographicMap_Response__initialize(
                GetGeographicMap_Response_* sample) {
                return geographic_msgs::srv::dds_::GetGeographicMap_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetGeographicMap_Response__initialize_ex(
                GetGeographicMap_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::srv::dds_::GetGeographicMap_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetGeographicMap_Response__initialize_w_params(
                GetGeographicMap_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->status_= DDS_String_alloc ((0));
                    if (sample->status_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->status_!= NULL) { 
                        sample->status_[0] = '\0';
                    }
                }

                if (!geographic_msgs::msg::dds_::GeographicMap__initialize_w_params(&sample->map_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetGeographicMap_Response__finalize(
                GetGeographicMap_Response_* sample)
            {

                geographic_msgs::srv::dds_::GetGeographicMap_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetGeographicMap_Response__finalize_ex(
                GetGeographicMap_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::srv::dds_::GetGeographicMap_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetGeographicMap_Response__finalize_w_params(
                GetGeographicMap_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->status_ != NULL) {
                    DDS_String_free(sample->status_);
                    sample->status_=NULL;

                }
                geographic_msgs::msg::dds_::GeographicMap__finalize_w_params(&sample->map_,deallocParams);

            }

            void GetGeographicMap_Response__finalize_optional_members(
                GetGeographicMap_Response_* sample, RTIBool deletePointers)
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

                geographic_msgs::msg::dds_::GeographicMap__finalize_optional_members(&sample->map_, deallocParams->delete_pointers);
            }

            RTIBool GetGeographicMap_Response__copy(
                GetGeographicMap_Response_* dst,
                const GetGeographicMap_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->status_, src->status_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geographic_msgs::msg::dds_::GeographicMap__copy(
                        &dst->map_,(const geographic_msgs::msg::dds_::GeographicMap_*)&src->map_)) {
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
            * Configure and implement 'GetGeographicMap_Response_' sequence class.
            */
            #define T GetGeographicMap_Response_
            #define TSeq GetGeographicMap_Response_Seq

            #define T_initialize_w_params geographic_msgs::srv::dds_::GetGeographicMap_Response__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::srv::dds_::GetGeographicMap_Response__finalize_w_params
            #define T_copy       geographic_msgs::srv::dds_::GetGeographicMap_Response__copy

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
} /* namespace geographic_msgs  */

