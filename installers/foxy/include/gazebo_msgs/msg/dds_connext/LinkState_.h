

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LinkState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LinkState__727528511_h
#define LinkState__727528511_h

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

            extern const char *LinkState_TYPENAME;

            struct LinkState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LinkState_TypeSupport;
            class LinkState_DataWriter;
            class LinkState_DataReader;
            #endif

            class LinkState_ 
            {
              public:
                typedef struct LinkState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LinkState_TypeSupport TypeSupport;
                typedef LinkState_DataWriter DataWriter;
                typedef LinkState_DataReader DataReader;
                #endif

                DDS_Char *   link_name_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                geometry_msgs::msg::dds_::Twist_   twist_ ;
                DDS_Char *   reference_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LinkState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LinkState_Seq, LinkState_);

            NDDSUSERDllExport
            RTIBool LinkState__initialize(
                LinkState_* self);

            NDDSUSERDllExport
            RTIBool LinkState__initialize_ex(
                LinkState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LinkState__initialize_w_params(
                LinkState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LinkState__finalize(
                LinkState_* self);

            NDDSUSERDllExport
            void LinkState__finalize_ex(
                LinkState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LinkState__finalize_w_params(
                LinkState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LinkState__finalize_optional_members(
                LinkState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LinkState__copy(
                LinkState_* dst,
                const LinkState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* LinkState_ */

