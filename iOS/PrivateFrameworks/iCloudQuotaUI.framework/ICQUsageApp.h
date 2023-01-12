//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICQUsageApp : NSObject
{
    _Bool _systemApp;
    float _staticSize;
    float _dynamicSize;
    float _specialSize;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(nonatomic) float specialSize; // @synthesize specialSize=_specialSize;
@property(nonatomic) float dynamicSize; // @synthesize dynamicSize=_dynamicSize;
@property(nonatomic) float staticSize; // @synthesize staticSize=_staticSize;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) float totalSize;
@property(readonly, nonatomic) float dataSize;

@end
