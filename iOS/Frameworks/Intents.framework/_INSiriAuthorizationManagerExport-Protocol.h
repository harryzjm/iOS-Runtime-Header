//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INSiriAuthorizationManagerExport <NSObject, JSExport>
+ (_Bool)_isSiriAuthorizationRestricted;
+ (void)_requestSiriAuthorization:(void (^)(long long))arg1 auditToken:(CDStruct_6ad76789)arg2;
+ (long long)_siriAuthorizationStatusForAppID:(NSString *)arg1;
- (id)init;
@end
