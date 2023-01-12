//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface DEDClientConnection : NSObject <NSSecureCoding>
{
    NSNumber *_pid;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) NSNumber *pid; // @synthesize pid=_pid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
