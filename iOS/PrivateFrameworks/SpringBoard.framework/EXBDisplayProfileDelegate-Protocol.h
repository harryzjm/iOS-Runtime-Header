//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class EXBDisplayProfile, FBSDisplayConfiguration, FBSDisplayConfigurationRequest, FBSMutableSceneParameters, UIRootSceneWindow;

@protocol EXBDisplayProfileDelegate <NSObject>
- (_Bool)displayProfile:(EXBDisplayProfile *)arg1 shouldConnectToDisplay:(FBSDisplayConfiguration *)arg2;

@optional
- (FBSDisplayConfigurationRequest *)displayProfile:(EXBDisplayProfile *)arg1 initialDisplayConfigurationRequestForDisplay:(FBSDisplayConfiguration *)arg2;
- (void)displayProfile:(EXBDisplayProfile *)arg1 modifyInitialSceneParameters:(FBSMutableSceneParameters *)arg2;
- (UIRootSceneWindow *)displayProfile:(EXBDisplayProfile *)arg1 rootSceneWindowForDisplayConfiguration:(FBSDisplayConfiguration *)arg2;
@end

