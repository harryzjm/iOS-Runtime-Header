//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface PKIntersectionResult : NSObject
{
    NSOrderedSet *_intersectedStrokes;
    long long _intersectionAlgorithmType;
    long long _contentType;
}

+ (id)noResult;
- (void).cxx_destruct;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long intersectionAlgorithmType; // @synthesize intersectionAlgorithmType=_intersectionAlgorithmType;
@property(retain, nonatomic) NSOrderedSet *intersectedStrokes; // @synthesize intersectedStrokes=_intersectedStrokes;

@end
