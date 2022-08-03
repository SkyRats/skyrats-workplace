

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RttestResults_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RttestResults__27483749_h
#define RttestResults__27483749_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "pendulum_msgs/msg/dds_connext/JointCommand_.h"
#include "pendulum_msgs/msg/dds_connext/JointState_.h"
namespace pendulum_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RttestResults_TYPENAME;

            struct RttestResults_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RttestResults_TypeSupport;
            class RttestResults_DataWriter;
            class RttestResults_DataReader;
            #endif

            class RttestResults_ 
            {
              public:
                typedef struct RttestResults_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RttestResults_TypeSupport TypeSupport;
                typedef RttestResults_DataWriter DataWriter;
                typedef RttestResults_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   stamp_ ;
                pendulum_msgs::msg::dds_::JointCommand_   command_ ;
                pendulum_msgs::msg::dds_::JointState_   state_ ;
                DDS_UnsignedLongLong   cur_latency_ ;
                DDS_Double   mean_latency_ ;
                DDS_UnsignedLongLong   min_latency_ ;
                DDS_UnsignedLongLong   max_latency_ ;
                DDS_UnsignedLongLong   minor_pagefaults_ ;
                DDS_UnsignedLongLong   major_pagefaults_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RttestResults__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RttestResults_Seq, RttestResults_);

            NDDSUSERDllExport
            RTIBool RttestResults__initialize(
                RttestResults_* self);

            NDDSUSERDllExport
            RTIBool RttestResults__initialize_ex(
                RttestResults_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RttestResults__initialize_w_params(
                RttestResults_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RttestResults__finalize(
                RttestResults_* self);

            NDDSUSERDllExport
            void RttestResults__finalize_ex(
                RttestResults_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RttestResults__finalize_w_params(
                RttestResults_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RttestResults__finalize_optional_members(
                RttestResults_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RttestResults__copy(
                RttestResults_* dst,
                const RttestResults_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace pendulum_msgs  */

#endif /* RttestResults_ */

