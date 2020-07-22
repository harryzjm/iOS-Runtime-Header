//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSFastEnumeration-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration>
{
    NSMutableArray *_records;
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
    _Bool _calculateEstimatedBatchSize;
    unsigned long long _estimatedBatchSize;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)estimatedBatchSize;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)summaryDescription;
- (void)_setRecords:(id)arg1;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)_addAdditionalRecord:(id)arg1;
- (id)_additionalRecords;
- (void)_setAdditionalRecords:(id)arg1;
- (id)additionalRecordWithIdentifier:(id)arg1;
- (_Bool)hasChangeWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *records;
- (void)removeRecordWithIdentifier:(id)arg1;
- (void)addRecordsFromBatch:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)_initWithRecords:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)init;
- (id)cplFullDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)extractInitialDownloadBatch:(id *)arg1 shouldConsiderRecordFilter:(CDUnknownBlockType)arg2;
- (_Bool)sortBatchWithError:(id *)arg1;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;

@end

