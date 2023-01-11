//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaStream/MSASPlatform-Protocol.h>

@class ACAccountStore, NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>
{
    ACAccountStore *_accountStore;
}

@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (_Bool)shouldEnableNewFeatures;
- (int)MMCSConcurrentConnectionsCount;
- (id)personIDsEnabledForAlbumSharing;
- (_Bool)personIDEnabledForAlbumSharing:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (_Bool)MSASIsAllowedToUploadAssets;
- (_Bool)MSASIsAllowedToTransferMetadata;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (_Bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)baseSharingURLForPersonID:(id)arg1;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (Class)pluginClass;
- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

