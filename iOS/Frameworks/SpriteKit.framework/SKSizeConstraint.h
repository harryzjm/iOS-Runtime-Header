//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint
{
    SKRange *_widthRange;
    SKRange *_heightRange;
}

+ (id)constraintWithHeightRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy) SKRange *heightRange; // @synthesize heightRange=_heightRange;
@property(copy) SKRange *widthRange; // @synthesize widthRange=_widthRange;
- (void).cxx_destruct;
- (_Bool)isEqualToSizeConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;

@end

