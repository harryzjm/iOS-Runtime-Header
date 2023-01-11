//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (unsigned long long)_clientTypeForConnection:(id)arg1;
- (_Bool)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)arg1;
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
