//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject
{
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (id)description;
- (void)removeObject:(id)arg1;
- (void)removeAllObjectsWithTarget:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)nestingLevel;
- (_Bool)popAndInvoke;
- (void)setDiscardable:(_Bool)arg1;
- (_Bool)isDiscardable;
- (void)markEnd;
- (void)markBegin;
- (id)topUndoObject;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)arg1;
- (id)_beginMark;
- (id)popUndoObject;
- (void)push:(id)arg1;
- (void)setMax:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)max;
- (void)dealloc;
- (id)init;
- (void)_removeBottom;

@end
