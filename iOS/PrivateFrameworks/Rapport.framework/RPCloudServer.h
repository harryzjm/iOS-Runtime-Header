//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPCloudXPCClientInterface-Protocol.h>

@class NSString, NSXPCConnection, RPCloudXPCConnection;
@protocol OS_dispatch_queue;

@interface RPCloudServer : NSObject <NSSecureCoding, RPCloudXPCClientInterface>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceIdentifier;
    CDUnknownBlockType _sessionAcceptHandler;
    RPCloudXPCConnection *_serverXPCCnx;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) RPCloudXPCConnection *serverXPCCnx; // @synthesize serverXPCCnx=_serverXPCCnx;
@property(copy, nonatomic) CDUnknownBlockType sessionAcceptHandler; // @synthesize sessionAcceptHandler=_sessionAcceptHandler;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)xpcCloudReceivedSessionStartRequest:(id)arg1 fromID:(id)arg2 multicastFromID:(id)arg3;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

