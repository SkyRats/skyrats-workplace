

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetModelProperties_.idl using "rtiddsgen".
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

#include "GetModelProperties_.h"

#include <new>

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetModelProperties_Request_TYPENAME = "gazebo_msgs::srv::dds_::GetModelProperties_Request_";

            DDS_TypeCode* GetModelProperties_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetModelProperties_Request__g_tc_model_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetModelProperties_Request__g_tc_members[1]=
                {

                    {
                        (char *)"model_name_",/* Member name */
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

                static DDS_TypeCode GetModelProperties_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetModelProperties_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetModelProperties_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetModelProperties_Request_*/

                if (is_initialized) {
                    return &GetModelProperties_Request__g_tc;
                }

                GetModelProperties_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GetModelProperties_Request__g_tc_model_name__string;

                is_initialized = RTI_TRUE;

                return &GetModelProperties_Request__g_tc;
            }

            RTIBool GetModelProperties_Request__initialize(
                GetModelProperties_Request_* sample) {
                return gazebo_msgs::srv::dds_::GetModelProperties_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetModelProperties_Request__initialize_ex(
                GetModelProperties_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetModelProperties_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetModelProperties_Request__initialize_w_params(
                GetModelProperties_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->model_name_= DDS_String_alloc ((0));
                    if (sample->model_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->model_name_!= NULL) { 
                        sample->model_name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void GetModelProperties_Request__finalize(
                GetModelProperties_Request_* sample)
            {

                gazebo_msgs::srv::dds_::GetModelProperties_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetModelProperties_Request__finalize_ex(
                GetModelProperties_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetModelProperties_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetModelProperties_Request__finalize_w_params(
                GetModelProperties_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->model_name_ != NULL) {
                    DDS_String_free(sample->model_name_);
                    sample->model_name_=NULL;

                }
            }

            void GetModelProperties_Request__finalize_optional_members(
                GetModelProperties_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetModelProperties_Request__copy(
                GetModelProperties_Request_* dst,
                const GetModelProperties_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->model_name_, src->model_name_, 
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
            * Configure and implement 'GetModelProperties_Request_' sequence class.
            */
            #define T GetModelProperties_Request_
            #define TSeq GetModelProperties_Request_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetModelProperties_Request__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetModelProperties_Request__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetModelProperties_Request__copy

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
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetModelProperties_Response_TYPENAME = "gazebo_msgs::srv::dds_::GetModelProperties_Response_";

            DDS_TypeCode* GetModelProperties_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetModelProperties_Response__g_tc_parent_model_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelProperties_Response__g_tc_canonical_body_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelProperties_Response__g_tc_body_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelProperties_Response__g_tc_body_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetModelProperties_Response__g_tc_geom_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelProperties_Response__g_tc_geom_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetModelProperties_Response__g_tc_joint_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelProperties_Response__g_tc_joint_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetModelProperties_Response__g_tc_child_model_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode GetModelProperties_Response__g_tc_child_model_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode GetModelProperties_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetModelProperties_Response__g_tc_members[9]=
                {

                    {
                        (char *)"parent_model_name_",/* Member name */
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
                        (char *)"canonical_body_name_",/* Member name */
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
                        (char *)"body_names_",/* Member name */
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
                        (char *)"geom_names_",/* Member name */
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
                    }, 
                    {
                        (char *)"joint_names_",/* Member name */
                        {
                            4,/* Representation ID */          
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
                        (char *)"child_model_names_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"is_static_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"success_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"status_message_",/* Member name */
                        {
                            8,/* Representation ID */          
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

                static DDS_TypeCode GetModelProperties_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::srv::dds_::GetModelProperties_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        GetModelProperties_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetModelProperties_Response_*/

                if (is_initialized) {
                    return &GetModelProperties_Response__g_tc;
                }

                GetModelProperties_Response__g_tc_body_names__sequence._data._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_body_names__string;

                GetModelProperties_Response__g_tc_geom_names__sequence._data._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_geom_names__string;

                GetModelProperties_Response__g_tc_joint_names__sequence._data._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_joint_names__string;

                GetModelProperties_Response__g_tc_child_model_names__sequence._data._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_child_model_names__string;

                GetModelProperties_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_parent_model_name__string;

                GetModelProperties_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_canonical_body_name__string;

                GetModelProperties_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& GetModelProperties_Response__g_tc_body_names__sequence;
                GetModelProperties_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& GetModelProperties_Response__g_tc_geom_names__sequence;
                GetModelProperties_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& GetModelProperties_Response__g_tc_joint_names__sequence;
                GetModelProperties_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& GetModelProperties_Response__g_tc_child_model_names__sequence;
                GetModelProperties_Response__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetModelProperties_Response__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetModelProperties_Response__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&GetModelProperties_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &GetModelProperties_Response__g_tc;
            }

            RTIBool GetModelProperties_Response__initialize(
                GetModelProperties_Response_* sample) {
                return gazebo_msgs::srv::dds_::GetModelProperties_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetModelProperties_Response__initialize_ex(
                GetModelProperties_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::srv::dds_::GetModelProperties_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetModelProperties_Response__initialize_w_params(
                GetModelProperties_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->parent_model_name_= DDS_String_alloc ((0));
                    if (sample->parent_model_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->parent_model_name_!= NULL) { 
                        sample->parent_model_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->canonical_body_name_= DDS_String_alloc ((0));
                    if (sample->canonical_body_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->canonical_body_name_!= NULL) { 
                        sample->canonical_body_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->body_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->body_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->body_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->body_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->body_names_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->geom_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->geom_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->geom_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->geom_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->geom_names_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->joint_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->joint_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->joint_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->joint_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->joint_names_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->child_model_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->child_model_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->child_model_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->child_model_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->child_model_names_, 0);
                }

                if (!RTICdrType_initBoolean(&sample->is_static_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->status_message_= DDS_String_alloc ((0));
                    if (sample->status_message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->status_message_!= NULL) { 
                        sample->status_message_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void GetModelProperties_Response__finalize(
                GetModelProperties_Response_* sample)
            {

                gazebo_msgs::srv::dds_::GetModelProperties_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetModelProperties_Response__finalize_ex(
                GetModelProperties_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::srv::dds_::GetModelProperties_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetModelProperties_Response__finalize_w_params(
                GetModelProperties_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->parent_model_name_ != NULL) {
                    DDS_String_free(sample->parent_model_name_);
                    sample->parent_model_name_=NULL;

                }
                if (sample->canonical_body_name_ != NULL) {
                    DDS_String_free(sample->canonical_body_name_);
                    sample->canonical_body_name_=NULL;

                }
                DDS_StringSeq_finalize(&sample->body_names_);

                DDS_StringSeq_finalize(&sample->geom_names_);

                DDS_StringSeq_finalize(&sample->joint_names_);

                DDS_StringSeq_finalize(&sample->child_model_names_);

                if (sample->status_message_ != NULL) {
                    DDS_String_free(sample->status_message_);
                    sample->status_message_=NULL;

                }
            }

            void GetModelProperties_Response__finalize_optional_members(
                GetModelProperties_Response_* sample, RTIBool deletePointers)
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

            RTIBool GetModelProperties_Response__copy(
                GetModelProperties_Response_* dst,
                const GetModelProperties_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->parent_model_name_, src->parent_model_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->canonical_body_name_, src->canonical_body_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->body_names_ ,
                    &src->body_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->geom_names_ ,
                    &src->geom_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->joint_names_ ,
                    &src->joint_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->child_model_names_ ,
                    &src->child_model_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->is_static_, &src->is_static_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->status_message_, src->status_message_, 
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
            * Configure and implement 'GetModelProperties_Response_' sequence class.
            */
            #define T GetModelProperties_Response_
            #define TSeq GetModelProperties_Response_Seq

            #define T_initialize_w_params gazebo_msgs::srv::dds_::GetModelProperties_Response__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::srv::dds_::GetModelProperties_Response__finalize_w_params
            #define T_copy       gazebo_msgs::srv::dds_::GetModelProperties_Response__copy

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
} /* namespace gazebo_msgs  */

