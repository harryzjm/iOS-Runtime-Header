//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKit/HMFMessageTransportDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate>
{
    NSMutableArray *_reconnectionHandlers;
    _Bool _connectionValid;
    _Bool _requiresCheckin;
    _Bool _notifyRegistered;
    int _notifyRegisterToken;
    NSXPCConnection *_connection;
    NSDictionary *_userInfo;
}

+ (id)remoteObjectInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) _Bool notifyRegistered; // @synthesize notifyRegistered=_notifyRegistered;
@property(nonatomic) int notifyRegisterToken; // @synthesize notifyRegisterToken=_notifyRegisterToken;
@property(nonatomic) _Bool requiresCheckin; // @synthesize requiresCheckin=_requiresCheckin;
@property(nonatomic) _Bool connectionValid; // @synthesize connectionValid=_connectionValid;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerReconnectionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUserInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
