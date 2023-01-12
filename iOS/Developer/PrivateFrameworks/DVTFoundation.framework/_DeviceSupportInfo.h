//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DeviceSupportInfo : NSObject
{
    NSString *_filename;
    NSString *_platformName;
    NSString *_version;
    NSString *_train;
    NSString *_build;
}

+ (_Bool)_parseDeviceSupportURL:(id)arg1 intoPlatform:(id *)arg2 version:(id *)arg3 build:(id *)arg4;
+ (_Bool)_parseDeviceSupportURL:(id)arg1 intoPlatform:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *build; // @synthesize build=_build;
@property(readonly, nonatomic) NSString *train; // @synthesize train=_train;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)initWithURL:(id)arg1;

@end
