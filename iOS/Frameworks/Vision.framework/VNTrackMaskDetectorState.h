//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNTrackMaskDetectorState : NSObject
{
    CDStruct_0a65202a keyBuffer;
    CDStruct_0a65202a valueBuffer;
    CDStruct_0a65202a hiddenMaskBuffer;
    CDStruct_0a65202a outputMaskBuffer;
    _Bool _firstFrame;
    float _confidence;
    struct __CVBuffer *_inititalMask;
    CDStruct_1b6d18a9 _frameUpdateSpacing;
    CDStruct_1b6d18a9 _lastUpdatePTS;
    CDStruct_1b6d18a9 _lastProcessedPTS;
}

@property float confidence; // @synthesize confidence=_confidence;
@property CDStruct_1b6d18a9 lastProcessedPTS; // @synthesize lastProcessedPTS=_lastProcessedPTS;
@property CDStruct_1b6d18a9 lastUpdatePTS; // @synthesize lastUpdatePTS=_lastUpdatePTS;
@property(readonly) CDStruct_1b6d18a9 frameUpdateSpacing; // @synthesize frameUpdateSpacing=_frameUpdateSpacing;
@property(readonly) struct __CVBuffer *inititalMask; // @synthesize inititalMask=_inititalMask;
@property _Bool firstFrame; // @synthesize firstFrame=_firstFrame;
- (CDStruct_0a65202a *)getOutputMaskBuffer;
- (CDStruct_0a65202a *)getHiddenMaskBuffer;
- (CDStruct_0a65202a *)getValueBuffer;
- (CDStruct_0a65202a *)getKeyBuffer;
- (void)dealloc;
- (id)initWithFrameUpdateSpacing:(CDStruct_1b6d18a9)arg1 mask:(struct __CVBuffer *)arg2;
- (id)init;

@end

