//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageWriter : NSObject
{
}

- (id)encodedModelFromAnnotationsController:(id)arg1 encrypt:(_Bool)arg2;
- (_Bool)writeUsingBaseImage:(id)arg1 withAnnotationsFromController:(id)arg2 asImageOfType:(id)arg3 toConsumer:(struct CGDataConsumer *)arg4 embedSourceImageAndAnnotationsAsMetadata:(_Bool)arg5 encryptPrivateMetadata:(_Bool)arg6 error:(id *)arg7;

@end

