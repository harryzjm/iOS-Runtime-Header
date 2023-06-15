//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IBAutolayoutInfoProvider;

@interface NSObject (IBCocoaTouchToolAutolayoutEngineAdditions)
+ (id)instantiateWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
+ (Class)ibMKMapConfigurationRuntimeClass;
+ (_Bool)ibIsInDesignMode;
- (_Bool)ibRequiresSuperviewDuringLayoutForRepresentedView:(id)arg1;
- (id)ibRootHostingViewWithCopiedViewHierarchySnapshotForLayoutEngine:(id)arg1 returningWindowForRepresentedViews:(id *)arg2 returningSimulatedMetricsContext:(id *)arg3 returningAddedRepresentedConstraintsForRepresentedViews:(id *)arg4;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;
- (id)ibMakeWindowForRenderingWithSimulatedMetricsContext:(id)arg1;
- (void)ibApplySimulatedMetricsWithContext:(id)arg1;
- (id)ibContextAfterApplyingSimulatedMetrics;
- (void)ibPopulateMarshallingIgnoredKeys:(id)arg1;
- (void)ibPrepareForSceneUpdateProcessingRequestPhase:(long long)arg1;
- (void)ibPrepareForSceneUpdate;
- (void)ibDidIncrementallyUpdateValueForKeyPath:(id)arg1;
- (void)ibWillCompileForObjectPackage:(id)arg1;
- (void)ibPlaceInWindowForRenderingAndPrimitiveAutolayoutQuestionsIfNeededDuring:(CDUnknownBlockType)arg1;
- (_Bool)ibWantsWindowForRenderingAndPrimitiveAutolayoutQuestions;
- (id)ibEffectiveViewForRendering;
- (void)ibPlaceInWindowPositioningAndSizingIfNeeded:(_Bool)arg1 during:(CDUnknownBlockType)arg2;
- (void)setIbShadowedFrameDecisionStrategy:(long long)arg1;
- (long long)ibShadowedFrameDecisionStrategy;
@property(nonatomic) long long ibFrameDecisionStrategy;
- (CDUnknownBlockType)ibWindowForUpdatingConstraints:(id *)arg1;
- (void)setIbLayoutInfo:(id)arg1;
@property(readonly, nonatomic) id <IBAutolayoutInfoProvider> ibLayoutInfo;
- (void)prepareForInterfaceBuilder;
- (id)ibEffectiveToManyRelationshipKeyPathForKeyPath:(id)arg1 globalMarshallingContext:(id)arg2;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
- (void)awakeAfterMarshallerDidEstablishAttributesWithContext:(id)arg1;
- (_Bool)ibRequiresClassSwapperForObjectClassName:(id)arg1 customClassName:(id)arg2;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
- (void)ibSwizzledSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)ibAdditionalTraitStoragesWithObjectID:(id)arg1 keyPath:(id)arg2 targetOSVersion:(id)arg3 platform:(id)arg4;
- (id)transformAfterMarshalling;
- (id)ibMKMapConfigurationRuntimeObject;
- (void)ibIgnoreKeyIfNeeded:(id)arg1 ignoredKeys:(id)arg2 radarToRemove:(long long)arg3;
@property(readonly, nonatomic) _Bool ibShouldEncodeUniquedByValue;
@end

