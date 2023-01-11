//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVibrancyEffect.h>

@class MTVisualStyling;

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect
{
    MTVisualStyling *_visualStyling;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling; // @synthesize visualStyling=_visualStyling;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisualStyling:(id)arg1;

@end
