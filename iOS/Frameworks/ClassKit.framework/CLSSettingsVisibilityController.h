//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject
{
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s _lock;
}

+ (id)shared;
- (void).cxx_destruct;
- (_Bool)settingsUIVisible;
- (id)currentUser;
- (id)cachedCurrentUserAppleID;
- (void)currentUserDidChange:(id)arg1;
- (void)dealloc;
- (void)unlock;
- (void)lock;
- (id)init;

@end
