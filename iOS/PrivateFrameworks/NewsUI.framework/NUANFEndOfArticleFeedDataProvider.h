//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUFeedDataProvider-Protocol.h>
#import <NewsUI/NUFeedTriggerProvider-Protocol.h>

@class NSString, NUANFEndOfArticleFeedCollectionViewLayout, NUEndOfArticleSettings, NUFeedBlueprint, UICollectionViewLayout;
@protocol NUFeedHeadlineCollectionViewCellRenderer;

@interface NUANFEndOfArticleFeedDataProvider : NSObject <NUFeedDataProvider, NUFeedTriggerProvider>
{
    NUFeedBlueprint *_blueprint;
    id <NUFeedHeadlineCollectionViewCellRenderer> _headlineRenderer;
    NUEndOfArticleSettings *_settings;
    NUANFEndOfArticleFeedCollectionViewLayout *_feedLayout;
}

@property(readonly, nonatomic) NUANFEndOfArticleFeedCollectionViewLayout *feedLayout; // @synthesize feedLayout=_feedLayout;
@property(copy, nonatomic) NUEndOfArticleSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <NUFeedHeadlineCollectionViewCellRenderer> headlineRenderer; // @synthesize headlineRenderer=_headlineRenderer;
@property(readonly, nonatomic) NUFeedBlueprint *blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (id)buildBlueprintForHeadlings:(id)arg1;
- (id)feedTriggerResetForFeedSettings:(id)arg1;
- (id)feedTriggerInitialLoadForFeedSettings:(id)arg1;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property(readonly, nonatomic) unsigned long long contentHeight;
- (id)initWithHeadlines:(id)arg1 settings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

