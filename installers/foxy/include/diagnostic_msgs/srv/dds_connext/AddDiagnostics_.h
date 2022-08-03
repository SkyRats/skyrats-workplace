

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddDiagnostics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AddDiagnostics__2022305785_h
#define AddDiagnostics__2022305785_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *AddDiagnostics_Request_TYPENAME;

            struct AddDiagnostics_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AddDiagnostics_Request_TypeSupport;
            class AddDiagnostics_Request_DataWriter;
            class AddDiagnostics_Request_DataReader;
            #endif

            class AddDiagnostics_Request_ 
            {
              public:
                typedef struct AddDiagnostics_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AddDiagnostics_Request_TypeSupport TypeSupport;
                typedef AddDiagnostics_Request_DataWriter DataWriter;
                typedef AddDiagnostics_Request_DataReader DataReader;
                #endif

                DDS_Char *   load_namespace_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AddDiagnostics_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AddDiagnostics_Request_Seq, AddDiagnostics_Request_);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Request__initialize(
                AddDiagnostics_Request_* self);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Request__initialize_ex(
                AddDiagnostics_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Request__initialize_w_params(
                AddDiagnostics_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AddDiagnostics_Request__finalize(
                AddDiagnostics_Request_* self);

            NDDSUSERDllExport
            void AddDiagnostics_Request__finalize_ex(
                AddDiagnostics_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AddDiagnostics_Request__finalize_w_params(
                AddDiagnostics_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AddDiagnostics_Request__finalize_optional_members(
                AddDiagnostics_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Request__copy(
                AddDiagnostics_Request_* dst,
                const AddDiagnostics_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace diagnostic_msgs  */
namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *AddDiagnostics_Response_TYPENAME;

            struct AddDiagnostics_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AddDiagnostics_Response_TypeSupport;
            class AddDiagnostics_Response_DataWriter;
            class AddDiagnostics_Response_DataReader;
            #endif

            class AddDiagnostics_Response_ 
            {
              public:
                typedef struct AddDiagnostics_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AddDiagnostics_Response_TypeSupport TypeSupport;
                typedef AddDiagnostics_Response_DataWriter DataWriter;
                typedef AddDiagnostics_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AddDiagnostics_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AddDiagnostics_Response_Seq, AddDiagnostics_Response_);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__initialize(
                AddDiagnostics_Response_* self);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__initialize_ex(
                AddDiagnostics_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__initialize_w_params(
                AddDiagnostics_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize(
                AddDiagnostics_Response_* self);

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize_ex(
                AddDiagnostics_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize_w_params(
                AddDiagnostics_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize_optional_members(
                AddDiagnostics_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__copy(
                AddDiagnostics_Response_* dst,
                const AddDiagnostics_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace diagnostic_msgs  */

#endif /* AddDiagnostics_ */

