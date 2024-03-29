//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DDUIPhysicalUnitGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DDUIPhysicalUnit : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_abbreviation;
    NSArray *_restrictionLocales;
    unsigned long long _groupType;
    DDUIPhysicalUnitGroup *_group;
    double _a;
    double _b;
}

+ (id)unitWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly) double b; // @synthesize b=_b;
@property(readonly) double a; // @synthesize a=_a;
@property __weak DDUIPhysicalUnitGroup *group; // @synthesize group=_group;
@property(readonly) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(readonly) NSArray *restrictionLocales; // @synthesize restrictionLocales=_restrictionLocales;
@property(readonly) NSString *abbreviation; // @synthesize abbreviation=_abbreviation;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (double)valueFrom:(double)arg1 unit:(id)arg2;
- (double)baseToUnit:(double)arg1;
- (_Bool)keepZeroValue;
- (double)unitToBase:(double)arg1;
- (_Bool)isUKMeasurement;
- (_Bool)inputValueIsValid:(double)arg1 fromUnit:(id)arg2;
- (id)localizedConvertedValueFrom:(double)arg1 unit:(id)arg2;
- (id)valueAsString:(double)arg1;
- (id)floatFormatString:(id)arg1 precision:(long long)arg2 exp:(_Bool)arg3;
- (id)localizedMenuTitleFormat:(id)arg1;
- (id)localizedTitleFormat:(id)arg1;
- (id)localizedConvertedValueFormat:(id)arg1;
- (id)localizedUnitNameWithValue:(double)arg1 unit:(id)arg2;
- (id)patchedVariantName;
- (id)initWithName:(id)arg1 abbreviation:(id)arg2 restrictionLocales:(id)arg3 groupType:(unsigned long long)arg4 a:(double)arg5 b:(double)arg6;

@end

