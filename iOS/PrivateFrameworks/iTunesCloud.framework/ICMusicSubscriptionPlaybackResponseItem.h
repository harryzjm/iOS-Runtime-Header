//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreHLSAssetInfo, ICURLBag, NSArray, NSDate, NSDictionary;

@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <NSCopying>
{
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
    NSDate *_assetExpirationDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *assetExpirationDate; // @synthesize assetExpirationDate=_assetExpirationDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileAssetWithFlavorType:(long long)arg1;
@property(readonly, nonatomic) long long storeAdamID;
@property(readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property(readonly, copy, nonatomic) NSArray *fileAssets;
- (id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2;

@end
