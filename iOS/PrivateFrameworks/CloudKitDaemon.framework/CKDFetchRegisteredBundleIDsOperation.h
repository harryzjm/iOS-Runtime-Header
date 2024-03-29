//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation
{
    NSArray *_bundleIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)main;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (id)_unitTestBundleIDsByContainerID:(id)arg1;

// Remaining properties
@property(retain, nonatomic) id <CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

