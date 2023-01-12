//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel, UITextView;
@protocol SFPrivacyReportGridItemDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportExplanationDetailItemView : UIView
{
    UIView *_hairline;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_hairlineTopConstraint;
    _Bool _usesInsetStyle;
    id <SFPrivacyReportGridItemDelegate> _delegate;
    unsigned long long _gridPosition;
    UILabel *_titleLabel;
    UITextView *_bodyTextView;
    double _titleLabelTopSpacing;
    double _hairlineTopSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesInsetStyle; // @synthesize usesInsetStyle=_usesInsetStyle;
@property(nonatomic) double hairlineTopSpacing; // @synthesize hairlineTopSpacing=_hairlineTopSpacing;
@property(nonatomic) double titleLabelTopSpacing; // @synthesize titleLabelTopSpacing=_titleLabelTopSpacing;
@property(readonly, nonatomic) UITextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long gridPosition; // @synthesize gridPosition=_gridPosition;
@property(nonatomic) __weak id <SFPrivacyReportGridItemDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTopSpacing;
- (void)_updateTopConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

