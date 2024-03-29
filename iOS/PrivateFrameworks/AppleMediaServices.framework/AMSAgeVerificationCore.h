//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSAgeVerificationCore : NSObject
{
}

+ (id)_momentOfExpiryFrom:(id)arg1;
+ (_Bool)_isTimestamp:(id)arg1 validAsOf:(id)arg2;
+ (_Bool)_isAgeVerificationNeededForExpiration:(id)arg1 at:(id)arg2;
+ (id)_timestampForWarningThresholdDays:(id)arg1 addedTo:(id)arg2;
+ (id)_resultForAccountVerificationExpirationTimestamp:(id)arg1 withBagControlledAgeVerificationRequired:(id)arg2 bagWarningThresholdDays:(id)arg3 at:(id)arg4;

@end

