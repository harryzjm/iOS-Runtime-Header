//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/NSObject-Protocol.h>

@class NSString;

@protocol FCPPTContext <NSObject>
@property(nonatomic, getter=isPrefetchDisabled) _Bool prefetchDisabled;
@property(nonatomic, getter=isRunningPPT) _Bool runningPPT;
@property(retain, nonatomic) NSString *testName;
- (void)d_logState;
@end

