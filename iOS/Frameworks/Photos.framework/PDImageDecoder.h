//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PDImageDecoder : NSObject
{
}

+ (id)sharedDecoder;
- (void)cancelDecodeRequestForID:(unsigned long long)arg1;
- (unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(_Bool)arg4 waitUntilComplete:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;

@end
