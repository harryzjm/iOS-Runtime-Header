//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface XCTCapabilities : NSObject <NSSecureCoding>
{
    NSDictionary *_capabilitiesDictionary;
}

+ (id)emptyCapabilities;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSDictionary *capabilitiesDictionary; // @synthesize capabilitiesDictionary=_capabilitiesDictionary;
- (void).cxx_destruct;
- (_Bool)hasCapability:(id)arg1;
- (unsigned long long)versionForCapability:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
