//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (ClipServicesExtras)
+ (id)cps_preIngestedURLWithBundleIdentifier:(id)arg1;
+ (id)cps_resolvedURLWithStoreIconURLString:(id)arg1 iconSize:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *cps_fallbackBundleIdentifier;
@property(readonly, nonatomic) NSString *cps_domain;
@property(readonly, nonatomic) _Bool cps_isFileURL;
@property(readonly, nonatomic) _Bool cps_isHTTPFamilyURL;
@end

