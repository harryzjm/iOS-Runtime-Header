//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IFCentroidScoringParameters : NSObject
{
    NSDictionary *_scale;
    long long _divergence;
}

+ (id)defaultParameters;
@property long long divergence; // @synthesize divergence=_divergence;
@property(copy) NSDictionary *scale; // @synthesize scale=_scale;
- (void).cxx_destruct;

@end
