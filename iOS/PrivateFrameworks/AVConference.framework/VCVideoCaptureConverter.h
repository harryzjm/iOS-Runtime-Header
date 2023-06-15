//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoCaptureConverter : NSObject
{
    unsigned int _destinationFramerate;
    unsigned int _sourceFramerate;
    double _throttleRate;
    unsigned int _sourceFrameCount;
    unsigned int _lastDestinationFrameCount;
    _Bool _isThrottling;
    id _convertedFrameHandlerContext;
    CDUnknownFunctionPointerType _convertedFrameHandler;
}

@property(nonatomic) unsigned int destinationFramerate; // @synthesize destinationFramerate=_destinationFramerate;
@property(nonatomic) unsigned int sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
- (void)reactionDidStart:(id)arg1;
- (void)cameraAvailabilityDidChange:(_Bool)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;
- (void)updateThrottleRate;
- (_Bool)processFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (id)initWithConvertedFrameHandler:(CDUnknownFunctionPointerType)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

