//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSBridgedFeedArticleContext, UINavigationItem, UIViewController;
@protocol FCHeadlineProviding;

@protocol TSBridgedFeedArticleRouterType
- (UINavigationItem *)navigationItemForPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForHeadline:(id <FCHeadlineProviding>)arg1 withContext:(TSBridgedFeedArticleContext *)arg2;
- (void)routeToHeadline:(id <FCHeadlineProviding>)arg1 withContext:(TSBridgedFeedArticleContext *)arg2 shouldAutoPlayVideo:(_Bool)arg3;
@end
