//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CVNLPCaptionSensitiveImageParameters : NSObject
{
    NSString *_visionIdentifier;
    double _minConfidence;
    NSArray *_blockingTokens;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *blockingTokens; // @synthesize blockingTokens=_blockingTokens;
@property(readonly, nonatomic) double minConfidence; // @synthesize minConfidence=_minConfidence;
@property(readonly, nonatomic) NSString *visionIdentifier; // @synthesize visionIdentifier=_visionIdentifier;
- (id)initWithVisionIdentifier:(id)arg1 minConfidence:(double)arg2 commonBlockingTokens:(id)arg3 categoryBlockingTokens:(id)arg4 categoryBlockingTokensAnnex:(id)arg5;

@end
