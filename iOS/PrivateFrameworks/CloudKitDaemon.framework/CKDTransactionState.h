//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAssetBatch, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDTransactionState : NSObject
{
    CKDAssetBatch *_assetBatch;
    NSMutableDictionary *_itemByAssetId;
}

@property(retain, nonatomic) NSMutableDictionary *itemByAssetId; // @synthesize itemByAssetId=_itemByAssetId;
@property(retain, nonatomic) CKDAssetBatch *assetBatch; // @synthesize assetBatch=_assetBatch;
- (void).cxx_destruct;
- (id)init;

@end

