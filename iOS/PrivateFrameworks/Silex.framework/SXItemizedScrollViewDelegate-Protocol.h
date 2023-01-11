//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/UIScrollViewDelegate-Protocol.h>

@class SXItemizedScrollView;

@protocol SXItemizedScrollViewDelegate <UIScrollViewDelegate>

@optional
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didHideViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 willShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
@end
