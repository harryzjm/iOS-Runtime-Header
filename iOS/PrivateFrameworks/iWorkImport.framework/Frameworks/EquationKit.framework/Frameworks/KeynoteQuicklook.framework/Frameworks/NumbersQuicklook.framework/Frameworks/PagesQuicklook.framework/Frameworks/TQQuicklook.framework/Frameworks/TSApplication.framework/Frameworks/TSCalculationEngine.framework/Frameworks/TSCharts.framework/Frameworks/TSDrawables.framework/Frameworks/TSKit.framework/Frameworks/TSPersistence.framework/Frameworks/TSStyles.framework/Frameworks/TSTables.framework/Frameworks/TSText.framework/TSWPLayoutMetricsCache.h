//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSWPStorage;

@interface TSWPLayoutMetricsCache : NSObject
{
    TSWPStorage *_storage;
    struct vector<TSWPParagraphMetrics, std::allocator<TSWPParagraphMetrics>> _paragraphMetrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)storage:(id)arg1 didChangeParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)storage:(id)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)storage:(id)arg1 didInsertParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)reset;
- (struct TSWPParagraphMetrics *)paragraphMetricsForParagraphAtIndex:(unsigned long long)arg1;
- (void)tearDown;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

