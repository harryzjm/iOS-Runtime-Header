//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBFoundation/NSCopying-Protocol.h>

@class IBICContrastAppearance, IBICLuminosityAppearance, IBICVibrancyAppearance, NSArray;

@interface IBICAppearanceSpecification : NSObject <NSCopying>
{
    IBICLuminosityAppearance *_luminosityAppearance;
    IBICVibrancyAppearance *_vibrancyAppearance;
    IBICContrastAppearance *_contrastAppearance;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *slotComponents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToAppearanceSpecification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLuminosityAppearance:(id)arg1 vibrancyAppearance:(id)arg2 contrastAppearance:(id)arg3;

@end
