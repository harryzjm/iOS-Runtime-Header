//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSPredicate, NSSet;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>
{
    _Bool __wantsNotEqual;
    NSSet *_pidSet;
}

@property(readonly, nonatomic) _Bool _wantsNotEqual; // @synthesize _wantsNotEqual=__wantsNotEqual;
@property(readonly, nonatomic) NSSet *pidSet; // @synthesize pidSet=_pidSet;
- (void).cxx_destruct;
- (void)addPIDNumberSet:(id)arg1;
- (void)addPIDNumber:(id)arg1;
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
- (_Bool)_wantsNotSubsystem;
- (_Bool)passesPIDNumber:(id)arg1;
- (id)init;

@end
