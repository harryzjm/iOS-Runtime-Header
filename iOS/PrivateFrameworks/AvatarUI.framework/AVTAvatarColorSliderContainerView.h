//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AvatarUI/AVTColorSliderDelegate-Protocol.h>

@class AVTAvatarAttributeEditorSectionColorItem, AVTColorSlider, NSArray;
@protocol AVTAvatarColorSliderContainerViewDelegate;

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate>
{
    AVTAvatarAttributeEditorSectionColorItem *_sectionItem;
    id <AVTAvatarColorSliderContainerViewDelegate> _delegate;
    AVTColorSlider *_slider;
    NSArray *_layoutConstraints;
}

@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) AVTColorSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id <AVTAvatarColorSliderContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVTAvatarAttributeEditorSectionColorItem *sectionItem; // @synthesize sectionItem=_sectionItem;
- (void).cxx_destruct;
- (void)colorSlider:(id)arg1 didFinishSelectingValue:(double)arg2;
- (void)colorSlider:(id)arg1 valueChanged:(double)arg2;
- (void)updateSliderWithColorPreset:(id)arg1 animated:(_Bool)arg2;
- (void)updateSliderTrackLayerAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSectionItem:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2;

@end
