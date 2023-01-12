//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTCodeSignatureHash, NSData, NSSet, NSString;

@interface DVTCodeSignatureSlice : NSObject
{
    NSString *_architecture;
    NSSet *_codeSignatureHashes;
    DVTCodeSignatureHash *_cmsDigest;
    NSData *_cms;
}

+ (id)sliceWithArchitecture:(id)arg1 cdHashes:(id)arg2 digest:(id)arg3 cms:(id)arg4;
- (void).cxx_destruct;
@property(readonly) NSData *cms; // @synthesize cms=_cms;
@property(readonly) DVTCodeSignatureHash *cmsDigest; // @synthesize cmsDigest=_cmsDigest;
@property(readonly) NSSet *codeSignatureHashes; // @synthesize codeSignatureHashes=_codeSignatureHashes;
@property(readonly) NSString *architecture; // @synthesize architecture=_architecture;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)cmsHexEncoded;

@end
