//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CKDFetchWhitelistedBundleIDsURLRequest
{
    CDUnknownBlockType _bundleIDsFetchedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)sourceApplicationBundleIdentifier;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;

@end

