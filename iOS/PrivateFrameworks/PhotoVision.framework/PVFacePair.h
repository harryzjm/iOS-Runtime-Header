//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PVFace;

@interface PVFacePair : NSObject
{
    PVFace *_face1;
    PVFace *_face2;
    double _score;
}

@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PVFace *face2; // @synthesize face2=_face2;
@property(readonly, nonatomic) PVFace *face1; // @synthesize face1=_face1;
- (void).cxx_destruct;
- (id)initWithFace:(id)arg1 andFace:(id)arg2 andScore:(double)arg3;

@end
