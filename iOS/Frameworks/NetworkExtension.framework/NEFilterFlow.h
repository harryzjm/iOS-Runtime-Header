//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterAbsoluteVerdict, NSData, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface NEFilterFlow : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isOpen;
    NEFilterAbsoluteVerdict *_currentVerdict;
    _Bool _isRemediationFlow;
    int _pid;
    int _epid;
    NSURL *_URL;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppIdentifier;
    NSString *_sourceAppVersion;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_flowUUID;
}

+ (_Bool)supportsSecureCoding;
@property int epid; // @synthesize epid=_epid;
@property int pid; // @synthesize pid=_pid;
@property(copy) NSUUID *flowUUID; // @synthesize flowUUID=_flowUUID;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool isRemediationFlow; // @synthesize isRemediationFlow=_isRemediationFlow;
@property(copy) NSString *sourceAppVersion; // @synthesize sourceAppVersion=_sourceAppVersion;
@property(copy) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(copy) NSData *sourceAppUniqueIdentifier; // @synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)copySourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property _Bool isOpen;
@property(retain) NEFilterAbsoluteVerdict *currentVerdict;
- (void)close;
- (id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

