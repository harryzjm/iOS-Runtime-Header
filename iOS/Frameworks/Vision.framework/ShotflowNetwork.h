//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ShotflowNetwork : NSObject
{
    void *_espressoPlan;
    void *_espressoContext;
    CDStruct_2bc666a5 _espressoNetwork;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _logitsPosOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _logitsNegOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _offsetsOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _rollOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _yawOutputs;
    unsigned long long _currentNetworkWidth;
    unsigned long long _currentNetworkHeight;
    float _defaultBoxSizes[6][2][2];
    float _threshold;
}

+ (id)processingDeviceNetworkWithModelPath:(id)arg1 threshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processCIImage:(id)arg1;
- (id)resizeAndProcessVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;
- (void)runNetwork:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
@property(readonly, nonatomic) unsigned long long preferredSmallSide;

@end

