//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TCDumpEnum;

__attribute__((visibility("hidden")))
@interface TCDumpNumeric
{
    int mType;
    TCDumpEnum *mEnumType;
}

- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)enumType;
- (int)type;
- (id)initWithType:(int)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 enumType:(id)arg2;

@end

