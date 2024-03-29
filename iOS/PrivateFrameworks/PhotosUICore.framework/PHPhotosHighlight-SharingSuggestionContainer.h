//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotosHighlight.h>

@class NSArray, NSSet, NSString, PHAssetCollection;
@protocol NSCopying><NSObject;

@interface PHPhotosHighlight (SharingSuggestionContainer)
@property(readonly, nonatomic) NSSet *px_sl_containedSharingSuggestionObjectIDs;
@property(readonly, nonatomic) NSArray *px_sl_containedSharingSuggestions;
@property(readonly, nonatomic) PHAssetCollection *px_sl_containerCollection;
- (void)px_sl_getKeyAsset:(id *)arg1 suggestedDate:(id *)arg2 locations:(id *)arg3;
- (id)px_sl_fetchAssetCollections;
@property(readonly, nonatomic) NSString *px_sl_title;
@property(readonly, nonatomic) id <NSCopying><NSObject> px_sl_identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

