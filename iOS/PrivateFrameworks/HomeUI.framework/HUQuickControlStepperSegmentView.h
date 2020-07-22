//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface HUQuickControlStepperSegmentView : UIView
{
    _Bool _highlighted;
    NSString *_title;
    unsigned long long _segmentLocation;
    double _cornerRadius;
    UIView *_highlightedOverlayView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *highlightedOverlayView; // @synthesize highlightedOverlayView=_highlightedOverlayView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long segmentLocation; // @synthesize segmentLocation=_segmentLocation;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_updateCornerMask;
- (void)_createHighlightedOverlayViewIfNecessary;
- (void)_updateTitleFontSize;
- (void)_createTitleLabelIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;

@end

