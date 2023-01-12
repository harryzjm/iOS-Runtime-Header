//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface CSLPRFApp : NSObject
{
    _Bool _supportsAlwaysOnDisplay;
    NSString *_bundleID;
    NSString *_name;
    UIImage *_icon;
    NSString *_sdkVersion;
}

+ (id)appWithBundleID:(id)arg1 name:(id)arg2 icon:(id)arg3 sdkVersion:(id)arg4 supportsAlwaysOnDisplay:(_Bool)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportsAlwaysOnDisplay; // @synthesize supportsAlwaysOnDisplay=_supportsAlwaysOnDisplay;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (long long)compare:(id)arg1;
- (id)initWithBundleID:(id)arg1 name:(id)arg2 icon:(id)arg3 sdkVersion:(id)arg4 supportsAlwaysOnDisplay:(_Bool)arg5;

@end
