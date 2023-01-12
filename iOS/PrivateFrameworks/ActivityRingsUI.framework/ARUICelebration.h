//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@class _TtC3VFX8VFXScene;

@interface ARUICelebration : NSObject <NSCopying>
{
    unsigned long long _type;
    _TtC3VFX8VFXScene *_scene;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _TtC3VFX8VFXScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)updateDeltaTime:(double)arg1;
- (void)apply:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)description;

@end
