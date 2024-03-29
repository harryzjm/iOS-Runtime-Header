//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface STCAPackageView : UIView
{
    CAStateController *_stateController;
    NSMutableArray *_completionHandlers;
}

+ (id)keyPathsForValuesAffectingPackageRootLayer;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain) CAStateController *stateController; // @synthesize stateController=_stateController;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (id)_getStateWithName:(id)arg1;
- (void)animateToStateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setStateName:(id)arg1;
@property(readonly, copy) NSString *stateName;
- (void)animateToInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setInitialState;
@property(readonly, getter=isInitialState) _Bool initialState;
@property(readonly) CALayer *packageRootLayer;
- (void)_changeAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_newStateControllerWithSuperlayer:(id)arg1;
- (void)_stcaPackageViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

