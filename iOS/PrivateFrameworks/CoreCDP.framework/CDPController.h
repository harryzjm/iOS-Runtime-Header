//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;
@protocol CDPAuthProvider, CDPStateUIProvider;

@interface CDPController : NSObject
{
    CDPContext *_context;
    id <CDPStateUIProvider> _uiProvider;
    id <CDPAuthProvider> _authProvider;
    CDPDaemonConnection *_daemonConn;
    CDPStateUIProviderProxy *_uiProviderProxy;
}

@property(retain, nonatomic) CDPStateUIProviderProxy *uiProviderProxy; // @synthesize uiProviderProxy=_uiProviderProxy;
@property(retain, nonatomic) CDPDaemonConnection *daemonConn; // @synthesize daemonConn=_daemonConn;
@property(retain, nonatomic) id <CDPAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(retain, nonatomic) id <CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
