//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKGenericCondition, MISSING_TYPE, NSString;

@interface CKTripleCondition : NSObject
{
    MISSING_TYPE *rawCondition;
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (_Bool)evaluateOn:(id)arg1;
- (id)or:(id)arg1;
- (id)and:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3;
- (id)initWithValue:(_Bool)arg1;
- (id)init:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) CKGenericCondition *rawCondition; // @synthesize rawCondition;

@end
