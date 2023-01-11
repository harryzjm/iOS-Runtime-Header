//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/CSPageView-Protocol.h>

@class UIViewController;
@protocol CSPageViewControllerProtocol;

@interface CSPageViewBase <CSPageView>
{
    UIViewController<CSPageViewControllerProtocol> *_pageViewController;
    double _contentWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) __weak UIViewController<CSPageViewControllerProtocol> *pageViewController; // @synthesize pageViewController=_pageViewController;

@end
