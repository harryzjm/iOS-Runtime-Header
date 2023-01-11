//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCourseEnrollmentControllerDelegate-Protocol.h>
#import <ClassroomKit/CRKSettingsUIVisibilityProvider-Protocol.h>

@class CRKCourseEnrollmentController, CRKUserDefaultsObject, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider>
{
    CRKUserDefaultsObject *mPreviouslyEnrolled;
    CRKUserDefaultsObject *mPreviouslyCloudEnrolled;
    CRKCourseEnrollmentController *mEnrollmentController;
    _Bool _settingsUIVisible;
}

@property(nonatomic) _Bool settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
- (void).cxx_destruct;
- (void)enrollmentControllerDidUpdateCloudEnrollmentStatus:(id)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(id)arg1;
- (void)enrollmentControllerDidUpdateCourses:(id)arg1;
- (void)connectToDaemon;
- (void)updateVisibilityState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

