//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject
{
    double _scale;
    CPBitmapStore *_store;
    NSCache *_conditionImagesCache;
}

+ (id)conditionImageBundle;
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;
+ (id)cachedImageNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)colorForImageColor:(id)arg1 lighter:(_Bool)arg2;
+ (id)conditionImageNamed:(id)arg1 size:(struct CGSize)arg2 cloudAligned:(_Bool)arg3 stroke:(_Bool)arg4 strokeAlpha:(double)arg5 lighterColors:(_Bool)arg6;
+ (id)conditionImageNamed:(id)arg1 style:(long long)arg2;
+ (id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2;
+ (id)conditionImageWithConditionIndex:(long long)arg1;
+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)sharedImageLoader;
@property(retain, nonatomic) NSCache *conditionImagesCache; // @synthesize conditionImagesCache=_conditionImagesCache;
@property(retain, nonatomic) CPBitmapStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (id)init;

@end

