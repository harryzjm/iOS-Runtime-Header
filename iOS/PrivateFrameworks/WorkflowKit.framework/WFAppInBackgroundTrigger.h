//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFAppInBackgroundTrigger
{
    NSArray *_selectedBundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (_Bool)isUserInitiated;
+ (_Bool)isAllowedToRunAutomatically;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *selectedBundleIdentifiers; // @synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end
