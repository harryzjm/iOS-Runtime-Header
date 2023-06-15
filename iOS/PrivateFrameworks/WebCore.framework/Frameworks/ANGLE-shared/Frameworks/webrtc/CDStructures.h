//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BitrateAdjuster;

struct Chromaticity {
    float _field1;
    float _field2;
};

struct CodecSpecificInfo {
    int _field1;
    union CodecSpecificInfoUnion _field2;
    _Bool _field3;
    struct optional<webrtc::GenericFrameInfo> _field4;
    struct optional<webrtc::FrameDependencyStructure> _field5;
};

struct CodecSpecificInfoH264 {
    int _field1;
    unsigned char _field2;
    _Bool _field3;
    _Bool _field4;
};

struct CodecSpecificInfoH265 {
    int _field1;
    _Bool _field2;
};

struct CodecSpecificInfoVP8 {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    char _field4;
    _Bool _field5;
    unsigned long long _field6[3];
    unsigned long long _field7;
    unsigned long long _field8[3];
    unsigned long long _field9;
};

struct CodecSpecificInfoVP9 {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    unsigned char _field6;
    _Bool _field7;
    _Bool _field8;
    unsigned char _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    _Bool _field12;
    unsigned short _field13[8];
    unsigned short _field14[8];
    struct GofInfoVP9 _field15;
    unsigned char _field16;
    unsigned char _field17[3];
    _Bool _field18;
};

struct ColorSpace {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    int _field4;
    int _field5;
    int _field6;
    struct optional<webrtc::HdrMetadata> _field7;
};

struct CompressedTuple<std::allocator<int>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::allocator<webrtc::CodecBufferUsage>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::allocator<webrtc::DecodeTargetIndication>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::allocator<webrtc::RenderResolution>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long> {
    unsigned long long _field1;
};

struct Data;

struct EncodedImage {
    unsigned int _field1;
    unsigned int _field2;
    long long _field3;
    long long _field4;
    int _field5;
    int _field6;
    unsigned char _field7;
    int _field8;
    struct VideoPlayoutDelay _field9;
    struct Timing _field10;
    scoped_refptr_05c3cd2c _field11;
    unsigned long long _field12;
    unsigned int _field13;
    struct optional<int> _field14;
    struct optional<int> _field15;
    struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> _field16;
    struct optional<webrtc::ColorSpace> _field17;
    struct optional<unsigned short> _field18;
    struct RtpPacketInfos _field19;
    _Bool _field20;
    _Bool _field21;
};

struct EncodedImageBufferInterface;

struct FrameDependencyStructure {
    int _field1;
    int _field2;
    int _field3;
    struct InlinedVector<int, 10UL, std::allocator<int>> _field4;
    struct InlinedVector<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> _field5;
    struct vector<webrtc::FrameDependencyTemplate, std::allocator<webrtc::FrameDependencyTemplate>> _field6;
};

struct FrameDependencyTemplate;

struct GenericFrameInfo {
    int _field1;
    int _field2;
    struct InlinedVector<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> _field3;
    struct InlinedVector<int, 4UL, std::allocator<int>> _field4;
    struct InlinedVector<int, 4UL, std::allocator<int>> _field5;
    struct InlinedVector<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> _field6;
    struct vector<bool, std::allocator<bool>> _field7;
    struct bitset<32UL> _field8;
};

struct GofInfoVP9 {
    unsigned long long _field1;
    unsigned char _field2[255];
    _Bool _field3[255];
    unsigned char _field4[255];
    unsigned char _field5[255][3];
    unsigned short _field6;
};

struct H264BitstreamParser {
    CDUnknownFunctionPointerType *_vptr$BitstreamParser;
    struct optional<webrtc::SpsParser::SpsState> sps_;
    struct optional<webrtc::PpsParser::PpsState> pps_;
    struct optional<int> last_slice_qp_delta_;
};

struct H264ProfileLevelId {
    int profile;
    int level;
};

struct HdrMasteringMetadata {
    struct Chromaticity _field1;
    struct Chromaticity _field2;
    struct Chromaticity _field3;
    struct Chromaticity _field4;
    float _field5;
    float _field6;
};

struct HdrMetadata {
    struct HdrMasteringMetadata _field1;
    int _field2;
    int _field3;
};

struct I420BufferInterface;

struct Inlined {
    char _field1[27];
};

struct InlinedVector<int, 10UL, std::allocator<int>> {
    struct Storage<int, 10UL, std::allocator<int>> _field1;
};

struct InlinedVector<int, 4UL, std::allocator<int>> {
    struct Storage<int, 4UL, std::allocator<int>> _field1;
};

struct InlinedVector<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> {
    struct Storage<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> _field1;
};

struct InlinedVector<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> {
    struct Storage<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> _field1;
};

struct InlinedVector<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> {
    struct Storage<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> _field1;
};

struct InlinedVector<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> {
    struct Storage<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> _field1;
};

struct PpsState {
    _Bool bottom_field_pic_order_in_frame_present_flag;
    _Bool weighted_pred_flag;
    _Bool entropy_coding_mode_flag;
    unsigned int weighted_bipred_idc;
    unsigned int redundant_pic_cnt_present_flag;
    int pic_init_qp_minus26;
    unsigned int id;
    unsigned int sps_id;
};

struct RtpEncodingParameters {
    struct optional<unsigned int> _field1;
    double _field2;
    int _field3;
    struct optional<int> _field4;
    struct optional<int> _field5;
    struct optional<double> _field6;
    struct optional<int> _field7;
    struct optional<double> _field8;
    struct optional<std::string> _field9;
    _Bool _field10;
    basic_string_b963e3c0 _field11;
    _Bool _field12;
};

struct RtpPacketInfos {
    struct scoped_refptr<webrtc::RtpPacketInfos::Data> _field1;
};

struct SdpVideoFormat {
    basic_string_b963e3c0 _field1;
    struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> _field2;
    struct InlinedVector<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> _field3;
};

struct SimulcastStream {
    int _field1;
    int _field2;
    float _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    _Bool _field9;
};

struct SpatialLayer {
    unsigned short _field1;
    unsigned short _field2;
    float _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    _Bool _field9;
};

struct SpsState {
    unsigned int width;
    unsigned int height;
    unsigned int delta_pic_order_always_zero_flag;
    unsigned int separate_colour_plane_flag;
    unsigned int frame_mbs_only_flag;
    unsigned int log2_max_frame_num;
    unsigned int log2_max_pic_order_cnt_lsb;
    unsigned int pic_order_cnt_type;
    unsigned int max_num_ref_frames;
    unsigned int vui_params_present;
    unsigned int id;
};

struct Storage<int, 10UL, std::allocator<int>> {
    struct CompressedTuple<std::allocator<int>, unsigned long> _field1;
    union Data {
        struct Allocated {
            int *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<int, 4UL, std::allocator<int>> {
    struct CompressedTuple<std::allocator<int>, unsigned long> _field1;
    union Data {
        struct Allocated {
            int *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> {
    struct CompressedTuple<std::allocator<webrtc::CodecBufferUsage>, unsigned long> _field1;
    union Data {
        struct Allocated {
            struct CodecBufferUsage *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> {
    struct CompressedTuple<std::allocator<webrtc::DecodeTargetIndication>, unsigned long> _field1;
    union Data {
        struct Allocated {
            int *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> {
    struct CompressedTuple<std::allocator<webrtc::RenderResolution>, unsigned long> _field1;
    union Data {
        struct Allocated {
            struct RenderResolution *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> {
    struct CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long> _field1;
    union Data {
        struct Allocated {
            unsigned char *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Timing {
    unsigned char _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
};

struct TimingFrameTriggerThresholds {
    long long _field1;
    unsigned short _field2;
};

struct VideoCodec {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    unsigned int _field9;
    unsigned char _field10;
    struct SimulcastStream _field11[3];
    struct SpatialLayer _field12[5];
    int _field13;
    _Bool _field14;
    struct TimingFrameTriggerThresholds _field15;
    _Bool _field16;
    union VideoCodecUnion _field17;
    struct optional<webrtc::ScalabilityMode> _field18;
    int _field19;
    _Bool _field20;
};

struct VideoCodecH264 {
    int _field1;
    unsigned char _field2;
};

struct VideoCodecVP8 {
    unsigned char _field1;
    _Bool _field2;
    _Bool _field3;
    int _field4;
};

struct VideoCodecVP9 {
    unsigned char _field1;
    _Bool _field2;
    int _field3;
    _Bool _field4;
    _Bool _field5;
    unsigned char _field6;
    _Bool _field7;
    int _field8;
};

struct VideoDecoder;

struct VideoEncoder;

struct VideoPlayoutDelay {
    int _field1;
    int _field2;
};

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *_field1;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned int :63;
                    unsigned int :1;
                } _field1;
                struct __short {
                    char _field1[23];
                    unsigned char _field2[0];
                    unsigned int :7;
                    unsigned int :1;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct bitset<32UL> {
    unsigned long long _field1;
};

struct dummy_type {
    struct empty_struct data[8];
};

struct empty_struct;

struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> {
    struct __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>>, std::allocator<std::__value_type<int, unsigned long>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct optional<double> {
    _Bool _field1;
    union {
        double _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<int> {
    _Bool engaged_;
    union {
        int data_;
        struct dummy_type dummy_;
    } ;
};

struct optional<std::string> {
    _Bool _field1;
    union {
        basic_string_b963e3c0 _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<unsigned int> {
    _Bool _field1;
    union {
        unsigned int _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<unsigned short> {
    _Bool _field1;
    union {
        unsigned short _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<webrtc::ColorSpace> {
    _Bool _field1;
    union {
        struct ColorSpace _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<webrtc::FrameDependencyStructure> {
    _Bool _field1;
    union {
        struct FrameDependencyStructure _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<webrtc::GenericFrameInfo> {
    _Bool _field1;
    union {
        struct GenericFrameInfo _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<webrtc::H264ProfileLevelId> {
    _Bool engaged_;
    union {
        struct H264ProfileLevelId data_;
        struct dummy_type dummy_;
    } ;
};

struct optional<webrtc::HdrMetadata> {
    _Bool _field1;
    union {
        struct HdrMetadata _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<webrtc::PpsParser::PpsState> {
    _Bool engaged_;
    union {
        struct PpsState data_;
        struct dummy_type dummy_;
    } ;
};

struct optional<webrtc::ScalabilityMode> {
    _Bool _field1;
    union {
        unsigned char _field1;
        struct dummy_type _field2;
    } _field2;
};

struct optional<webrtc::SpsParser::SpsState> {
    _Bool engaged_;
    union {
        struct SpsState data_;
        struct dummy_type dummy_;
    } ;
};

struct scoped_refptr<webrtc::EncodedImageBufferInterface> {
    struct EncodedImageBufferInterface *ptr_;
};

struct scoped_refptr<webrtc::I420BufferInterface> {
    struct I420BufferInterface *ptr_;
};

struct scoped_refptr<webrtc::RtpPacketInfos::Data> {
    struct Data *_field1;
};

struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> {
    struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> {
        struct BitrateAdjuster *__value_;
    } __ptr_;
};

struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> {
    struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> {
        struct VideoDecoder *__value_;
    } __ptr_;
};

struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> {
    struct __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> {
        struct VideoEncoder *__value_;
    } __ptr_;
};

struct vector<bool, std::allocator<bool>> {
    unsigned long long *_field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
        unsigned long long _field1;
    } _field3;
};

struct vector<unsigned char, std::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

struct vector<webrtc::FrameDependencyTemplate, std::allocator<webrtc::FrameDependencyTemplate>> {
    struct FrameDependencyTemplate *_field1;
    struct FrameDependencyTemplate *_field2;
    struct __compressed_pair<webrtc::FrameDependencyTemplate *, std::allocator<webrtc::FrameDependencyTemplate>> {
        struct FrameDependencyTemplate *_field1;
    } _field3;
};

#if 0
// Names with conflicting types:
typedef struct {
    int *_field1;
    unsigned long long _field2;
} Allocated_499e3ff4;

#endif

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned int :63;
                    unsigned int :1;
                } _field1;
                struct __short {
                    char _field1[23];
                    unsigned char _field2[0];
                    unsigned int :7;
                    unsigned int :1;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_b963e3c0;

typedef struct scoped_refptr<webrtc::EncodedImageBufferInterface> {
    struct EncodedImageBufferInterface *ptr_;
} scoped_refptr_05c3cd2c;

typedef struct scoped_refptr<webrtc::I420BufferInterface> {
    struct I420BufferInterface *ptr_;
} scoped_refptr_b674d2a6;

typedef struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> {
    struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> {
        struct VideoDecoder *__value_;
    } __ptr_;
} unique_ptr_8ce5ae0d;

typedef struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> {
    struct __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> {
        struct VideoEncoder *__value_;
    } __ptr_;
} unique_ptr_55387c1b;

#pragma mark Named Unions

union CodecSpecificInfoUnion {
    struct CodecSpecificInfoVP8 _field1;
    struct CodecSpecificInfoVP9 _field2;
    struct CodecSpecificInfoH264 _field3;
    struct CodecSpecificInfoH265 _field4;
};

union VideoCodecUnion {
    struct VideoCodecVP8 _field1;
    struct VideoCodecVP9 _field2;
    struct VideoCodecH264 _field3;
};

#if 0
// Names with conflicting types:
typedef union {
    struct Allocated {
        int *_field1;
        unsigned long long _field2;
    } _field1;
    struct Inlined _field2;
} Data_4d3a847a;

#endif

