//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface CLSServerInterfaceConfigurator : NSObject
{
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
    NSSet *_sortDescriptorsSet;
}

- (void).cxx_destruct;
- (void)configureSurveyAnswerAPI;
- (void)configureAdminRequestAPI;
- (void)configureAssetSupportAPI;
- (void)configureFeatureAvailabilityAPI;
- (void)configureStudentActivityAPI;
- (void)configureClassAPI;
- (void)configureCollaborationStateAPI;
- (void)configureCollectionsAPI;
- (void)configureHandoutAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureUtilityServerAPI;
- (void)configureUserNotificationAPI;
- (void)configureAppsAPI;
- (void)configureDashboardAppAPI;
- (void)configureProgressReportingAPI;
- (void)configureContextAPI;
- (void)configureDataObserverAPI;
- (void)configureSaveAPI;
- (void)configureQueryAPI;
- (id)configureServerInterface;
- (id)init;

@end
