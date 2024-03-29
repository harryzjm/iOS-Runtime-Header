//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MRURoutingAccessoryView, MRURoutingSubtitleController, MRURoutingSubtitleView, MRUSlider, MRUVisualStylingProvider, MRUVolumeController, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol MRURoutingTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface MRURoutingTableViewCell : UITableViewCell
{
    _Bool _isVendorSpecific;
    _Bool _showChevron;
    _Bool _showChevronExpanded;
    id <MRURoutingTableViewCellDelegate> _delegate;
    UIImage *_iconImage;
    NSString *_title;
    UIImage *_protocolIcon;
    NSString *_protocolName;
    MRURoutingSubtitleController *_subtitleStateController;
    MRURoutingAccessoryView *_routingAccessoryView;
    MRUVolumeController *_volumeController;
    MRUVisualStylingProvider *_stylingProvider;
    UIImageView *_iconImageView;
    UIImageView *_outlineImageView;
    UILabel *_titleLabel;
    MRURoutingSubtitleView *_subtitleView;
    MRUSlider *_volumeSlider;
    UIView *_separatorView;
    UITapGestureRecognizer *_expandGestureRecognizer;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer; // @synthesize expandGestureRecognizer=_expandGestureRecognizer;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MRUSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) MRURoutingSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *outlineImageView; // @synthesize outlineImageView=_outlineImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool showChevronExpanded; // @synthesize showChevronExpanded=_showChevronExpanded;
@property(nonatomic) _Bool showChevron; // @synthesize showChevron=_showChevron;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(nonatomic) __weak MRUVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // @synthesize routingAccessoryView=_routingAccessoryView;
@property(readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // @synthesize subtitleStateController=_subtitleStateController;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(retain, nonatomic) UIImage *protocolIcon; // @synthesize protocolIcon=_protocolIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak id <MRURoutingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isVendorSpecific; // @synthesize isVendorSpecific=_isVendorSpecific;
- (struct CGRect)expandRect;
- (void)updateVisibility;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)volumeControllerDidFinishEqualization:(id)arg1;
- (void)volumeControllerWillBeginEqualization:(id)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 icon:(id)arg3 accessory:(long long)arg4;
- (void)transitionToNextVisibleStateWithDuration:(double)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)didTapToExpand;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (void)setSubtitleAccessory:(long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

