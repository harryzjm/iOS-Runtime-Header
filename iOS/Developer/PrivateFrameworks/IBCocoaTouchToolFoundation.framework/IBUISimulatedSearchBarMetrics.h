//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface IBUISimulatedSearchBarMetrics
{
    _Bool _translucent;
    _Bool _prompted;
    UIColor *_tintColor;
    UIColor *_barTintColor;
}

+ (id)simulatedSearchBarStyleWithStyle:(long long)arg1 translucent:(_Bool)arg2 prompt:(_Bool)arg3 tintColor:(id)arg4 barTintColor:(id)arg5;
+ (id)defaultMetrics;
@property(readonly, copy, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic, getter=isPrompted) _Bool prompted; // @synthesize prompted=_prompted;
@property(readonly, nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 translucent:(_Bool)arg2 prompted:(_Bool)arg3 tintColor:(id)arg4 barTintColor:(id)arg5;

@end

