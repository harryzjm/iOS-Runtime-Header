//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/NSObject-Protocol.h>

@protocol TSPKnownFieldRuleProvider <NSObject>
@property(readonly, nonatomic) _Bool isContentUnknown;
- (void)enumerateKnownFieldRulesUsingBlock:(void (^)(struct FieldPath *, struct FieldInfoRuleAttributes *, unsigned long long, _Bool *))arg1;
@end
