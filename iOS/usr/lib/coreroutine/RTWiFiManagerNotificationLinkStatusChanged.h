//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface RTWiFiManagerNotificationLinkStatusChanged
{
    unsigned long long _linkStatus;
    NSArray *_accessPoints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(readonly, nonatomic) unsigned long long linkStatus; // @synthesize linkStatus=_linkStatus;
- (id)initWithLinkStatus:(unsigned long long)arg1 accessPoints:(id)arg2;

@end
