//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, XCAccessibilityElement, XCApplicationQuery, XCUIApplicationImpl, XCUIApplicationOpenRequest, XCUIElement;
@protocol XCTRunnerAutomationSession;

@interface XCUIApplication
{
    _Bool _ancillary;
    _Bool _prefersPlatformLauncher;
    _Bool _doesNotHandleUIInterruptions;
    _Bool _idleAnimationWaitEnabled;
    XCUIApplicationOpenRequest *_lastLaunchRequest;
    XCUIElement *_keyboard;
    NSArray *_launchArguments;
    NSDictionary *_launchEnvironment;
    XCApplicationQuery *_applicationQuery;
    unsigned long long _generation;
    XCUIApplicationImpl *_applicationImpl;
}

+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingSuspended;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)new;
+ (id)applicationWithPID:(int)arg1;
@property(getter=isIdleAnimationWaitEnabled) _Bool idleAnimationWaitEnabled; // @synthesize idleAnimationWaitEnabled=_idleAnimationWaitEnabled;
@property(nonatomic) _Bool doesNotHandleUIInterruptions; // @synthesize doesNotHandleUIInterruptions=_doesNotHandleUIInterruptions;
@property _Bool prefersPlatformLauncher; // @synthesize prefersPlatformLauncher=_prefersPlatformLauncher;
@property(readonly) XCUIApplicationImpl *applicationImpl; // @synthesize applicationImpl=_applicationImpl;
@property _Bool ancillary; // @synthesize ancillary=_ancillary;
@property unsigned long long generation; // @synthesize generation=_generation;
@property(retain) XCApplicationQuery *applicationQuery; // @synthesize applicationQuery=_applicationQuery;
@property(copy, nonatomic) NSDictionary *launchEnvironment; // @synthesize launchEnvironment=_launchEnvironment;
@property(copy, nonatomic) NSArray *launchArguments; // @synthesize launchArguments=_launchArguments;
@property(retain) XCUIApplicationOpenRequest *lastLaunchRequest; // @synthesize lastLaunchRequest=_lastLaunchRequest;
- (void)dismissKeyboard;
@property(readonly) XCUIElement *keyboard; // @synthesize keyboard=_keyboard;
- (_Bool)setFauxCollectionViewCellsEnabled:(_Bool)arg1 error:(id *)arg2;
@property(readonly) _Bool fauxCollectionViewCellsEnabled;
@property(readonly, nonatomic) long long interfaceOrientation;
- (void)_waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;
- (void)_waitForQuiescence;
- (void)terminate;
- (void)activate;
- (void)_launchUsingXcode:(_Bool)arg1;
- (void)launch;
- (id)_combinedLaunchEnvironment;
- (id)_combinedLaunchArguments;
- (void)waitForState:(unsigned long long)arg1 timeout:(double)arg2;
@property(readonly) _Bool foreground;
@property(readonly) _Bool background;
@property(readonly) _Bool suspended;
@property(readonly) _Bool running;
@property(nonatomic) int processID;
@property(nonatomic) unsigned long long state;
- (_Bool)exists;
- (id)application;
@property(readonly) id <XCTRunnerAutomationSession> automationSession;
- (id)description;
- (id)query;
- (void)clearQuery;
- (void)resolveHandleUIInterruption:(_Bool)arg1;
@property(readonly) XCAccessibilityElement *accessibilityElement;
- (unsigned long long)elementType;
@property(readonly) NSString *bundleID;
@property(readonly) NSString *path;
- (void)commonInitWithApplicationImpl:(id)arg1 isTestDependency:(_Bool)arg2;
- (id)initPrivateWithPath:(id)arg1 bundleID:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithElementQuery:(id)arg1;
- (void)dealloc;

@end

