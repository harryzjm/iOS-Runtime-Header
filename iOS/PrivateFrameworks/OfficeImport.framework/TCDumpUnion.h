//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, TCDumpNumeric;

__attribute__((visibility("hidden")))
@interface TCDumpUnion
{
    NSString *mSelectorFieldName;
    TCDumpNumeric *mSelectorField;
    NSMutableDictionary *mSelectorToMemberMap;
}

- (void).cxx_destruct;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSelectorField:(id)arg1 members:(id)arg2;
- (id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 members:(id)arg3;
- (id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 selectorField:(id)arg3 members:(id)arg4;

@end

