//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKScale
{
    struct SKCScale *_mycaction;
}

+ (id)scaleYTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleToSize:(struct CGSize)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleYBy:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

