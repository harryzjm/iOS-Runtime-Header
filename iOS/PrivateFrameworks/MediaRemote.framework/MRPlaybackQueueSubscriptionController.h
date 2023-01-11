//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MSVMutableBidirectionalDictionary, NSMutableArray, NSMutableSet, _MRNowPlayingPlayerPathProtobuf;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding>
{
    NSMutableArray *_requestFilters;
    NSMutableSet *_requests;
    MSVMutableBidirectionalDictionary *_offsets;
    NSObject<OS_dispatch_queue> *_queue;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (void)_removeRequestID:(id)arg1;
- (void)invalidate;
- (id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)requestForSubscribedContentItemIdentifier:(struct NSString *)arg1;
- (void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2;
- (void)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (id)offsetForIdentifier:(id)arg1;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)requestForContentItemIdentifier:(id)arg1;
- (void)removeRequest:(id)arg1;
- (_Bool)hasRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)restoreStateFromController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;

@end

