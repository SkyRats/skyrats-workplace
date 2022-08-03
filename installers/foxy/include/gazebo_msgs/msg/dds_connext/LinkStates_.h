

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LinkStates_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LinkStates__462444364_h
#define LinkStates__462444364_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *LinkStates_TYPENAME;

            struct LinkStates_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LinkStates_TypeSupport;
            class LinkStates_DataWriter;
            class LinkStates_DataReader;
            #endif

            class LinkStates_ 
            {
              public:
                typedef struct LinkStates_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LinkStates_TypeSupport TypeSupport;
                typedef LinkStates_DataWriter DataWriter;
                typedef LinkStates_DataReader DataReader;
                #endif

                DDS_StringSeq  name_ ;
                geometry_msgs::msg::dds_::Pose_Seq  pose_ ;
                geometry_msgs::msg::dds_::Twist_Seq  twist_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LinkStates__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LinkStates_Seq, LinkStates_);

            NDDSUSERDllExport
            RTIBool LinkStates__initialize(
                LinkStates_* self);

            NDDSUSERDllExport
            RTIBool LinkStates__initialize_ex(
                LinkStates_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LinkStates__initialize_w_params(
                LinkStates_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LinkStates__finalize(
                LinkStates_* self);

            NDDSUSERDllExport
            void LinkStates__finalize_ex(
                LinkStates_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LinkStates__finalize_w_params(
                LinkStates_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LinkStates__finalize_optional_members(
                LinkStates_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LinkStates__copy(
                LinkStates_* dst,
                const LinkStates_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* LinkStates_ */

