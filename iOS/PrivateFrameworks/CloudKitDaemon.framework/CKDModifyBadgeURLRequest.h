//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CKDModifyBadgeURLRequest
{
    unsigned long long _badgeValue;
}

@property(readonly, nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithBadgeValue:(unsigned long long)arg1;

@end

