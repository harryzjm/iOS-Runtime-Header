//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSPrewarmAttribute.h>

@interface RBSPrewarmAttribute (RBProcessState)
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
@end

