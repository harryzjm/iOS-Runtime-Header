//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDBatchGetUserPrivacySettingsURLRequest
{
    NSArray *_containerPrivacySettings;
}

@property(retain, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (long long)databaseScope;

@end

