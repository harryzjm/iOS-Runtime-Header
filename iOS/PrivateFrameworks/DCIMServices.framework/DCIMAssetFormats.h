//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DCIMAssetFormats : NSObject
{
}

+ (long long)masterThumbnailFormat;
+ (long long)wildcatStackFormat;
+ (_Bool)formatSizeIsShortSide:(long long)arg1;
+ (struct CGRect)centeredRectForSourceSize:(struct CGSize)arg1 destinationSize:(struct CGSize)arg2;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg1 format:(long long)arg2 capLength:(_Bool)arg3;
+ (struct CGSize)sizeForFormat:(long long)arg1;

@end

