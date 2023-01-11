//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOKeyBagNotification : NSObject
{
    int _currentState;
    int _notifyToken;
}

+ (id)sharedObject;
- (void)updateState;
@property(readonly, nonatomic) int state;
- (void)removeObserver:(id)arg1;
- (_Bool)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2;
- (_Bool)canAccessFilesWithProtection:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

