//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FBSceneTranslationTransform
{
    struct CGPoint _translation;
}

@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
- (void)_updateTransform;
- (id)description;
- (id)initWithTranslation:(struct CGPoint)arg1;

@end

