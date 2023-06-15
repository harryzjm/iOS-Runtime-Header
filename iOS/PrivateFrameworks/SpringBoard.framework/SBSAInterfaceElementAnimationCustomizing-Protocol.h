//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet;
@protocol SBSAAnimatedTransitionDescribing, SBSAInterfaceElementPropertyIdentifying;

@protocol SBSAInterfaceElementAnimationCustomizing <NSObject>
- (void)addMilestones:(NSSet *)arg1 forPropertyIdentity:(id <SBSAInterfaceElementPropertyIdentifying>)arg2;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg1 overridingExistingUnanimatedSettings:(_Bool)arg2 withProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg3 withMilestones:(NSSet *)arg4;
- (void)setAnimatedTransitionDescription:(id <SBSAAnimatedTransitionDescribing>)arg1 overridingExistingUnanimatedSettings:(_Bool)arg2 forProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg3 withMilestones:(NSSet *)arg4;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg1 withProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg2 withMilestones:(NSSet *)arg3;
- (void)setAnimatedTransitionDescription:(id <SBSAAnimatedTransitionDescribing>)arg1 forProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg2 withMilestones:(NSSet *)arg3;
@end

