//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUICore/NSCopying-Protocol.h>

@interface GKBrush : NSObject <NSCopying>
{
}

+ (id)brush;
- (id)drawnImageForSize:(struct CGSize)arg1 opaque:(_Bool)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
