//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IBICIssueGenerationContext : NSObject
{
    int _phase;
    NSMutableDictionary *_userInfo;
}

+ (id)issueGenerationContextWithPhase:(int)arg1;
+ (id)issueGenerationContext;
@property(readonly) int phase; // @synthesize phase=_phase;
@property(readonly) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)initWithPhase:(int)arg1;
- (id)init;

@end

