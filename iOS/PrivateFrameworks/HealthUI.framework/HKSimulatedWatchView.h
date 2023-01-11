//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface HKSimulatedWatchView : UIView
{
    UIView *_containerView;
    UIView *_watchScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *watchScreenView; // @synthesize watchScreenView=_watchScreenView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (id)initWithIconImage:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 tintColor:(id)arg4;
- (id)initWithWatchView:(id)arg1;

@end
