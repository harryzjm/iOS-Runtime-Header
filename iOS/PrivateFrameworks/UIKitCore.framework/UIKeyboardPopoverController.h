//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardPopoverController : UIViewController
{
    UIView *_contentView;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_canShowWhileLocked;
- (long long)overrideUserInterfaceStyle;
- (_Bool)handleHardwareKeyboardEvent:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (_Bool)isPresented;
- (id)init;

@end

