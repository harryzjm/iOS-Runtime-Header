//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject
{
    NSDictionary *_zeroKeyword;
    double _score;
}

@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSDictionary *zeroKeyword; // @synthesize zeroKeyword=_zeroKeyword;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyword:(id)arg1 score:(double)arg2;

@end
