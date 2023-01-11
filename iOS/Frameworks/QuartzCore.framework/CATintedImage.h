//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface CATintedImage : NSObject <NSSecureCoding>
{
    struct CGImage *_image;
    struct CGColor *_tint;
    unsigned int _copy_flags;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)tintedImageWithCABackingStore:(struct CABackingStore *)arg1;
+ (id)tintedImageWithCGImage:(struct CGImage *)arg1 tint:(struct CGColor *)arg2;
+ (id)tintedImageWithCGImage:(struct CGImage *)arg1 tint:(struct CGColor *)arg2 copyFlags:(unsigned int)arg3;
@property(retain) struct CGColor *tint; // @synthesize tint=_tint;
@property(retain) struct CGImage *image; // @synthesize image=_image;
- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

