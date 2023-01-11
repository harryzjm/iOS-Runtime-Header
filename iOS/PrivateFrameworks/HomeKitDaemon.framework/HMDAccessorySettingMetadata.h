//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDAccessorySettingMergeStrategy, NSArray, NSString;

@interface HMDAccessorySettingMetadata : HMFObject <HMFObject>
{
    NSString *_name;
    long long _type;
    unsigned long long _properties;
    HMDAccessorySettingMergeStrategy *_mergeStrategy;
    NSArray *_constraints;
    id _value;
}

+ (id)valueWithType:(long long)arg1 constraints:(id)arg2 representation:(id)arg3;
+ (id)settingWithDictonaryRepresentation:(id)arg1;
+ (id)settingsWithArrayRepresenation:(id)arg1;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly, copy) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly) HMDAccessorySettingMergeStrategy *mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(readonly) unsigned long long properties; // @synthesize properties=_properties;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)modelWithParentIdentifier:(id)arg1;
- (id)modelsWithParentIdentifier:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithName:(id)arg1 type:(long long)arg2 properties:(unsigned long long)arg3 constraints:(id)arg4 mergeStrategy:(id)arg5 value:(id)arg6;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

