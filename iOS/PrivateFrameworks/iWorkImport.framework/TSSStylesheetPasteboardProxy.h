//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, TSSStylesheet, TSUMutableRetainedPointerSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSSStylesheetPasteboardProxy
{
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    _Bool mSelfArchiving;
}

- (void)saveToArchiver:(id)arg1;
- (void)addStyleReference:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;

@end
