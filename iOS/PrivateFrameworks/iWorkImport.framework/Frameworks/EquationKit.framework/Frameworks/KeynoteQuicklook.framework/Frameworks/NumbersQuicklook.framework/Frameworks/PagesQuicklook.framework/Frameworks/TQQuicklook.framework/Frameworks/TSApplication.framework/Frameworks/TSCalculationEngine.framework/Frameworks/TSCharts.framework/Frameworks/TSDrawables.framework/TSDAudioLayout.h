//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDMediaLayout.h"

@class TSDMovieInfo;

@interface TSDAudioLayout : TSDMediaLayout
{
}

+ (struct CGSize)scaledAudioSize;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (struct CGRect)frameForCullingWithBaseFrame:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (int)wrapType;
- (_Bool)supportsFlipping;
- (_Bool)allowsConnections;
- (struct CGRect)alignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (_Bool)shouldDisplayGuides;
- (id)visibleGeometries;
- (id)layoutGeometryFromInfo;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)supportsRotation;
- (id)initWithInfo:(id)arg1;

@end

