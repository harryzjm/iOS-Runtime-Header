//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class CNLabeledValue, MKPlaceSectionHeaderView, MKPlatterView, NSArray, NSLayoutConstraint, NSString, UIColor, UITapGestureRecognizer, _MKUILabel;
@protocol UIItemProviderWriting;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoContactRowView <UIGestureRecognizerDelegate>
{
    MKPlaceSectionHeaderView *_headerView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_topToIconConstraint;
    NSLayoutConstraint *_titleToValueConstraint;
    NSLayoutConstraint *_valueToTrailingViewConstraint;
    NSArray *_iconConstraints;
    NSArray *_titleConstraints;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _bottomHairlineFullWidth;
    CNLabeledValue *_labeledValue;
    _MKUILabel *_titleLabel;
    _MKUILabel *_valueLabel;
    MKPlatterView *_iconView;
    CDUnknownBlockType _iconSelectedBlock;
    NSLayoutConstraint *_valueToBottomConstraint;
    UIColor *_labelColor;
}

+ (id)icon;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) NSLayoutConstraint *valueToBottomConstraint; // @synthesize valueToBottomConstraint=_valueToBottomConstraint;
@property(nonatomic, getter=isBottomHairlineFullWidth) _Bool bottomHairlineFullWidth; // @synthesize bottomHairlineFullWidth=_bottomHairlineFullWidth;
@property(copy, nonatomic) CDUnknownBlockType iconSelectedBlock; // @synthesize iconSelectedBlock=_iconSelectedBlock;
@property(readonly, nonatomic) MKPlatterView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) _MKUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) int analyticsTarget;
@property(readonly, nonatomic) id <UIItemProviderWriting> draggableContent;
- (_Bool)_iconTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updateGestureRecognizer;
- (_Bool)_pointIsInIcon:(struct CGPoint)arg1;
@property(nonatomic, getter=isIconVisible) _Bool iconVisible;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)_labeledValueExpectedValueType;
- (void)copy:(id)arg1;
- (id)_iconAccessibilityLabel;
- (id)_icon;
- (id)_valueString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
