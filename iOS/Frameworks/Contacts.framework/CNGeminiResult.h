//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNGeminiChannel, NSArray;

@interface CNGeminiResult : NSObject <NSSecureCoding>
{
    CNGeminiChannel *_channel;
    long long _usage;
    NSArray *_availableChannels;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *availableChannels; // @synthesize availableChannels=_availableChannels;
@property(readonly, nonatomic) long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) CNGeminiChannel *channel; // @synthesize channel=_channel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithChannel:(id)arg1 usage:(long long)arg2 availableChannels:(id)arg3;

@end
