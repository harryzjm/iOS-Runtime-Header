//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC13DVTFoundation27DVTTeamCredentialComponents;

@interface DVTJWTCredential : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_credentialComponents;
    MISSING_TYPE *generator;
    MISSING_TYPE *autoRenew;
    MISSING_TYPE *lock;
    MISSING_TYPE *tokenStorage;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)tokenAndReturnError:(id *)arg1;
@property(nonatomic, retain) _TtC13DVTFoundation27DVTTeamCredentialComponents *credentialComponents;

@end

