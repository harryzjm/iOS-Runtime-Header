//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;

@interface AALoginContextTransientStorage : NSObject
{
    _Bool _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;
- (void).cxx_destruct;
- (void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2;
- (id)_keychainItemForUsername:(id)arg1 service:(id)arg2;
- (void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (id)_readNonsensitiveParameters;
- (void)_saveNonsensitiveParameters:(id)arg1;
- (void)clear;
- (id)storedContext;
- (void)save:(id)arg1;
- (id)init;

@end

