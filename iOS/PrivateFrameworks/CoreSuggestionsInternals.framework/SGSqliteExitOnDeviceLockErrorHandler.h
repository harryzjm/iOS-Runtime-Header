//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSupport/_PASSqliteDefaultErrorHandler.h>

@interface SGSqliteExitOnDeviceLockErrorHandler : _PASSqliteDefaultErrorHandler
{
    int _exitCode;
}

- (void)exitOnErrorIndicatingIOError:(int)arg1;
- (_Bool)handleSqliteError:(int)arg1 error:(id)arg2 onError:(CDUnknownBlockType)arg3 db:(id)arg4;
- (id)initWithExitCode:(int)arg1;

@end
