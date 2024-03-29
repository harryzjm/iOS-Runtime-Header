//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAuthorizationContext;

__attribute__((visibility("hidden")))
@interface CNAuthorization : NSObject
{
    CNAuthorizationContext *_authorizationContext;
}

+ (id)logger;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNAuthorizationContext *authorizationContext; // @synthesize authorizationContext=_authorizationContext;
- (long long)authorizationStatusForEntityType:(long long)arg1;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (_Bool)isAccessRestrictedForEntityType:(long long)arg1;
- (id)initWithAuthorizationContext:(id)arg1;
- (id)initWithAssumedIdentity:(id)arg1;
- (id)init;

@end

