//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface STRestrictingApplicationsGroupSpecifierProvider
{
    NSArray *_authorizationRecords;
}

- (void).cxx_destruct;
@property(retain) NSArray *authorizationRecords; // @synthesize authorizationRecords=_authorizationRecords;
- (id)isFamilyControlsEnabled:(id)arg1;
- (void)setFamilyControlsEnabled:(id)arg1 forSpecifier:(id)arg2;
- (long long)getAuthorizationStatusForRecordIdentifier:(id)arg1 fromRecords:(id)arg2;
- (id)init;

@end

