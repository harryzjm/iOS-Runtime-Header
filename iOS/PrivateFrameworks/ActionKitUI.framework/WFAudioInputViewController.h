//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WFAudioInputViewController : UIViewController
{
    UILabel *_statusLabel;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (_Bool)accessibilityPerformMagicTap;
- (void)handleTap;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

