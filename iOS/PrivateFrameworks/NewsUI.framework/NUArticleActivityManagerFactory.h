//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleActivityFactory-Protocol.h>

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;
@protocol NUArticleActivityOptionsProvider, NUURLHandling;

@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory>
{
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id <NUURLHandling> _URLHandler;
    id <NUArticleActivityOptionsProvider> _optionsProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NUArticleActivityOptionsProvider> optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, nonatomic) id <NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
- (id)activityProviderForHeadline:(id)arg1 reportConcernViewPresenter:(id)arg2 URLModifier:(id)arg3;
- (id)initWithReadingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4 optionsProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
