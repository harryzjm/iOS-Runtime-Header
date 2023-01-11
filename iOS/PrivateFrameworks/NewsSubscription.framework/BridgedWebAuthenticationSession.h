//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsSubscription/ASWebAuthenticationPresentationContextProviding-Protocol.h>

@class ASWebAuthenticationSession, NSString;

@interface BridgedWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding>
{
    ASWebAuthenticationSession *_authenticationSession;
}

@property(retain, nonatomic) ASWebAuthenticationSession *authenticationSession; // @synthesize authenticationSession=_authenticationSession;
- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (_Bool)start;
- (id)initWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
