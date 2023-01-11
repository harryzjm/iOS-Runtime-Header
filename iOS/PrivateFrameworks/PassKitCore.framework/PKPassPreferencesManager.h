//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKPassPreferencesManager : NSObject
{
}

+ (id)sharedInstance;
- (struct __CFString *)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2;
- (void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2;
- (id)_stringForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (void)_synchronize;
- (_Bool)hasDoneExpressUpgrade;
- (void)setHasDoneExpressUpgrade:(_Bool)arg1;
- (void)removeAllPreferences;
- (void)removeAllPreferencesForPassWithUniqueID:(id)arg1;
- (double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1;
- (id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1;

@end
