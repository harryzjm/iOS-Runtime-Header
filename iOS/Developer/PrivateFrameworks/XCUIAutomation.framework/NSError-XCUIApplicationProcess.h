//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (XCUIApplicationProcess)
+ (id)_xcui_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(char *)arg5;
+ (id)_xcui_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)_xcui_error:(long long)arg1 userInfo:(id)arg2 description:(id)arg3;
+ (id)_xcui_error:(long long)arg1 description:(id)arg2;
@property(readonly) _Bool xcui_isAXNotificationRegistrationCanceledError;
@property(readonly) _Bool xcui_isElementNotFoundError;
@property(readonly) _Bool xcui_isRemoteElementSnapshotError;
@property(readonly) _Bool xcui_isApplicationNotRunningError;
- (_Bool)xcui_isUITestingError:(long long)arg1;
@end

