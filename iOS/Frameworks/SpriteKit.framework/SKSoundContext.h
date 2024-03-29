//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKSoundContext : NSObject
{
    struct ALCdevice_struct *_device;
    struct ALCcontext_struct *_context;
    _Bool _suspended;
}

+ (id)currentContext;
+ (id)context;
- (void)dealloc;
@property(nonatomic) double gain;
@property(nonatomic) struct CGPoint listenerPosition;
- (void)makeCurrentContext;
@property(nonatomic) _Bool suspended;
- (id)init;

@end

