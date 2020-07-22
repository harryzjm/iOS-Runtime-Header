//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class DOCTag, UIFont, UILabel, UIVisualEffectView;
@protocol DOCTagViewDelegate;

@interface DOCTagView : UIView
{
    DOCTag *_tagValue;
    id <DOCTagViewDelegate> _delegate;
    UILabel *_tagNameLabel;
    UIVisualEffectView *_tagNameLabelWrapper;
}

@property(readonly, nonatomic) UIVisualEffectView *tagNameLabelWrapper; // @synthesize tagNameLabelWrapper=_tagNameLabelWrapper;
@property(readonly, nonatomic) UILabel *tagNameLabel; // @synthesize tagNameLabel=_tagNameLabel;
@property(nonatomic) __weak id <DOCTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DOCTag *tagValue; // @synthesize tagValue=_tagValue;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (id)viewForLastBaselineLayout;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(retain, nonatomic) UIFont *font;
- (void)removeTag:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)longPressGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

