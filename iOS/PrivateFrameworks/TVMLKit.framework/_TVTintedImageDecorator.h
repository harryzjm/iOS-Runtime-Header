//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKColor;

__attribute__((visibility("hidden")))
@interface _TVTintedImageDecorator
{
    IKColor *_tintColor;
}

@property(readonly, retain, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)decoratorIdentifier;
- (id)initWithTintColor:(id)arg1;

@end
