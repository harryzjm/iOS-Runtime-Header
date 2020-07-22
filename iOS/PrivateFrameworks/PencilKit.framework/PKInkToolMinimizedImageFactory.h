//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKInkToolMinimizedImageFactory : NSObject
{
}

+ (id)_imageNameWithBaseName:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)_baseNameForInkIdentifier:(id)arg1 imageType:(id)arg2;
+ (id)_iPadImageForToolWithInk:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (id)_iPadImageForEraserWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)_imageForInk:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 inkPickerSizeState:(unsigned long long)arg4;
+ (id)_ringImageForSizeState:(unsigned long long)arg1;
+ (id)_maskImageForSizeState:(unsigned long long)arg1;
+ (id)_minimizedToolImageForInk:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 sizeState:(unsigned long long)arg4;
+ (id)imageForInk:(id)arg1 sizeState:(unsigned long long)arg2;

@end

