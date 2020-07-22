//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKNumberFormatter-Protocol.h>

@class NSString;

@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter>
{
    _Bool _shouldRoundToHours;
}

@property(nonatomic) _Bool shouldRoundToHours; // @synthesize shouldRoundToHours=_shouldRoundToHours;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (_Bool)returnsUnitWithValueForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
