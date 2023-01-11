//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CATSerialOperationQueue, CRKCourseEnrollmentController, NSMutableSet;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKMonitorExpiredCoursesInteraction : CATOperation
{
    _Bool mIsObservingEnrollmentController;
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
    id <CRKExpiredCoursesInteractionDelegate> _expiredCoursesInteractionDelegate;
    CRKCourseEnrollmentController *_enrollmentController;
    NSMutableSet *_expiredCoursesToPresent;
    CATSerialOperationQueue *_serialOperationQueue;
}

@property(readonly, nonatomic) CATSerialOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(readonly, nonatomic) NSMutableSet *expiredCoursesToPresent; // @synthesize expiredCoursesToPresent=_expiredCoursesToPresent;
@property(readonly, nonatomic) CRKCourseEnrollmentController *enrollmentController; // @synthesize enrollmentController=_enrollmentController;
@property(readonly, nonatomic) id <CRKExpiredCoursesInteractionDelegate> expiredCoursesInteractionDelegate; // @synthesize expiredCoursesInteractionDelegate=_expiredCoursesInteractionDelegate;
@property(readonly, nonatomic) id <CRKRequestPerformingProtocol> studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)expiredCoursesInteractionDidFinish:(id)arg1;
- (void)beginInteractionWithExpiredCourses:(id)arg1;
- (void)updateWithCourses:(id)arg1;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithStudentDaemonProxy:(id)arg1 enrollmentController:(id)arg2 expiredCoursesInteractionDelegate:(id)arg3;

@end

