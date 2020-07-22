//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDCloudSyncServerInterface-Protocol.h>

@class NSString;

@interface HDCloudSyncServer <HDCloudSyncServerInterface>
{
}

- (id)remote_waitOnHealthCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)retmote_fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudResetWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createCloudShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
