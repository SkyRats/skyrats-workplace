

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalID_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GoalID__952876135_h
#define GoalID__952876135_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace actionlib_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GoalID_TYPENAME;

            struct GoalID_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GoalID_TypeSupport;
            class GoalID_DataWriter;
            class GoalID_DataReader;
            #endif

            class GoalID_ 
            {
              public:
                typedef struct GoalID_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GoalID_TypeSupport TypeSupport;
                typedef GoalID_DataWriter DataWriter;
                typedef GoalID_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   stamp_ ;
                DDS_Char *   id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GoalID__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GoalID_Seq, GoalID_);

            NDDSUSERDllExport
            RTIBool GoalID__initialize(
                GoalID_* self);

            NDDSUSERDllExport
            RTIBool GoalID__initialize_ex(
                GoalID_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GoalID__initialize_w_params(
                GoalID_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GoalID__finalize(
                GoalID_* self);

            NDDSUSERDllExport
            void GoalID__finalize_ex(
                GoalID_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GoalID__finalize_w_params(
                GoalID_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GoalID__finalize_optional_members(
                GoalID_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GoalID__copy(
                GoalID_* dst,
                const GoalID_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace actionlib_msgs  */

#endif /* GoalID_ */

