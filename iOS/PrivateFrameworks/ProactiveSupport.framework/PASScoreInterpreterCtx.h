//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PASScoreDict;

@interface PASScoreInterpreterCtx : NSObject
{
    unsigned long long stackLen;
    double stack[500];
    PASScoreDict *inputScores;
    PASScoreDict *subscores;
    NSString *intentType;
}

- (void).cxx_destruct;
- (id)initWithInputScores:(id)arg1;

@end
