

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Extrinsics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Extrinsics_Plugin_379675296_h
#define Extrinsics_Plugin_379675296_h

#include "Extrinsics_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace realsense2_camera_msgs {
    namespace msg {
        namespace dds_ {

            #define Extrinsics_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define Extrinsics_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Extrinsics_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define Extrinsics_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Extrinsics_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Extrinsics_*
            Extrinsics_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Extrinsics_*
            Extrinsics_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Extrinsics_*
            Extrinsics_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_PluginSupport_copy_data(
                Extrinsics_ *out,
                const Extrinsics_ *in);

            NDDSUSERDllExport extern void 
            Extrinsics_PluginSupport_destroy_data_w_params(
                Extrinsics_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Extrinsics_PluginSupport_destroy_data_ex(
                Extrinsics_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Extrinsics_PluginSupport_destroy_data(
                Extrinsics_ *sample);

            NDDSUSERDllExport extern void 
            Extrinsics_PluginSupport_print_data(
                const Extrinsics_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Extrinsics_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Extrinsics_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Extrinsics_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Extrinsics_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Extrinsics_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ *out,
                const Extrinsics_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Extrinsics_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Extrinsics_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Extrinsics_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Extrinsics_Plugin_deserialize_from_cdr_buffer(
                Extrinsics_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            Extrinsics_Plugin_data_to_string(
                const Extrinsics_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            Extrinsics_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            Extrinsics_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            Extrinsics_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Extrinsics_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            Extrinsics_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Extrinsics_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Extrinsics_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Extrinsics_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Extrinsics_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Extrinsics_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Extrinsics_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Extrinsics_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Extrinsics_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Extrinsics_Plugin_new(void);

            NDDSUSERDllExport extern void
            Extrinsics_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace realsense2_camera_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Extrinsics_Plugin_379675296_h */

