//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXSDUltronModelAssetManagerDelegate-Protocol.h>

@class AXUltronModelAssetManager, NSMutableSet, NSString;
@protocol AXSDDetectorQueueManagerDelegate;

@interface AXSDDetectorQueueManager : NSObject <AXSDUltronModelAssetManagerDelegate>
{
    AXUltronModelAssetManager *_assetManager;
    NSMutableSet *_detectorQueue;
    _Bool _ready;
    id <AXSDDetectorQueueManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AXSDDetectorQueueManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)assets:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(_Bool)arg5;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyForUltronManager:(id)arg1;
- (void)_dequeueListenType:(id)arg1;
- (void)_queueListenType:(id)arg1;
- (id)currentDetectionTypes;
- (void)stopListening;
- (_Bool)prepareToListen;
- (void)removeAllListenTypes;
- (void)removeListenType:(id)arg1;
- (void)addListenType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
