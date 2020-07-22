//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
}

+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2;
- (id)init;

@end

