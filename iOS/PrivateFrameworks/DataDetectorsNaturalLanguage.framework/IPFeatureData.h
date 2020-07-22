//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface IPFeatureData
{
    NSMutableDictionary *_contextDictionary;
    unsigned long long _type;
    id _value;
}

+ (id)featureDataWithType:(unsigned long long)arg1 value:(id)arg2 matchRange:(struct _NSRange)arg3;
@property(retain) id value; // @synthesize value=_value;
@property unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)nGramMarker;
- (id)description;
@property(readonly) NSMutableDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;

@end
