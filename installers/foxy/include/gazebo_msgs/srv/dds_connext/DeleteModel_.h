

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeleteModel_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DeleteModel__260663151_h
#define DeleteModel__260663151_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *DeleteModel_Request_TYPENAME;

            struct DeleteModel_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeleteModel_Request_TypeSupport;
            class DeleteModel_Request_DataWriter;
            class DeleteModel_Request_DataReader;
            #endif

            class DeleteModel_Request_ 
            {
              public:
                typedef struct DeleteModel_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeleteModel_Request_TypeSupport TypeSupport;
                typedef DeleteModel_Request_DataWriter DataWriter;
                typedef DeleteModel_Request_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DeleteModel_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeleteModel_Request_Seq, DeleteModel_Request_);

            NDDSUSERDllExport
            RTIBool DeleteModel_Request__initialize(
                DeleteModel_Request_* self);

            NDDSUSERDllExport
            RTIBool DeleteModel_Request__initialize_ex(
                DeleteModel_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeleteModel_Request__initialize_w_params(
                DeleteModel_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeleteModel_Request__finalize(
                DeleteModel_Request_* self);

            NDDSUSERDllExport
            void DeleteModel_Request__finalize_ex(
                DeleteModel_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeleteModel_Request__finalize_w_params(
                DeleteModel_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeleteModel_Request__finalize_optional_members(
                DeleteModel_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeleteModel_Request__copy(
                DeleteModel_Request_* dst,
                const DeleteModel_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *DeleteModel_Response_TYPENAME;

            struct DeleteModel_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeleteModel_Response_TypeSupport;
            class DeleteModel_Response_DataWriter;
            class DeleteModel_Response_DataReader;
            #endif

            class DeleteModel_Response_ 
            {
              public:
                typedef struct DeleteModel_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeleteModel_Response_TypeSupport TypeSupport;
                typedef DeleteModel_Response_DataWriter DataWriter;
                typedef DeleteModel_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DeleteModel_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeleteModel_Response_Seq, DeleteModel_Response_);

            NDDSUSERDllExport
            RTIBool DeleteModel_Response__initialize(
                DeleteModel_Response_* self);

            NDDSUSERDllExport
            RTIBool DeleteModel_Response__initialize_ex(
                DeleteModel_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeleteModel_Response__initialize_w_params(
                DeleteModel_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeleteModel_Response__finalize(
                DeleteModel_Response_* self);

            NDDSUSERDllExport
            void DeleteModel_Response__finalize_ex(
                DeleteModel_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeleteModel_Response__finalize_w_params(
                DeleteModel_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeleteModel_Response__finalize_optional_members(
                DeleteModel_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeleteModel_Response__copy(
                DeleteModel_Response_* dst,
                const DeleteModel_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* DeleteModel_ */

