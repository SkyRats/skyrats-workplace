

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GripperCommand_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GripperCommand_Plugin_2043832846_h
#define GripperCommand_Plugin_2043832846_h

#include "GripperCommand_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "control_msgs/msg/dds_connext/GripperCommand_Plugin.h"
#include "builtin_interfaces/msg/dds_connext/Time_Plugin.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_Goal_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_Goal_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_Goal_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_Goal_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_Goal_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_Goal_*
            GripperCommand_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_Goal_*
            GripperCommand_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_Goal_*
            GripperCommand_Goal_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_PluginSupport_copy_data(
                GripperCommand_Goal_ *out,
                const GripperCommand_Goal_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_Goal_PluginSupport_destroy_data_w_params(
                GripperCommand_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_Goal_PluginSupport_destroy_data_ex(
                GripperCommand_Goal_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_Goal_PluginSupport_destroy_data(
                GripperCommand_Goal_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_Goal_PluginSupport_print_data(
                const GripperCommand_Goal_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_Goal_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_Goal_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ *out,
                const GripperCommand_Goal_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_Goal_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Goal_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_Goal_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_Goal_Plugin_data_to_string(
                const GripperCommand_Goal_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Goal_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Goal_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Goal_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_Goal_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_Goal_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Goal_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_Goal_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_Goal_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_Goal_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_SendGoal_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_SendGoal_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_SendGoal_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_SendGoal_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_SendGoal_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_SendGoal_Request_*
            GripperCommand_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_SendGoal_Request_*
            GripperCommand_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_SendGoal_Request_*
            GripperCommand_SendGoal_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_PluginSupport_copy_data(
                GripperCommand_SendGoal_Request_ *out,
                const GripperCommand_SendGoal_Request_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Request_PluginSupport_destroy_data_w_params(
                GripperCommand_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Request_PluginSupport_destroy_data_ex(
                GripperCommand_SendGoal_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Request_PluginSupport_destroy_data(
                GripperCommand_SendGoal_Request_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Request_PluginSupport_print_data(
                const GripperCommand_SendGoal_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_SendGoal_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_SendGoal_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ *out,
                const GripperCommand_SendGoal_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_SendGoal_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_SendGoal_Request_Plugin_data_to_string(
                const GripperCommand_SendGoal_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_SendGoal_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_SendGoal_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_SendGoal_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_SendGoal_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_SendGoal_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_SendGoal_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_SendGoal_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_SendGoal_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_SendGoal_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_SendGoal_Response_*
            GripperCommand_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_SendGoal_Response_*
            GripperCommand_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_SendGoal_Response_*
            GripperCommand_SendGoal_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_PluginSupport_copy_data(
                GripperCommand_SendGoal_Response_ *out,
                const GripperCommand_SendGoal_Response_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Response_PluginSupport_destroy_data_w_params(
                GripperCommand_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Response_PluginSupport_destroy_data_ex(
                GripperCommand_SendGoal_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Response_PluginSupport_destroy_data(
                GripperCommand_SendGoal_Response_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Response_PluginSupport_print_data(
                const GripperCommand_SendGoal_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_SendGoal_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_SendGoal_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ *out,
                const GripperCommand_SendGoal_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_SendGoal_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_SendGoal_Response_Plugin_data_to_string(
                const GripperCommand_SendGoal_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_SendGoal_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_SendGoal_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_SendGoal_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_SendGoal_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_Result_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_Result_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_Result_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_Result_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_Result_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_Result_*
            GripperCommand_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_Result_*
            GripperCommand_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_Result_*
            GripperCommand_Result_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_PluginSupport_copy_data(
                GripperCommand_Result_ *out,
                const GripperCommand_Result_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_Result_PluginSupport_destroy_data_w_params(
                GripperCommand_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_Result_PluginSupport_destroy_data_ex(
                GripperCommand_Result_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_Result_PluginSupport_destroy_data(
                GripperCommand_Result_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_Result_PluginSupport_print_data(
                const GripperCommand_Result_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_Result_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_Result_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ *out,
                const GripperCommand_Result_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_Result_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Result_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_Result_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_Result_Plugin_data_to_string(
                const GripperCommand_Result_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Result_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Result_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_Result_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_Result_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Result_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_Result_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_Result_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_Result_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_GetResult_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_GetResult_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_GetResult_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_GetResult_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_GetResult_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_GetResult_Request_*
            GripperCommand_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_GetResult_Request_*
            GripperCommand_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_GetResult_Request_*
            GripperCommand_GetResult_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_PluginSupport_copy_data(
                GripperCommand_GetResult_Request_ *out,
                const GripperCommand_GetResult_Request_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Request_PluginSupport_destroy_data_w_params(
                GripperCommand_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Request_PluginSupport_destroy_data_ex(
                GripperCommand_GetResult_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Request_PluginSupport_destroy_data(
                GripperCommand_GetResult_Request_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Request_PluginSupport_print_data(
                const GripperCommand_GetResult_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_GetResult_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_GetResult_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ *out,
                const GripperCommand_GetResult_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_GetResult_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_GetResult_Request_Plugin_data_to_string(
                const GripperCommand_GetResult_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_GetResult_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_GetResult_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_GetResult_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_GetResult_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_GetResult_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_GetResult_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_GetResult_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_GetResult_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_GetResult_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_GetResult_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_GetResult_Response_*
            GripperCommand_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_GetResult_Response_*
            GripperCommand_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_GetResult_Response_*
            GripperCommand_GetResult_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_PluginSupport_copy_data(
                GripperCommand_GetResult_Response_ *out,
                const GripperCommand_GetResult_Response_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Response_PluginSupport_destroy_data_w_params(
                GripperCommand_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Response_PluginSupport_destroy_data_ex(
                GripperCommand_GetResult_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Response_PluginSupport_destroy_data(
                GripperCommand_GetResult_Response_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Response_PluginSupport_print_data(
                const GripperCommand_GetResult_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_GetResult_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_GetResult_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ *out,
                const GripperCommand_GetResult_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_GetResult_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_GetResult_Response_Plugin_data_to_string(
                const GripperCommand_GetResult_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_GetResult_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_GetResult_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_GetResult_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_GetResult_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_GetResult_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_Feedback_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_Feedback_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_Feedback_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_Feedback_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_Feedback_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_Feedback_*
            GripperCommand_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_Feedback_*
            GripperCommand_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_Feedback_*
            GripperCommand_Feedback_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_PluginSupport_copy_data(
                GripperCommand_Feedback_ *out,
                const GripperCommand_Feedback_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_Feedback_PluginSupport_destroy_data_w_params(
                GripperCommand_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_Feedback_PluginSupport_destroy_data_ex(
                GripperCommand_Feedback_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_Feedback_PluginSupport_destroy_data(
                GripperCommand_Feedback_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_Feedback_PluginSupport_print_data(
                const GripperCommand_Feedback_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_Feedback_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_Feedback_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ *out,
                const GripperCommand_Feedback_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_Feedback_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Feedback_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_Feedback_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_Feedback_Plugin_data_to_string(
                const GripperCommand_Feedback_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Feedback_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Feedback_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_Feedback_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_Feedback_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Feedback_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_Feedback_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_Feedback_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_Feedback_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define GripperCommand_FeedbackMessage_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define GripperCommand_FeedbackMessage_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GripperCommand_FeedbackMessage_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define GripperCommand_FeedbackMessage_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GripperCommand_FeedbackMessage_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GripperCommand_FeedbackMessage_*
            GripperCommand_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GripperCommand_FeedbackMessage_*
            GripperCommand_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GripperCommand_FeedbackMessage_*
            GripperCommand_FeedbackMessage_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_PluginSupport_copy_data(
                GripperCommand_FeedbackMessage_ *out,
                const GripperCommand_FeedbackMessage_ *in);

            NDDSUSERDllExport extern void 
            GripperCommand_FeedbackMessage_PluginSupport_destroy_data_w_params(
                GripperCommand_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GripperCommand_FeedbackMessage_PluginSupport_destroy_data_ex(
                GripperCommand_FeedbackMessage_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GripperCommand_FeedbackMessage_PluginSupport_destroy_data(
                GripperCommand_FeedbackMessage_ *sample);

            NDDSUSERDllExport extern void 
            GripperCommand_FeedbackMessage_PluginSupport_print_data(
                const GripperCommand_FeedbackMessage_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GripperCommand_FeedbackMessage_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GripperCommand_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GripperCommand_FeedbackMessage_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GripperCommand_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GripperCommand_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ *out,
                const GripperCommand_FeedbackMessage_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GripperCommand_FeedbackMessage_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                GripperCommand_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            GripperCommand_FeedbackMessage_Plugin_data_to_string(
                const GripperCommand_FeedbackMessage_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            GripperCommand_FeedbackMessage_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_FeedbackMessage_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            GripperCommand_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GripperCommand_FeedbackMessage_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GripperCommand_FeedbackMessage_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GripperCommand_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GripperCommand_FeedbackMessage_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GripperCommand_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GripperCommand_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GripperCommand_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GripperCommand_FeedbackMessage_Plugin_new(void);

            NDDSUSERDllExport extern void
            GripperCommand_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GripperCommand_Plugin_2043832846_h */

