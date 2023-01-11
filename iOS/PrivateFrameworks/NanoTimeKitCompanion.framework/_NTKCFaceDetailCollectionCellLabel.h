//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UILabel;

@interface _NTKCFaceDetailCollectionCellLabel : UIView
{
    UILabel *_label;
    CAShapeLayer *_background;
    _Bool _usesShortTextWidth;
    _Bool _active;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool usesShortTextWidth; // @synthesize usesShortTextWidth=_usesShortTextWidth;
- (id)_inactiveTextColor;
- (id)_activeTextColor;
- (id)_inactiveFont;
- (id)_activeFont;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double firstLineBaseline;
@property(copy, nonatomic) NSString *text;
- (id)init;

@end
