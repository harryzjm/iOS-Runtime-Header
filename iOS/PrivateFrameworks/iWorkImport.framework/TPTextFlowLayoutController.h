//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>

@class NSMapTable, NSString, TPPaginatedPageController;

__attribute__((visibility("hidden")))
@interface TPTextFlowLayoutController : NSObject <TSWPLayoutOwner, TSKChangeSourceObserver>
{
    TPPaginatedPageController *_pageController;
    NSMapTable *_layoutMgrs;
    NSMapTable *_flows;
    _Bool _tornDown;
}

- (void).cxx_destruct;
- (id)p_flowForLayoutMgr:(id)arg1;
- (id)p_layoutMgrForFlow:(id)arg1;
- (void)p_setLayoutMgr:(id)arg1 forFlow:(id)arg2;
- (id)p_orderedTextBoxesForFlow:(id)arg1 textBoxes:(id)arg2 onPageIndex:(unsigned long long)arg3;
- (id)p_flowsOnPageIndex:(unsigned long long)arg1;
- (id)p_flowsOnPage:(id)arg1 textBoxes:(inout id)arg2;
- (void)i_trimFlow:(id)arg1 pageIndex:(unsigned long long)arg2 toCharIndex:(unsigned long long)arg3;
- (id)previousTargetTopicNumbersForTarget:(id)arg1;
- (id)previousTargetLastColumnForTarget:(id)arg1;
- (id)p_previousTextBoxForTarget:(id)arg1;
- (id)textWrapper;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (_Bool)caresAboutStorageChanges;
- (unsigned long long)pageIndexNeedingLayoutPreviousToPageIndex:(unsigned long long)arg1;
- (id)hintForFlow:(id)arg1 pageIndex:(unsigned long long)arg2;
- (void)invalidateFlows:(id)arg1 startingPage:(id)arg2;
- (void)processWidowAndInflationOnPage:(id)arg1;
- (void)deflatePage:(id)arg1 intoHints:(inout id)arg2 topicNumbers:(inout id)arg3;
- (void)layOutFlowsIfNeededOnPage:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

