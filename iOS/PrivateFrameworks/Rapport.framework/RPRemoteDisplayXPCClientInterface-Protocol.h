//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError, NSNumber, NSString, RPRemoteDisplayDevice;

@protocol RPRemoteDisplayXPCClientInterface

@optional
- (void)remoteDisplayReceivedRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4 sessionID:(NSNumber *)arg5;
- (void)remoteDisplayReceivedRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)remoteDisplayReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 sessionID:(NSNumber *)arg4;
- (void)remoteDisplayReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)remoteDisplaySessionEndedWithID:(NSNumber *)arg1;
- (void)remoteDisplayStartServerSessionID:(NSNumber *)arg1 device:(RPRemoteDisplayDevice *)arg2 completion:(void (^)(NSError *))arg3;
- (void)remoteDisplayUpdateErrorFlags:(unsigned long long)arg1;
- (void)remoteDisplaySessionError:(NSError *)arg1;
- (void)remoteDisplayChangedDevice:(RPRemoteDisplayDevice *)arg1 changes:(unsigned int)arg2;
- (void)remoteDisplayLostDevice:(RPRemoteDisplayDevice *)arg1;
- (void)remoteDisplayFoundDevice:(RPRemoteDisplayDevice *)arg1;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)remoteDisplayHidePasswordWithFlags:(unsigned int)arg1;
- (void)remoteDisplayShowPassword:(NSString *)arg1 flags:(unsigned int)arg2;
@end
