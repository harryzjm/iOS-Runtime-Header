//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class LSApplicationProxy, LSApplicationWorkspace, NSString, UIImage;

@interface CKAppInstallation : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    LSApplicationProxy *_proxy;
    UIImage *_icon;
    double _percentComplete;
    unsigned long long _installState;
    double _startTime;
    LSApplicationWorkspace *__applicationWorkspace;
}

@property(readonly, nonatomic) LSApplicationWorkspace *_applicationWorkspace; // @synthesize _applicationWorkspace=__applicationWorkspace;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long installState; // @synthesize installState=_installState;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) _Bool installed;
@property(retain, nonatomic) LSApplicationProxy *proxy;
@property(readonly, nonatomic) NSString *localizedDisplayName;
@property(readonly, nonatomic) NSString *pluginBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 startTime:(double)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

@end
