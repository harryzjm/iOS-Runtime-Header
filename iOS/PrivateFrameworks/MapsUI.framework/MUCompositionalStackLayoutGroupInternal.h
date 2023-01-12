//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MUCompositionalStackLayoutGroupInternal : NSObject
{
    MISSING_TYPE *group;
}

- (void).cxx_destruct;
- (id)init;
- (void)setAlignmentFittingSizePriority:(float)arg1 forArrangedLayoutItem:(id)arg2;
- (float)alignmentFittingSizePriorityForArrangedLayoutItem:(id)arg1;
- (void)setAlignmentBoundsContent:(_Bool)arg1 forArrangedLayoutItem:(id)arg2;
- (_Bool)alignmentBoundsContentForArrangedLayoutItem:(id)arg1;
- (void)setAlignment:(long long)arg1 forArrangedLayoutItem:(id)arg2;
- (long long)alignmentForArrangedLayoutItem:(id)arg1;
- (void)resetAlignmentForArrangedLayoutItem:(id)arg1;
- (void)disableAlignmentForArrangedLayoutItem:(id)arg1;
- (_Bool)hasAlignmentForArrangedLayoutItem:(id)arg1;
- (void)setOffset:(struct UIOffset)arg1 forArrangedLayoutItem:(id)arg2;
- (struct UIOffset)offsetForArrangedLayoutItem:(id)arg1;
- (void)setPadding:(struct NSDirectionalEdgeInsets)arg1 forArrangedLayoutItem:(id)arg2;
- (struct NSDirectionalEdgeInsets)paddingForArrangedLayoutItem:(id)arg1;
- (void)removeArrangedLayoutItem:(id)arg1;
- (void)addArrangedLayoutItem:(id)arg1;
@property(nonatomic, copy) NSArray *arrangedLayoutItems;
@property(nonatomic) struct NSDirectionalEdgeInsets insets;
@property(nonatomic) double spacing;
@property(nonatomic) float alignmentFittingSizePriority;
@property(nonatomic) _Bool alignmentBoundsContent;
@property(nonatomic) long long alignment;
@property(nonatomic) float distributionFittingSizePriority;
@property(nonatomic) _Bool distributionBoundsContent;
@property(nonatomic) long long distribution;
@property(nonatomic) long long axis;
@property(nonatomic, copy) NSString *identifier;
- (id)copyWithZone:(void *)arg1;
- (id)initWithIdentifier:(id)arg1 axis:(long long)arg2;
- (id)initWithAxis:(long long)arg1;

@end

