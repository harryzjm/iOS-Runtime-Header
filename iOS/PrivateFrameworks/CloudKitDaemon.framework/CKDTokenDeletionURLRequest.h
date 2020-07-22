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

@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithApsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3;

@end

