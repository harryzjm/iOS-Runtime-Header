//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPredicate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _block;
    NSPredicate *_predicate;
    NSMutableDictionary *_lastChanges;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableDictionary *lastChanges; // @synthesize lastChanges=_lastChanges;
@property(readonly, retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)notify:(id)arg1;
- (id)description;
- (id)initWithDispatchQueue:(id)arg1 predicate:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

