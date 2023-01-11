//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDoubleLinkedListNode : NSObject
{
    IMDoubleLinkedListNode *_prev;
    IMDoubleLinkedListNode *_next;
    id _object;
}

@property(retain) id object; // @synthesize object=_object;
@property(retain) IMDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain) IMDoubleLinkedListNode *prev; // @synthesize prev=_prev;
- (void)orphan;
- (void)removeFromList;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

