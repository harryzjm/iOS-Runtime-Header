//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDSimpleGraphNode, NSString;

@interface HDSimpleGraphAttribute
{
    long long _nodeID;
    HDSimpleGraphNode *_node;
    long long _keyID;
    NSString *_key;
    NSString *_value;
    NSString *_valueType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) long long keyID; // @synthesize keyID=_keyID;
- (id)description;
@property(readonly, nonatomic) __weak HDSimpleGraphNode *node;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 keyID:(long long)arg3 key:(id)arg4 value:(id)arg5 valueType:(id)arg6 nodeID:(long long)arg7 node:(id)arg8;
- (id)init;

@end
