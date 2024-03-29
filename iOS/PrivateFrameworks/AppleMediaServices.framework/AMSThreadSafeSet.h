//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    AMSThreadSafeObject *_backingSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSThreadSafeObject *backingSet; // @synthesize backingSet=_backingSet;
- (_Bool)containsObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;

@end

