//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTLearnedLocationEngine;

@protocol RTLearnedLocationEngineProtocol <NSObject>
- (void)learnedLocationEngineDidUpdate:(RTLearnedLocationEngine *)arg1 intervalSinceLastUpdate:(double)arg2;

@optional
- (void)learnedLocationEngineDidFinishTraining:(RTLearnedLocationEngine *)arg1;
- (void)learnedLocationEngineWillBeginTraining:(RTLearnedLocationEngine *)arg1;
@end

