//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAContext;

@interface FBSCAContextSceneLayer
{
    unsigned int _contextID;
}

+ (id)layerWithCAContext:(id)arg1;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) CAContext *CAContext; // @dynamic CAContext;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;
- (id)initWithCAContext:(id)arg1;
- (id)_initWithCAContext:(id)arg1 contextID:(unsigned int)arg2 level:(double)arg3;

@end

