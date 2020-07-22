//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBApplicationDefaults : NSObject
{
    long long _interfaceOrientation;
    _Bool _canChangeBackgroundStyle;
    long long _backgroundStyle;
    long long _statusBarStyle;
    _Bool _statusBarHidden;
    _Bool _statusBarHiddenWhenVerticallyCompact;
    NSString *_launchImageFile;
}

@property(copy, nonatomic) NSString *launchImageFile; // @synthesize launchImageFile=_launchImageFile;
@property(nonatomic) _Bool statusBarHiddenWhenVerticallyCompact; // @synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) _Bool canChangeBackgroundStyle; // @synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void)dealloc;
- (id)init;

@end
