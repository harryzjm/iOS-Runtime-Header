//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayIdentity;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerSceneContext : NSObject
{
    _Bool _enhancedWindowingEnabled;
    _Bool _isCapturingContentForAdditionalRenderingDestination;
    FBSDisplayIdentity *_displayIdentity;
    long long _screenReferenceDisplayModeStatus;
    double _systemReferenceAngle;
    unsigned long long _systemReferenceAngleMode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1 screenReferenceDisplayModeStatus:(long long)arg2 enhancedWindowEnabled:(_Bool)arg3 systemReferenceAngle:(double)arg4 systemReferenceAngleMode:(unsigned long long)arg5 isCapturingContentForAdditionalRenderingDestination:(_Bool)arg6;

@end

