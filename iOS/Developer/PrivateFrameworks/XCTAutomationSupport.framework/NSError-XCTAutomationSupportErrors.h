//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (XCTAutomationSupportErrors)
+ (id)_xctas_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)_xctas_error:(long long)arg1 userInfo:(id)arg2 description:(id)arg3 arguments:(char *)arg4;
+ (id)_xctas_error:(long long)arg1 userInfo:(id)arg2 description:(id)arg3;
+ (id)_xctas_error:(long long)arg1 description:(id)arg2;
@property(readonly) _Bool xctas_isProcessStallError;
@property(readonly) _Bool xctas_isUnknownElementError;
@end

