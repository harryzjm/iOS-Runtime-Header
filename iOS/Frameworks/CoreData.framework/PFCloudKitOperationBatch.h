//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitOperationBatch : NSObject
{
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_records;
    NSMutableSet *_recordIDs;
    unsigned long long _sizeInBytes;
}

- (void)dealloc;
- (id)init;

@end

