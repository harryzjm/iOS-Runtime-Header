//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface SignpostStackFrame : NSObject
{
    NSUUID *_symbolOwnerUUID;
    unsigned long long _offset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSUUID *symbolOwnerUUID; // @synthesize symbolOwnerUUID=_symbolOwnerUUID;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)_serializableArrayRepresentation;

@end
