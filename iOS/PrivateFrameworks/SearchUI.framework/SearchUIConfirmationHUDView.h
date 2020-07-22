//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel, UIVisualEffectView;

@interface SearchUIConfirmationHUDView : UIView
{
    UIVisualEffectView *_effectView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
- (void).cxx_destruct;
- (void)animateCheckmark;
- (void)layoutSubviews;
- (id)init;

@end

