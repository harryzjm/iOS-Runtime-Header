//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface HRHealthRecordsMigrator : NSObject
{
    MISSING_TYPE *healthStore;
    MISSING_TYPE *searchIndexController;
    MISSING_TYPE *keyValueDomain;
    MISSING_TYPE *queue;
    MISSING_TYPE *healthRecordsKeyValueDomain;
    MISSING_TYPE *dataVersionKey;
}

- (void).cxx_destruct;
- (id)init;
- (void)migrateIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;

@end
