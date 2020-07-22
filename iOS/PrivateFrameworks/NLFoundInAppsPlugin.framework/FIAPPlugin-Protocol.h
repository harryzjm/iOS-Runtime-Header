//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NLFoundInAppsPlugin/NSObject-Protocol.h>

@class CSSearchableItem, CSUserAction, FIAPResult, NSArray, NSString;

@protocol FIAPPlugin <NSObject>
@property(readonly, nonatomic) NSString *identifier;

@optional
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2;
- (FIAPResult *)processUserAction:(CSUserAction *)arg1 searchableItem:(CSSearchableItem *)arg2;
- (FIAPResult *)processSearchableItem:(CSSearchableItem *)arg1;
- (FIAPResult *)setup;
@end

