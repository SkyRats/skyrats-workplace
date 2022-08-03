

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImageMarker_.idl using "rtiddsgen".
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

#include "ImageMarker_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace ImageMarker_Constants {
            } /* namespace ImageMarker_Constants  */

            /* ========================================================================= */
            const char *ImageMarker_TYPENAME = "visualization_msgs::msg::dds_::ImageMarker_";

            DDS_TypeCode* ImageMarker__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ImageMarker__g_tc_ns__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ImageMarker__g_tc_points__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ImageMarker__g_tc_outline_colors__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ImageMarker__g_tc_members[13]=
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
                        (char *)"position_",/* Member name */
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
                        (char *)"outline_color_",/* Member name */
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
                        (char *)"filled_",/* Member name */
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
                        (char *)"fill_color_",/* Member name */
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
                        (char *)"lifetime_",/* Member name */
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
                        (char *)"points_",/* Member name */
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
                        (char *)"outline_colors_",/* Member name */
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
                    }
                };

                static DDS_TypeCode ImageMarker__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::ImageMarker_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        ImageMarker__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ImageMarker_*/

                if (is_initialized) {
                    return &ImageMarker__g_tc;
                }

                ImageMarker__g_tc_points__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                ImageMarker__g_tc_outline_colors__sequence._data._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::ColorRGBA__get_typecode();

                ImageMarker__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                ImageMarker__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ImageMarker__g_tc_ns__string;

                ImageMarker__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                ImageMarker__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                ImageMarker__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                ImageMarker__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                ImageMarker__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                ImageMarker__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::ColorRGBA__get_typecode();

                ImageMarker__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ImageMarker__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::ColorRGBA__get_typecode();

                ImageMarker__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                ImageMarker__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& ImageMarker__g_tc_points__sequence;
                ImageMarker__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& ImageMarker__g_tc_outline_colors__sequence;

                is_initialized = RTI_TRUE;

                return &ImageMarker__g_tc;
            }

            RTIBool ImageMarker__initialize(
                ImageMarker_* sample) {
                return visualization_msgs::msg::dds_::ImageMarker__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ImageMarker__initialize_ex(
                ImageMarker_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::ImageMarker__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ImageMarker__initialize_w_params(
                ImageMarker_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!geometry_msgs::msg::dds_::Point__initialize_w_params(&sample->position_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->scale_)) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::ColorRGBA__initialize_w_params(&sample->outline_color_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->filled_)) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::ColorRGBA__initialize_w_params(&sample->fill_color_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->lifetime_,
                allocParams)) {
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
                    std_msgs::msg::dds_::ColorRGBA_Seq_initialize(&sample->outline_colors_ );
                    std_msgs::msg::dds_::ColorRGBA_Seq_set_element_allocation_params(&sample->outline_colors_ ,allocParams);
                    std_msgs::msg::dds_::ColorRGBA_Seq_set_absolute_maximum(&sample->outline_colors_ , RTI_INT32_MAX);
                    if (!std_msgs::msg::dds_::ColorRGBA_Seq_set_maximum(&sample->outline_colors_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    std_msgs::msg::dds_::ColorRGBA_Seq_set_length(&sample->outline_colors_, 0);
                }
                return RTI_TRUE;
            }

            void ImageMarker__finalize(
                ImageMarker_* sample)
            {

                visualization_msgs::msg::dds_::ImageMarker__finalize_ex(sample,RTI_TRUE);
            }

            void ImageMarker__finalize_ex(
                ImageMarker_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::ImageMarker__finalize_w_params(
                    sample,&deallocParams);
            }

            void ImageMarker__finalize_w_params(
                ImageMarker_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

                geometry_msgs::msg::dds_::Point__finalize_w_params(&sample->position_,deallocParams);

                std_msgs::msg::dds_::ColorRGBA__finalize_w_params(&sample->outline_color_,deallocParams);

                std_msgs::msg::dds_::ColorRGBA__finalize_w_params(&sample->fill_color_,deallocParams);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->lifetime_,deallocParams);

                geometry_msgs::msg::dds_::Point_Seq_set_element_deallocation_params(
                    &sample->points_,deallocParams);
                geometry_msgs::msg::dds_::Point_Seq_finalize(&sample->points_);

                std_msgs::msg::dds_::ColorRGBA_Seq_set_element_deallocation_params(
                    &sample->outline_colors_,deallocParams);
                std_msgs::msg::dds_::ColorRGBA_Seq_finalize(&sample->outline_colors_);

            }

            void ImageMarker__finalize_optional_members(
                ImageMarker_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Point__finalize_optional_members(&sample->position_, deallocParams->delete_pointers);
                std_msgs::msg::dds_::ColorRGBA__finalize_optional_members(&sample->outline_color_, deallocParams->delete_pointers);
                std_msgs::msg::dds_::ColorRGBA__finalize_optional_members(&sample->fill_color_, deallocParams->delete_pointers);
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
                        &sample->outline_colors_);

                    for (i = 0; i < length; i++) {
                        std_msgs::msg::dds_::ColorRGBA__finalize_optional_members(
                            std_msgs::msg::dds_::ColorRGBA_Seq_get_reference(
                                &sample->outline_colors_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ImageMarker__copy(
                ImageMarker_* dst,
                const ImageMarker_* src)
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
                    if (!geometry_msgs::msg::dds_::Point__copy(
                        &dst->position_,(const geometry_msgs::msg::dds_::Point_*)&src->position_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->scale_, &src->scale_)) { 
                        return RTI_FALSE;
                    }
                    if (!std_msgs::msg::dds_::ColorRGBA__copy(
                        &dst->outline_color_,(const std_msgs::msg::dds_::ColorRGBA_*)&src->outline_color_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyOctet (
                        &dst->filled_, &src->filled_)) { 
                        return RTI_FALSE;
                    }
                    if (!std_msgs::msg::dds_::ColorRGBA__copy(
                        &dst->fill_color_,(const std_msgs::msg::dds_::ColorRGBA_*)&src->fill_color_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->lifetime_,(const builtin_interfaces::msg::dds_::Duration_*)&src->lifetime_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point_Seq_copy(&dst->points_ ,
                    &src->points_ )) {
                        return RTI_FALSE;
                    }
                    if (!std_msgs::msg::dds_::ColorRGBA_Seq_copy(&dst->outline_colors_ ,
                    &src->outline_colors_ )) {
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
            * Configure and implement 'ImageMarker_' sequence class.
            */
            #define T ImageMarker_
            #define TSeq ImageMarker_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::ImageMarker__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::ImageMarker__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::ImageMarker__copy

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

