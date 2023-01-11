//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementTimerControl : UIAccessibilityElement
{
    UILabel *_icon;
    UILabel *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UILabel *icon; // @synthesize icon=_icon;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;

@end
