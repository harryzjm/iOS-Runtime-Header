//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSUtility/TSUFlushable-Protocol.h>

@class NSString, TSUFlushingManager;
@protocol NSLocking;

@interface TSUFlushableObject : NSObject <TSUFlushable>
{
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)flush;
- (_Bool)hasFlushableContent;
- (void)unload;
- (void)addOwner;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)ownerDidAccess;
- (void)ownerWillAccess;
- (id)ownerAutoreleasedAccess;
- (void)ownerRelease;
- (id)ownerRetain;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
