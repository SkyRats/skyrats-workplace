

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerControl_.idl using "rtiddsgen".
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

#include "InteractiveMarkerControl_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace InteractiveMarkerControl_Constants {
            } /* namespace InteractiveMarkerControl_Constants  */

            /* ========================================================================= */
            const char *InteractiveMarkerControl_TYPENAME = "visualization_msgs::msg::dds_::InteractiveMarkerControl_";

            DDS_TypeCode* InteractiveMarkerControl__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode InteractiveMarkerControl__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InteractiveMarkerControl__g_tc_markers__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode InteractiveMarkerControl__g_tc_description__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member InteractiveMarkerControl__g_tc_members[8]=
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
                    }, 
                    {
                        (char *)"orientation_",/* Member name */
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
                        (char *)"orientation_mode_",/* Member name */
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
                        (char *)"interaction_mode_",/* Member name */
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
                        (char *)"always_visible_",/* Member name */
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
                        (char *)"markers_",/* Member name */
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
                        (char *)"independent_marker_orientation_",/* Member name */
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
                        (char *)"description_",/* Member name */
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
                    }
                };

                static DDS_TypeCode InteractiveMarkerControl__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::InteractiveMarkerControl_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        InteractiveMarkerControl__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for InteractiveMarkerControl_*/

                if (is_initialized) {
                    return &InteractiveMarkerControl__g_tc;
                }

                InteractiveMarkerControl__g_tc_markers__sequence._data._typeCode = (RTICdrTypeCode *)visualization_msgs::msg::dds_::Marker__get_typecode();

                InteractiveMarkerControl__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerControl__g_tc_name__string;

                InteractiveMarkerControl__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Quaternion__get_typecode();

                InteractiveMarkerControl__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                InteractiveMarkerControl__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                InteractiveMarkerControl__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                InteractiveMarkerControl__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& InteractiveMarkerControl__g_tc_markers__sequence;
                InteractiveMarkerControl__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                InteractiveMarkerControl__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerControl__g_tc_description__string;

                is_initialized = RTI_TRUE;

                return &InteractiveMarkerControl__g_tc;
            }

            RTIBool InteractiveMarkerControl__initialize(
                InteractiveMarkerControl_* sample) {
                return visualization_msgs::msg::dds_::InteractiveMarkerControl__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool InteractiveMarkerControl__initialize_ex(
                InteractiveMarkerControl_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::InteractiveMarkerControl__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool InteractiveMarkerControl__initialize_w_params(
                InteractiveMarkerControl_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                if (!geometry_msgs::msg::dds_::Quaternion__initialize_w_params(&sample->orientation_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->orientation_mode_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->interaction_mode_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->always_visible_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    visualization_msgs::msg::dds_::Marker_Seq_initialize(&sample->markers_ );
                    visualization_msgs::msg::dds_::Marker_Seq_set_element_allocation_params(&sample->markers_ ,allocParams);
                    visualization_msgs::msg::dds_::Marker_Seq_set_absolute_maximum(&sample->markers_ , RTI_INT32_MAX);
                    if (!visualization_msgs::msg::dds_::Marker_Seq_set_maximum(&sample->markers_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    visualization_msgs::msg::dds_::Marker_Seq_set_length(&sample->markers_, 0);
                }

                if (!RTICdrType_initBoolean(&sample->independent_marker_orientation_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->description_= DDS_String_alloc ((0));
                    if (sample->description_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->description_!= NULL) { 
                        sample->description_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void InteractiveMarkerControl__finalize(
                InteractiveMarkerControl_* sample)
            {

                visualization_msgs::msg::dds_::InteractiveMarkerControl__finalize_ex(sample,RTI_TRUE);
            }

            void InteractiveMarkerControl__finalize_ex(
                InteractiveMarkerControl_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::InteractiveMarkerControl__finalize_w_params(
                    sample,&deallocParams);
            }

            void InteractiveMarkerControl__finalize_w_params(
                InteractiveMarkerControl_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
                geometry_msgs::msg::dds_::Quaternion__finalize_w_params(&sample->orientation_,deallocParams);

                visualization_msgs::msg::dds_::Marker_Seq_set_element_deallocation_params(
                    &sample->markers_,deallocParams);
                visualization_msgs::msg::dds_::Marker_Seq_finalize(&sample->markers_);

                if (sample->description_ != NULL) {
                    DDS_String_free(sample->description_);
                    sample->description_=NULL;

                }
            }

            void InteractiveMarkerControl__finalize_optional_members(
                InteractiveMarkerControl_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Quaternion__finalize_optional_members(&sample->orientation_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = visualization_msgs::msg::dds_::Marker_Seq_get_length(
                        &sample->markers_);

                    for (i = 0; i < length; i++) {
                        visualization_msgs::msg::dds_::Marker__finalize_optional_members(
                            visualization_msgs::msg::dds_::Marker_Seq_get_reference(
                                &sample->markers_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool InteractiveMarkerControl__copy(
                InteractiveMarkerControl_* dst,
                const InteractiveMarkerControl_* src)
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
                    if (!geometry_msgs::msg::dds_::Quaternion__copy(
                        &dst->orientation_,(const geometry_msgs::msg::dds_::Quaternion_*)&src->orientation_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyOctet (
                        &dst->orientation_mode_, &src->orientation_mode_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->interaction_mode_, &src->interaction_mode_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->always_visible_, &src->always_visible_)) { 
                        return RTI_FALSE;
                    }
                    if (!visualization_msgs::msg::dds_::Marker_Seq_copy(&dst->markers_ ,
                    &src->markers_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->independent_marker_orientation_, &src->independent_marker_orientation_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->description_, src->description_, 
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
            * Configure and implement 'InteractiveMarkerControl_' sequence class.
            */
            #define T InteractiveMarkerControl_
            #define TSeq InteractiveMarkerControl_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::InteractiveMarkerControl__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::InteractiveMarkerControl__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::InteractiveMarkerControl__copy

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

