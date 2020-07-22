//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDProfileServerInterface-Protocol.h>

@class NSString;

@interface HDProfileServer <HDProfileServerInterface>
{
}

- (void)remote_setDisplayName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

