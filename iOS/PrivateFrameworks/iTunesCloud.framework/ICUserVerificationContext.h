//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ACAccount, ACAccountStore, ICUserIdentityProperties, ICUserIdentityStore, NSString;

@interface ICUserVerificationContext : NSObject <NSCopying>
{
    long long _interactionLevel;
    ICUserIdentityProperties *_identityProperties;
    NSString *_debugReason;
    ACAccount *_ACAccount;
    ACAccountStore *_ACAccountStore;
    ICUserIdentityStore *_identityStore;
    long long _verificationStyle;
}

+ (id)contextWithACAccount:(id)arg1 accountStore:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long verificationStyle; // @synthesize verificationStyle=_verificationStyle;
@property(retain, nonatomic) ICUserIdentityStore *identityStore; // @synthesize identityStore=_identityStore;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
@property(retain, nonatomic) ACAccountStore *ACAccountStore; // @synthesize ACAccountStore=_ACAccountStore;
@property(retain, nonatomic) ACAccount *ACAccount; // @synthesize ACAccount=_ACAccount;
@property(copy, nonatomic) NSString *debugReason; // @synthesize debugReason=_debugReason;
@property(nonatomic) long long interactionLevel; // @synthesize interactionLevel=_interactionLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
