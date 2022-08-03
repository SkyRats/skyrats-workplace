

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPointStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeoPointStamped_Plugin_1155164031_h
#define GeoPointStamped_Plugin_1155164031_h

#include "GeoPointStamped_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_Plugin.h"
#include "std_msgs/msg/dds_connext/Header_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            #define GeoPointStamped_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GeoPointStamped_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeoPointStamped_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GeoPointStamped_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeoPointStamped_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeoPointStamped_*
            GeoPointStamped_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeoPointStamped_*
            GeoPointStamped_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeoPointStamped_*
            GeoPointStamped_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_PluginSupport_copy_data(
                GeoPointStamped_ *out,
                const GeoPointStamped_ *in);

            NDDSUSERDllExport extern void 
            GeoPointStamped_PluginSupport_destroy_data_w_params(
                GeoPointStamped_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeoPointStamped_PluginSupport_destroy_data_ex(
                GeoPointStamped_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeoPointStamped_PluginSupport_destroy_data(
                GeoPointStamped_ *sample);

            NDDSUSERDllExport extern void 
            GeoPointStamped_PluginSupport_print_data(
                const GeoPointStamped_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GeoPointStamped_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GeoPointStamped_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GeoPointStamped_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GeoPointStamped_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GeoPointStamped_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ *out,
                const GeoPointStamped_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GeoPointStamped_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeoPointStamped_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeoPointStamped_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeoPointStamped_Plugin_deserialize_from_cdr_buffer(
                GeoPointStamped_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GeoPointStamped_Plugin_data_to_string(
                const GeoPointStamped_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GeoPointStamped_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GeoPointStamped_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GeoPointStamped_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeoPointStamped_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GeoPointStamped_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GeoPointStamped_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeoPointStamped_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeoPointStamped_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeoPointStamped_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GeoPointStamped_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GeoPointStamped_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeoPointStamped_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GeoPointStamped_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GeoPointStamped_Plugin_new(void);

            NDDSUSERDllExport extern void
            GeoPointStamped_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeoPointStamped_Plugin_1155164031_h */

