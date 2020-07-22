//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSWPLayoutManager;

__attribute__((visibility("hidden")))
@interface TSWPLinkedLayout
{
}

- (_Bool)optimizeSegmentationOfEmptyLines;
- (id)nextTargetTopicNumbers;
- (id)previousTargetTopicNumbers;
- (id)nextTargetFirstColumn;
- (void)validate;
- (_Bool)repShouldPreventCaret;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (id)previousTargetLastColumn;
- (_Bool)isLinked;
- (_Bool)isOverflowing;
- (_Bool)isLastTarget;
- (void)i_validateTextLayout;
@property(retain, nonatomic) TSWPLayoutManager *layoutManager; // @dynamic layoutManager;
@property(nonatomic) _Bool textLayoutValid; // @dynamic textLayoutValid;

@end

