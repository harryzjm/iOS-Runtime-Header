//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface WFActionDrawerImage : NSObject
{
    unsigned long long _imageType;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
- (id)initWithImageType:(unsigned long long)arg1 image:(id)arg2;

@end
