//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AccessibilityInfoPanelWindow, NSString, UILabel, UIView, UIViewController;

@interface AccessibilityInfoPanel : NSObject
{
    UIViewController *_accessibilityInfoPanelController;
    AccessibilityInfoPanelWindow *_accessibilityInfoPanelWindow;
    UIView *_accessibilityInfoPanelView;
    UIView *_rootView;
    UILabel *_labelView;
    UIView *_backgroundView;
    NSString *_title;
    _Bool _displayOnBottomEdge;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_rootView;
- (id)_accessibilityInfoPanelView;
- (void)_layoutSubviews;
- (id)_accessibilityInfoPanelWindow;
- (id)_accessibilityInfoPanelController;
- (struct CGRect)_displayFrame;
- (void)fadeOut;
- (void)hide;
- (void)show;
@property(nonatomic) _Bool displayOnBottomEdge; // @dynamic displayOnBottomEdge;
- (void)_setup;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

