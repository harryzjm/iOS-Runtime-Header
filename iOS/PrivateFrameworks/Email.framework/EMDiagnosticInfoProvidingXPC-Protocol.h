//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@class EFSandboxedURLWrapper;

@protocol EMDiagnosticInfoProvidingXPC <NSObject>
- (void)provideDiagnosticsAt:(EFSandboxedURLWrapper *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
@end

