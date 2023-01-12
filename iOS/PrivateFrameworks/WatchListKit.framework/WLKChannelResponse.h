//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WLKChannelResponse : NSObject
{
    NSString *_channelTitle;
    NSString *_channelLink;
    NSDate *_expirationDate;
    unsigned long long _environmentHash;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long environmentHash; // @synthesize environmentHash=_environmentHash;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *channelLink; // @synthesize channelLink=_channelLink;
@property(retain, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
- (id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;

@end
