//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AHTLoader : NSObject
{
    unsigned int _imageTag;
    unsigned int _loadingGroup;
    unsigned int _service;
    unsigned int _connect;
    NSString *_name;
}

+ (id)registryPropertiesForService:(unsigned int)arg1;
+ (_Bool)errorFromKernel:(int)arg1 error:(id *)arg2;
+ (id)bootloaderPropertiesForImageTag:(unsigned int)arg1;
+ (id)withService:(unsigned int)arg1;
+ (id)withName:(id)arg1;
+ (id)allDevices;
- (void).cxx_destruct;
@property(nonatomic) unsigned int connect; // @synthesize connect=_connect;
@property(nonatomic) unsigned int service; // @synthesize service=_service;
@property(readonly, nonatomic) unsigned int loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property(readonly, nonatomic) unsigned int imageTag; // @synthesize imageTag=_imageTag;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)overrideFDR:(id)arg1 fdrClass:(id)arg2 fdrSubclass:(id)arg3 error:(id *)arg4;
- (_Bool)loadImage:(id)arg1 payloadOnly:(_Bool)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)fullDescription;
- (id)description;
- (void)close;
- (_Bool)open:(id *)arg1;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1;

@end

