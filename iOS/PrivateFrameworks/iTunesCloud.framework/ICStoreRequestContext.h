//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICStoreDialogResponseHandler, ICUserIdentity, ICUserIdentityStore;

@interface ICStoreRequestContext <NSSecureCoding>
{
    ICUserIdentity *_delegatedIdentity;
    ICUserIdentity *_identity;
    ICUserIdentityStore *_identityStore;
    ICStoreDialogResponseHandler *_storeDialogResponseHandler;
    long long _personalizationStyle;
    _Bool _allowsExpiredBags;
}

+ (_Bool)supportsSecureCoding;
+ (id)activeStoreAccountRequestContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(readonly, nonatomic) _Bool allowsExpiredBags; // @synthesize allowsExpiredBags=_allowsExpiredBags;
@property(readonly, copy, nonatomic) ICStoreDialogResponseHandler *storeDialogResponseHandler; // @synthesize storeDialogResponseHandler=_storeDialogResponseHandler;
@property(readonly, nonatomic) ICUserIdentityStore *identityStore; // @synthesize identityStore=_identityStore;
@property(readonly, copy, nonatomic) ICUserIdentity *delegatedIdentity; // @synthesize delegatedIdentity=_delegatedIdentity;
@property(readonly, copy, nonatomic) ICUserIdentity *identity; // @synthesize identity=_identity;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setAllowsExpiredBags:(_Bool)arg1;
- (void)setStoreDialogResponseHandler:(id)arg1;
- (void)setIdentityStore:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setDelegatedIdentity:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3;
- (id)initWithIdentity:(id)arg1 clientInfo:(id)arg2;
- (id)initWithIdentity:(id)arg1;

@end
