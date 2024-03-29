//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSTextAttachment.h>

@class NSObject, NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SKUIBadgeTextAttachment : NSTextAttachment
{
    NSURL *_imageURL;
    NSObject<OS_dispatch_semaphore> *_imageLoadingSemaphore;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_semaphore> *imageLoadingSemaphore; // @synthesize imageLoadingSemaphore=_imageLoadingSemaphore;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3;
- (void)_ensureImageIsLoaded;
@property(readonly, nonatomic) struct CGSize badgeSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithViewElement:(id)arg1;

@end

