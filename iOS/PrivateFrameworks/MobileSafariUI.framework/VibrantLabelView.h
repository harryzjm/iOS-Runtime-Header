//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VibrantLabelView : UILabel
{
    UIColor *_nonVibrantTextColor;
    _Bool _usesVibrantAppearance;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;

@end

