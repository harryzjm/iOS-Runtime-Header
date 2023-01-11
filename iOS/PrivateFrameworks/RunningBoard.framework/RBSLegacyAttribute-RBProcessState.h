//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSLegacyAttribute.h>

@interface RBSLegacyAttribute (RBProcessState)
- (_Bool)conflictsWithAttribute:(id)arg1;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAcquisitionContext:(id)arg1;
@end
