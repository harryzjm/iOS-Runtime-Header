//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RCPScreenRecorder : NSObject
{
    NSMutableArray *_snapshots;
    _Bool _recording;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    double _maxDuration;
}

+ (id)takeScreenshot:(double)arg1;
+ (id)takeScreenshot;
- (void).cxx_destruct;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
- (void)snapshot;
@property(readonly, nonatomic) NSArray *snapshots;
- (void)stopRecording;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (void)startRecording;

@end
