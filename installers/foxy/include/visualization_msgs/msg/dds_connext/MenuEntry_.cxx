

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MenuEntry_.idl using "rtiddsgen".
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

#include "MenuEntry_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace MenuEntry_Constants {
            } /* namespace MenuEntry_Constants  */

            /* ========================================================================= */
            const char *MenuEntry_TYPENAME = "visualization_msgs::msg::dds_::MenuEntry_";

            DDS_TypeCode* MenuEntry__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MenuEntry__g_tc_title__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode MenuEntry__g_tc_command__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member MenuEntry__g_tc_members[5]=
                {

                    {
                        (char *)"id_",/* Member name */
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
                        (char *)"parent_id_",/* Member name */
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
                        (char *)"title_",/* Member name */
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
                        (char *)"command_",/* Member name */
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
                        (char *)"command_type_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MenuEntry__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::MenuEntry_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        MenuEntry__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MenuEntry_*/

                if (is_initialized) {
                    return &MenuEntry__g_tc;
                }

                MenuEntry__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                MenuEntry__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                MenuEntry__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&MenuEntry__g_tc_title__string;

                MenuEntry__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&MenuEntry__g_tc_command__string;

                MenuEntry__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &MenuEntry__g_tc;
            }

            RTIBool MenuEntry__initialize(
                MenuEntry_* sample) {
                return visualization_msgs::msg::dds_::MenuEntry__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MenuEntry__initialize_ex(
                MenuEntry_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::MenuEntry__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MenuEntry__initialize_w_params(
                MenuEntry_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->id_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->parent_id_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->title_= DDS_String_alloc ((0));
                    if (sample->title_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->title_!= NULL) { 
                        sample->title_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->command_= DDS_String_alloc ((0));
                    if (sample->command_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->command_!= NULL) { 
                        sample->command_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->command_type_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void MenuEntry__finalize(
                MenuEntry_* sample)
            {

                visualization_msgs::msg::dds_::MenuEntry__finalize_ex(sample,RTI_TRUE);
            }

            void MenuEntry__finalize_ex(
                MenuEntry_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::MenuEntry__finalize_w_params(
                    sample,&deallocParams);
            }

            void MenuEntry__finalize_w_params(
                MenuEntry_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->title_ != NULL) {
                    DDS_String_free(sample->title_);
                    sample->title_=NULL;

                }
                if (sample->command_ != NULL) {
                    DDS_String_free(sample->command_);
                    sample->command_=NULL;

                }

            }

            void MenuEntry__finalize_optional_members(
                MenuEntry_* sample, RTIBool deletePointers)
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

            RTIBool MenuEntry__copy(
                MenuEntry_* dst,
                const MenuEntry_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedLong (
                        &dst->id_, &src->id_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->parent_id_, &src->parent_id_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->title_, src->title_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->command_, src->command_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->command_type_, &src->command_type_)) { 
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
            * Configure and implement 'MenuEntry_' sequence class.
            */
            #define T MenuEntry_
            #define TSeq MenuEntry_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::MenuEntry__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::MenuEntry__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::MenuEntry__copy

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

