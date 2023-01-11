//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppClip/NSCopying-Protocol.h>
#import <AppClip/NSSecureCoding-Protocol.h>

@class NSURL;

@interface APActivationPayload : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)confirmAcquiredInRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1;

@end
