

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UpdateFilename_.idl using "rtiddsgen".
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

#include "UpdateFilename_.h"

#include <new>

namespace pcl_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *UpdateFilename_Request_TYPENAME = "pcl_msgs::srv::dds_::UpdateFilename_Request_";

            DDS_TypeCode* UpdateFilename_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode UpdateFilename_Request__g_tc_filename__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member UpdateFilename_Request__g_tc_members[1]=
                {

                    {
                        (char *)"filename_",/* Member name */
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

                static DDS_TypeCode UpdateFilename_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"pcl_msgs::srv::dds_::UpdateFilename_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        UpdateFilename_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for UpdateFilename_Request_*/

                if (is_initialized) {
                    return &UpdateFilename_Request__g_tc;
                }

                UpdateFilename_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&UpdateFilename_Request__g_tc_filename__string;

                is_initialized = RTI_TRUE;

                return &UpdateFilename_Request__g_tc;
            }

            RTIBool UpdateFilename_Request__initialize(
                UpdateFilename_Request_* sample) {
                return pcl_msgs::srv::dds_::UpdateFilename_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool UpdateFilename_Request__initialize_ex(
                UpdateFilename_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return pcl_msgs::srv::dds_::UpdateFilename_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool UpdateFilename_Request__initialize_w_params(
                UpdateFilename_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->filename_= DDS_String_alloc ((0));
                    if (sample->filename_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->filename_!= NULL) { 
                        sample->filename_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void UpdateFilename_Request__finalize(
                UpdateFilename_Request_* sample)
            {

                pcl_msgs::srv::dds_::UpdateFilename_Request__finalize_ex(sample,RTI_TRUE);
            }

            void UpdateFilename_Request__finalize_ex(
                UpdateFilename_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                pcl_msgs::srv::dds_::UpdateFilename_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void UpdateFilename_Request__finalize_w_params(
                UpdateFilename_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->filename_ != NULL) {
                    DDS_String_free(sample->filename_);
                    sample->filename_=NULL;

                }
            }

            void UpdateFilename_Request__finalize_optional_members(
                UpdateFilename_Request_* sample, RTIBool deletePointers)
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

            RTIBool UpdateFilename_Request__copy(
                UpdateFilename_Request_* dst,
                const UpdateFilename_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->filename_, src->filename_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'UpdateFilename_Request_' sequence class.
            */
            #define T UpdateFilename_Request_
            #define TSeq UpdateFilename_Request_Seq

            #define T_initialize_w_params pcl_msgs::srv::dds_::UpdateFilename_Request__initialize_w_params

            #define T_finalize_w_params   pcl_msgs::srv::dds_::UpdateFilename_Request__finalize_w_params
            #define T_copy       pcl_msgs::srv::dds_::UpdateFilename_Request__copy

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
} /* namespace pcl_msgs  */
namespace pcl_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *UpdateFilename_Response_TYPENAME = "pcl_msgs::srv::dds_::UpdateFilename_Response_";

            DDS_TypeCode* UpdateFilename_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UpdateFilename_Response__g_tc_members[1]=
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
                    }
                };

                static DDS_TypeCode UpdateFilename_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"pcl_msgs::srv::dds_::UpdateFilename_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        UpdateFilename_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for UpdateFilename_Response_*/

                if (is_initialized) {
                    return &UpdateFilename_Response__g_tc;
                }

                UpdateFilename_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &UpdateFilename_Response__g_tc;
            }

            RTIBool UpdateFilename_Response__initialize(
                UpdateFilename_Response_* sample) {
                return pcl_msgs::srv::dds_::UpdateFilename_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool UpdateFilename_Response__initialize_ex(
                UpdateFilename_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return pcl_msgs::srv::dds_::UpdateFilename_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool UpdateFilename_Response__initialize_w_params(
                UpdateFilename_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                return RTI_TRUE;
            }

            void UpdateFilename_Response__finalize(
                UpdateFilename_Response_* sample)
            {

                pcl_msgs::srv::dds_::UpdateFilename_Response__finalize_ex(sample,RTI_TRUE);
            }

            void UpdateFilename_Response__finalize_ex(
                UpdateFilename_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                pcl_msgs::srv::dds_::UpdateFilename_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void UpdateFilename_Response__finalize_w_params(
                UpdateFilename_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void UpdateFilename_Response__finalize_optional_members(
                UpdateFilename_Response_* sample, RTIBool deletePointers)
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

            RTIBool UpdateFilename_Response__copy(
                UpdateFilename_Response_* dst,
                const UpdateFilename_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
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
            * Configure and implement 'UpdateFilename_Response_' sequence class.
            */
            #define T UpdateFilename_Response_
            #define TSeq UpdateFilename_Response_Seq

            #define T_initialize_w_params pcl_msgs::srv::dds_::UpdateFilename_Response__initialize_w_params

            #define T_finalize_w_params   pcl_msgs::srv::dds_::UpdateFilename_Response__finalize_w_params
            #define T_copy       pcl_msgs::srv::dds_::UpdateFilename_Response__copy

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
} /* namespace pcl_msgs  */

