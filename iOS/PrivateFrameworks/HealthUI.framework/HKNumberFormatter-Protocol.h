//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDisplayType, HKUnitPreferenceController, NSNumber, NSString;

@protocol HKNumberFormatter <NSObject>
- (NSString *)stringFromNumber:(NSNumber *)arg1 displayType:(HKDisplayType *)arg2 unitController:(HKUnitPreferenceController *)arg3;
- (_Bool)returnsUnitWithValueForDisplay;
@end

