//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class OFUIPagingView, UIView;

@protocol OFUIPagingViewDelegate <NSObject>
- (UIView *)viewForPageInPagingView:(OFUIPagingView *)arg1 atIndex:(long long)arg2;
- (long long)numberOfPagesInPagingView:(OFUIPagingView *)arg1;

@optional
- (void)pagingViewDidEndMoving:(OFUIPagingView *)arg1;
- (void)pagingViewWillBeginMoving:(OFUIPagingView *)arg1;
- (void)pagesDidChangeInPagingView:(OFUIPagingView *)arg1;
- (void)currentPageDidChangeInPagingView:(OFUIPagingView *)arg1;
@end

