//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassKit/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate;

@interface CLSQuerySpecification : NSObject <NSSecureCoding>
{
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _state;
    unsigned long long _limit;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)initWithPredicate:(id)arg1 sortDescriptors:(id)arg2 state:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
