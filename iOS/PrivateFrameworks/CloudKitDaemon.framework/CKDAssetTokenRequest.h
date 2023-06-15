//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject
{
    unsigned int _size;
    unsigned int _sizeUpperBound;
    NSMutableArray *_assetBatches;
    NSMutableSet *_failedAssetBatches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *failedAssetBatches; // @synthesize failedAssetBatches=_failedAssetBatches;
@property(nonatomic) unsigned int sizeUpperBound; // @synthesize sizeUpperBound=_sizeUpperBound;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *assetBatches; // @synthesize assetBatches=_assetBatches;
- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)isEmpty;
- (id)successfulBatches;
- (_Bool)hasSuccessfulBatches;
- (void)addFailedBatch:(id)arg1;
- (void)addAssetBatch:(id)arg1;
- (id)init;

@end

