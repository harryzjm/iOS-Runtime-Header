//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFramebuffer : NSObject
{
    struct FramebufferAttributes mFramebufferAttributes;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;
- (id).cxx_construct;
- (const struct FramebufferAttributes *)framebufferAttributes;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;

@end

