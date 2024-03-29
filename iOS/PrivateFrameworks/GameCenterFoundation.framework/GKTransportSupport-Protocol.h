//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayer, NSArray, NSData, NSDictionary, NSString;
@protocol GKPlayerConnectionContext;

@protocol GKTransportSupport
@property(readonly, nonatomic) NSArray *guestPlayers;
@property(readonly, nonatomic) unsigned long long expectedPlayerCount;
@property(readonly, nonatomic) unsigned long long currentPlayerCountIncludingLocalPlayer;
@property(readonly, nonatomic) unsigned long long currentPlayerCount;
- (void)sendPacketDataToAll:(NSData *)arg1 packetType:(unsigned char)arg2 dataMode:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (GKPlayer *)playerFromID:(NSString *)arg1;
- (id <GKPlayerConnectionContext>)updateConnectionInfo:(NSDictionary *)arg1 forPlayerID:(NSString *)arg2;
- (id <GKPlayerConnectionContext>)getConnectionContextForPlayerID:(NSString *)arg1;
@end

