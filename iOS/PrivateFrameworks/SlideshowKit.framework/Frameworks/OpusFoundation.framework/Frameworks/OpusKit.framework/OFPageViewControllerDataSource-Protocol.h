//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/NSObject-Protocol.h>

@class OFPageViewController, OFUIViewController;

@protocol OFPageViewControllerDataSource <NSObject>
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerAfterViewController:(OFUIViewController *)arg2;
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerBeforeViewController:(OFUIViewController *)arg2;

@optional
- (long long)presentationIndexForPageViewController:(OFPageViewController *)arg1;
- (long long)presentationCountForPageViewController:(OFPageViewController *)arg1;
@end

