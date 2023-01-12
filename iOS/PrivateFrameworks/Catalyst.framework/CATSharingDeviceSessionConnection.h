//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATSharingDevice, NSError, NSString;
@protocol CATSharingConnectionDelegate, CATSharingDeviceSession, CATTimer, CATTimerSource;

__attribute__((visibility("hidden")))
@interface CATSharingDeviceSessionConnection : NSObject
{
    id <CATSharingDeviceSession> mDeviceSession;
    id <CATTimerSource> mTimerSource;
    _Bool mIsClosing;
    id <CATTimer> mTombstoneTimer;
    CATOperationQueue *mOutgoingQueue;
    CATOperationQueue *mCatalystQueue;
    _Bool _closed;
    id <CATSharingConnectionDelegate> _delegate;
    NSError *_closedError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *closedError; // @synthesize closedError=_closedError;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) __weak id <CATSharingConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendTearDownMessageWithError:(id)arg1;
- (void)handleSentMessage:(id)arg1;
- (void)handleCloseMessage:(id)arg1;
- (void)handleUnparsableMessageDictionary:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)removeDeviceSessionHandlers;
- (void)addDeviceSessionHandlers;
- (void)tombstoneWithError:(id)arg1;
- (void)closeWithError:(id)arg1 reportToRemote:(_Bool)arg2;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_close;
- (void)_sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CATSharingDevice *remoteDevice;
- (id)initWithDeviceSession:(id)arg1 timerSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

