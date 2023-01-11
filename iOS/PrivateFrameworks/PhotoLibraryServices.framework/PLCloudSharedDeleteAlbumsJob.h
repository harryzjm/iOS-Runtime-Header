//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob
{
    NSArray *_albumCloudGUIDsToDelete;
    NSString *_inviterAddress;
}

+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *inviterAddress; // @synthesize inviterAddress=_inviterAddress;
@property(retain, nonatomic) NSArray *albumCloudGUIDsToDelete; // @synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end
