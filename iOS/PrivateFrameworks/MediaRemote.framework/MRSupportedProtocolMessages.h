//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface MRSupportedProtocolMessages : NSObject
{
    unsigned long long _lastSupportedMessageType;
}

@property(readonly, nonatomic) unsigned long long lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
- (_Bool)isSupported:(unsigned long long)arg1;
- (id)initWithLastSupportedMessageType:(unsigned long long)arg1;

@end
