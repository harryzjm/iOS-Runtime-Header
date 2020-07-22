//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NUEndOfArticleSettings;
@protocol NUFeedBlueprintProvider;

@interface NUANFEndOfArticleFeedCollectionViewLayout : UICollectionViewFlowLayout
{
    id <NUFeedBlueprintProvider> _blueprintProvider;
    NUEndOfArticleSettings *_settings;
}

@property(copy, nonatomic) NUEndOfArticleSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) __weak id <NUFeedBlueprintProvider> blueprintProvider; // @synthesize blueprintProvider=_blueprintProvider;
- (void).cxx_destruct;
- (struct CGSize)sizeForItemsInBlueprint:(id)arg1;
- (struct UIEdgeInsets)sectionInset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)itemSize;
- (long long)scrollDirection;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayoutWithEndOfArticleSettings:(id)arg1;
- (id)initWithBlueprintProvider:(id)arg1 settings:(id)arg2;

@end
