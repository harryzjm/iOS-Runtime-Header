//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL, UIView;

@interface SBSAppDragLocalContext : NSObject
{
    _Bool _cancelsViaScaleAndFade;
    NSString *_applicationBundleIdentifier;
    NSSet *_launchActions;
    NSURL *_launchURL;
    long long _startLocation;
    UIView *_portaledPreview;
}

@property(nonatomic) _Bool cancelsViaScaleAndFade; // @synthesize cancelsViaScaleAndFade=_cancelsViaScaleAndFade;
@property(retain, nonatomic) UIView *portaledPreview; // @synthesize portaledPreview=_portaledPreview;
@property(readonly, nonatomic) long long startLocation; // @synthesize startLocation=_startLocation;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, copy, nonatomic) NSSet *launchActions; // @synthesize launchActions=_launchActions;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (void).cxx_destruct;
- (id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3;

@end

