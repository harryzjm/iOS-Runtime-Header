//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATOperation.h>

@class CATRemoteTaskOperation, NSSet;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKExpiredCoursesInteraction : CATOperation
{
    CATRemoteTaskOperation *mLeaveControlGroupsOperation;
    _Bool mIsPrompting;
    NSSet *_courses;
    id <CRKExpiredCoursesInteractionDelegate> _delegate;
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKRequestPerformingProtocol> studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;
@property(readonly, nonatomic) id <CRKExpiredCoursesInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *courses; // @synthesize courses=_courses;
- (void)leaveControlGroupsOperationDidFinish:(id)arg1;
- (void)removeCourses:(id)arg1;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3;
- (id)init;

@end
