//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _REEngineDefaults : NSObject
{
    NSString *_domain;
    NSUserDefaults *_defaults;
    NSMutableSet *_registeredPaths;
    NSMutableDictionary *_registeredBlocks;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

+ (id)globalDefaults;
+ (id)defaultsForEngine:(id)arg1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_registerCallback:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)_domainName;
- (id)_idValueForKey:(id)arg1 set:(_Bool *)arg2;
- (long long)_NSIntegerValueForKey:(id)arg1 set:(_Bool *)arg2;
- (_Bool)_BOOLValueForKey:(id)arg1 set:(_Bool *)arg2;
- (void)dealloc;
- (id)initWithDomain:(id)arg1;

@end

