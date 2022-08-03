

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from QueryTrajectoryState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef QueryTrajectoryState__1376465937_h
#define QueryTrajectoryState__1376465937_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace control_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *QueryTrajectoryState_Request_TYPENAME;

            struct QueryTrajectoryState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class QueryTrajectoryState_Request_TypeSupport;
            class QueryTrajectoryState_Request_DataWriter;
            class QueryTrajectoryState_Request_DataReader;
            #endif

            class QueryTrajectoryState_Request_ 
            {
              public:
                typedef struct QueryTrajectoryState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef QueryTrajectoryState_Request_TypeSupport TypeSupport;
                typedef QueryTrajectoryState_Request_DataWriter DataWriter;
                typedef QueryTrajectoryState_Request_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   time_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* QueryTrajectoryState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(QueryTrajectoryState_Request_Seq, QueryTrajectoryState_Request_);

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Request__initialize(
                QueryTrajectoryState_Request_* self);

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Request__initialize_ex(
                QueryTrajectoryState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Request__initialize_w_params(
                QueryTrajectoryState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void QueryTrajectoryState_Request__finalize(
                QueryTrajectoryState_Request_* self);

            NDDSUSERDllExport
            void QueryTrajectoryState_Request__finalize_ex(
                QueryTrajectoryState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void QueryTrajectoryState_Request__finalize_w_params(
                QueryTrajectoryState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void QueryTrajectoryState_Request__finalize_optional_members(
                QueryTrajectoryState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Request__copy(
                QueryTrajectoryState_Request_* dst,
                const QueryTrajectoryState_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *QueryTrajectoryState_Response_TYPENAME;

            struct QueryTrajectoryState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class QueryTrajectoryState_Response_TypeSupport;
            class QueryTrajectoryState_Response_DataWriter;
            class QueryTrajectoryState_Response_DataReader;
            #endif

            class QueryTrajectoryState_Response_ 
            {
              public:
                typedef struct QueryTrajectoryState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef QueryTrajectoryState_Response_TypeSupport TypeSupport;
                typedef QueryTrajectoryState_Response_DataWriter DataWriter;
                typedef QueryTrajectoryState_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   message_ ;
                DDS_StringSeq  name_ ;
                DDS_DoubleSeq  position_ ;
                DDS_DoubleSeq  velocity_ ;
                DDS_DoubleSeq  acceleration_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* QueryTrajectoryState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(QueryTrajectoryState_Response_Seq, QueryTrajectoryState_Response_);

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Response__initialize(
                QueryTrajectoryState_Response_* self);

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Response__initialize_ex(
                QueryTrajectoryState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Response__initialize_w_params(
                QueryTrajectoryState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void QueryTrajectoryState_Response__finalize(
                QueryTrajectoryState_Response_* self);

            NDDSUSERDllExport
            void QueryTrajectoryState_Response__finalize_ex(
                QueryTrajectoryState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void QueryTrajectoryState_Response__finalize_w_params(
                QueryTrajectoryState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void QueryTrajectoryState_Response__finalize_optional_members(
                QueryTrajectoryState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool QueryTrajectoryState_Response__copy(
                QueryTrajectoryState_Response_* dst,
                const QueryTrajectoryState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace control_msgs  */

#endif /* QueryTrajectoryState_ */

