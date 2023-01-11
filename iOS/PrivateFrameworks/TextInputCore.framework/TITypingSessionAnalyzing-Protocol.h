//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class TITypingSession, TITypingSessionAligned;
@protocol TIUserModeling;

@protocol TITypingSessionAnalyzing <NSObject>
@property(retain, nonatomic) TITypingSessionAligned *lastAlignmentAnalyzed;
@property(retain, nonatomic) TITypingSession *lastSessionAnalyzed;
@property(retain, nonatomic) id <TIUserModeling> userModel;
- (_Bool)analyze:(TITypingSession *)arg1 alignedSession:(TITypingSessionAligned *)arg2;
@end
