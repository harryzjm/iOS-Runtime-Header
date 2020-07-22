//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/MSSearchDelegate-Protocol.h>

@class ACAccount, MSSearch, NSOperationQueue, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate>
{
    NSOperationQueue *_requesterQueue;
    ACAccount *_account;
    CDUnknownBlockType _handler;
    int _attempts;
    _Bool _canceled;
    MSSearch *_search;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)search:(id)arg1 didFindResults:(id)arg2;
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateToken:(id)arg1;
- (void)_verify;
- (void)cancel;
- (void)verifyWithHandler:(CDUnknownBlockType)arg1;
- (void)sendVerificationEmail;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

