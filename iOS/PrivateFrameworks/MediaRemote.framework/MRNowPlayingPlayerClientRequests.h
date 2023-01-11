//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRPlaybackQueueSubscriptionController, NSMutableDictionary, NSOperationQueue, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueProtobuf;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState>
{
    _MRPlaybackQueueProtobuf *_playbackQueue;
    unsigned int _playbackState;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableDictionary *_transactions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
}

@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (void)_registerDefaultCallbacks;
- (void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_transactionDestintationForName:(unsigned long long)arg1;
- (void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2;
- (void)restoreNowPlayingClientState;
- (void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueuePlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePlaybackQueueCompletionForRequest:(id)arg1;
- (void)addPlaybackQueueCompletion:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (id)transactionCallbacksForName:(unsigned long long)arg1;
- (void)addTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
@property(retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
- (void)updatePlaybackQueue:(id)arg1;
- (void)updateContentItemArtwork:(id)arg1;
- (void)updateContentItems:(id)arg1;
@property(nonatomic) unsigned int playbackState;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithPlayerPath:(id)arg1;

@end

