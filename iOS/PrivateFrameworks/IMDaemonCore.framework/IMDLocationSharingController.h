//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class FMFSession;

@interface IMDLocationSharingController : NSObject
{
    FMFSession *_session;
}

+ (void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(_Bool)arg3 broadcastChanges:(_Bool)arg4;
+ (void)addLocationShareItemToMatchingChats:(id)arg1;
+ (id)sharedInstance;
- (void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3;
- (void)receivedIncomingLocationSharePacket:(id)arg1;
- (void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

