//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface TSWPStorageBroadcaster : NSObject
{
    NSHashTable *_observers;
    NSHashTable *_paragraphObservers;
}

- (void).cxx_destruct;
- (void)broadcastStorage:(id)arg1 didChangeParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didInsertParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4 attributeKindChanges:(id)arg5;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4;
- (void)removeAllObservers;
- (void)removeParagraphObserver:(id)arg1;
- (void)addParagraphObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long paragraphObserverCount;
@property(readonly, nonatomic) unsigned long long observerCount;
- (void)dealloc;

@end

