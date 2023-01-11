//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthorizationClientProtocol-Protocol.h>

@class AKAuthorizationDaemonConnection;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject <AKAuthorizationClientProtocol>
{
    AKAuthorizationDaemonConnection *_daemonConnection;
    id <AKAuthorizationUIProvider> _uiProvider;
}

+ (_Bool)isURLFromAppleOwnedDomain:(id)arg1;
+ (id)appleOwnedDomains;
+ (_Bool)shouldProcessURL:(id)arg1;
+ (id)sharedController;
+ (_Bool)canPerformAuthorization;
@property(retain) id <AKAuthorizationUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void).cxx_destruct;
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_appleOwnedDomains;
- (id)_appleIDAuthorizationURLs;
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;

@end
