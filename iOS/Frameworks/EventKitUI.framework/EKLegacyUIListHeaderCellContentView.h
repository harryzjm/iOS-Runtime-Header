//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView
{
    double _date;
    _Bool _indentsForDots;
    _Bool _showWeekNumber;
}

@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
- (void)drawRect:(struct CGRect)arg1;
- (id)_weekNumberFont;
- (id)_normalTextShadowColor;
- (id)_normalTextColor;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect)arg4;
- (struct CGRect)_rectForOffetTextShadow:(struct CGRect)arg1;
@property(nonatomic) _Bool indentsForDots;
@property(nonatomic) double date;

@end

