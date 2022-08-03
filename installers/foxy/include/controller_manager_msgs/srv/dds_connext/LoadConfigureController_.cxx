

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadConfigureController_.idl using "rtiddsgen".
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

#include "LoadConfigureController_.h"

#include <new>

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *LoadConfigureController_Request_TYPENAME = "controller_manager_msgs::srv::dds_::LoadConfigureController_Request_";

            DDS_TypeCode* LoadConfigureController_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LoadConfigureController_Request__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member LoadConfigureController_Request__g_tc_members[1]=
                {

                    {
                        (char *)"name_",/* Member name */
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

                static DDS_TypeCode LoadConfigureController_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::LoadConfigureController_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LoadConfigureController_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LoadConfigureController_Request_*/

                if (is_initialized) {
                    return &LoadConfigureController_Request__g_tc;
                }

                LoadConfigureController_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&LoadConfigureController_Request__g_tc_name__string;

                is_initialized = RTI_TRUE;

                return &LoadConfigureController_Request__g_tc;
            }

            RTIBool LoadConfigureController_Request__initialize(
                LoadConfigureController_Request_* sample) {
                return controller_manager_msgs::srv::dds_::LoadConfigureController_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LoadConfigureController_Request__initialize_ex(
                LoadConfigureController_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::LoadConfigureController_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LoadConfigureController_Request__initialize_w_params(
                LoadConfigureController_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void LoadConfigureController_Request__finalize(
                LoadConfigureController_Request_* sample)
            {

                controller_manager_msgs::srv::dds_::LoadConfigureController_Request__finalize_ex(sample,RTI_TRUE);
            }

            void LoadConfigureController_Request__finalize_ex(
                LoadConfigureController_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::LoadConfigureController_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void LoadConfigureController_Request__finalize_w_params(
                LoadConfigureController_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }
            }

            void LoadConfigureController_Request__finalize_optional_members(
                LoadConfigureController_Request_* sample, RTIBool deletePointers)
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

            RTIBool LoadConfigureController_Request__copy(
                LoadConfigureController_Request_* dst,
                const LoadConfigureController_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
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
            * Configure and implement 'LoadConfigureController_Request_' sequence class.
            */
            #define T LoadConfigureController_Request_
            #define TSeq LoadConfigureController_Request_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::LoadConfigureController_Request__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::LoadConfigureController_Request__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::LoadConfigureController_Request__copy

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
} /* namespace controller_manager_msgs  */
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *LoadConfigureController_Response_TYPENAME = "controller_manager_msgs::srv::dds_::LoadConfigureController_Response_";

            DDS_TypeCode* LoadConfigureController_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LoadConfigureController_Response__g_tc_members[1]=
                {

                    {
                        (char *)"ok_",/* Member name */
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

                static DDS_TypeCode LoadConfigureController_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::LoadConfigureController_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LoadConfigureController_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LoadConfigureController_Response_*/

                if (is_initialized) {
                    return &LoadConfigureController_Response__g_tc;
                }

                LoadConfigureController_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &LoadConfigureController_Response__g_tc;
            }

            RTIBool LoadConfigureController_Response__initialize(
                LoadConfigureController_Response_* sample) {
                return controller_manager_msgs::srv::dds_::LoadConfigureController_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LoadConfigureController_Response__initialize_ex(
                LoadConfigureController_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::LoadConfigureController_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LoadConfigureController_Response__initialize_w_params(
                LoadConfigureController_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->ok_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void LoadConfigureController_Response__finalize(
                LoadConfigureController_Response_* sample)
            {

                controller_manager_msgs::srv::dds_::LoadConfigureController_Response__finalize_ex(sample,RTI_TRUE);
            }

            void LoadConfigureController_Response__finalize_ex(
                LoadConfigureController_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::LoadConfigureController_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void LoadConfigureController_Response__finalize_w_params(
                LoadConfigureController_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void LoadConfigureController_Response__finalize_optional_members(
                LoadConfigureController_Response_* sample, RTIBool deletePointers)
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

            RTIBool LoadConfigureController_Response__copy(
                LoadConfigureController_Response_* dst,
                const LoadConfigureController_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->ok_, &src->ok_)) { 
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
            * Configure and implement 'LoadConfigureController_Response_' sequence class.
            */
            #define T LoadConfigureController_Response_
            #define TSeq LoadConfigureController_Response_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::LoadConfigureController_Response__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::LoadConfigureController_Response__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::LoadConfigureController_Response__copy

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
} /* namespace controller_manager_msgs  */

