//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl
{
    UITableViewCell *_cell;
    struct CGPoint _downPoint;
    double _focalY;
    double _focalHeight;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (id)_imageView;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldTrack;
- (void)_dynamicUserInterfaceTraitDidChange;
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateImageView;
- (void)layoutSubviews;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (id)grabberImage;

@end
