//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface SUStrokeEdgesImageModifier
{
    struct UIEdgeInsets _edgeInsets;
    _Bool _fitToImage;
    UIColor *_strokeColor;
    _Bool _strokeCurrentPath;
}

@property(nonatomic) _Bool strokeCurrentPath; // @synthesize strokeCurrentPath=_strokeCurrentPath;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) _Bool fitToImage; // @synthesize fitToImage=_fitToImage;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

