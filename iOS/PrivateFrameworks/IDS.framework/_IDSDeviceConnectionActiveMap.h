//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject
{
    NSMutableDictionary *_activeConnectionMap;
    struct os_unfair_lock_s _writeLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeActiveConnection:(id)arg1 forKey:(id)arg2;
- (_Bool)hasActiveConnection:(id)arg1 forKey:(id)arg2;
- (void)setActiveConnection:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
