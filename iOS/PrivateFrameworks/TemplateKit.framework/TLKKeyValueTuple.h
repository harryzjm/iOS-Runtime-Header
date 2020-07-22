//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TLKKeyValueTuple
{
    NSString *_key;
    NSString *_value;
}

+ (id)tuplesForKeys:(id)arg1 values:(id)arg2;
+ (id)tuplesForDictionary:(id)arg1;
+ (id)tupleWithKey:(id)arg1 value:(id)arg2;
@property(retain) NSString *value; // @synthesize value=_value;
@property(retain) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)observableProperties;

@end
