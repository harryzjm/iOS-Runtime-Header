//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long controllerID;
@property(readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;
- (id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2;

@end
