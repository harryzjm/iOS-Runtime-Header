//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CNEntitlementVerifier : NSObject
{
}

+ (_Bool)secTask:(struct __SecTask *)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (_Bool)auditToken:(CDStruct_6ad76789)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (_Bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;

@end

