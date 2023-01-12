//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAttribute (RBProcessState)
+ (_Bool)allowedForPrimitiveAttributeForProcessTarget:(id)arg1 withError:(id *)arg2;
- (_Bool)preventsSuspension;
- (_Bool)hasMandatoryAttributes:(id)arg1 error:(id *)arg2;
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (id)effectiveAttributesWithContext:(id)arg1;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
@end

