//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class NSString, UILabel;

@interface TSKPlaceholderTextView : UITextView
{
    UILabel *mPlaceholderView;
}

- (_Bool)becomeFirstResponder;
- (void)p_textDidChange:(id)arg1;
- (void)setText:(id)arg1;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *placeholder;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

