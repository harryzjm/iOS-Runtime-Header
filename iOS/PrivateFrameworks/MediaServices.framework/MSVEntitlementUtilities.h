//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MSVEntitlementUtilities : NSObject
{
}

+ (void)_processKeyChainResult:(id)arg1;
+ (id)_checkBooleanEntitlement:(id)arg1 task:(struct __SecTask *)arg2;
+ (id)_checkArrayEntitlement:(id)arg1 group:(id)arg2 task:(struct __SecTask *)arg3;
+ (_Bool)_checkEntitlement:(id)arg1 inGroup:(id)arg2;
+ (_Bool)hasBoolEntitlement:(id)arg1;
+ (_Bool)hasEntitlement:(id)arg1 inGroup:(id)arg2;

@end
