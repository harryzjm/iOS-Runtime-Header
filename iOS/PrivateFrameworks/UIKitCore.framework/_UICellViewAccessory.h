//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UICellViewAccessory
{
    long long _options;
}

+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 reservedLayoutWidth:(double)arg4;
+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3;
@property(nonatomic) long long options; // @synthesize options=_options;
- (_Bool)alwaysNeedsLayout;
- (void)setView:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

