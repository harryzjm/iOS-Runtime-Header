//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class CAAnimation, CALayer, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding>
{
    CALayer *_target;
    CAAnimation *_animation;
    NSString *_key;
    _Bool _enabled;
}

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) __weak CALayer *target; // @synthesize target=_target;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
@property(nonatomic) double duration;
@property(nonatomic) double beginTime;
- (void)dealloc;
- (id)init;

@end

