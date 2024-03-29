//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface DVTCodeSignatureHash : NSObject
{
    unsigned int _digestAlgorithm;
    NSData *_cdHash;
}

- (void).cxx_destruct;
@property(readonly) unsigned int digestAlgorithm; // @synthesize digestAlgorithm=_digestAlgorithm;
@property(readonly) NSData *cdHash; // @synthesize cdHash=_cdHash;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)cdHashHexEncoded;
- (id)digestAlgorithmDescription;
- (id)initWithDigestAlgorithm:(unsigned int)arg1 cdHash:(id)arg2;

@end

