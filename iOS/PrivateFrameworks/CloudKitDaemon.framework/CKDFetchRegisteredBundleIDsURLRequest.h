//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _bundleIDsFetchedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)applicationBundleIdentifierForContainerAccess;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;

@end

