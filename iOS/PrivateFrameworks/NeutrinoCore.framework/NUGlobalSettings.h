//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (void)setLogPeakRenderCIUsuage:(_Bool)arg1;
+ (_Bool)logPeakRenderCIUsuage;
+ (void)setImageLayerDebug:(_Bool)arg1;
+ (_Bool)imageLayerDebug;
+ (void)setPipelineSourceURL:(id)arg1;
+ (id)pipelineSourceURL;
+ (void)setPlatformHasWideColor:(_Bool)arg1;
+ (_Bool)platformHasWideColor;
+ (void)setRenderVideoLive:(_Bool)arg1;
+ (_Bool)renderVideoLive;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (id)cacheNodeDirectoryURL;
+ (void)setViewDebugEnabled:(_Bool)arg1;
+ (_Bool)isViewDebugEnabled;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (double)cacheNodeImageCompression;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (long long)cacheNodeFilePermissions;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (long long)cacheNodeCacheSizeLimit;
+ (void)setImageSourceDisableCacheImmediately:(_Bool)arg1;
+ (_Bool)imageSourceDisableCacheImmediately;
+ (void)setImageSourceDisableRAW:(_Bool)arg1;
+ (_Bool)imageSourceDisableRAW;
+ (void)setImageTileSize:(long long)arg1;
+ (long long)imageTileSize;
+ (void)setRendererUseP3Linear:(_Bool)arg1;
+ (_Bool)rendererUseP3Linear;
+ (void)setRendererClampToAlpha:(_Bool)arg1;
+ (_Bool)rendererClampToAlpha;
+ (void)setRendererUseHalfFloat:(_Bool)arg1;
+ (_Bool)rendererUseHalfFloat;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (double)renderJSPipelineTimeout;
+ (void)setImageRenderJobUseTextureRenderer:(_Bool)arg1;
+ (_Bool)imageRenderJobUseTextureRenderer;
+ (void)setImageRenderJobUseSurfaceRenderer:(_Bool)arg1;
+ (_Bool)imageRenderJobUseSurfaceRenderer;
+ (void)setBufferStorageFactoryUsePool:(_Bool)arg1;
+ (_Bool)bufferStorageFactoryUsePool;
+ (void)setSurfaceStorageFactoryUsePool:(_Bool)arg1;
+ (_Bool)surfaceStorageFactoryUsePool;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (double)storagePoolMigrationDelay;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (long long)storagePoolPurgeableLimit;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (long long)storagePoolNonPurgeableLimit;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (long long)deviceDefaultSampleMode;
+ (void)setDevicePrintRenderer:(_Bool)arg1;
+ (_Bool)devicePrintRenderer;
+ (void)setDeviceDisableOpenGL:(_Bool)arg1;
+ (_Bool)deviceDisableOpenGL;
+ (void)setDeviceDisableMetal:(_Bool)arg1;
+ (_Bool)deviceDisableMetal;
+ (void)reset;
+ (id)globalSettings;
- (void).cxx_destruct;
- (id)urlSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (_Bool)boolSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)_settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)init;

@end

