//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIActivityContinuationManagerApplicationContext-Protocol.h>
#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUserActivity, UIActivityContinuationManager, UIScene;

__attribute__((visibility("hidden")))
@interface _UICanvasUserActivityManager : NSObject <UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding>
{
    UIScene *_weakScene;
    NSUserActivity *_restorationActivity;
    NSDictionary *_connectionOptionsRestorationActivityDictionary;
    UIActivityContinuationManager *_activityContinuationManager;
    NSSet *_activityTypesForDefaultProgressUI;
    _Bool _isDisplayingActivityContinuationUI;
}

+ (id)_activityContinuationDictionaryWithAction:(id)arg1;
+ (id)_getRestorationUserActivityForPersistentIdentifier:(id)arg1 error:(id *)arg2;
+ (id)_getUserInfoForSceneIdentifier:(id)arg1 error:(id *)arg2;
+ (void)_scheduleDataSaveForSceneSession:(id)arg1 saveRestorationActivity:(_Bool)arg2;
+ (void)_saveRestorationStateForScene:(id)arg1;
+ (_Bool)_restorationUserActivityAvailableForSceneIdentifier:(id)arg1;
+ (id)_fetchSceneSessionWithPersistentIdentifier:(id)arg1;
+ (id)_knownSceneSessionMap;
+ (void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg1;
+ (void)_updatePersistedSceneSession:(id)arg1;
+ (void)_deleteSavedSceneSessionDirectoryWithIdentifier:(id)arg1;
+ (void)_showProgressForScene:(id)arg1 whenFetchingUserActivityForTypes:(id)arg2;
+ (id)_userActivityManagerForScene:(id)arg1;
+ (void)_initializeUserActivityManager;
- (void).cxx_destruct;
@property(nonatomic, getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:) _Bool isDisplayingActivityContinuationUI; // @synthesize isDisplayingActivityContinuationUI=_isDisplayingActivityContinuationUI;
- (id)_updateCanvasConnectionOptionsDictionary:(id)arg1;
- (void)_performCanvasRestorationIfNecessary;
- (void)_performCanvasRestoration;
- (void)_setupCanvasRestorationState;
- (void)_saveSceneRestorationState;
- (void)_saveOrClearRestorationDictionary:(id)arg1 forScene:(id)arg2;
- (void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
- (void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;
- (_Bool)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;
- (id)activityContinuationManagerUserCancelledError:(id)arg1;
- (void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(CDUnknownBlockType)arg2;
- (void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;
- (void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(CDUnknownBlockType)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
@property(readonly, nonatomic, getter=_activityContinuationManager) UIActivityContinuationManager *_activityContinuationManager;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
