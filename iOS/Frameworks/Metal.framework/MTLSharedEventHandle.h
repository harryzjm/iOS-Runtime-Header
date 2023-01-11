//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSSecureCoding-Protocol.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding>
{
    struct MTLSharedEventHandlePrivate *_priv;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)labelTraceID;
@property(readonly) NSString *label;
- (unsigned int)eventPort;

@end
