//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CNFRegAccountAuthorizationDelegate;

@interface CNFRegAccountAuthorizationController
{
    NSString *_authID;
    NSString *_authToken;
    id <CNFRegAccountAuthorizationDelegate> _delegate;
}

@property(nonatomic) id <CNFRegAccountAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *authID; // @synthesize authID=_authID;
- (void).cxx_destruct;
- (id)authTokenHeaderValue;
- (id)authIdHeaderValue;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)cancelTapped;
- (id)logName;
- (id)bagKey;
- (void)dealloc;
- (id)initWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;

@end

