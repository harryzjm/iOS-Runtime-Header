//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_complications;
    NSMutableDictionary *_editModeConfigurations;
    NSMutableDictionary *_metrics;
    _Bool _resourceDirectoryExists;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool resourceDirectoryExists; // @synthesize resourceDirectoryExists=_resourceDirectoryExists;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_dateMetricsKeys;
- (void)_applyMetrics:(id)arg1;
- (void)_applyComplicationsDescription:(id)arg1;
- (void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2;
- (void)addConfigurationKeysToJSONDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateComplicationsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEditModeConfigurationsWithBlock:(CDUnknownBlockType)arg1;
- (void)setMetricsFromConfiguration:(id)arg1;
- (void)incrementMetricForKey:(id)arg1;
- (void)setMetric:(id)arg1 forKey:(id)arg2;
- (id)metricForKey:(id)arg1;
- (void)appendEditModesToDailySnapshotKey:(id)arg1;
- (id)validationString;
- (id)description;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (id)complicationForSlot:(id)arg1;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)init;

@end

