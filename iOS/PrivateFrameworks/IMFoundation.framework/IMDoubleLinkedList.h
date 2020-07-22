//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject
{
    IMDoubleLinkedListNode *_first;
    IMDoubleLinkedListNode *_last;
    unsigned long long _count;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(retain) IMDoubleLinkedListNode *last; // @synthesize last=_last;
@property(retain) IMDoubleLinkedListNode *first; // @synthesize first=_first;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (void)removeAllObjects;
- (void)removeLinkedListNode:(id)arg1;
- (void)pushLinkedListNode:(id)arg1;
- (void)appendLinkedListNode:(id)arg1;
- (id)popObject;
- (void)pushObject:(id)arg1;
- (void)appendObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end
