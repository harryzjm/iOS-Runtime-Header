//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface EKEventStoreWeakWrapper : NSObject
{
    void *_unsafeRawPointer;
    EKEventStore *_weakEventStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) void *unsafeRawPointer;
@property(readonly, nonatomic) EKEventStore *weakEventStore;
- (id)initWithEventStore:(id)arg1;

@end

