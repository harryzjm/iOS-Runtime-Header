//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayer, GKTransportContext, GKVoiceChat, NSArray, NSData, NSDictionary, NSString;

@protocol GKTransportProtocol
@property(readonly, nonatomic) NSData *nearbyConnectionData;
- (void)preemptRelay:(NSString *)arg1;
- (void)handleRelayPushData:(NSDictionary *)arg1 onlyIfPreemptive:(_Bool)arg2;
- (void)acceptRelayResponse:(NSDictionary *)arg1 playerID:(NSString *)arg2;
- (GKVoiceChat *)voiceChatWithName:(NSString *)arg1 players:(NSArray *)arg2 transportContext:(GKTransportContext *)arg3;
- (void)chooseBestHostingPlayerWithTransportContext:(GKTransportContext *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)sendScopedDataToAll:(NSData *)arg1 dataMode:(long long)arg2 dataScope:(long long)arg3 transportContext:(GKTransportContext *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)sendScopedData:(NSData *)arg1 toPlayers:(NSArray *)arg2 dataMode:(long long)arg3 dataScope:(long long)arg4 transportContext:(GKTransportContext *)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)localConnectionDataWithCompletionHandler:(void (^)(NSData *, NSError *))arg1;
- (NSArray *)enrichPeerDictionariesForPlayersConnection:(NSArray *)arg1;
- (void)disconnectAllWithTransportContext:(GKTransportContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)connectToPlayersWithTransportContext:(GKTransportContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)connectToNearbyPlayer:(GKPlayer *)arg1 withConnectionData:(NSData *)arg2;
- (_Bool)connectToGuestPlayer:(GKPlayer *)arg1 withHostPlayer:(GKPlayer *)arg2;
@end

