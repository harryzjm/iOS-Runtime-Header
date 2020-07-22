//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPromisedInMemoryDictionarySeed;

@interface IXPromisedInMemoryDictionary <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 dictionary:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed; // @dynamic seed;

@end

