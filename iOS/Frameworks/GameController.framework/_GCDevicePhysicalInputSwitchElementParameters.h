//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputSwitchElementParameters
{
    _Bool _sequential;
    _Bool _canWrap;
    NSSet *_sources;
    unsigned long long _eventPositionField;
    struct _NSRange _positionRange;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

