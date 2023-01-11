//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class CLCircularRegion, NSArray, NSString;

@interface CLSBusinessItem : NSObject <NSSecureCoding>
{
    _Bool _cached;
    NSString *_name;
    CLCircularRegion *_region;
    NSArray *_categories;
    unsigned long long _muid;
    long long _venueCapacity;
    NSArray *_businessCategories;
}

+ (_Bool)supportsSecureCoding;
+ (id)_businessCategoriesFromGeoMapItems:(id)arg1;
+ (double)_defaultRadiusForCategories:(id)arg1;
+ (id)_regionFromMapItem:(id)arg1;
@property(copy, nonatomic) NSArray *businessCategories; // @synthesize businessCategories=_businessCategories;
@property(nonatomic) long long venueCapacity; // @synthesize venueCapacity=_venueCapacity;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool cached; // @synthesize cached=_cached;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isEnriched;
- (id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3;
- (id)initFromMapItem:(id)arg1;

@end
