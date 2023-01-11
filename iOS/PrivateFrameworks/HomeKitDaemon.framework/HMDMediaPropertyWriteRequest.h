//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface HMDMediaPropertyWriteRequest
{
    id _value;
    NSUUID *_identifier;
}

+ (id)deserializeWriteRequests:(id)arg1 mediaProfile:(id)arg2;
+ (id)serializeWriteRequests:(id)arg1;
+ (id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4;
+ (id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3;
+ (id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4;

@end

