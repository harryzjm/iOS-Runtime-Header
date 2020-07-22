//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCacheCoordinatorLocking-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface FCCacheCoordinatorGCDReadWriteLock : NSObject <FCCacheCoordinatorLocking>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
