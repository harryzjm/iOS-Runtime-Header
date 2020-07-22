//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSPredicateVisitor-Protocol.h>

@class NSArray, NSError, NSMutableSet, NSPredicate, NSSet;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor>
{
    _Bool _validated;
    NSPredicate *_predicate;
    NSSet *_allowedKeysSet;
    NSMutableSet *_usedKeysSet;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool validated; // @synthesize validated=_validated;
@property(retain, nonatomic) NSMutableSet *usedKeysSet; // @synthesize usedKeysSet=_usedKeysSet;
@property(retain, nonatomic) NSSet *allowedKeysSet; // @synthesize allowedKeysSet=_allowedKeysSet;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)resetUsedKeys;
@property(readonly, copy, nonatomic) NSArray *usedKeys;
- (void)visitPredicateExpression:(id)arg1;
@property(retain, nonatomic) NSArray *allowedKeys;
- (_Bool)validateWithError:(id *)arg1;

@end

