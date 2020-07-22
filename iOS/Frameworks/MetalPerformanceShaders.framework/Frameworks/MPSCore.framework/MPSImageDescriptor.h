//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPSImageDescriptor : NSObject
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _featureChannels;
    unsigned long long _numberOfImages;
    unsigned long long _channelFormat;
    unsigned long long _cacheMode;
    unsigned long long _storageMode;
    unsigned long long _usage;
    unsigned long long _featureChannelsLayout;
    unsigned long long _cpuCacheMode;
}

+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6;
+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
@property(nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property(nonatomic) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
@property(nonatomic) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property(nonatomic) unsigned long long channelFormat; // @synthesize channelFormat=_channelFormat;
@property(nonatomic) unsigned long long numberOfImages; // @synthesize numberOfImages=_numberOfImages;
@property(nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(nonatomic) unsigned long long featureChannels; // @synthesize featureChannels=_featureChannels;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)newTextureDescriptor;
- (id)init;
@property(readonly, nonatomic) unsigned long long pixelFormat;

@end

