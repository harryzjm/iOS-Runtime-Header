//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AUInterfaceBaseV3;

struct AUInterfaceIOV3;

struct AUPreset {
    int _field1;
    struct __CFString *_field2;
};

struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>;

struct AVAudio3DAngularOrientation {
    float _field1;
    float _field2;
    float _field3;
};

struct AVAudio3DPoint {
    float _field1;
    float _field2;
    float _field3;
};

struct AVAudio3DVectorOrientation {
    struct AVAudio3DPoint _field1;
    struct AVAudio3DPoint _field2;
};

struct AVAudioConverterPrimeInfo {
    unsigned int _field1;
    unsigned int _field2;
};

struct AVAudioEngineGraph;

struct AVAudioEngineImpl {
    id _field1;
    struct unique_ptr<AVAudioEngineGraph, std::__1::default_delete<AVAudioEngineGraph>> _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    struct unique_ptr<AVAudioIOUnit, std::__1::default_delete<AVAudioIOUnit>> _field7;
    _Bool _field8;
    id _field9;
    int _field10;
    CDUnknownBlockType _field11;
    _Bool _field12;
    struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> _field13;
    struct recursive_mutex _field14;
    struct recursive_semaphore_mutex_t<caulk::semaphore> _field15;
};

struct AVAudioEnvironmentNodeImpl {
    CDUnknownFunctionPointerType *_field1;
    struct AVAudioEngineImpl *_field2;
    id _field3;
    struct vector<bool, std::__1::allocator<bool>> _field4;
    _Bool _field5;
    _Bool _field6;
    struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl>> _field7;
    struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>>> _field8;
    _Bool _field9;
    long long _field10;
    double _field11;
    struct atomic<double> _field12;
    int _field13;
    struct unique_ptr<AUInterfaceBaseV3, std::__1::default_delete<AUInterfaceBaseV3>> _field14;
    float _field15;
    long long _field16;
    unsigned int _field17;
    id _field18;
    struct AVAudio3DPoint _field19;
    struct AVAudio3DVectorOrientation _field20;
    struct AVAudio3DAngularOrientation _field21;
    struct map<AVAudio3DMixingImpl *, unsigned int, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned int>>> _field22;
    id _field23;
    unsigned int _field24;
    float _field25;
    float _field26;
    float _field27;
    id _field28;
    id _field29;
    _Bool _field30;
    float _field31;
    float _field32;
    float _field33;
    float _field34;
};

struct AVAudioIOUnit {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    struct AVAudioEngineImpl *_field3;
    struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3>> _field4;
    id _field5;
    id _field6;
    struct AudioComponentDescription _field7;
};

struct AVAudioMixingImpl {
    CDUnknownFunctionPointerType *_field1;
    struct AVAudioNodeImplBase *_field2;
    float _field3;
    float _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    float _field8;
    float _field9;
    struct AVAudio3DPoint _field10;
    float _field11;
    float _field12;
};

struct AVAudioNodeImplBase {
    CDUnknownFunctionPointerType *_field1;
    struct AVAudioEngineImpl *_field2;
    id _field3;
    struct vector<bool, std::__1::allocator<bool>> _field4;
    _Bool _field5;
    _Bool _field6;
    struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl>> _field7;
    struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>>> _field8;
    _Bool _field9;
    long long _field10;
    double _field11;
    struct atomic<double> _field12;
};

struct AVAudioPlayerCpp {
    struct __CFData *_field1;
    struct __CFURL *_field2;
    struct __CFDictionary *_field3;
    unsigned int _field4;
    struct AudioStreamBasicDescription _field5;
    struct AudioStreamBasicDescription _field6;
    unsigned int _field7;
    unsigned long long _field8;
    char *_field9;
    unsigned int _field10;
    struct AudioFormatListItem *_field11;
    unsigned int _field12;
    struct OpaqueAudioFileID *_field13;
    unsigned int _field14;
    struct OpaqueAudioQueue *_field15;
    long long _field16;
    long long _field17;
    long long _field18;
    double _field19;
    double _field20;
    double _field21;
    double _field22;
    unsigned int _field23;
    double _field24;
    int _field25;
    struct AudioFilePacketTableInfo _field26;
    long long _field27;
    long long _field28;
    int _field29;
    int _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    _Bool _field34;
    unsigned int _field35;
    _Bool _field36;
    _Bool _field37;
    _Bool _field38;
    _Bool _field39;
    double _field40;
    double _field41;
    double _field42;
    double _field43;
    double _field44;
    double _field45;
    struct __CFString *_field46;
    unsigned int _field47;
    struct AudioQueueLevelMeterState *_field48;
    struct AudioQueueBuffer *_field49[3];
    struct AudioQueueBuffer *_field50;
    int _field51;
    unsigned int _field52[3];
    _Bool _field53;
    _Bool _field54;
    _Bool _field55;
    _Bool _field56;
    _Bool _field57;
    struct AudioQueueBuffer *_field58;
    unsigned int _field59;
    _Bool _field60;
    _Bool _field61;
    _Bool _field62;
    _Bool _field63;
    long long _field64;
    int _field65;
    unsigned int _field66;
    unsigned int _field67;
    void *_field68;
    CDUnknownFunctionPointerType _field69;
    unsigned int _field70;
    id _field71;
    unsigned int _field72;
    struct AudioQueueChannelAssignment *_field73;
};

struct AVAudioSequencerImpl {
    struct OpaqueMusicPlayer *_field1;
    struct OpaqueMusicSequence *_field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
};

struct AVAudioUnitComponentManagerImpl {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    struct mutex _field5;
};

struct AVAudioUnitEQFilterParametersImpl {
    CDUnknownFunctionPointerType *_field1;
    struct AVAudioNodeImplBase *_field2;
};

struct AVVCRecordingEngine;

struct AVVCRecordingEngineMap;

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioChannelDescription {
    unsigned int _field1;
    unsigned int _field2;
    float _field3[3];
};

struct AudioChannelLayout {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AudioChannelDescription _field4[1];
};

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct AudioFilePacketTableInfo {
    long long _field1;
    int _field2;
    int _field3;
};

struct AudioFormatListItem;

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueChannelAssignment;

struct AudioQueueLevelMeterState;

struct AudioRecorderImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    unsigned int _field7;
    struct AudioStreamBasicDescription _field8;
    struct OpaqueAudioFileID *_field9;
    struct OpaqueAudioQueue *_field10;
    long long _field11;
    long long _field12;
    long long _field13;
    double _field14;
    double _field15;
    double _field16;
    unsigned long long _field17;
    char *_field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct AudioQueueLevelMeterState *_field27;
    struct AudioQueueBuffer *_field28[4];
    struct AudioQueueBuffer *_field29;
    _Bool _field30;
    unsigned long long _field31;
    _Bool _field32;
    int _field33;
    id _field34;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct CAMutex {
    CDUnknownFunctionPointerType *_field1;
    char *_field2;
    struct _opaque_pthread_t *_field3;
    struct _opaque_pthread_mutex_t _field4;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct ControllerImpl {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
    struct GenericRunLoopThread *_field6;
    _Bool _field7;
    float _field8;
    id _field9;
    struct __CFDictionary *_field10;
    unsigned int _field11;
    id _field12;
    id _field13;
    struct CAStreamBasicDescription _field14;
    double _field15;
    struct OpaqueAudioQueue *_field16;
    int _field17;
    id _field18;
    unsigned int _field19;
    struct AudioQueueBuffer **_field20;
    int _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    float _field28;
    unsigned int _field29;
    long long _field30;
    struct CAStreamBasicDescription _field31;
    long long _field32;
    struct OpaqueAudioQueue *_field33;
    struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *>>> _field34;
    struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> _field35;
    int _field36;
    int _field37;
    int _field38;
    long long _field39;
    long long _field40;
    long long _field41;
    int _field42;
    int _field43;
    float _field44;
    double _field45;
    unsigned long long _field46;
    unsigned long long _field47;
    float _field48;
    float _field49;
    _Bool _field50;
    _Bool _field51;
    id _field52;
    struct OpaqueAudioFileID *_field53;
    unsigned int _field54;
    struct AudioFormatListItem *_field55;
    unsigned int _field56;
    unsigned long long _field57;
    char *_field58;
    struct AudioFilePacketTableInfo _field59;
    long long _field60;
    long long _field61;
    _Bool _field62;
    int _field63;
    int _field64;
    id _field65;
    _Bool _field66;
    _Bool _field67;
    _Bool _field68;
    _Bool _field69;
    int _field70;
    double _field71;
    double _field72;
    double _field73;
    _Bool _field74;
    _Bool _field75;
    _Bool _field76;
    id _field77;
    unsigned char _field78;
    int _field79;
    _Bool _field80;
    _Bool _field81;
    _Bool _field82;
    unsigned int _field83;
    _Bool _field84;
    id _field85;
    unsigned long long _field86;
    unsigned long long _field87;
    _Bool _field88;
    _Bool _field89;
    int _field90;
    _Bool _field91;
    long long _field92;
    id _field93;
    struct MyMutex *_field94[4];
    int _field95;
    int _field96;
    _Bool _field97;
    unsigned long long _field98;
    unsigned long long _field99;
    unsigned long long _field100;
    id _field101;
    id _field102;
    struct shared_ptr<AVVCRecordingEngineMap> _field103;
    _Bool _field104;
    CDUnknownBlockType _field105;
    CDUnknownBlockType _field106;
    long long _field107;
    id _field108;
};

struct GenericRunLoopThread;

struct MIDIPlayerImpl {
    struct OpaqueAUGraph *_field1;
    struct OpaqueMusicPlayer *_field2;
    struct OpaqueMusicSequence *_field3;
    double _field4;
    CDUnknownBlockType _field5;
    id _field6;
};

struct MusicTrackImpl {
    struct OpaqueMusicTrack *_field1;
    id _field2;
    _Bool _field3;
    unsigned int _field4;
};

struct MyAudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
    struct AudioStreamBasicDescription _field8;
    _Bool _field9;
    unsigned char _field10;
    unsigned char _field11;
    _Bool _field12;
};

struct MyMutex;

struct OpaqueAUGraph;

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct OpaqueMusicPlayer;

struct OpaqueMusicSequence;

struct OpaqueMusicTrack;

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct _AVBeatRange {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFDictionary;

struct __CFString;

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long _field1;
    char _field2[56];
};

struct _opaque_pthread_t;

struct atomic<double> {
    struct __cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double>> {
        _Atomic double _field1;
    } _field1;
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> {
        _Atomic int _field1;
    } _field1;
};

struct map<AVAudio3DMixingImpl *, unsigned int, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned int>>> {
    struct __tree<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true>, std::__1::allocator<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> {
    struct __tree<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::less<AVVoiceAlertType>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *>>> {
    struct __tree<std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::__value_type<AVVoiceAlertType, NSURL *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVVoiceAlertType, NSURL *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::less<AVVoiceAlertType>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>;

struct mutex {
    struct _opaque_pthread_mutex_t _field1;
};

struct recursive_mutex {
    struct _opaque_pthread_mutex_t _field1;
};

struct recursive_semaphore_mutex_t<caulk::semaphore> {
    struct _opaque_pthread_t *_field1;
    int _field2;
    struct semaphore {
        struct semaphore {
            unsigned int _field1;
            _Bool _field2;
        } _field1;
        struct atomic<int> _field2;
        int _field3;
    } _field3;
};

struct shared_ptr<AVVCRecordingEngine> {
    struct AVVCRecordingEngine *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<AVVCRecordingEngineMap> {
    struct AVVCRecordingEngineMap *_field1;
    struct __shared_weak_count *_field2;
};

struct unique_ptr<AUInterfaceBaseV3, std::__1::default_delete<AUInterfaceBaseV3>> {
    struct __compressed_pair<AUInterfaceBaseV3 *, std::__1::default_delete<AUInterfaceBaseV3>> {
        struct AUInterfaceBaseV3 *_field1;
    } _field1;
};

struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3>> {
    struct __compressed_pair<AUInterfaceIOV3 *, std::__1::default_delete<AUInterfaceIOV3>> {
        struct AUInterfaceIOV3 *_field1;
    } _field1;
};

struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> {
    struct __compressed_pair<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>*, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> {
        struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> *_field1;
    } _field1;
};

struct unique_ptr<AVAudioEngineGraph, std::__1::default_delete<AVAudioEngineGraph>> {
    struct __compressed_pair<AVAudioEngineGraph *, std::__1::default_delete<AVAudioEngineGraph>> {
        struct AVAudioEngineGraph *_field1;
    } _field1;
};

struct unique_ptr<AVAudioIOUnit, std::__1::default_delete<AVAudioIOUnit>> {
    struct __compressed_pair<AVAudioIOUnit *, std::__1::default_delete<AVAudioIOUnit>> {
        struct AVAudioIOUnit *_field1;
    } _field1;
};

struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl>> {
    struct __compressed_pair<AVAudioMixingImpl *, std::__1::default_delete<AVAudioMixingImpl>> {
        struct AVAudioMixingImpl *_field1;
    } _field1;
};

struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>>> {
    struct __compressed_pair<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>*, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>>> {
        struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>> *_field1;
    } _field1;
};

struct vector<bool, std::__1::allocator<bool>> {
    unsigned long long *_field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long>> {
        unsigned long long _field1;
    } _field3;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct shared_ptr<AVVCRecordingEngine> {
    struct AVVCRecordingEngine *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_dcedf963;
