//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SALCMTvChannel
{
}

+ (id)tvChannelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tvChannel;
@property(copy, nonatomic) NSURL *streamUrl;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *channelIdentifier;
@property(copy, nonatomic) NSString *callSign;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
