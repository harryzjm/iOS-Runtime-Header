//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PXScoreView : UIView
{
    UILabel *_label;
    unsigned long long _colorScale;
}

- (void).cxx_destruct;
- (void)setScore:(double)arg1;
- (void)layoutSubviews;
- (id)initWithColorScale:(unsigned long long)arg1;
- (id)init;

@end

