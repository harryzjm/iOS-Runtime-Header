//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRGameControllerPropertiesMessage
{
    void *_properties;
}

- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long controllerID;
@property(readonly, nonatomic) void *properties;
- (void)dealloc;
- (id)initWithGameControllerProperties:(void *)arg1 controllerID:(unsigned long long)arg2;

@end
