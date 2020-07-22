//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TIMobileAssetMatch : NSObject
{
    NSArray *_types;
    NSArray *_inputModeLevels;
    NSArray *_regions;
}

+ (id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;
+ (id)knownAssetRegionAttributes;
@property(readonly, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) NSArray *inputModeLevels; // @synthesize inputModeLevels=_inputModeLevels;
@property(readonly, nonatomic) NSArray *types; // @synthesize types=_types;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;

@end
