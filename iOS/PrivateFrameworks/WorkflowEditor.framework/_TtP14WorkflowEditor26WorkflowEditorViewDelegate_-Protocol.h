//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, WFAction;

@protocol _TtP14WorkflowEditor26WorkflowEditorViewDelegate_
- (void)moveActionsFrom:(NSIndexSet *)arg1 to:(NSIndexSet *)arg2;
- (void)insertActions:(NSArray *)arg1 at:(long long)arg2;
- (void)insertAction:(WFAction *)arg1 at:(long long)arg2;
- (void)appendAction:(WFAction *)arg1 selectionAware:(_Bool)arg2;
- (void)removeActions:(NSArray *)arg1 mode:(long long)arg2;
@end

