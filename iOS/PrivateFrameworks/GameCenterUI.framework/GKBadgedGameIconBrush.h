//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKThemeBrush;

@interface GKBadgedGameIconBrush
{
    GKThemeBrush *_badgeBrush;
}

@property(retain, nonatomic) GKThemeBrush *badgeBrush; // @synthesize badgeBrush=_badgeBrush;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
