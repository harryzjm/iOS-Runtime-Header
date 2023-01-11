//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDTokenDeletionURLRequest
{
    NSData *_apsToken;
    NSString *_apsEnvironmentString;
    NSString *_bundleID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)generateRequestOperations;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)arg1 apsToken:(id)arg2 apsEnvironmentString:(id)arg3 bundleID:(id)arg4;

@end
