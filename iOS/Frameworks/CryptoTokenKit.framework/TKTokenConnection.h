//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSXPCListenerDelegate-Protocol.h>

@class NSMapTable, NSString, NSXPCListener, TKToken;

__attribute__((visibility("hidden")))
@interface TKTokenConnection : NSObject <NSXPCListenerDelegate>
{
    TKToken *_token;
    NSXPCListener *_listener;
    NSMapTable *_sessions;
    id _initialKeepAlive;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id initialKeepAlive; // @synthesize initialKeepAlive=_initialKeepAlive;
@property(readonly, nonatomic) NSMapTable *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) TKToken *token; // @synthesize token=_token;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)invalidate;
- (id)initWithToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
