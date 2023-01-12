//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIColor, UIImageView;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListAccessoryControl : UIControl
{
    UIImageView *_imageView;
    _Bool _needsImageViewUpdate;
    long long _type;
    id <UITableConstants> _constants;
    UIColor *_accessoryTintColor;
    UIColor *_accessoryBackgroundColor;
    CDUnknownBlockType _actionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIColor *accessoryBackgroundColor; // @synthesize accessoryBackgroundColor=_accessoryBackgroundColor;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_renderedImage;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateImageViewIfNeeded;
- (void)_setNeedsImageViewUpdate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_executeActionHandler;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)initWithType:(long long)arg1 constants:(id)arg2;

@end

