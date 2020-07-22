//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
}

+ (id)sharedManager;
- (void)removePlayer:(void *)arg1;
- (void)removeClient:(void *)arg1;
- (void)removeOrigin:(void *)arg1;
- (void)restoreNowPlayingClientState;
- (void)playerClientRequestsForUnresolvedPlayerPath:(void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientRequestsForUnresolvedPlayerPath:(void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)originClientRequestsForUnresolvedPlayerPath:(void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)localOriginClientRequests:(CDUnknownBlockType)arg1;
- (id)playerClientRequestsForPlayerPath:(void *)arg1;
- (id)clientRequestsForPlayerPath:(void *)arg1;
- (id)originClientRequestsForPlayerPath:(void *)arg1;
- (id)playerClientForPlayerPath:(void *)arg1;
- (id)clientForPlayerPath:(void *)arg1;
- (id)originClientForPlayerPath:(void *)arg1;
- (id)originClientForOrigin:(void *)arg1;
- (id)localOriginClient;
- (void)dealloc;
- (id)init;

@end
