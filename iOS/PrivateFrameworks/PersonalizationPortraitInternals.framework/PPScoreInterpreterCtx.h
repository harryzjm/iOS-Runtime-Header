//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPScoreDict;

@interface PPScoreInterpreterCtx : NSObject
{
    struct unique_ptr<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>> _stack;
    PPScoreDict *_scoreInputs;
    PPScoreDict *_previousSubscores;
    PPScoreDict *_subscores;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithScoreInputs:(id)arg1 previousSubscores:(id)arg2 scalarSubscoreCount:(unsigned long long)arg3 arraySubscoreCount:(unsigned long long)arg4 objectSubscoreCount:(unsigned long long)arg5;

@end
