//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject
{
    NSDate *_expirationDate;
    _Bool _updating;
    UIImage *_picture;
    NSString *_serverCacheTag;
}

@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(copy, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(retain, nonatomic) UIImage *picture; // @synthesize picture=_picture;
- (void).cxx_destruct;
- (id)description;
- (void)expire;
@property(readonly, nonatomic) _Bool expired;

@end
