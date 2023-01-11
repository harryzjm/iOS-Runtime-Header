//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSProcessMatching-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, RBSXPCSecureCoding>
{
}

+ (_Bool)supportsRBSXPCSecureCoding;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)processPredicate;
- (_Bool)matchesProcess:(id)arg1;
- (id)processIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
