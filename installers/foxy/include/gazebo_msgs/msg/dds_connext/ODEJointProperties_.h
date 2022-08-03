

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ODEJointProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ODEJointProperties__305118620_h
#define ODEJointProperties__305118620_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ODEJointProperties_TYPENAME;

            struct ODEJointProperties_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ODEJointProperties_TypeSupport;
            class ODEJointProperties_DataWriter;
            class ODEJointProperties_DataReader;
            #endif

            class ODEJointProperties_ 
            {
              public:
                typedef struct ODEJointProperties_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ODEJointProperties_TypeSupport TypeSupport;
                typedef ODEJointProperties_DataWriter DataWriter;
                typedef ODEJointProperties_DataReader DataReader;
                #endif

                DDS_DoubleSeq  damping_ ;
                DDS_DoubleSeq  hi_stop_ ;
                DDS_DoubleSeq  lo_stop_ ;
                DDS_DoubleSeq  erp_ ;
                DDS_DoubleSeq  cfm_ ;
                DDS_DoubleSeq  stop_erp_ ;
                DDS_DoubleSeq  stop_cfm_ ;
                DDS_DoubleSeq  fudge_factor_ ;
                DDS_DoubleSeq  fmax_ ;
                DDS_DoubleSeq  vel_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ODEJointProperties__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ODEJointProperties_Seq, ODEJointProperties_);

            NDDSUSERDllExport
            RTIBool ODEJointProperties__initialize(
                ODEJointProperties_* self);

            NDDSUSERDllExport
            RTIBool ODEJointProperties__initialize_ex(
                ODEJointProperties_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ODEJointProperties__initialize_w_params(
                ODEJointProperties_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ODEJointProperties__finalize(
                ODEJointProperties_* self);

            NDDSUSERDllExport
            void ODEJointProperties__finalize_ex(
                ODEJointProperties_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ODEJointProperties__finalize_w_params(
                ODEJointProperties_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ODEJointProperties__finalize_optional_members(
                ODEJointProperties_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ODEJointProperties__copy(
                ODEJointProperties_* dst,
                const ODEJointProperties_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* ODEJointProperties_ */

