//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHAMergeCandidatePair : NSObject
{
    unsigned long long _hash;
    NSString *_person1LocalIdentifier;
    NSString *_person2LocalIdentifier;
    NSString *_reason;
}

+ (id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) NSString *person2LocalIdentifier; // @synthesize person2LocalIdentifier=_person2LocalIdentifier;
@property(readonly) NSString *person1LocalIdentifier; // @synthesize person1LocalIdentifier=_person1LocalIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;

@end

