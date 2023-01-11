//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCContentContextInternal-Protocol.h>

@class FCAVAssetDownloadManager, FCArticleListRecordSource, FCArticleRecordSource, FCAudioConfigRecordSource, FCCKContentDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCIssueListRecordSource, FCIssueRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagListRecordSource, FCTagRecordSource, FCWidgetSectionConfigRecordSource, NSArray, NSString;
@protocol FCAVAssetFactoryType, FCAssetKeyManagerType;

@interface FCContentContextInternal : NSObject <FCContentContextInternal>
{
    FCArticleRecordSource *_articleRecordSource;
    FCTagRecordSource *_tagRecordSource;
    FCTagListRecordSource *_tagListRecordSource;
    FCChannelMembershipController *_channelMembershipController;
    FCResourceRecordSource *_resourceRecordSource;
    FCArticleListRecordSource *_articleListRecordSource;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    FCForYouConfigRecordSource *_forYouConfigRecordSource;
    FCWidgetSectionConfigRecordSource *_widgetSectionConfigRecordSource;
    FCIssueRecordSource *_issueRecordSource;
    FCIssueListRecordSource *_issueListRecordSource;
    FCAudioConfigRecordSource *_audioConfigRecordSource;
    FCFeedDatabase *_feedDatabase;
    FCCKContentDatabase *_contentDatabase;
    id <FCAssetKeyManagerType> _assetKeyManager;
    id <FCAVAssetFactoryType> _avAssetFactory;
    FCAVAssetDownloadManager *_avAssetDownloadManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager; // @synthesize avAssetDownloadManager=_avAssetDownloadManager;
@property(retain, nonatomic) id <FCAVAssetFactoryType> avAssetFactory; // @synthesize avAssetFactory=_avAssetFactory;
@property(retain, nonatomic) id <FCAssetKeyManagerType> assetKeyManager; // @synthesize assetKeyManager=_assetKeyManager;
@property(retain, nonatomic) FCCKContentDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
@property(retain) FCFeedDatabase *feedDatabase; // @synthesize feedDatabase=_feedDatabase;
@property(retain, nonatomic) FCAudioConfigRecordSource *audioConfigRecordSource; // @synthesize audioConfigRecordSource=_audioConfigRecordSource;
@property(retain, nonatomic) FCIssueListRecordSource *issueListRecordSource; // @synthesize issueListRecordSource=_issueListRecordSource;
@property(retain, nonatomic) FCIssueRecordSource *issueRecordSource; // @synthesize issueRecordSource=_issueRecordSource;
@property(retain, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource; // @synthesize widgetSectionConfigRecordSource=_widgetSectionConfigRecordSource;
@property(retain, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource; // @synthesize forYouConfigRecordSource=_forYouConfigRecordSource;
@property(retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource; // @synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource;
@property(retain, nonatomic) FCArticleListRecordSource *articleListRecordSource; // @synthesize articleListRecordSource=_articleListRecordSource;
@property(retain, nonatomic) FCResourceRecordSource *resourceRecordSource; // @synthesize resourceRecordSource=_resourceRecordSource;
@property(retain, nonatomic) FCChannelMembershipController *channelMembershipController; // @synthesize channelMembershipController=_channelMembershipController;
@property(retain, nonatomic) FCTagListRecordSource *tagListRecordSource; // @synthesize tagListRecordSource=_tagListRecordSource;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(retain, nonatomic) FCArticleRecordSource *articleRecordSource; // @synthesize articleRecordSource=_articleRecordSource;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *recordSources;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
