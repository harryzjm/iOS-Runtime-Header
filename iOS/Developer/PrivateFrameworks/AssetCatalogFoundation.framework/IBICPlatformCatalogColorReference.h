//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBICColorSet, NSString;

@interface IBICPlatformCatalogColorReference : NSObject
{
    NSString *_platformID;
    NSString *_colorName;
    IBICColorSet *_representativeColorSet;
}

+ (id)referenceForSystemColorWithName:(id)arg1 platformID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBICColorSet *representativeColorSet; // @synthesize representativeColorSet=_representativeColorSet;
@property(readonly, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(readonly, nonatomic) NSString *platformID; // @synthesize platformID=_platformID;
- (_Bool)isEqualToColorReference:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)effectiveColorValueForSlot:(id)arg1;
- (id)initWithColorSet:(id)arg1 fromPlatform:(id)arg2;

@end
