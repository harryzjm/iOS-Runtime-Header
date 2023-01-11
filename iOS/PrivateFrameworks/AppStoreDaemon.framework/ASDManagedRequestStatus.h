//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface ASDManagedRequestStatus : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSUUID *_requestIdentifier;
    long long _state;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSString *title; // @synthesize title=_title;
@property long long state; // @synthesize state=_state;
@property(retain) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
