//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _EXExtensionAvailablilityObserver : NSObject
{
    CDUnknownBlockType _block;
    NSArray *_queries;
}

- (void).cxx_destruct;
@property(readonly, copy) NSArray *queries; // @synthesize queries=_queries;
@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;
- (void)invalidate;
- (void)start;
- (void)dealloc;
- (id)initWithObserver:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

