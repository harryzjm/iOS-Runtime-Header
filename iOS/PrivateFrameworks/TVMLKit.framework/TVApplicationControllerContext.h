//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface TVApplicationControllerContext : NSObject <NSCopying>
{
    _Bool _supplementary;
    _Bool _appUsesTabBarRootViewController;
    NSURL *_javaScriptApplicationURL;
    NSString *_storageIdentifier;
    NSDictionary *_launchOptions;
    NSURL *_appLocalJSURL;
    NSURL *_appJSCachePath;
}

@property(copy, nonatomic) NSURL *appJSCachePath; // @synthesize appJSCachePath=_appJSCachePath;
@property(copy, nonatomic) NSURL *appLocalJSURL; // @synthesize appLocalJSURL=_appLocalJSURL;
@property(nonatomic) _Bool appUsesTabBarRootViewController; // @synthesize appUsesTabBarRootViewController=_appUsesTabBarRootViewController;
@property(nonatomic, getter=isSupplementary) _Bool supplementary; // @synthesize supplementary=_supplementary;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(copy, nonatomic) NSString *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
@property(copy, nonatomic) NSURL *javaScriptApplicationURL; // @synthesize javaScriptApplicationURL=_javaScriptApplicationURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
