//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WFIconBackground;

@interface WFSymbolIcon
{
    NSString *_symbolName;
    WFIconBackground *_background;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFIconBackground *background; // @synthesize background=_background;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (_Bool)hasClearBackground;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSymbolName:(id)arg1 background:(id)arg2;

@end
