//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>
{
    NSSet *_capabilities;
}

- (void).cxx_destruct;
@property(readonly) NSSet *capabilities; // @synthesize capabilities=_capabilities;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)init;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end
