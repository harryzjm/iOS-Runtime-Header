//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PRSModelFeedbackContext : NSObject
{
    double *_scores;
    NSString *_l2Version;
    NSString *_l2ShadowVersion;
    NSString *_l3Version;
}

@property(retain, nonatomic) NSString *l3Version; // @synthesize l3Version=_l3Version;
@property(retain, nonatomic) NSString *l2ShadowVersion; // @synthesize l2ShadowVersion=_l2ShadowVersion;
@property(retain, nonatomic) NSString *l2Version; // @synthesize l2Version=_l2Version;
@property(nonatomic) double *scores; // @synthesize scores=_scores;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScores:(double *)arg1 models:(id)arg2 shadowModels:(id)arg3;

@end

