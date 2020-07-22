//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray, UISUISecurityContext;

__attribute__((visibility("hidden")))
@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding>
{
    _Bool _allowsEmbedding;
    _Bool _sourceIsManaged;
    _Bool _shouldMatchOnlyUserElectedExtensions;
    _Bool _shouldExcludeiCloudAddToDriveActivity;
    _Bool _shouldExcludeiCloudSharingActivity;
    _Bool _shouldPresentAirDropSection;
    _Bool _canExcludeExtensionActivities;
    _Bool _canShowShareSheetPlugIns;
    _Bool __unitTest_disableExcludingSourceApplicationFromOpenActivities;
    NSArray *_hostActivityConfigurations;
    NSArray *_activityItemValueClassNames;
    NSArray *_activityTypesToCreateInShareService;
    UISUISecurityContext *_securityScopedURLsForMatching;
    NSArray *_activityItemValueExtensionMatchingDictionaries;
    NSArray *_includedActivityTypes;
    NSArray *_excludedActivityTypes;
    NSArray *_activityTypeOrder;
    long long _excludedActivityCategories;
}

+ (void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool _unitTest_disableExcludingSourceApplicationFromOpenActivities; // @synthesize _unitTest_disableExcludingSourceApplicationFromOpenActivities=__unitTest_disableExcludingSourceApplicationFromOpenActivities;
@property(nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property(retain, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property(retain, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(retain, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property(nonatomic) _Bool canShowShareSheetPlugIns; // @synthesize canShowShareSheetPlugIns=_canShowShareSheetPlugIns;
@property(nonatomic) _Bool canExcludeExtensionActivities; // @synthesize canExcludeExtensionActivities=_canExcludeExtensionActivities;
@property(nonatomic) _Bool shouldPresentAirDropSection; // @synthesize shouldPresentAirDropSection=_shouldPresentAirDropSection;
@property(nonatomic) _Bool shouldExcludeiCloudSharingActivity; // @synthesize shouldExcludeiCloudSharingActivity=_shouldExcludeiCloudSharingActivity;
@property(nonatomic) _Bool shouldExcludeiCloudAddToDriveActivity; // @synthesize shouldExcludeiCloudAddToDriveActivity=_shouldExcludeiCloudAddToDriveActivity;
@property(nonatomic) _Bool shouldMatchOnlyUserElectedExtensions; // @synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(nonatomic) _Bool allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property(retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries; // @synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries;
@property(retain, nonatomic) UISUISecurityContext *securityScopedURLsForMatching; // @synthesize securityScopedURLsForMatching=_securityScopedURLsForMatching;
@property(retain, nonatomic) NSArray *activityTypesToCreateInShareService; // @synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService;
@property(retain, nonatomic) NSArray *activityItemValueClassNames; // @synthesize activityItemValueClassNames=_activityItemValueClassNames;
@property(retain, nonatomic) NSArray *hostActivityConfigurations; // @synthesize hostActivityConfigurations=_hostActivityConfigurations;
- (void).cxx_destruct;
- (id)availableActivityItemValueClasses;
- (id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3;
- (id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2;
- (id)contextForMatchingByActivityItemValueClasses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

