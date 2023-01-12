//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessory.h>

@interface HMAccessory (HomePod)
+ (id)accessoriesExcludingCurrentAccessoryFromAccessories:(id)arg1;
+ (id)accessoriesFromAccessories:(id)arg1 excludingStereoCompanionForAccessory:(id)arg2;
+ (id)appleAnnounceHostAccessoriesFromAccessories:(id)arg1;
+ (id)appleAnnounceAccessoriesFromAccessories:(id)arg1;
+ (id)announceAccessoriesWithAnnounceEnabledFromAccessories:(id)arg1;
+ (id)announceAccessoriesFromAccessories:(id)arg1;
+ (id)accessoriesWithAnnounceEnabledFromAccessories:(id)arg1;
- (_Bool)isPartOfHome:(id)arg1;
@property(readonly, nonatomic) _Bool isHomePod;
@property(readonly, nonatomic) _Bool an_isEndpoint;
@property(readonly) _Bool an_isAppleAnnounceHostAccessory;
@property(readonly) _Bool an_isAppleAnnounceAccessory;
@property(readonly) _Bool an_isAnnounceAccessory;
@property(readonly, nonatomic) _Bool an_isAnnounceEnabled;
@end
