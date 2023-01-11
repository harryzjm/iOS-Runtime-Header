//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARReferenceImage : NSObject
{
    NSString *_name;
    NSString *_resourceGroupName;
    struct CGSize _physicalSize;
}

+ (id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *resourceGroupName; // @synthesize resourceGroupName=_resourceGroupName;
@property(readonly, nonatomic) struct CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (void)validateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
