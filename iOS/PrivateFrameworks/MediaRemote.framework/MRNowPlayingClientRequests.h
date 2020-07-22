//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState>
{
    void *_client;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_playerClients;
    NSArray *_nowPlayingClients;
}

@property(readonly, nonatomic) NSArray *nowPlayingClients; // @synthesize nowPlayingClients=_nowPlayingClients;
@property(readonly, nonatomic) void *client; // @synthesize client=_client;
- (void)restoreNowPlayingClientState;
- (void)removePlayer:(void *)arg1;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(void *)arg1;
- (id)playerClients;
- (void)dealloc;
- (id)initWithClient:(void *)arg1;

@end

