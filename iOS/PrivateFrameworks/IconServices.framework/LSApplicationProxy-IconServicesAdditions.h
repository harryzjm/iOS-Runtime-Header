//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationProxy.h>

@interface LSApplicationProxy (IconServicesAdditions)
+ (id)__IS_appClipIconDataWithUnmaskedIconData:(id)arg1 variant:(int)arg2;
+ (_Bool)appClipMetadataAvailableForBundleIdentifier:(id)arg1;
+ (_Bool)clipTreatmentIsWhitelisted;
- (id)__IS_iconDataForVariant:(int)arg1 preferredIconName:(id)arg2 withOptions:(int)arg3;
- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;
@end
