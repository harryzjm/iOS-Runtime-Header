//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@class FCArticle, FCIssue, NUArticleContext, NUArticleHostViewController, NUArticleViewController;

@protocol NUArticleViewControllerFactory <NSObject>
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 issue:(FCIssue *)arg2 context:(NUArticleContext *)arg3 relativePriority:(long long)arg4 articleHostViewController:(NUArticleHostViewController *)arg5;
@property(nonatomic, readonly) id loadingListeners;
@end

