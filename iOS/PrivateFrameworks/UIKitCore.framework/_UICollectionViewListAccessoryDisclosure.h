//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSString, UIColor, UIImage, UIImageView, UIMenu;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListAccessoryDisclosure : UIControl
{
    UIImageView *_imageView;
    _Bool _rotated;
    UIImage *_image;
    id <UITableConstants> _constants;
    UIColor *_accessoryTintColor;
    CDUnknownBlockType _actionHandler;
    double _rotationAngle;
    UIMenu *_menu;
    CDUnknownBlockType _selectedElementDidChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectedElementDidChangeHandler; // @synthesize selectedElementDidChangeHandler=_selectedElementDidChangeHandler;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) _Bool rotated; // @synthesize rotated=_rotated;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)forcedSelectionOfMenu:(id)arg1 willChangeTo:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)_enforcedWidthForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_minimumSizeForHitTesting;
- (void)_updateRotation;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_executeActionHandler;
- (unsigned long long)_controlEventsForActionTriggered;
@property(readonly, nonatomic) UIControl *control;
- (id)initWithConstants:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

