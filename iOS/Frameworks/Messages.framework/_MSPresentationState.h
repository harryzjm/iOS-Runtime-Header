//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@interface _MSPresentationState : NSObject <NSSecureCoding>
{
    unsigned long long _presentationStyle;
    unsigned long long _presentationContext;
}

+ (_Bool)isRunningInCameraContext;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

