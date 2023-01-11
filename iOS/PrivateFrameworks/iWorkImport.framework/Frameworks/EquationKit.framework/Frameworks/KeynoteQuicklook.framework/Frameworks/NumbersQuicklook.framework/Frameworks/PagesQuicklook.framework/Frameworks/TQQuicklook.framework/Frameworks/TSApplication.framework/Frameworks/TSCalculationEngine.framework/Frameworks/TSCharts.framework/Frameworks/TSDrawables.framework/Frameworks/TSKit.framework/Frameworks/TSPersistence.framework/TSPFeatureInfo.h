//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSPFeatureInfo : NSObject
{
    NSString *_identifier;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 validatingValues:(_Bool)arg4;
- (id)init;

@end
