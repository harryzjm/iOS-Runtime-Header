//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUTemporaryDirectory : NSObject
{
    NSString *_path;
    _Bool _leak;
}

- (void).cxx_destruct;
- (_Bool)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;
- (void)leakTemporaryDirectory;
- (id)URL;
- (id)path;
- (void)dealloc;
- (id)initForWritingToURL:(id)arg1 error:(id *)arg2;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;
- (id)initWithSignature:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
- (id)init;

@end

