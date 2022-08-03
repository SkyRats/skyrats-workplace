

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SingleJointPosition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SingleJointPosition_Plugin_1831673647_h
#define SingleJointPosition_Plugin_1831673647_h

#include "SingleJointPosition_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_Plugin.h"
#include "std_msgs/msg/dds_connext/Header_Plugin.h"
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

            #define SingleJointPosition_Goal_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_Goal_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_Goal_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_Goal_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_Goal_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_Goal_*
            SingleJointPosition_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_Goal_*
            SingleJointPosition_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_Goal_*
            SingleJointPosition_Goal_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_PluginSupport_copy_data(
                SingleJointPosition_Goal_ *out,
                const SingleJointPosition_Goal_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Goal_PluginSupport_destroy_data_w_params(
                SingleJointPosition_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Goal_PluginSupport_destroy_data_ex(
                SingleJointPosition_Goal_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Goal_PluginSupport_destroy_data(
                SingleJointPosition_Goal_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Goal_PluginSupport_print_data(
                const SingleJointPosition_Goal_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_Goal_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_Goal_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ *out,
                const SingleJointPosition_Goal_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_Goal_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Goal_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_Goal_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_Goal_Plugin_data_to_string(
                const SingleJointPosition_Goal_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Goal_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Goal_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Goal_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_Goal_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_Goal_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Goal_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_Goal_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_Goal_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_Goal_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_SendGoal_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_SendGoal_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_SendGoal_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_SendGoal_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_SendGoal_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_SendGoal_Request_*
            SingleJointPosition_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_SendGoal_Request_*
            SingleJointPosition_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_SendGoal_Request_*
            SingleJointPosition_SendGoal_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_PluginSupport_copy_data(
                SingleJointPosition_SendGoal_Request_ *out,
                const SingleJointPosition_SendGoal_Request_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Request_PluginSupport_destroy_data_w_params(
                SingleJointPosition_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Request_PluginSupport_destroy_data_ex(
                SingleJointPosition_SendGoal_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Request_PluginSupport_destroy_data(
                SingleJointPosition_SendGoal_Request_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Request_PluginSupport_print_data(
                const SingleJointPosition_SendGoal_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_SendGoal_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_SendGoal_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ *out,
                const SingleJointPosition_SendGoal_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_SendGoal_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_SendGoal_Request_Plugin_data_to_string(
                const SingleJointPosition_SendGoal_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_SendGoal_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_SendGoal_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_SendGoal_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_SendGoal_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_SendGoal_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_SendGoal_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_SendGoal_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_SendGoal_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_SendGoal_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_SendGoal_Response_*
            SingleJointPosition_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_SendGoal_Response_*
            SingleJointPosition_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_SendGoal_Response_*
            SingleJointPosition_SendGoal_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_PluginSupport_copy_data(
                SingleJointPosition_SendGoal_Response_ *out,
                const SingleJointPosition_SendGoal_Response_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Response_PluginSupport_destroy_data_w_params(
                SingleJointPosition_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Response_PluginSupport_destroy_data_ex(
                SingleJointPosition_SendGoal_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Response_PluginSupport_destroy_data(
                SingleJointPosition_SendGoal_Response_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Response_PluginSupport_print_data(
                const SingleJointPosition_SendGoal_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_SendGoal_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_SendGoal_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ *out,
                const SingleJointPosition_SendGoal_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_SendGoal_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_SendGoal_Response_Plugin_data_to_string(
                const SingleJointPosition_SendGoal_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_SendGoal_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_SendGoal_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_SendGoal_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_SendGoal_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_Result_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_Result_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_Result_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_Result_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_Result_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_Result_*
            SingleJointPosition_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_Result_*
            SingleJointPosition_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_Result_*
            SingleJointPosition_Result_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_PluginSupport_copy_data(
                SingleJointPosition_Result_ *out,
                const SingleJointPosition_Result_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Result_PluginSupport_destroy_data_w_params(
                SingleJointPosition_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Result_PluginSupport_destroy_data_ex(
                SingleJointPosition_Result_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Result_PluginSupport_destroy_data(
                SingleJointPosition_Result_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Result_PluginSupport_print_data(
                const SingleJointPosition_Result_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_Result_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_Result_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ *out,
                const SingleJointPosition_Result_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_Result_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Result_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_Result_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_Result_Plugin_data_to_string(
                const SingleJointPosition_Result_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Result_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Result_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_Result_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_Result_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Result_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_Result_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_Result_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_Result_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_GetResult_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_GetResult_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_GetResult_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_GetResult_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_GetResult_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_GetResult_Request_*
            SingleJointPosition_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_GetResult_Request_*
            SingleJointPosition_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_GetResult_Request_*
            SingleJointPosition_GetResult_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_PluginSupport_copy_data(
                SingleJointPosition_GetResult_Request_ *out,
                const SingleJointPosition_GetResult_Request_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Request_PluginSupport_destroy_data_w_params(
                SingleJointPosition_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Request_PluginSupport_destroy_data_ex(
                SingleJointPosition_GetResult_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Request_PluginSupport_destroy_data(
                SingleJointPosition_GetResult_Request_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Request_PluginSupport_print_data(
                const SingleJointPosition_GetResult_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_GetResult_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_GetResult_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ *out,
                const SingleJointPosition_GetResult_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_GetResult_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_GetResult_Request_Plugin_data_to_string(
                const SingleJointPosition_GetResult_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_GetResult_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_GetResult_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_GetResult_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_GetResult_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_GetResult_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_GetResult_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_GetResult_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_GetResult_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_GetResult_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_GetResult_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_GetResult_Response_*
            SingleJointPosition_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_GetResult_Response_*
            SingleJointPosition_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_GetResult_Response_*
            SingleJointPosition_GetResult_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_PluginSupport_copy_data(
                SingleJointPosition_GetResult_Response_ *out,
                const SingleJointPosition_GetResult_Response_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Response_PluginSupport_destroy_data_w_params(
                SingleJointPosition_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Response_PluginSupport_destroy_data_ex(
                SingleJointPosition_GetResult_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Response_PluginSupport_destroy_data(
                SingleJointPosition_GetResult_Response_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Response_PluginSupport_print_data(
                const SingleJointPosition_GetResult_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_GetResult_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_GetResult_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ *out,
                const SingleJointPosition_GetResult_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_GetResult_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_GetResult_Response_Plugin_data_to_string(
                const SingleJointPosition_GetResult_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_GetResult_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_GetResult_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_GetResult_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_GetResult_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_GetResult_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_Feedback_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_Feedback_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_Feedback_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_Feedback_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_Feedback_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_Feedback_*
            SingleJointPosition_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_Feedback_*
            SingleJointPosition_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_Feedback_*
            SingleJointPosition_Feedback_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_PluginSupport_copy_data(
                SingleJointPosition_Feedback_ *out,
                const SingleJointPosition_Feedback_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Feedback_PluginSupport_destroy_data_w_params(
                SingleJointPosition_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Feedback_PluginSupport_destroy_data_ex(
                SingleJointPosition_Feedback_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Feedback_PluginSupport_destroy_data(
                SingleJointPosition_Feedback_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Feedback_PluginSupport_print_data(
                const SingleJointPosition_Feedback_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_Feedback_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_Feedback_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ *out,
                const SingleJointPosition_Feedback_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_Feedback_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Feedback_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_Feedback_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_Feedback_Plugin_data_to_string(
                const SingleJointPosition_Feedback_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Feedback_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Feedback_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_Feedback_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_Feedback_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Feedback_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_Feedback_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_Feedback_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_Feedback_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            #define SingleJointPosition_FeedbackMessage_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define SingleJointPosition_FeedbackMessage_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SingleJointPosition_FeedbackMessage_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define SingleJointPosition_FeedbackMessage_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SingleJointPosition_FeedbackMessage_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SingleJointPosition_FeedbackMessage_*
            SingleJointPosition_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SingleJointPosition_FeedbackMessage_*
            SingleJointPosition_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SingleJointPosition_FeedbackMessage_*
            SingleJointPosition_FeedbackMessage_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_PluginSupport_copy_data(
                SingleJointPosition_FeedbackMessage_ *out,
                const SingleJointPosition_FeedbackMessage_ *in);

            NDDSUSERDllExport extern void 
            SingleJointPosition_FeedbackMessage_PluginSupport_destroy_data_w_params(
                SingleJointPosition_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SingleJointPosition_FeedbackMessage_PluginSupport_destroy_data_ex(
                SingleJointPosition_FeedbackMessage_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SingleJointPosition_FeedbackMessage_PluginSupport_destroy_data(
                SingleJointPosition_FeedbackMessage_ *sample);

            NDDSUSERDllExport extern void 
            SingleJointPosition_FeedbackMessage_PluginSupport_print_data(
                const SingleJointPosition_FeedbackMessage_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SingleJointPosition_FeedbackMessage_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SingleJointPosition_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SingleJointPosition_FeedbackMessage_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SingleJointPosition_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SingleJointPosition_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ *out,
                const SingleJointPosition_FeedbackMessage_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SingleJointPosition_FeedbackMessage_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                SingleJointPosition_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            SingleJointPosition_FeedbackMessage_Plugin_data_to_string(
                const SingleJointPosition_FeedbackMessage_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_FeedbackMessage_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_FeedbackMessage_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            SingleJointPosition_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const SingleJointPosition_FeedbackMessage_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SingleJointPosition_FeedbackMessage_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SingleJointPosition_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const SingleJointPosition_FeedbackMessage_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SingleJointPosition_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SingleJointPosition_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SingleJointPosition_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SingleJointPosition_FeedbackMessage_Plugin_new(void);

            NDDSUSERDllExport extern void
            SingleJointPosition_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SingleJointPosition_Plugin_1831673647_h */

