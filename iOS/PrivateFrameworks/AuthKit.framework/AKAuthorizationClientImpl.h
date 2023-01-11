//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthorizationClientProtocol-Protocol.h>

@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol>
{
    id <AKAuthorizationUIProvider> _uiProvider;
}

- (void).cxx_destruct;
@property(retain) id <AKAuthorizationUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
