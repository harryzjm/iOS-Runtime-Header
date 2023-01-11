//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWUnitTestSampler-Protocol.h>

@class AWUnitTestFaceDetectOperation;
@protocol BKDevicePearlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler>
{
    CDStruct_2c6bab44 _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    CDUnknownBlockType _displayCallback;
    CDUnknownBlockType _smartCoverCallback;
    _Bool _facePresent;
    id <BKDevicePearlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_2c6bab44 *_sampleStatsPtr;
}

+ (id)sharedDevice;
@property _Bool facePresent; // @synthesize facePresent=_facePresent;
@property CDStruct_2c6bab44 *sampleStatsPtr; // @synthesize sampleStatsPtr=_sampleStatsPtr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKDevicePearlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;
- (void)setDisplayState:(_Bool)arg1;
- (void)setSampleState:(_Bool)arg1;
- (void)resetStats;
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;
- (void)deliverPearlDeviceEvent:(long long)arg1;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (id)init;

@end

