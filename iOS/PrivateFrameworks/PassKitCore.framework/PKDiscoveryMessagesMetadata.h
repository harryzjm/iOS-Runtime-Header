//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject
{
    long long _version;
    NSURL *_messagesBundleURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *messagesBundleURL; // @synthesize messagesBundleURL=_messagesBundleURL;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
