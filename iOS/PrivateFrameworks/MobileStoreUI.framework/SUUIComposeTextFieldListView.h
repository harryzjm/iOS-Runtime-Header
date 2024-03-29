//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIResponder;
@protocol SUUIComposeTextFieldListViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIComposeTextFieldListView : UIView
{
    id <SUUIComposeTextFieldListViewDelegate> _delegate;
    NSMutableArray *_fields;
    _Bool _isValid;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SUUIComposeTextFieldListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void)_updateValidity;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (id)textForFieldAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (_Bool)isValid;
@property(readonly, nonatomic) UIResponder *initialFirstResponder;
@property(readonly, nonatomic) double height;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

