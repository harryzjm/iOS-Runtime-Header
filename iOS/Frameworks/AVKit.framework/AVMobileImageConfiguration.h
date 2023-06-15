//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface AVMobileImageConfiguration : NSObject
{
    _Bool _imageContainedInBundle;
    NSString *_string;
    UIFont *_font;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool imageContainedInBundle; // @synthesize imageContainedInBundle=_imageContainedInBundle;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)imageName;
- (id)initWithImageName:(id)arg1 font:(id)arg2 imageContainedInBundle:(_Bool)arg3;
- (id)initWithString:(id)arg1 font:(id)arg2;

@end

