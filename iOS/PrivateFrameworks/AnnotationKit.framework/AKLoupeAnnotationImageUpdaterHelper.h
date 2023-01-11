//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKLoupeAnnotationImageUpdaterHelper : NSObject
{
}

+ (struct CGAffineTransform)transformForFastPathLayer:(id)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)updateFastPathImageOnLoupeAnnotation:(id)arg1 withFastPathLayer:(id)arg2 onPageController:(id)arg3;
+ (void)updateModelImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;
+ (struct CGRect)unmagnifiedRectForMagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2;
+ (struct CGRect)magnifiedRectForUnmagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;

@end
