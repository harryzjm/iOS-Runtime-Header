//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _MKSmallCalloutPassthroughButton : UIControl
{
    UIControl *_targetControl;
    UIView *_highlightView;
}

@property(retain, nonatomic) UIControl *targetControl; // @synthesize targetControl=_targetControl;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
