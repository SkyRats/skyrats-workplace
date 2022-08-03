

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointCommand_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointCommand__1723266099_h
#define JointCommand__1723266099_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace pendulum_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointCommand_TYPENAME;

            struct JointCommand_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointCommand_TypeSupport;
            class JointCommand_DataWriter;
            class JointCommand_DataReader;
            #endif

            class JointCommand_ 
            {
              public:
                typedef struct JointCommand_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointCommand_TypeSupport TypeSupport;
                typedef JointCommand_DataWriter DataWriter;
                typedef JointCommand_DataReader DataReader;
                #endif

                DDS_Double   position_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointCommand__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointCommand_Seq, JointCommand_);

            NDDSUSERDllExport
            RTIBool JointCommand__initialize(
                JointCommand_* self);

            NDDSUSERDllExport
            RTIBool JointCommand__initialize_ex(
                JointCommand_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointCommand__initialize_w_params(
                JointCommand_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointCommand__finalize(
                JointCommand_* self);

            NDDSUSERDllExport
            void JointCommand__finalize_ex(
                JointCommand_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointCommand__finalize_w_params(
                JointCommand_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointCommand__finalize_optional_members(
                JointCommand_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointCommand__copy(
                JointCommand_* dst,
                const JointCommand_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace pendulum_msgs  */

#endif /* JointCommand_ */

