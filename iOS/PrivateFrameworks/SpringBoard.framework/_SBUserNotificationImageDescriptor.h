//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface _SBUserNotificationImageDescriptor : NSObject
{
    NSString *_imagePath;
    NSString *_catalogPath;
    NSString *_catalogKey;
    UIImage *_lazy_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithImageCatalogPath:(id)arg1 catalogKey:(id)arg2;
- (id)initWithImagePath:(id)arg1;

@end
