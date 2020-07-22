//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKModifyRecordsOperation.h>

#import <MapsSupport/MSPCloudRequest-Protocol.h>

@class NSString;

@interface CKModifyRecordsOperation (MSPCloudKitAccountAccess) <MSPCloudRequest>
- (void)addCloudAccessCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property(readonly) Class superclass;
@end

