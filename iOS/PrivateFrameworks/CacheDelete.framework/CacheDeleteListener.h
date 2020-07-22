//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CacheDelete/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>
{
    _Bool _isResumed;
    id _xObj;
    NSMutableSet *_requiredEntitlements;
    Protocol *_protocol;
    NSXPCListener *_listener;
    NSString *_serviceName;
}

+ (id)daemonPublicListenerWithExportedObject:(id)arg1;
+ (id)daemonListenerWithExportedObject:(id)arg1;
@property(nonatomic) _Bool isResumed; // @synthesize isResumed=_isResumed;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableSet *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(retain, nonatomic) id xObj; // @synthesize xObj=_xObj;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)addRequiredEntitlement:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

