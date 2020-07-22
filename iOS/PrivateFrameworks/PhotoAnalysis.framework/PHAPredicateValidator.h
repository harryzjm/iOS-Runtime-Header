//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PHAPredicateValidator : NSObject
{
    NSSet *_allowedKeyPaths;
}

@property(retain) NSSet *allowedKeyPaths; // @synthesize allowedKeyPaths=_allowedKeyPaths;
- (void).cxx_destruct;
- (_Bool)validateValue:(id)arg1 error:(id *)arg2;
- (_Bool)validateExpression:(id)arg1 error:(id *)arg2;
- (_Bool)validatePredicate:(id)arg1 error:(id *)arg2;

@end

