//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, WGCheckView;

@interface WGCircleCheckView : UIView
{
    UIImageView *_circleView;
    WGCheckView *_checkView;
}

@property(retain, nonatomic, getter=_checkView) WGCheckView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic, getter=_circleView) UIImageView *circleView; // @synthesize circleView=_circleView;
- (void).cxx_destruct;
- (void)_setFrozen:(_Bool)arg1;
- (_Bool)_isFrozen;
- (void)_setChecked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureCheckViewIfNecessary;
- (id)_configureCircleViewIfNecessary;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=isChecked) _Bool checked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

