//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RMModelStatusBase
{
    NSString *_statusType;
}

+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSString *statusType; // @synthesize statusType=_statusType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadStatusFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end
