//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkout.h>

@class NSString;

@interface HKWorkout (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

