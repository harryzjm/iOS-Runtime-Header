//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NUErrorMessage;

@protocol NUErrorMessageFactory <NSObject>
- (NUErrorMessage *)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
- (NUErrorMessage *)errorMessageForArticleView;
@end
