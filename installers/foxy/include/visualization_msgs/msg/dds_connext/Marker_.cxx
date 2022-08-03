

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Marker_.idl using "rtiddsgen".
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

#include "Marker_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace Marker_Constants {
            } /* namespace Marker_Constants  */

            /* ========================================================================= */
            const char *Marker_TYPENAME = "visualization_msgs::msg::dds_::Marker_";

            DDS_TypeCode* Marker__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Marker__g_tc_ns__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Marker__g_tc_points__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Marker__g_tc_colors__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Marker__g_tc_text__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Marker__g_tc_mesh_resource__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member Marker__g_tc_members[15]=
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
                        (char *)"ns_",/* Member name */
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
                        (char *)"id_",/* Member name */
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
                        (char *)"type_",/* Member name */
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
                        (char *)"action_",/* Member name */
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
                        (char *)"pose_",/* Member name */
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
                        (char *)"scale_",/* Member name */
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
                        (char *)"color_",/* Member name */
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
                        (char *)"lifetime_",/* Member name */
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
                    }, 
                    {
                        (char *)"frame_locked_",/* Member name */
                        {
                            9,/* Representation ID */          
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
                        (char *)"points_",/* Member name */
                        {
                            10,/* Representation ID */          
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
                        (char *)"colors_",/* Member name */
                        {
                            11,/* Representation ID */          
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
                        (char *)"text_",/* Member name */
                        {
                            12,/* Representation ID */          
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
                        (char *)"mesh_resource_",/* Member name */
                        {
                            13,/* Representation ID */          
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
                        (char *)"mesh_use_embedded_materials_",/* Member name */
                        {
                            14,/* Representation ID */          
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

                static DDS_TypeCode Marker__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::Marker_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        Marker__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Marker_*/

                if (is_initialized) {
                    return &Marker__g_tc;
                }

                Marker__g_tc_points__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                Marker__g_tc_colors__sequence._data._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::ColorRGBA__get_typecode();

                Marker__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Marker__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Marker__g_tc_ns__string;

                Marker__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Marker__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Marker__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Marker__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                Marker__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                Marker__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::ColorRGBA__get_typecode();

                Marker__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                Marker__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                Marker__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& Marker__g_tc_points__sequence;
                Marker__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& Marker__g_tc_colors__sequence;
                Marker__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&Marker__g_tc_text__string;

                Marker__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&Marker__g_tc_mesh_resource__string;

                Marker__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &Marker__g_tc;
            }

            RTIBool Marker__initialize(
                Marker_* sample) {
                return visualization_msgs::msg::dds_::Marker__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Marker__initialize_ex(
                Marker_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::Marker__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Marker__initialize_w_params(
                Marker_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (allocParams->allocate_memory){
                    sample->ns_= DDS_String_alloc ((0));
                    if (sample->ns_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->ns_!= NULL) { 
                        sample->ns_[0] = '\0';
                    }
                }

                if (!RTICdrType_initLong(&sample->id_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->action_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Vector3__initialize_w_params(&sample->scale_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!std_msgs::msg::dds_::ColorRGBA__initialize_w_params(&sample->color_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->lifetime_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->frame_locked_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Point_Seq_initialize(&sample->points_ );
                    geometry_msgs::msg::dds_::Point_Seq_set_element_allocation_params(&sample->points_ ,allocParams);
                    geometry_msgs::msg::dds_::Point_Seq_set_absolute_maximum(&sample->points_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Point_Seq_set_maximum(&sample->points_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Point_Seq_set_length(&sample->points_, 0);
                }
                if (allocParams->allocate_memory) {
                    std_msgs::msg::dds_::ColorRGBA_Seq_initialize(&sample->colors_ );
                    std_msgs::msg::dds_::ColorRGBA_Seq_set_element_allocation_params(&sample->colors_ ,allocParams);
                    std_msgs::msg::dds_::ColorRGBA_Seq_set_absolute_maximum(&sample->colors_ , RTI_INT32_MAX);
                    if (!std_msgs::msg::dds_::ColorRGBA_Seq_set_maximum(&sample->colors_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    std_msgs::msg::dds_::ColorRGBA_Seq_set_length(&sample->colors_, 0);
                }
                if (allocParams->allocate_memory){
                    sample->text_= DDS_String_alloc ((0));
                    if (sample->text_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->text_!= NULL) { 
                        sample->text_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->mesh_resource_= DDS_String_alloc ((0));
                    if (sample->mesh_resource_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->mesh_resource_!= NULL) { 
                        sample->mesh_resource_[0] = '\0';
                    }
                }

                if (!RTICdrType_initBoolean(&sample->mesh_use_embedded_materials_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Marker__finalize(
                Marker_* sample)
            {

                visualization_msgs::msg::dds_::Marker__finalize_ex(sample,RTI_TRUE);
            }

            void Marker__finalize_ex(
                Marker_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::Marker__finalize_w_params(
                    sample,&deallocParams);
            }

            void Marker__finalize_w_params(
                Marker_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                if (sample->ns_ != NULL) {
                    DDS_String_free(sample->ns_);
                    sample->ns_=NULL;

                }

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->pose_,deallocParams);

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->scale_,deallocParams);

                std_msgs::msg::dds_::ColorRGBA__finalize_w_params(&sample->color_,deallocParams);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->lifetime_,deallocParams);

                geometry_msgs::msg::dds_::Point_Seq_set_element_deallocation_params(
                    &sample->points_,deallocParams);
                geometry_msgs::msg::dds_::Point_Seq_finalize(&sample->points_);

                std_msgs::msg::dds_::ColorRGBA_Seq_set_element_deallocation_params(
                    &sample->colors_,deallocParams);
                std_msgs::msg::dds_::ColorRGBA_Seq_finalize(&sample->colors_);

                if (sample->text_ != NULL) {
                    DDS_String_free(sample->text_);
                    sample->text_=NULL;

                }
                if (sample->mesh_resource_ != NULL) {
                    DDS_String_free(sample->mesh_resource_);
                    sample->mesh_resource_=NULL;

                }

            }

            void Marker__finalize_optional_members(
                Marker_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->pose_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Vector3__finalize_optional_members(&sample->scale_, deallocParams->delete_pointers);
                std_msgs::msg::dds_::ColorRGBA__finalize_optional_members(&sample->color_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->lifetime_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Point_Seq_get_length(
                        &sample->points_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Point__finalize_optional_members(
                            geometry_msgs::msg::dds_::Point_Seq_get_reference(
                                &sample->points_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = std_msgs::msg::dds_::ColorRGBA_Seq_get_length(
                        &sample->colors_);

                    for (i = 0; i < length; i++) {
                        std_msgs::msg::dds_::ColorRGBA__finalize_optional_members(
                            std_msgs::msg::dds_::ColorRGBA_Seq_get_reference(
                                &sample->colors_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Marker__copy(
                Marker_* dst,
                const Marker_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->ns_, src->ns_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->id_, &src->id_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->action_, &src->action_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Vector3__copy(
                        &dst->scale_,(const geometry_msgs::msg::dds_::Vector3_*)&src->scale_)) {
                        return RTI_FALSE;
                    } 
                    if (!std_msgs::msg::dds_::ColorRGBA__copy(
                        &dst->color_,(const std_msgs::msg::dds_::ColorRGBA_*)&src->color_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->lifetime_,(const builtin_interfaces::msg::dds_::Duration_*)&src->lifetime_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyBoolean (
                        &dst->frame_locked_, &src->frame_locked_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Point_Seq_copy(&dst->points_ ,
                    &src->points_ )) {
                        return RTI_FALSE;
                    }
                    if (!std_msgs::msg::dds_::ColorRGBA_Seq_copy(&dst->colors_ ,
                    &src->colors_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->text_, src->text_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->mesh_resource_, src->mesh_resource_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->mesh_use_embedded_materials_, &src->mesh_use_embedded_materials_)) { 
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
            * Configure and implement 'Marker_' sequence class.
            */
            #define T Marker_
            #define TSeq Marker_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::Marker__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::Marker__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::Marker__copy

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

