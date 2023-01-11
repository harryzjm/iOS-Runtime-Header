//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface FPDRequest : NSObject <NSSecureCoding>
{
    _Bool _fromPOSIX;
    int _pid;
    NSString *_processName;
    NSString *_executablePath;
}

+ (_Bool)supportsSecureCoding;
+ (id)UUIDForExecutablePath:(id)arg1;
+ (id)requestForSelf;
+ (id)requestForPID:(int)arg1;
+ (id)requestForPID:(int)arg1 fromPOSIX:(_Bool)arg2;
@property(readonly, nonatomic, getter=isFromPOSIX) _Bool fromPOSIX; // @synthesize fromPOSIX=_fromPOSIX;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;
- (id)nsfpRequestWithIdentifier:(id)arg1 forSession:(id)arg2;
- (id)initWithPID:(int)arg1 fromPOSIX:(_Bool)arg2;

@end
