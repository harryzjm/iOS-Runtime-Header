//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11SessionCoreP33_3EB6553D2992046DCD21680C8109860026AuthorizationServiceClient : NSObject
{
    MISSING_TYPE *connection;
    MISSING_TYPE *authorizationManager;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)areActivitiesEnabledForBundleId:(id)arg1;
- (_Bool)areActivitiesEnabledForCurrentProcess;
- (_Bool)setActivitiesAuthorizationFor:(id)arg1 with:(id)arg2 error:(id *)arg3;
- (_Bool)supportsActivitiesForBundleId:(id)arg1;

@end

