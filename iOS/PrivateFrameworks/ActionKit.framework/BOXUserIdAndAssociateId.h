//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BOXUserIdAndAssociateId : NSObject
{
    NSString *_userId;
    NSString *_associateId;
}

@property(copy, nonatomic) NSString *associateId; // @synthesize associateId=_associateId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserId:(id)arg1 associateId:(id)arg2;

@end
