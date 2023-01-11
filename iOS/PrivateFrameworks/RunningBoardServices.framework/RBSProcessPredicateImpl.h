//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSProcessMatching-Protocol.h>

@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, BSXPCSecureCoding>
{
}

+ (_Bool)supportsBSXPCSecureCoding;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)processPredicate;
- (_Bool)matchesProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
