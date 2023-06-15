//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPSandboxingURLWrapper;

@protocol DLDocumentDownloadsProtocol
- (void)namedLocationExists:(long long)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)importItemAtURL:(FPSandboxingURLWrapper *)arg1 toLocation:(long long)arg2 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg3;
- (void)replacePlaceholder:(FPSandboxingURLWrapper *)arg1 withFinalFileURL:(FPSandboxingURLWrapper *)arg2 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg3;
- (void)importPlaceholderAtURLToDownloadsDirectory:(FPSandboxingURLWrapper *)arg1 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg2;
@end

