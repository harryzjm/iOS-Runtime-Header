//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIViewController;

__attribute__((visibility("hidden")))
@interface SUUIIPadChartsColumnView : UIView
{
    struct UIEdgeInsets _contentInset;
    NSArray *_contentViewControllers;
    long long _selectedViewControllerIndex;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_addSelectedViewController;
- (void)layoutSubviews;
- (void)setSelectedViewControllerIndex:(long long)arg1;
@property(readonly, nonatomic) UIViewController *selectedViewController;

@end

