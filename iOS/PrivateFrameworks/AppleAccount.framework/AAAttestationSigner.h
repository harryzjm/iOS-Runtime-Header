//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AAAttestationSigner : NSObject
{
}

+ (id)sharedSigner;
- (void)signaturesForDatas:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signatureForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

