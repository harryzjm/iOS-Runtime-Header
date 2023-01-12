//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCTActivityRecordContext-Protocol.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, XCTActivityRecordStack, XCTestCase;

@interface XCTContext : NSObject <XCTActivityRecordContext>
{
    _Bool _valid;
    _Bool _isReportingBase;
    NSDate *_startDate;
    NSMutableDictionary *_associatedObjects;
    NSMutableArray *_tearDownBlocks;
    XCTContext *_parent;
    XCTestCase *_testCase;
    XCTActivityRecordStack *_activityRecordStack;
}

+ (_Bool)hasContextInThread:(id)arg1;
+ (id)currentContextInThread:(id)arg1;
+ (id)_currentContextInThread:(id)arg1;
+ (void)runInContextForTestCase:(id)arg1 markAsReportingBase:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)runInContextForTestCase:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (_Bool)shouldReportActivityWithType:(id)arg1 inTestMode:(long long)arg2;
+ (_Bool)_shouldReportActivityWithType:(id)arg1;
+ (void)_recordActivityMessageWithFormat:(id)arg1;
+ (void)_runActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)runInternalActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)_runActivityNamed:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)runActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)currentContext;
- (void).cxx_destruct;
@property(readonly) XCTActivityRecordStack *activityRecordStack; // @synthesize activityRecordStack=_activityRecordStack;
@property(readonly) _Bool isReportingBase; // @synthesize isReportingBase=_isReportingBase;
@property(readonly) __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
@property(readonly) XCTContext *parent; // @synthesize parent=_parent;
@property(readonly, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) NSMutableArray *tearDownBlocks; // @synthesize tearDownBlocks=_tearDownBlocks;
@property(readonly) NSMutableDictionary *associatedObjects; // @synthesize associatedObjects=_associatedObjects;
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)addTearDownBlock:(CDUnknownBlockType)arg1;
- (void)setAssociatedObject:(id)arg1 forKey:(id)arg2;
- (id)associatedObjectForKey:(id)arg1;
@property(readonly) NSDictionary *aggregationRecords;
- (id)topActivity;
- (void)_pushOnToCurrentThreadContextStack;
@property(readonly) unsigned long long activityRecordStackDepth;
- (void)unwindRemainingActivities;
- (void)_reportEmptyActivityWithType:(id)arg1 format:(id)arg2;
- (void)_runActivityNamed:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)didFinishActivity:(id)arg1;
- (id)willStartActivityWithTitle:(id)arg1 type:(id)arg2;
@property(readonly) unsigned long long transitiveActivityRecordStackDepth;
@property(readonly) XCTContext *reportingBaseContext;
- (id)initWithParent:(id)arg1 testCase:(id)arg2;
- (void)invalidate;
- (void)_runActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly) NSDictionary *testRunConfiguration;
@property(readonly) NSMutableArray *interruptionHandlers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
