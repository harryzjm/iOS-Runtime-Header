//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger;
@protocol OS_dispatch_queue, StreamingOperation;

__attribute__((visibility("hidden")))
@interface AWAttentionStreamer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <StreamingOperation> _faceDetectStreamer;
    _Bool _unitTestMode;
    AWSampleLogger *_sampleLogger;
}

- (void).cxx_destruct;
- (void)setSmartCoverStateWithMask:(unsigned long long)arg1 smartCoverState:(_Bool)arg2;
- (void)logStreamComplete:(unsigned long long)arg1 identifier:(id)arg2 duration:(unsigned long long)arg3 ERActivated:(_Bool)arg4;
- (CDStruct_3d581f42)getStreamerOptionsWithMask:(unsigned long long)arg1;
- (void)setNotificationHandler:(CDUnknownBlockType)arg1 withMask:(unsigned long long)arg2;
- (_Bool)isStreamerRunningWithMask:(unsigned long long)arg1;
- (id)cancelEventStreamWithMask:(unsigned long long)arg1;
- (id)streamEventsWithMask:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 options:(CDStruct_3d581f42)arg3;
- (id)initForUnitTest:(_Bool)arg1 useAVFoundation:(_Bool)arg2;
- (id)initWithOptions:(id)arg1;

@end

