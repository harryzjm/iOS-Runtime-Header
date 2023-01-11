//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle, NSHashTable, NUArticleExcerptTraits, NUArticleExcerptViewController, NUArticleViewController, NUArticleWebViewController;

@protocol NUArticleViewControllerFactory <NSObject>
@property(readonly, nonatomic) NSHashTable *loadingListeners;
- (NUArticleExcerptViewController *)createArticleExcerptViewControllerWithArticle:(FCArticle *)arg1 traits:(NUArticleExcerptTraits *)arg2;
- (NUArticleWebViewController *)createArticleWebViewControllerWithArticle:(FCArticle *)arg1;
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1;
@end

