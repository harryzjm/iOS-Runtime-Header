//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCArticleListRecordSource, FCArticleRecordSource, FCCKContentDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagRecordSource, FCWebArchiveSource, FCWidgetSectionConfigRecordSource;

@protocol FCContentContextInternal <NSObject, FCCacheFlushing>
@property(readonly, nonatomic) FCCKContentDatabase *contentDatabase;
@property(readonly) FCFeedDatabase *feedDatabase;
@property(readonly, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;
@property(readonly, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property(readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property(readonly, nonatomic) FCArticleListRecordSource *articleListRecordSource;
@property(readonly, nonatomic) FCWebArchiveSource *webArchiveSource;
@property(readonly, nonatomic) FCResourceRecordSource *resourceRecordSource;
@property(readonly, nonatomic) FCChannelMembershipController *channelMembershipController;
@property(readonly, nonatomic) FCTagRecordSource *tagRecordSource;
@property(readonly, nonatomic) FCArticleRecordSource *articleRecordSource;
@end
