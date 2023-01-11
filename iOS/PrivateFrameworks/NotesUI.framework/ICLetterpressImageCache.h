//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPBitmapStore, NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
    CPBitmapStore *_serializedCache;
}

+ (id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)sharedCache;
@property(retain, nonatomic) CPBitmapStore *serializedCache; // @synthesize serializedCache=_serializedCache;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)purge;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 version:(unsigned long long)arg3;
- (id)init;

@end

