//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BSSettings, FBSDisplayConfiguration, FBSDisplayIdentity, NSArray, NSSet, NSString;

@interface FBSSceneSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    FBSDisplayConfiguration *_displayConfiguration;
    struct CGRect _frame;
    double _level;
    long long _interfaceOrientation;
    _Bool _backgrounded;
    _Bool _occluded;
    _Bool _occludedHasBeenCalculated;
    NSSet *_ignoreOcclusionReasons;
    NSArray *_occlusions;
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
}

+ (_Bool)_isMutable;
+ (id)settings;
@property(readonly, copy, nonatomic) NSArray *occlusions; // @synthesize occlusions=_occlusions;
@property(readonly, nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)transientLocalSettings;
- (_Bool)isIgnoringOcclusions;
- (id)ignoreOcclusionReasons;
- (id)otherSettings;
- (_Bool)isOccluded;
- (struct CGRect)bounds;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

