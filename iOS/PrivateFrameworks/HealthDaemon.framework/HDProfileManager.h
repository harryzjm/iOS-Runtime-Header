//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDaemon, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDProfileManager : NSObject
{
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

- (void).cxx_destruct;
- (void)reloadSecondaryProfiles;
- (id)newProfileOfType:(long long)arg1 daemon:(id)arg2 directoryPath:(id)arg3;
- (id)_profileIdentifierForDirectoryName:(id)arg1 error:(id *)arg2;
- (id)_directoryNameForProfileIdentifier:(id)arg1;
- (id)_directoryURLForProfileIdentifier:(id)arg1;
- (void)_resourceQueue_invalidateAndWait;
- (id)_resourceQueue_profileForIdentifier:(id)arg1;
- (_Bool)_resourceQueue_deleteProfile:(id)arg1 error:(id *)arg2;
- (void)_resourceQueue_createProfileOfType:(long long)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resourceQueue_loadSecondaryProfiles;
- (void)_resourceQueue_setProfile:(id)arg1 forIdentifier:(id)arg2;
- (void)invalidateAndWait;
- (void)getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProfile:(id)arg1 forIdentifier:(id)arg2;
- (id)profileForIdentifier:(id)arg1;
- (id)initWithDaemon:(id)arg1;

@end

