//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBAutolayoutArbitrationUnit, IBAutolayoutStatus, NSDictionary;
@protocol IBAutolayoutInfoProvider;

@interface IBAbstractAutolayoutFrameDecisionDriver : NSObject
{
    IBAutolayoutArbitrationUnit *_arbitrationUnit;
    NSDictionary *_options;
    IBAutolayoutStatus *_autolayoutStatus;
}

@property(retain, nonatomic) IBAutolayoutStatus *autolayoutStatus; // @synthesize autolayoutStatus=_autolayoutStatus;
@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit=_arbitrationUnit;
- (void).cxx_destruct;
- (void)addConstraints:(id)arg1 replacingConstraints:(id)arg2 enforcingCurrentSizeOfViews:(id)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 returningConstraintsAdded:(id *)arg5 returningConstraintsRemoved:(id *)arg6 framePropagationBlock:(CDUnknownBlockType)arg7;
- (CDUnknownBlockType)sizeView:(id)arg1 toLayoutSize:(struct CGSize)arg2 suggestedLayoutOrigin:(struct CGPoint)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 framePropagationBlock:(CDUnknownBlockType)arg5;
- (void)enumerateLayoutFramesForViews:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly) id <IBAutolayoutInfoProvider> layoutInfo;
- (id)initWithArbitrationUnit:(id)arg1 initialStatus:(id)arg2 options:(id)arg3;

@end

